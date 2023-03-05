/* Generated from /Users/user/Downloads/darling-Heimdal/lib/ntlm/ntlm_err.et */

#include <stddef.h>
#include <com_err.h>
#include "ntlm_err.h"

#define N_(x) (x)

static const char *ntlm_error_strings[] = {
	/* 000 */ N_("Failed to decode packet"),
	/* 001 */ N_("Input length invalid"),
	/* 002 */ N_("Failed crypto primitive"),
	/* 003 */ N_("Random generator failed"),
	/* 004 */ N_("NTLM authentication failed"),
	/* 005 */ N_("Client time skewed to server"),
	/* 006 */ N_("Client set OEM string"),
	/* 007 */ N_("missing @ or  in name"),
	/* 008 */ N_("missing expected buffer"),
	/* 009 */ N_("Invalid APOP response"),
	/* 010 */ N_("Invalid CRAM-MD5 response"),
	/* 011 */ N_("Invalid DIGEST-MD5 response"),
	/* 012 */ N_("Invalid DIGEST-MD5 rspauth"),
	/* 013 */ N_("Invalid channel bindings"),
	/* 014 */ N_("Invalid MIC"),
	/* 015 */ N_("Invalid session key"),
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
	/* 064 */ N_("NTLM not configured"),
	/* 065 */ N_("Invalid client challenge"),
	/* 066 */ N_("Invalid client LMv1 response"),
	/* 067 */ N_("Invalid client NT response"),
	/* 068 */ N_("Invalid client LMv2 response"),
	/* 069 */ N_("Invalid client NTv1 response"),
	/* 070 */ N_("Invalid client NTv2 response"),
	/* 071 */ N_("Invalid client NTv1 answer"),
	/* 072 */ N_("Invalid client NTv2 answer"),
	/* 073 */ N_("Invalid session key"),
	/* 074 */ N_("Invalid guest login request"),
	/* 075 */ N_("No NETR configured"),
	/* 076 */ N_("No OD configured"),
	/* 077 */ N_("User doesn't exists"),
	/* 078 */ N_("User provide wrong response"),
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
	/* 128 */ N_("Invalid SCRAM message"),
	/* 129 */ N_("Invalid SCRAM proof"),
	/* 130 */ N_("Invalid SCRAM role"),
	NULL
};

#define num_errors 131

void initialize_ntlm_error_table_r(struct et_list **list)
{
    initialize_error_table_r(list, ntlm_error_strings, num_errors, ERROR_TABLE_BASE_ntlm);
}

void initialize_ntlm_error_table(void)
{
    init_error_table(ntlm_error_strings, ERROR_TABLE_BASE_ntlm, num_errors);
}
