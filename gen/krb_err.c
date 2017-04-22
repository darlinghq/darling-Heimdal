/* Generated from /Users/andyhyatt/Downloads/Heimdal-498.50.8/lib/krb5/krb_err.et */
/* $Id: krb_err.et,v 1.7 1998/03/29 14:19:52 bg Exp $ */

#include <stddef.h>
#include <com_err.h>
#include "krb_err.h"

#define N_(x) (x)

static const char *krb_error_strings[] = {
	/* 000 */ N_("Kerberos 4 successful"),
	/* 001 */ N_("Kerberos 4 principal expired"),
	/* 002 */ N_("Kerberos 4 service expired"),
	/* 003 */ N_("Kerberos 4 auth expired"),
	/* 004 */ N_("Incorrect Kerberos 4 master key version"),
	/* 005 */ N_("Incorrect Kerberos 4 master key version"),
	/* 006 */ N_("Incorrect Kerberos 4 master key version"),
	/* 007 */ N_("Kerberos 4 byte order unknown"),
	/* 008 */ N_("Kerberos 4 principal unknown"),
	/* 009 */ N_("Kerberos 4 principal not unique"),
	/* 010 */ N_("Kerberos 4 principal has null key"),
	/* 011 */ NULL,
	/* 012 */ NULL,
	/* 013 */ NULL,
	/* 014 */ NULL,
	/* 015 */ NULL,
	/* 016 */ NULL,
	/* 017 */ NULL,
	/* 018 */ NULL,
	/* 019 */ NULL,
	/* 020 */ N_("Generic error from KDC (Kerberos 4)"),
	/* 021 */ N_("Can't read Kerberos 4 ticket file"),
	/* 022 */ N_("Can't find Kerberos 4 ticket or TGT"),
	/* 023 */ NULL,
	/* 024 */ NULL,
	/* 025 */ NULL,
	/* 026 */ N_("Kerberos 4 TGT Expired"),
	/* 027 */ NULL,
	/* 028 */ NULL,
	/* 029 */ NULL,
	/* 030 */ NULL,
	/* 031 */ N_("Kerberos 4: Can't decode authenticator"),
	/* 032 */ N_("Kerberos 4 ticket expired"),
	/* 033 */ N_("Kerberos 4 ticket not yet valid"),
	/* 034 */ N_("Kerberos 4: Repeated request"),
	/* 035 */ N_("The Kerberos 4 ticket isn't for us"),
	/* 036 */ N_("Kerberos 4 request inconsistent"),
	/* 037 */ N_("Kerberos 4: delta_t too big"),
	/* 038 */ N_("Kerberos 4: incorrect net address"),
	/* 039 */ N_("Kerberos protocol not version 4"),
	/* 040 */ N_("Kerberos 4: invalid msg type"),
	/* 041 */ N_("Kerberos 4: message stream modified"),
	/* 042 */ N_("Kerberos 4: message out of order"),
	/* 043 */ N_("Kerberos 4: unauthorized request"),
	/* 044 */ NULL,
	/* 045 */ NULL,
	/* 046 */ NULL,
	/* 047 */ NULL,
	/* 048 */ NULL,
	/* 049 */ NULL,
	/* 050 */ NULL,
	/* 051 */ N_("Kerberos 4: current PW is null"),
	/* 052 */ N_("Kerberos 4: Incorrect current password"),
	/* 053 */ N_("Kerberos 4 protocol error"),
	/* 054 */ N_("Error returned by KDC (Kerberos 4)"),
	/* 055 */ N_("Null Kerberos 4 ticket returned by KDC"),
	/* 056 */ N_("Kerberos 4: Retry count exceeded"),
	/* 057 */ N_("Kerberos 4: Can't send request"),
	/* 058 */ NULL,
	/* 059 */ NULL,
	/* 060 */ NULL,
	/* 061 */ N_("Kerberos 4: not all tickets returned"),
	/* 062 */ N_("Kerberos 4: incorrect password"),
	/* 063 */ N_("Kerberos 4: Protocol Error"),
	/* 064 */ NULL,
	/* 065 */ NULL,
	/* 066 */ NULL,
	/* 067 */ NULL,
	/* 068 */ NULL,
	/* 069 */ NULL,
	/* 070 */ N_("Other error in Kerberos 4"),
	/* 071 */ N_("Don't have Kerberos 4 ticket-granting ticket"),
	/* 072 */ NULL,
	/* 073 */ NULL,
	/* 074 */ NULL,
	/* 075 */ NULL,
	/* 076 */ N_("No Kerberos 4 ticket file found"),
	/* 077 */ N_("Couldn't access Kerberos 4 ticket file"),
	/* 078 */ N_("Couldn't lock Kerberos 4 ticket file"),
	/* 079 */ N_("Bad Kerberos 4 ticket file format"),
	/* 080 */ N_("Kerberos 4: tf_init not called first"),
	/* 081 */ N_("Bad Kerberos 4 name format"),
	NULL
};

#define num_errors 82

void initialize_krb_error_table_r(struct et_list **list)
{
    initialize_error_table_r(list, krb_error_strings, num_errors, ERROR_TABLE_BASE_krb);
}

void initialize_krb_error_table(void)
{
    init_error_table(krb_error_strings, ERROR_TABLE_BASE_krb, num_errors);
}
