/* Generated from /Users/user/Downloads/darling-Heimdal/lib/kadm5/kadm5_err.et */
/* $Id$ */

#include <stddef.h>
#include <com_err.h>
#include "kadm5_err.h"

#define N_(x) (x)

static const char *kadm5_error_strings[] = {
	/* 000 */ N_("Operation failed for unspecified reason"),
	/* 001 */ N_("Operation requires `get' privilege"),
	/* 002 */ N_("Operation requires `add' privilege"),
	/* 003 */ N_("Operation requires `modify' privilege"),
	/* 004 */ N_("Operation requires `delete' privilege"),
	/* 005 */ N_("Insufficient authorization for operation"),
	/* 006 */ N_("Database inconsistency detected"),
	/* 007 */ N_("Principal or policy already exists"),
	/* 008 */ N_("Communication failure with server"),
	/* 009 */ N_("No administration server found for realm"),
	/* 010 */ N_("Password history principal key version mismatch"),
	/* 011 */ N_("Connection to server not initialized"),
	/* 012 */ N_("Principal does not exist"),
	/* 013 */ N_("Policy does not exist"),
	/* 014 */ N_("Invalid field mask for operation"),
	/* 015 */ N_("Invalid number of character classes"),
	/* 016 */ N_("Invalid password length"),
	/* 017 */ N_("Invalid policy name"),
	/* 018 */ N_("Invalid principal name."),
	/* 019 */ N_("Invalid auxillary attributes"),
	/* 020 */ N_("Invalid password history count"),
	/* 021 */ N_("Password minimum life is greater than password maximum life"),
	/* 022 */ N_("Password is too short"),
	/* 023 */ N_("Password does not contain enough character classes"),
	/* 024 */ N_("Password is in the password dictionary"),
	/* 025 */ N_("Can't reuse password"),
	/* 026 */ N_("Current password's minimum life has not expired"),
	/* 027 */ N_("Policy is in use"),
	/* 028 */ N_("Connection to server already initialized"),
	/* 029 */ N_("Incorrect password"),
	/* 030 */ N_("Can't change protected principal"),
	/* 031 */ N_("Programmer error!  Bad Admin server handle"),
	/* 032 */ N_("Programmer error!  Bad API structure version"),
	/* 033 */ N_("API structure version specified by application is no longer supported"),
	/* 034 */ N_("API structure version specified by application is unknown to libraries"),
	/* 035 */ N_("Programmer error!  Bad API version"),
	/* 036 */ N_("API version specified by application is no longer supported by libraries"),
	/* 037 */ N_("API version specified by application is no longer supported by server"),
	/* 038 */ N_("API version specified by application is unknown to libraries"),
	/* 039 */ N_("API version specified by application is unknown to server"),
	/* 040 */ N_("Database error! Required principal missing"),
	/* 041 */ N_("The salt type of the specified principal does not support renaming"),
	/* 042 */ N_("Invalid configuration parameter for remote KADM5 client"),
	/* 043 */ N_("Invalid configuration parameter for local KADM5 client."),
	/* 044 */ N_("Operation requires `list' privilege"),
	/* 045 */ N_("Operation requires `change-password' privilege"),
	/* 046 */ N_("Invalid tagged data list element type"),
	/* 047 */ N_("Required parameters in kdc.conf missing"),
	/* 048 */ N_("Bad krb5 admin server hostname"),
	/* 049 */ N_("Key/salt tuples not supported by this function"),
	/* 050 */ N_("Key/salt tuples don't match keys"),
	/* 051 */ N_("Given usage of kadm5_decrypt() not supported"),
	/* 052 */ N_("Policy operations not supported"),
	/* 053 */ N_("Keep old keys option not supported"),
	/* 054 */ N_("Operation requires `get-keys' privilege"),
	/* 055 */ N_("Database already locked"),
	/* 056 */ N_("Database not locked"),
	NULL
};

#define num_errors 57

void initialize_kadm5_error_table_r(struct et_list **list)
{
    initialize_error_table_r(list, kadm5_error_strings, num_errors, ERROR_TABLE_BASE_kadm5);
}

void initialize_kadm5_error_table(void)
{
    init_error_table(kadm5_error_strings, ERROR_TABLE_BASE_kadm5, num_errors);
}
