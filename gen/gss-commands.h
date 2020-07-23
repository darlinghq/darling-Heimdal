#include <stdio.h>
#include <sl.h>

struct supported_mechanisms_options {
    int options_flag;
};
int supported_mechanisms(struct supported_mechanisms_options*, int, char **);
struct acquire_credential_options {
    char* user_string;
    char* realm_string;
    char* kdc_hostname_string;
    char* certificate_persistant_string;
    char* mech_string;
    int validate_flag;
    char* server_hostname_string;
};
int acquire_credential(struct acquire_credential_options*, int, char **);
struct list_credentials_options {
    int verbose_flag;
    char* mech_string;
};
int list_credentials(struct list_credentials_options*, int, char **);
struct destroy_options {
    char* name_type_string;
    char* mech_string;
    int all_flag;
};
int destroy(struct destroy_options*, int, char **);
struct hold_options {
    char* name_type_string;
    char* mech_string;
};
int hold(struct hold_options*, int, char **);
struct unhold_options {
    char* name_type_string;
    char* mech_string;
};
int unhold(struct unhold_options*, int, char **);
struct get_label_options {
    char* name_type_string;
    char* mech_string;
};
int get_label(struct get_label_options*, int, char **);
struct set_label_options {
    char* name_type_string;
    char* mech_string;
};
int set_label(struct set_label_options*, int, char **);
struct attrs_for_mech_options {
    int all_flag;
    char* mech_string;
};
int attrs_for_mech(struct attrs_for_mech_options*, int, char **);
struct display_status_options {
    char* mech_string;
    int minor_status_flag;
};
int display_status(struct display_status_options*, int, char **);
struct credentials_status_options {
    char* mech_string;
};
int credentials_status(struct credentials_status_options*, int, char **);
int help(void*, int, char **);
extern SL_cmd commands[];
