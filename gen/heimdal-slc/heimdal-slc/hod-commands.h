#include <stdio.h>
#include <sl.h>

int principal_create(void*, int, char **);
int principal_delete(void*, int, char **);
int principal_clearflags(void*, int, char **);
int principal_setflags(void*, int, char **);
int principal_getflags(void*, int, char **);
int principal_get_keyinfo(void*, int, char **);
int principal_setacl(void*, int, char **);
int principal_getacl(void*, int, char **);
int principal_clearacl(void*, int, char **);
struct principal_add_cert_options {
    int use_default_sharing_identity_flag;
};
int principal_add_cert(struct principal_add_cert_options*, int, char **);
int alias_add(void*, int, char **);
int alias_remove(void*, int, char **);
int appleid_alias_add(void*, int, char **);
int appleid_alias_remove(void*, int, char **);
int appleid_cert_add(void*, int, char **);
int appleid_cert_remove(void*, int, char **);
struct password_options {
    struct getarg_strings encryption_types_strings;
    int append_flag;
};
int password_command(struct password_options*, int, char **);
int dump(void*, int, char **);
struct load_options {
    int append_flag;
};
int load(struct load_options*, int, char **);
int default_enctypes(void*, int, char **);
struct keyset_options {
    int append_flag;
    struct getarg_strings old_keyset_strings;
    struct getarg_strings enctype_strings;
    int delete_flag;
};
int keyset(struct keyset_options*, int, char **);
struct srp_verifier_options {
    struct getarg_strings type_strings;
    int delete_flag;
};
int srp_verifier(struct srp_verifier_options*, int, char **);
int print_keyset(void*, int, char **);
struct setup_lkdc_options {
    int kdc_certificate_flag;
    int keytab_flag;
    int verbose_flag;
};
int setup_lkdc(struct setup_lkdc_options*, int, char **);
int help(void*, int, char **);
extern SL_cmd commands[];
