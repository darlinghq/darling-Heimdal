/* Generated from /Users/user/Downloads/darling-Heimdal/lib/gssapi/krb5/gkrb5_err.et */
/* $Id$ */

#include <stddef.h>
#include <com_err.h>
#include "gkrb5_err.h"

#define N_(x) (x)

static const char *gk5_error_strings[] = {
	/* 000 */ N_("No @ in SERVICE-NAME name string"),
	/* 001 */ N_("STRING-UID-NAME contains nondigits"),
	/* 002 */ N_("UID does not resolve to username"),
	/* 003 */ N_("Validation error"),
	/* 004 */ N_("Couldn't allocate gss_buffer_t data"),
	/* 005 */ N_("Message context invalid"),
	/* 006 */ N_("Buffer is the wrong size"),
	/* 007 */ N_("Credential usage type is unknown"),
	/* 008 */ N_("Unknown quality of protection specified"),
	/* 009 */ NULL,
	/* 010 */ NULL,
	/* 011 */ NULL,
	/* 012 */ NULL,
	/* 013 */ NULL,
	/* 014 */ NULL,
	/* 015 */ NULL,
	/* 016 */ NULL,
	/* 017 */ NULL,
	/* 018 */ NULL,
	/* 019 */ NULL,
	/* 020 */ NULL,
	/* 021 */ NULL,
	/* 022 */ NULL,
	/* 023 */ NULL,
	/* 024 */ NULL,
	/* 025 */ NULL,
	/* 026 */ NULL,
	/* 027 */ NULL,
	/* 028 */ NULL,
	/* 029 */ NULL,
	/* 030 */ NULL,
	/* 031 */ NULL,
	/* 032 */ NULL,
	/* 033 */ NULL,
	/* 034 */ NULL,
	/* 035 */ NULL,
	/* 036 */ NULL,
	/* 037 */ NULL,
	/* 038 */ NULL,
	/* 039 */ NULL,
	/* 040 */ NULL,
	/* 041 */ NULL,
	/* 042 */ NULL,
	/* 043 */ NULL,
	/* 044 */ NULL,
	/* 045 */ NULL,
	/* 046 */ NULL,
	/* 047 */ NULL,
	/* 048 */ NULL,
	/* 049 */ NULL,
	/* 050 */ NULL,
	/* 051 */ NULL,
	/* 052 */ NULL,
	/* 053 */ NULL,
	/* 054 */ NULL,
	/* 055 */ NULL,
	/* 056 */ NULL,
	/* 057 */ NULL,
	/* 058 */ NULL,
	/* 059 */ NULL,
	/* 060 */ NULL,
	/* 061 */ NULL,
	/* 062 */ NULL,
	/* 063 */ NULL,
	/* 064 */ NULL,
	/* 065 */ NULL,
	/* 066 */ NULL,
	/* 067 */ NULL,
	/* 068 */ NULL,
	/* 069 */ NULL,
	/* 070 */ NULL,
	/* 071 */ NULL,
	/* 072 */ NULL,
	/* 073 */ NULL,
	/* 074 */ NULL,
	/* 075 */ NULL,
	/* 076 */ NULL,
	/* 077 */ NULL,
	/* 078 */ NULL,
	/* 079 */ NULL,
	/* 080 */ NULL,
	/* 081 */ NULL,
	/* 082 */ NULL,
	/* 083 */ NULL,
	/* 084 */ NULL,
	/* 085 */ NULL,
	/* 086 */ NULL,
	/* 087 */ NULL,
	/* 088 */ NULL,
	/* 089 */ NULL,
	/* 090 */ NULL,
	/* 091 */ NULL,
	/* 092 */ NULL,
	/* 093 */ NULL,
	/* 094 */ NULL,
	/* 095 */ NULL,
	/* 096 */ NULL,
	/* 097 */ NULL,
	/* 098 */ NULL,
	/* 099 */ NULL,
	/* 100 */ NULL,
	/* 101 */ NULL,
	/* 102 */ NULL,
	/* 103 */ NULL,
	/* 104 */ NULL,
	/* 105 */ NULL,
	/* 106 */ NULL,
	/* 107 */ NULL,
	/* 108 */ NULL,
	/* 109 */ NULL,
	/* 110 */ NULL,
	/* 111 */ NULL,
	/* 112 */ NULL,
	/* 113 */ NULL,
	/* 114 */ NULL,
	/* 115 */ NULL,
	/* 116 */ NULL,
	/* 117 */ NULL,
	/* 118 */ NULL,
	/* 119 */ NULL,
	/* 120 */ NULL,
	/* 121 */ NULL,
	/* 122 */ NULL,
	/* 123 */ NULL,
	/* 124 */ NULL,
	/* 125 */ NULL,
	/* 126 */ NULL,
	/* 127 */ NULL,
	/* 128 */ N_("Principal in credential cache does not match desired name"),
	/* 129 */ N_("No principal in keytab matches desired name"),
	/* 130 */ N_("Credential cache has no TGT"),
	/* 131 */ N_("Authenticator has no subkey"),
	/* 132 */ N_("Context is already fully established"),
	/* 133 */ N_("Unknown signature type in token"),
	/* 134 */ N_("Invalid field length in token"),
	/* 135 */ N_("Attempt to use incomplete security context"),
	/* 136 */ N_("Input too long"),
	NULL
};

#define num_errors 137

void initialize_gk5_error_table_r(struct et_list **list)
{
    initialize_error_table_r(list, gk5_error_strings, num_errors, ERROR_TABLE_BASE_gk5);
}

void initialize_gk5_error_table(void)
{
    init_error_table(gk5_error_strings, ERROR_TABLE_BASE_gk5, num_errors);
}