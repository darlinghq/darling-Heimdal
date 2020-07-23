#include <stdio.h>
#include <sl.h>

struct klist_options {
    char* cache_string;
    int flags_flag;
    int test_flag;
    int s_flag;
    int tokens_flag;
    int v5_flag;
    int all_content_flag;
    int list_all_flag;
    int verbose_flag;
    int json_flag;
    int a_flag;
    int n_flag;
    int hidden_flag;
    int version_flag;
};
int klist(struct klist_options*, int, char **);
struct kgetcred_options {
    char* enctype_string;
    char* cache_string;
    int version_flag;
};
int kgetcred(struct kgetcred_options*, int, char **);
struct kswitch_options {
    char* type_string;
    char* cache_string;
    char* principal_string;
    int interactive_flag;
    int version_flag;
};
int kswitch(struct kswitch_options*, int, char **);
struct kvno_options {
    char* enctype_string;
    char* cache_string;
    char* keytab_string;
    char* server_string;
    int quiet_flag;
    int version_flag;
};
int kvno(struct kvno_options*, int, char **);
struct kdc_options {
    int json_flag;
    char* type_string;
    char* uuid_string;
};
int kdc(struct kdc_options*, int, char **);
struct copy_cred_cache_options {
    int krbtgt_only_flag;
    char* service_string;
    char* enctype_string;
    char* flags_string;
    char* valid_for_string;
    int fcache_version_integer;
    int version_flag;
};
int copy_cred_cache(struct copy_cred_cache_options*, int, char **);
struct dump_credentials_options {
    char* type_string;
    int verbose_flag;
};
int dump_credentials(struct dump_credentials_options*, int, char **);
int help(void*, int, char **);
extern SL_cmd commands[];
