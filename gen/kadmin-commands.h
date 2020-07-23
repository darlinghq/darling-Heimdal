#include <stdio.h>
#include <sl.h>

struct stash_options {
    char* enctype_string;
    char* key_file_string;
    int convert_file_flag;
    int random_password_flag;
    int print_password_flag;
    int master_key_fd_integer;
};
int stash(struct stash_options*, int, char **);
struct dump_options {
    int decrypt_flag;
    char* format_string;
    char* mit_dump_file_string;
};
int dump(struct dump_options*, int, char **);
struct od_dump_options {
    int decrypt_flag;
};
int od_dump(struct od_dump_options*, int, char **);
struct init_options {
    char* realm_max_ticket_life_string;
    char* realm_max_renewable_life_string;
    int bare_flag;
};
int init(struct init_options*, int, char **);
struct load_options {
    int fix_salts_flag;
};
int load(struct load_options*, int, char **);
struct merge_options {
    int fix_salts_flag;
};
int merge(struct merge_options*, int, char **);
struct add_options {
    int random_key_flag;
    int random_password_flag;
    char* password_string;
    char* key_string;
    char* max_ticket_life_string;
    char* max_renewable_life_string;
    char* attributes_string;
    char* expiration_time_string;
    char* pw_expiration_time_string;
    int hist_kvno_diff_clnt_integer;
    int hist_kvno_diff_svc_integer;
    int use_defaults_flag;
    int verbose_flag;
    char* policy_string;
};
int add_new_key(struct add_options*, int, char **);
struct passwd_options {
    int random_key_flag;
    int random_password_flag;
    char* password_string;
    char* key_string;
    int keepold_flag;
};
int cpw_entry(struct passwd_options*, int, char **);
int del_entry(void*, int, char **);
int del_enctype(void*, int, char **);
struct add_enctype_options {
    int random_key_flag;
};
int add_enctype(struct add_enctype_options*, int, char **);
struct ext_keytab_options {
    char* keytab_string;
};
int ext_keytab(struct ext_keytab_options*, int, char **);
struct get_options {
    int long_flag;
    int short_flag;
    int terse_flag;
    char* column_info_string;
};
int get_entry(struct get_options*, int, char **);
int rename_entry(void*, int, char **);
struct modify_options {
    char* max_ticket_life_string;
    char* max_renewable_life_string;
    char* attributes_string;
    char* expiration_time_string;
    char* pw_expiration_time_string;
    int kvno_integer;
    struct getarg_strings constrained_delegation_strings;
    struct getarg_strings alias_strings;
    struct getarg_strings pkinit_acl_strings;
    char* policy_string;
    int hist_kvno_diff_clnt_integer;
    int hist_kvno_diff_svc_integer;
};
int mod_entry(struct modify_options*, int, char **);
int get_privs(void*, int, char **);
struct list_options {
    int long_flag;
    int short_flag;
    int terse_flag;
    char* column_info_string;
};
int list_princs(struct list_options*, int, char **);
int password_quality(void*, int, char **);
struct check_options {
    int ds_local_flag;
};
int check(struct check_options*, int, char **);
int lock(void*, int, char **);
int unlock(void*, int, char **);
int help(void*, int, char **);
int exit_kadmin(void*, int, char **);
extern SL_cmd commands[];
