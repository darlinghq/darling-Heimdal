#include <stdio.h>
#include <getarg.h>
#include <sl.h>
#include "gss-commands.h"

static int
supported_mechanisms_wrap(int argc, char **argv)
{
    struct supported_mechanisms_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "options", 0, arg_flag, NULL, NULL, NULL },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.options_flag = 0;
    args[0].value = &opt.options_flag;
    args[1].value = &help_flag;
    if(getarg(args, 2, argc, argv, &optidx))
        goto usage;
    if(argc - optidx > 0) {
        fprintf(stderr, "Arguments given (%u) are more than expected (0).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = supported_mechanisms(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 2, "supported-mechanisms", "");
    return 0;
}

static int
acquire_credential_wrap(int argc, char **argv)
{
    struct acquire_credential_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "user", 0, arg_string, NULL, NULL, "domain" },
        { "realm", 0, arg_string, NULL, NULL, "domain" },
        { "kdc-hostname", 0, arg_string, NULL, NULL, "hostname" },
        { "certificate-persistant", 0, arg_string, NULL, NULL, "persistent reference" },
        { "mech", 0, arg_string, NULL, NULL, "gssapi mechanism" },
        { "validate", 0, arg_flag, NULL, NULL, NULL },
        { "server-hostname", 0, arg_string, NULL, NULL, "server name used for validation" },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.user_string = NULL;
    opt.realm_string = NULL;
    opt.kdc_hostname_string = NULL;
    opt.certificate_persistant_string = NULL;
    opt.mech_string = NULL;
    opt.validate_flag = 0;
    opt.server_hostname_string = NULL;
    args[0].value = &opt.user_string;
    args[1].value = &opt.realm_string;
    args[2].value = &opt.kdc_hostname_string;
    args[3].value = &opt.certificate_persistant_string;
    args[4].value = &opt.mech_string;
    args[5].value = &opt.validate_flag;
    args[6].value = &opt.server_hostname_string;
    args[7].value = &help_flag;
    if(getarg(args, 8, argc, argv, &optidx))
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
    ret = acquire_credential(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 8, "acquire-credential", "[user name]");
    return 0;
}

static int
list_credentials_wrap(int argc, char **argv)
{
    struct list_credentials_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "verbose", 0, arg_flag, NULL, NULL, NULL },
        { "mech", 0, arg_string, NULL, NULL, "gssapi mechanism" },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.verbose_flag = 0;
    opt.mech_string = NULL;
    args[0].value = &opt.verbose_flag;
    args[1].value = &opt.mech_string;
    args[2].value = &help_flag;
    if(getarg(args, 3, argc, argv, &optidx))
        goto usage;
    if(argc - optidx != 0) {
        fprintf(stderr, "Need exactly 0 parameters (%u given).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = list_credentials(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 3, "list-credentials", "");
    return 0;
}

static int
destroy_wrap(int argc, char **argv)
{
    struct destroy_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "name-type", 0, arg_string, NULL, NULL, "name-type" },
        { "mech", 0, arg_string, NULL, NULL, "gssapi mechanism" },
        { "all", 'A', arg_flag, NULL, NULL, NULL },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.name_type_string = NULL;
    opt.mech_string = NULL;
    opt.all_flag = 0;
    args[0].value = &opt.name_type_string;
    args[1].value = &opt.mech_string;
    args[2].value = &opt.all_flag;
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
    ret = destroy(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 4, "destroy", "[user name]");
    return 0;
}

static int
hold_wrap(int argc, char **argv)
{
    struct hold_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "name-type", 0, arg_string, NULL, NULL, "name-type" },
        { "mech", 0, arg_string, NULL, NULL, "gssapi mechanism" },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.name_type_string = NULL;
    opt.mech_string = NULL;
    args[0].value = &opt.name_type_string;
    args[1].value = &opt.mech_string;
    args[2].value = &help_flag;
    if(getarg(args, 3, argc, argv, &optidx))
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
    ret = hold(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 3, "hold", "user");
    return 0;
}

static int
unhold_wrap(int argc, char **argv)
{
    struct unhold_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "name-type", 0, arg_string, NULL, NULL, "name-type" },
        { "mech", 0, arg_string, NULL, NULL, "gssapi mechanism" },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.name_type_string = NULL;
    opt.mech_string = NULL;
    args[0].value = &opt.name_type_string;
    args[1].value = &opt.mech_string;
    args[2].value = &help_flag;
    if(getarg(args, 3, argc, argv, &optidx))
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
    ret = unhold(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 3, "unhold", "user");
    return 0;
}

static int
get_label_wrap(int argc, char **argv)
{
    struct get_label_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "name-type", 0, arg_string, NULL, NULL, "name-type" },
        { "mech", 0, arg_string, NULL, NULL, "gssapi mechanism" },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.name_type_string = NULL;
    opt.mech_string = NULL;
    args[0].value = &opt.name_type_string;
    args[1].value = &opt.mech_string;
    args[2].value = &help_flag;
    if(getarg(args, 3, argc, argv, &optidx))
        goto usage;
    if(argc - optidx != 2) {
        fprintf(stderr, "Need exactly 2 parameters (%u given).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = get_label(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 3, "get-label", "name label");
    return 0;
}

static int
set_label_wrap(int argc, char **argv)
{
    struct set_label_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "name-type", 0, arg_string, NULL, NULL, "name-type" },
        { "mech", 0, arg_string, NULL, NULL, "gssapi mechanism" },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.name_type_string = NULL;
    opt.mech_string = NULL;
    args[0].value = &opt.name_type_string;
    args[1].value = &opt.mech_string;
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
    ret = set_label(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 3, "set-label", "name label data");
    return 0;
}

static int
attrs_for_mech_wrap(int argc, char **argv)
{
    struct attrs_for_mech_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "all", 0, arg_flag, NULL, NULL, NULL },
        { "mech", 0, arg_string, NULL, NULL, "mechanism" },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.all_flag = 0;
    opt.mech_string = NULL;
    args[0].value = &opt.all_flag;
    args[1].value = &opt.mech_string;
    args[2].value = &help_flag;
    if(getarg(args, 3, argc, argv, &optidx))
        goto usage;
    if(help_flag)
        goto usage;
    ret = attrs_for_mech(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 3, "attrs-for-mech", "");
    return 0;
}

static int
display_status_wrap(int argc, char **argv)
{
    struct display_status_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "mech", 0, arg_string, NULL, NULL, "mechanism" },
        { "minor-status", 0, arg_flag, NULL, NULL, NULL },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.mech_string = NULL;
    opt.minor_status_flag = 0;
    args[0].value = &opt.mech_string;
    args[1].value = &opt.minor_status_flag;
    args[2].value = &help_flag;
    if(getarg(args, 3, argc, argv, &optidx))
        goto usage;
    if(argc - optidx < 1) {
        fprintf(stderr, "Arguments given (%u) are less than expected (1).\n\n", argc - optidx);
        goto usage;
    }
    if(help_flag)
        goto usage;
    ret = display_status(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 3, "display-status", "status-code");
    return 0;
}

static int
credentials_status_wrap(int argc, char **argv)
{
    struct credentials_status_options opt;
    int ret;
    int optidx = 0;
    struct getargs args[] = {
        { "mech", 0, arg_string, NULL, NULL, "mechanism" },
        { "help", 'h', arg_flag, NULL, NULL, NULL }
    };
    int help_flag = 0;
    opt.mech_string = NULL;
    args[0].value = &opt.mech_string;
    args[1].value = &help_flag;
    if(getarg(args, 2, argc, argv, &optidx))
        goto usage;
    if(help_flag)
        goto usage;
    ret = credentials_status(&opt, argc - optidx, argv + optidx);
    return ret;
usage:
    arg_printusage (args, 2, "credentials-status", "");
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
        { "supported-mechanisms", supported_mechanisms_wrap, "supported-mechanisms", "Print the supported mechanisms" },

        { "acquire-credential", acquire_credential_wrap, "acquire-credential [user name]", "Acquire initial credential" },

        { "list-credentials", list_credentials_wrap, "list-credentials", "List available credentials" },

        { "destroy", destroy_wrap, "destroy [user name]", "Destroy one or all credentials of optional mech type." },

        { "hold", hold_wrap, "hold user", "Retain refcount on credential" },

        { "unhold", unhold_wrap, "unhold user", "Release refcount on credential" },

        { "get-label", get_label_wrap, "get-label name label", "Get label on credential" },

        { "set-label", set_label_wrap, "set-label name label data", "Set label on credential" },

        { "attrs-for-mech", attrs_for_mech_wrap, "attrs-for-mech", "Print the attributes for mechs" },

        { "display-status", display_status_wrap, "display-status status-code", "unparse major and minor status codes" },

        { "credentials-status", credentials_status_wrap, "credentials-status", "dump status of credentials available in caches" },

        { "help", help_wrap, "help [command]", "Help! I need somebody." },
        { "?" },

    { NULL }
};
