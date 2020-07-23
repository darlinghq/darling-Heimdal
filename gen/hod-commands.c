#include <stdio.h>
#include <getarg.h>
#include <sl.h>
#include "hod-commands.h"

static int
principal_create_wrap(int argc, char **argv)
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
    ret = principal_create(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "principal-create", "record [principal]");
    return 0;
}

static int
principal_delete_wrap(int argc, char **argv)
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
    ret = principal_delete(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "principal-delete", "record [principal]");
    return 0;
}

static int
principal_clearflags_wrap(int argc, char **argv)
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
    ret = principal_clearflags(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "principal-clearflags", "record flags...");
    return 0;
}

static int
principal_setflags_wrap(int argc, char **argv)
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
    ret = principal_setflags(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "principal-setflags", "record flags...");
    return 0;
}

static int
principal_getflags_wrap(int argc, char **argv)
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
    ret = principal_getflags(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "principal-getflags", "record");
    return 0;
}

static int
principal_get_keyinfo_wrap(int argc, char **argv)
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
    ret = principal_get_keyinfo(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "principal-get-keyinfo", "record");
    return 0;
}

static int
principal_setacl_wrap(int argc, char **argv)
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
    ret = principal_setacl(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "principal-setacl", "record ace...");
    return 0;
}

static int
principal_getacl_wrap(int argc, char **argv)
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
    ret = principal_getacl(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "principal-getacl", "record");
    return 0;
}

static int
principal_clearacl_wrap(int argc, char **argv)
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
    ret = principal_clearacl(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "principal-clearacl", "record");
    return 0;
}

static int
principal_add_cert_wrap(int argc, char **argv)
{
    struct principal_add_cert_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "use-default-sharing-identity", 0, arg_flag, NULL, "use default sharing identity", NULL },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.use_default_sharing_identity_flag = 0;
    args[0].value = &opt.use_default_sharing_identity_flag;
    args[1].value = &help_flag;
    if(getarg(args, 2, argc, argv, &optidx))
        goto usage;
    if(argc - optidx < 1) {
        fprintf(stderr, "Arguments given (%u) are less than expected (1).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = principal_add_cert(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 2, "principal-add-cert", "record");
    return 0;
}

static int
alias_add_wrap(int argc, char **argv)
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
    ret = alias_add(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "alias-add", "record alias...");
    return 0;
}

static int
alias_remove_wrap(int argc, char **argv)
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
    ret = alias_remove(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "alias-remove", "record aliases...");
    return 0;
}

static int
appleid_alias_add_wrap(int argc, char **argv)
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
    ret = appleid_alias_add(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "appleid-alias-add", "record ds-id");
    return 0;
}

static int
appleid_alias_remove_wrap(int argc, char **argv)
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
    ret = appleid_alias_remove(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "appleid-alias-remove", "record ds-id");
    return 0;
}

static int
appleid_cert_add_wrap(int argc, char **argv)
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
    ret = appleid_cert_add(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "appleid-cert-add", "record cert-subject-name");
    return 0;
}

static int
appleid_cert_remove_wrap(int argc, char **argv)
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
    ret = appleid_cert_remove(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "appleid-cert-remove", "record cert-subject-name");
    return 0;
}

static int
password_wrap(int argc, char **argv)
{
    struct password_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "encryption-types", 0, arg_strings, NULL, "encryption types to use", "enctype" },
        { "append", 0, arg_flag, NULL, "append password (instead of overwrite) entry", NULL },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.encryption_types_strings.num_strings = 0;
    opt.encryption_types_strings.strings = NULL;
    opt.append_flag = 0;
    args[0].value = &opt.encryption_types_strings;
    args[1].value = &opt.append_flag;
    args[2].value = &help_flag;
    if(getarg(args, 3, argc, argv, &optidx))
        goto usage;
    if(argc - optidx > 3) {
        fprintf(stderr, "Arguments given (%u) are more than expected (3).\n\n", argc - optidx);
        goto usage;
    }
    if(argc - optidx < 2) {
        fprintf(stderr, "Arguments given (%u) are less than expected (2).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = password_command(&opt, argc - optidx, argv + optidx);
    free_getarg_strings (&opt.encryption_types_strings);
    return ret;
usage:
    arg_printusage (args, 3, "password", "record password [principal]");
    free_getarg_strings (&opt.encryption_types_strings);
    return 0;
}

static int
dump_wrap(int argc, char **argv)
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
    ret = dump(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "dump", "record [principal]");
    return 0;
}

static int
load_wrap(int argc, char **argv)
{
    struct load_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "append", 0, arg_flag, NULL, "merge entry, only used for Mac OS X server for Snow Leopard compat", NULL },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.append_flag = 0;
    args[0].value = &opt.append_flag;
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
    arg_printusage (args, 2, "load", "record [dump.plist]");
    return 0;
}

static int
default_enctypes_wrap(int argc, char **argv)
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
    ret = default_enctypes(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "default-enctypes", "");
    return 0;
}

static int
keyset_wrap(int argc, char **argv)
{
    struct keyset_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "append", 0, arg_flag, NULL, "append password (instead of replace) entry", NULL },
        { "old-keyset", 0, arg_strings, NULL, "old keyset", NULL },
        { "enctype", 0, arg_strings, NULL, "use specified enctype", NULL },
        { "delete", 0, arg_flag, NULL, "delete specififed enctypes (or all enctypes)", NULL },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.append_flag = 0;
    opt.old_keyset_strings.num_strings = 0;
    opt.old_keyset_strings.strings = NULL;
    opt.enctype_strings.num_strings = 0;
    opt.enctype_strings.strings = NULL;
    opt.delete_flag = 0;
    args[0].value = &opt.append_flag;
    args[1].value = &opt.old_keyset_strings;
    args[2].value = &opt.enctype_strings;
    args[3].value = &opt.delete_flag;
    args[4].value = &help_flag;
    if(getarg(args, 5, argc, argv, &optidx))
        goto usage;
    if(argc - optidx > 2) {
        fprintf(stderr, "Arguments given (%u) are more than expected (2).\n\n", argc - optidx);
        goto usage;
    }
    if(argc - optidx < 0) {
        fprintf(stderr, "Arguments given (%u) are less than expected (0).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = keyset(&opt, argc - optidx, argv + optidx);
    free_getarg_strings (&opt.old_keyset_strings);
    free_getarg_strings (&opt.enctype_strings);
    return ret;
usage:
    arg_printusage (args, 5, "keyset", "principal password");
    free_getarg_strings (&opt.old_keyset_strings);
    free_getarg_strings (&opt.enctype_strings);
    return 0;
}

static int
srp_verifier_wrap(int argc, char **argv)
{
    struct srp_verifier_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "type", 0, arg_strings, NULL, "srp verifier types to use enctype", NULL },
        { "delete", 0, arg_flag, NULL, "delete all verifier", NULL },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.type_strings.num_strings = 0;
    opt.type_strings.strings = NULL;
    opt.delete_flag = 0;
    args[0].value = &opt.type_strings;
    args[1].value = &opt.delete_flag;
    args[2].value = &help_flag;
    if(getarg(args, 3, argc, argv, &optidx))
        goto usage;
    if(argc - optidx != 2) {
        fprintf(stderr, "Need exactly 2 parameters (%u given).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = srp_verifier(&opt, argc - optidx, argv + optidx);
    free_getarg_strings (&opt.type_strings);
    return ret;
usage:
    arg_printusage (args, 3, "srp-verifier", "principal password");
    free_getarg_strings (&opt.type_strings);
    return 0;
}

static int
print_keyset_wrap(int argc, char **argv)
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
    ret = print_keyset(NULL, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 1, "print-keyset", "[keydata]");
    return 0;
}

static int
setup_lkdc_wrap(int argc, char **argv)
{
    struct setup_lkdc_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "kdc-certificate", 0, arg_flag, NULL, "force new kdc certificate", NULL },
        { "keytab", 0, arg_negative_flag, NULL, "dont remove LKDC keytab entries", NULL },
        { "verbose", 'v', arg_flag, NULL, "verbose logging", NULL },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.kdc_certificate_flag = 0;
    opt.keytab_flag = 1;
    opt.verbose_flag = 0;
    args[0].value = &opt.kdc_certificate_flag;
    args[1].value = &opt.keytab_flag;
    args[2].value = &opt.verbose_flag;
    args[3].value = &help_flag;
    if(getarg(args, 4, argc, argv, &optidx))
        goto usage;
    if(argc - optidx > 0) {
        fprintf(stderr, "Arguments given (%u) are more than expected (0).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = setup_lkdc(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 4, "setup-lkdc", "");
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

SL_cmd commands[] = {
        { "principal-create", principal_create_wrap, "principal-create record [principal]", "Create principal." },

        { "principal-delete", principal_delete_wrap, "principal-delete record [principal]", "Delete principal." },

        { "principal-clearflags", principal_clearflags_wrap, "principal-clearflags record flags...", "Clear flags." },

        { "principal-setflags", principal_setflags_wrap, "principal-setflags record flags...", "Set flags" },

        { "principal-getflags", principal_getflags_wrap, "principal-getflags record", "Get flags" },

        { "principal-get-keyinfo", principal_get_keyinfo_wrap, "principal-get-keyinfo record", "Get key info" },

        { "principal-setacl", principal_setacl_wrap, "principal-setacl record ace...", "Set ACL" },

        { "principal-getacl", principal_getacl_wrap, "principal-getacl record", "Get ACL" },

        { "principal-clearacl", principal_clearacl_wrap, "principal-clearacl record", "Clear ACL" },

        { "principal-add-cert", principal_add_cert_wrap, "principal-add-cert record", "add cert to principals ACL" },

        { "alias-add", alias_add_wrap, "alias-add record alias...", "Add aliases." },

        { "alias-remove", alias_remove_wrap, "alias-remove record aliases...", "Remove aliases" },

        { "appleid-alias-add", appleid_alias_add_wrap, "appleid-alias-add record ds-id", "Add AppleID aliases." },

        { "appleid-alias-remove", appleid_alias_remove_wrap, "appleid-alias-remove record ds-id", "Remove AppleID aliases" },

        { "appleid-cert-add", appleid_cert_add_wrap, "appleid-cert-add record cert-subject-name", "Add AppleID cert name" },

        { "appleid-cert-remove", appleid_cert_remove_wrap, "appleid-cert-remove record cert-subject-name", "Remove AppleID cert name" },

        { "password", password_wrap, "password record password [principal]", "Change password for node (and if specified, specific principal)." },

        { "dump", dump_wrap, "dump record [principal]", "Dump entry from database" },

        { "load", load_wrap, "load record [dump.plist]", "Load a plist dump info an entry in the database" },

        { "default-enctypes", default_enctypes_wrap, "default-enctypes", "lists default enctypes" },

        { "keyset", keyset_wrap, "keyset principal password", "manipulate keysets" },

        { "srp-verifier", srp_verifier_wrap, "srp-verifier principal password", "manipulate keysets" },

        { "print-keyset", print_keyset_wrap, "print-keyset [keydata]", "print a base64 encoded keyset (like principal-get-keyinfo)" },

        { "setup-lkdc", setup_lkdc_wrap, "setup-lkdc", "setup LKDC on this machine" },

        { "help", help_wrap, "help [command]", "Help! I need somebody." },
        { "?" },

    { NULL }
};
