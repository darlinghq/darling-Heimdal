#include <stdio.h>
#include <getarg.h>
#include <sl.h>
#include "kadmin-commands.h"

static int
stash_wrap(int argc, char **argv)
{
    struct stash_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "enctype", 'e', arg_string, NULL, "encryption type", NULL },
        { "key-file", 'k', arg_string, NULL, "master key file", "file" },
        { "convert-file", 0, arg_flag, NULL, "just convert keyfile to new format", NULL },
        { "random-password", 0, arg_flag, NULL, "use a random password (and print the password to stdout)", NULL },
        { "print-password", 0, arg_negative_flag, NULL, "dont print the random password to stdout", NULL },
        { "master-key-fd", 0, arg_integer, NULL, "filedescriptor to read passphrase from", "fd" },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.enctype_string = (char *)(unsigned long)"des3-cbc-sha1";
    opt.key_file_string = NULL;
    opt.convert_file_flag = 0;
    opt.random_password_flag = 0;
    opt.print_password_flag = 1;
    opt.master_key_fd_integer = -1;
    args[0].value = &opt.enctype_string;
    args[1].value = &opt.key_file_string;
    args[2].value = &opt.convert_file_flag;
    args[3].value = &opt.random_password_flag;
    args[4].value = &opt.print_password_flag;
    args[5].value = &opt.master_key_fd_integer;
    args[6].value = &help_flag;
    if(getarg(args, 7, argc, argv, &optidx))
        goto usage;
    if(help_flag)
        goto usage;
    ret = stash(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 7, "stash", "");
    return 0;
}

static int
dump_wrap(int argc, char **argv)
{
    struct dump_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "decrypt", 'd', arg_flag, NULL, "decrypt keys", NULL },
        { "format", 0, arg_string, NULL, "dump format, default heimdal", NULL },
        { "mit-dump-file", 0, arg_string, NULL, "mit dump file", NULL },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.decrypt_flag = 0;
    opt.format_string = NULL;
    opt.mit_dump_file_string = NULL;
    args[0].value = &opt.decrypt_flag;
    args[1].value = &opt.format_string;
    args[2].value = &opt.mit_dump_file_string;
    args[3].value = &help_flag;
    if(getarg(args, 4, argc, argv, &optidx))
        goto usage;
    if(argc - optidx > 1) {
        fprintf(stderr, "Arguments given (%u) are more than expected (1).\n\n", argc - optidx);
        goto usage;
    }
    if(argc - optidx < 0) {
        fprintf(stderr, "Arguments given (%u) are less than expected (0).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = dump(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 4, "dump", "[dump-file]");
    return 0;
}

static int
od_dump_wrap(int argc, char **argv)
{
    struct od_dump_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "decrypt", 'd', arg_flag, NULL, "decrypt keys", NULL },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.decrypt_flag = 0;
    args[0].value = &opt.decrypt_flag;
    args[1].value = &help_flag;
    if(getarg(args, 2, argc, argv, &optidx))
        goto usage;
    if(argc - optidx > 1) {
        fprintf(stderr, "Arguments given (%u) are more than expected (1).\n\n", argc - optidx);
        goto usage;
    }
    if(argc - optidx < 0) {
        fprintf(stderr, "Arguments given (%u) are less than expected (0).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = od_dump(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 2, "od-dump", "[dump-file]");
    return 0;
}

static int
init_wrap(int argc, char **argv)
{
    struct init_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "realm-max-ticket-life", 0, arg_string, NULL, "realm max ticket lifetime", NULL },
        { "realm-max-renewable-life", 0, arg_string, NULL, "realm max renewable lifetime", NULL },
        { "bare", 0, arg_flag, NULL, "only create krbtgt for realm", NULL },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.realm_max_ticket_life_string = NULL;
    opt.realm_max_renewable_life_string = NULL;
    opt.bare_flag = 0;
    args[0].value = &opt.realm_max_ticket_life_string;
    args[1].value = &opt.realm_max_renewable_life_string;
    args[2].value = &opt.bare_flag;
    args[3].value = &help_flag;
    if(getarg(args, 4, argc, argv, &optidx))
        goto usage;
    if(argc - optidx < 1) {
        fprintf(stderr, "Arguments given (%u) are less than expected (1).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = init(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 4, "init", "realm...");
    return 0;
}

static int
load_wrap(int argc, char **argv)
{
    struct load_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "fix-salts", 0, arg_flag, NULL, "Fixup salts for principals from a different realm name.", NULL },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.fix_salts_flag = 0;
    args[0].value = &opt.fix_salts_flag;
    args[1].value = &help_flag;
    if(getarg(args, 2, argc, argv, &optidx))
        goto usage;
    if(argc - optidx > 2) {
        fprintf(stderr, "Arguments given (%u) are more than expected (2).\n\n", argc - optidx);
        goto usage;
    }
    if(argc - optidx < 1) {
        fprintf(stderr, "Arguments given (%u) are less than expected (1).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = load(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 2, "load", "file");
    return 0;
}

static int
merge_wrap(int argc, char **argv)
{
    struct merge_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "fix-salts", 0, arg_flag, NULL, "Fixup salts for principals from a different realm name.", NULL },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.fix_salts_flag = 0;
    args[0].value = &opt.fix_salts_flag;
    args[1].value = &help_flag;
    if(getarg(args, 2, argc, argv, &optidx))
        goto usage;
    if(argc - optidx > 2) {
        fprintf(stderr, "Arguments given (%u) are more than expected (2).\n\n", argc - optidx);
        goto usage;
    }
    if(argc - optidx < 1) {
        fprintf(stderr, "Arguments given (%u) are less than expected (1).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = merge(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 2, "merge", "file");
    return 0;
}

static int
add_wrap(int argc, char **argv)
{
    struct add_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "random-key", 'r', arg_flag, NULL, "set random key", NULL },
        { "random-password", 0, arg_flag, NULL, "set random password", NULL },
        { "password", 'p', arg_string, NULL, "principal's password", NULL },
        { "key", 0, arg_string, NULL, "DES-key in hex", NULL },
        { "max-ticket-life", 0, arg_string, NULL, "max ticket lifetime", "lifetime" },
        { "max-renewable-life", 0, arg_string, NULL, "max renewable life", "lifetime" },
        { "attributes", 0, arg_string, NULL, "principal attributes", "attributes" },
        { "expiration-time", 0, arg_string, NULL, "principal expiration time", "time" },
        { "pw-expiration-time", 0, arg_string, NULL, "password expiration time", "time" },
        { "hist-kvno-diff-clnt", 0, arg_integer, NULL, "historic keys allowed for client", "kvno diff" },
        { "hist-kvno-diff-svc", 0, arg_integer, NULL, "historic keys allowed for service", "kvno diff" },
        { "use-defaults", 0, arg_flag, NULL, "use default values", NULL },
        { "verbose", 0, arg_flag, NULL, "verbose output", NULL },
        { "policy", 0, arg_string, NULL, "policy name", "policy" },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.random_key_flag = 0;
    opt.random_password_flag = 0;
    opt.password_string = NULL;
    opt.key_string = NULL;
    opt.max_ticket_life_string = NULL;
    opt.max_renewable_life_string = NULL;
    opt.attributes_string = NULL;
    opt.expiration_time_string = NULL;
    opt.pw_expiration_time_string = NULL;
    opt.hist_kvno_diff_clnt_integer = -1;
    opt.hist_kvno_diff_svc_integer = -1;
    opt.use_defaults_flag = 0;
    opt.verbose_flag = 0;
    opt.policy_string = NULL;
    args[0].value = &opt.random_key_flag;
    args[1].value = &opt.random_password_flag;
    args[2].value = &opt.password_string;
    args[3].value = &opt.key_string;
    args[4].value = &opt.max_ticket_life_string;
    args[5].value = &opt.max_renewable_life_string;
    args[6].value = &opt.attributes_string;
    args[7].value = &opt.expiration_time_string;
    args[8].value = &opt.pw_expiration_time_string;
    args[9].value = &opt.hist_kvno_diff_clnt_integer;
    args[10].value = &opt.hist_kvno_diff_svc_integer;
    args[11].value = &opt.use_defaults_flag;
    args[12].value = &opt.verbose_flag;
    args[13].value = &opt.policy_string;
    args[14].value = &help_flag;
    if(getarg(args, 15, argc, argv, &optidx))
        goto usage;
    if(argc - optidx < 1) {
        fprintf(stderr, "Arguments given (%u) are less than expected (1).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = add_new_key(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 15, "add", "principal...");
    return 0;
}

static int
passwd_wrap(int argc, char **argv)
{
    struct passwd_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "random-key", 'r', arg_flag, NULL, "set random key", NULL },
        { "random-password", 0, arg_flag, NULL, "set random password", NULL },
        { "password", 'p', arg_string, NULL, "princial's password", NULL },
        { "key", 0, arg_string, NULL, "DES key in hex", NULL },
        { "keepold", 0, arg_flag, NULL, "keep old keys/password", NULL },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.random_key_flag = 0;
    opt.random_password_flag = 0;
    opt.password_string = NULL;
    opt.key_string = NULL;
    opt.keepold_flag = 0;
    args[0].value = &opt.random_key_flag;
    args[1].value = &opt.random_password_flag;
    args[2].value = &opt.password_string;
    args[3].value = &opt.key_string;
    args[4].value = &opt.keepold_flag;
    args[5].value = &help_flag;
    if(getarg(args, 6, argc, argv, &optidx))
        goto usage;
    if(argc - optidx < 1) {
        fprintf(stderr, "Arguments given (%u) are less than expected (1).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = cpw_entry(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 6, "passwd", "principal...");
    return 0;
}

static int
delete_wrap(int argc, char **argv)
{
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    args[0].value = &help_flag;
    if(getarg(args, 1, argc, argv, &optidx))
        goto usage;
    if(argc - optidx < 1) {
        fprintf(stderr, "Arguments given (%u) are less than expected (1).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = del_entry(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "delete", "principal...");
    return 0;
}

static int
del_enctype_wrap(int argc, char **argv)
{
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    args[0].value = &help_flag;
    if(getarg(args, 1, argc, argv, &optidx))
        goto usage;
    if(argc - optidx < 2) {
        fprintf(stderr, "Arguments given (%u) are less than expected (2).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = del_enctype(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "del_enctype", "principal enctype...");
    return 0;
}

static int
add_enctype_wrap(int argc, char **argv)
{
    struct add_enctype_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "random-key", 'r', arg_flag, NULL, "set random key", NULL },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.random_key_flag = 0;
    args[0].value = &opt.random_key_flag;
    args[1].value = &help_flag;
    if(getarg(args, 2, argc, argv, &optidx))
        goto usage;
    if(argc - optidx < 2) {
        fprintf(stderr, "Arguments given (%u) are less than expected (2).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = add_enctype(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 2, "add_enctype", "principal enctype...");
    return 0;
}

static int
ext_keytab_wrap(int argc, char **argv)
{
    struct ext_keytab_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "keytab", 'k', arg_string, NULL, "keytab to use", NULL },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.keytab_string = NULL;
    args[0].value = &opt.keytab_string;
    args[1].value = &help_flag;
    if(getarg(args, 2, argc, argv, &optidx))
        goto usage;
    if(argc - optidx < 1) {
        fprintf(stderr, "Arguments given (%u) are less than expected (1).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = ext_keytab(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 2, "ext_keytab", "principal...");
    return 0;
}

static int
get_wrap(int argc, char **argv)
{
    struct get_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "long", 'l', arg_flag, NULL, "long format", NULL },
        { "short", 's', arg_flag, NULL, "short format", NULL },
        { "terse", 't', arg_flag, NULL, "terse format", NULL },
        { "column-info", 'o', arg_string, NULL, "columns to print for short output", NULL },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.long_flag = -1;
    opt.short_flag = 0;
    opt.terse_flag = 0;
    opt.column_info_string = NULL;
    args[0].value = &opt.long_flag;
    args[1].value = &opt.short_flag;
    args[2].value = &opt.terse_flag;
    args[3].value = &opt.column_info_string;
    args[4].value = &help_flag;
    if(getarg(args, 5, argc, argv, &optidx))
        goto usage;
    if(argc - optidx < 1) {
        fprintf(stderr, "Arguments given (%u) are less than expected (1).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = get_entry(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 5, "get", "principal...");
    return 0;
}

static int
rename_wrap(int argc, char **argv)
{
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    args[0].value = &help_flag;
    if(getarg(args, 1, argc, argv, &optidx))
        goto usage;
    if(argc - optidx != 2) {
        fprintf(stderr, "Need exactly 2 parameters (%u given).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = rename_entry(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "rename", "from to");
    return 0;
}

static int
modify_wrap(int argc, char **argv)
{
    struct modify_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "max-ticket-life", 0, arg_string, NULL, "max ticket lifetime", "lifetime" },
        { "max-renewable-life", 0, arg_string, NULL, "max renewable life", "lifetime" },
        { "attributes", 'a', arg_string, NULL, "principal attributes", "attributes" },
        { "expiration-time", 0, arg_string, NULL, "principal expiration time", "time" },
        { "pw-expiration-time", 0, arg_string, NULL, "password expiration time", "time" },
        { "kvno", 0, arg_integer, NULL, "key version number", NULL },
        { "constrained-delegation", 0, arg_strings, NULL, "allowed target principals", "principal" },
        { "alias", 0, arg_strings, NULL, "aliases", "principal" },
        { "pkinit-acl", 0, arg_strings, NULL, "aliases", "subject dn" },
        { "policy", 0, arg_string, NULL, "policy name", "policy" },
        { "hist-kvno-diff-clnt", 0, arg_integer, NULL, "historic keys allowed for client", "kvno diff" },
        { "hist-kvno-diff-svc", 0, arg_integer, NULL, "historic keys allowed for service", "kvno diff" },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.max_ticket_life_string = NULL;
    opt.max_renewable_life_string = NULL;
    opt.attributes_string = NULL;
    opt.expiration_time_string = NULL;
    opt.pw_expiration_time_string = NULL;
    opt.kvno_integer = -1;
    opt.constrained_delegation_strings.num_strings = 0;
    opt.constrained_delegation_strings.strings = NULL;
    opt.alias_strings.num_strings = 0;
    opt.alias_strings.strings = NULL;
    opt.pkinit_acl_strings.num_strings = 0;
    opt.pkinit_acl_strings.strings = NULL;
    opt.policy_string = NULL;
    opt.hist_kvno_diff_clnt_integer = -1;
    opt.hist_kvno_diff_svc_integer = -1;
    args[0].value = &opt.max_ticket_life_string;
    args[1].value = &opt.max_renewable_life_string;
    args[2].value = &opt.attributes_string;
    args[3].value = &opt.expiration_time_string;
    args[4].value = &opt.pw_expiration_time_string;
    args[5].value = &opt.kvno_integer;
    args[6].value = &opt.constrained_delegation_strings;
    args[7].value = &opt.alias_strings;
    args[8].value = &opt.pkinit_acl_strings;
    args[9].value = &opt.policy_string;
    args[10].value = &opt.hist_kvno_diff_clnt_integer;
    args[11].value = &opt.hist_kvno_diff_svc_integer;
    args[12].value = &help_flag;
    if(getarg(args, 13, argc, argv, &optidx))
        goto usage;
    if(argc - optidx != 1) {
        fprintf(stderr, "Need exactly 1 parameters (%u given).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = mod_entry(&opt, argc - optidx, argv + optidx);
    free_getarg_strings (&opt.constrained_delegation_strings);
    free_getarg_strings (&opt.alias_strings);
    free_getarg_strings (&opt.pkinit_acl_strings);
    return ret;
usage:
    arg_printusage (args, 13, "modify", "principal");
    free_getarg_strings (&opt.constrained_delegation_strings);
    free_getarg_strings (&opt.alias_strings);
    free_getarg_strings (&opt.pkinit_acl_strings);
    return 0;
}

static int
privileges_wrap(int argc, char **argv)
{
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    args[0].value = &help_flag;
    if(getarg(args, 1, argc, argv, &optidx))
        goto usage;
    if(argc - optidx > 0) {
        fprintf(stderr, "Arguments given (%u) are more than expected (0).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = get_privs(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "privileges", "");
    return 0;
}

static int
list_wrap(int argc, char **argv)
{
    struct list_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "long", 'l', arg_flag, NULL, "long format", NULL },
        { "short", 's', arg_flag, NULL, "short format", NULL },
        { "terse", 't', arg_flag, NULL, "terse format", NULL },
        { "column-info", 'o', arg_string, NULL, "columns to print for short output", NULL },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.long_flag = 0;
    opt.short_flag = 0;
    opt.terse_flag = -1;
    opt.column_info_string = NULL;
    args[0].value = &opt.long_flag;
    args[1].value = &opt.short_flag;
    args[2].value = &opt.terse_flag;
    args[3].value = &opt.column_info_string;
    args[4].value = &help_flag;
    if(getarg(args, 5, argc, argv, &optidx))
        goto usage;
    if(argc - optidx < 1) {
        fprintf(stderr, "Arguments given (%u) are less than expected (1).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = list_princs(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 5, "list", "principal...");
    return 0;
}

static int
verify_password_quality_wrap(int argc, char **argv)
{
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    args[0].value = &help_flag;
    if(getarg(args, 1, argc, argv, &optidx))
        goto usage;
    if(argc - optidx != 2) {
        fprintf(stderr, "Need exactly 2 parameters (%u given).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = password_quality(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "verify-password-quality", "principal password");
    return 0;
}

static int
check_wrap(int argc, char **argv)
{
    struct check_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "ds-local", 0, arg_flag, NULL, "Only perform local checks.", NULL },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.ds_local_flag = 0;
    args[0].value = &opt.ds_local_flag;
    args[1].value = &help_flag;
    if(getarg(args, 2, argc, argv, &optidx))
        goto usage;
    if(argc - optidx > 1) {
        fprintf(stderr, "Arguments given (%u) are more than expected (1).\n\n", argc - optidx);
        goto usage;
    }
    if(argc - optidx < 0) {
        fprintf(stderr, "Arguments given (%u) are less than expected (0).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = check(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 2, "check", "[realm]");
    return 0;
}

static int
lock_wrap(int argc, char **argv)
{
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    args[0].value = &help_flag;
    if(getarg(args, 1, argc, argv, &optidx))
        goto usage;
    if(argc - optidx != 0) {
        fprintf(stderr, "Need exactly 0 parameters (%u given).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = lock(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "lock", "");
    return 0;
}

static int
unlock_wrap(int argc, char **argv)
{
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    args[0].value = &help_flag;
    if(getarg(args, 1, argc, argv, &optidx))
        goto usage;
    if(argc - optidx != 0) {
        fprintf(stderr, "Need exactly 0 parameters (%u given).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = unlock(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "unlock", "");
    return 0;
}

static int
help_wrap(int argc, char **argv)
{
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    args[0].value = &help_flag;
    if(getarg(args, 1, argc, argv, &optidx))
        goto usage;
    if(argc - optidx > 1) {
        fprintf(stderr, "Arguments given (%u) are more than expected (1).\n\n", argc - optidx);
        goto usage;
    }
    if(argc - optidx < 0) {
        fprintf(stderr, "Arguments given (%u) are less than expected (0).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = help(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "help", "[command]");
    return 0;
}

static int
exit_wrap(int argc, char **argv)
{
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    args[0].value = &help_flag;
    if(getarg(args, 1, argc, argv, &optidx))
        goto usage;
    if(argc - optidx > 0) {
        fprintf(stderr, "Arguments given (%u) are more than expected (0).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = exit_kadmin(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "exit", "");
    return 0;
}

SL_cmd commands[] = {
        { "stash", stash_wrap, "stash", "Writes the Kerberos master key to a file used by the KDC. \nLocal (-l) mode only." },
        { "kstash" },

        { "dump", dump_wrap, "dump [dump-file]", "Dumps the database or a dump file in a human readable format to the specified file, \nor the standard out. Local (-l) mode only." },

        { "od-dump", od_dump_wrap, "od-dump [dump-file]", "Command to be removed." },

        { "init", init_wrap, "init realm...", "Initializes the default principals for a realm. Creates the database\nif necessary. Local (-l) mode only." },

        { "load", load_wrap, "load file", "Loads a previously dumped file. Local (-l) mode only." },

        { "merge", merge_wrap, "merge file", "Merges the contents of a dump file into the database. Local (-l) mode only." },

        { "add", add_wrap, "add principal...", "Adds a principal to the database." },
        { "ank" },
        { "add_new_key" },

        { "passwd", passwd_wrap, "passwd principal...", "Changes the password of one or more principals matching the expressions." },
        { "cpw" },
        { "change_password" },

        { "delete", delete_wrap, "delete principal...", "Deletes all principals matching the expressions." },
        { "del" },
        { "del_entry" },

        { "del_enctype", del_enctype_wrap, "del_enctype principal enctype...", "Delete all the mentioned enctypes for principal." },

        { "add_enctype", add_enctype_wrap, "add_enctype principal enctype...", "Add new enctypes for principal." },

        { "ext_keytab", ext_keytab_wrap, "ext_keytab principal...", "Extracts the keys of all principals matching the expressions, and stores them in a keytab." },

        { "get", get_wrap, "get principal...", "Shows information about principals matching the expressions." },
        { "get_entry" },

        { "rename", rename_wrap, "rename from to", "Renames a principal." },

        { "modify", modify_wrap, "modify principal", "Modifies some attributes of the specified principal." },

        { "privileges", privileges_wrap, "privileges", "Shows which operations you are allowed to perform." },
        { "privs" },

        { "list", list_wrap, "list principal...", "Lists principals in a terse format. Equivalent to \"get -t\"." },

        { "verify-password-quality", verify_password_quality_wrap, "verify-password-quality principal password", "Try run the password quality function locally (not doing RPC out to server)." },
        { "pwq" },

        { "check", check_wrap, "check [realm]", "Check the realm (if not given, the default realm) for configuration errors." },

        { "lock", lock_wrap, "lock ", "Lock the database for writing (use with care)." },

        { "unlock", unlock_wrap, "unlock ", "Unlock the database." },

        { "help", help_wrap, "help [command]", "Help! I need somebody." },
        { "?" },

        { "exit", exit_wrap, "exit", "Quits." },
        { "quit" },

    { NULL }
};
