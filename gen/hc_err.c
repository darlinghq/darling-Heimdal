/* Generated from /Users/ariel/git/darling/src/external/Heimdal/lib/heimcred/hc_err.et */
/* $Id$ */

#include <stddef.h>
#include <com_err.h>
#include "hc_err.h"

#define N_(x) (x)

static const char *hc_error_strings[] = {
	/* 000 */ N_("Unknown key used"),
	/* 001 */ N_("Schema key missing"),
	/* 002 */ N_("No such schema"),
	/* 003 */ N_("No items matches query"),
	/* 004 */ NULL,
	/* 005 */ NULL,
	/* 006 */ NULL,
	/* 007 */ NULL,
	/* 008 */ NULL,
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
	/* 128 */ N_("Credential cache server disconnected"),
	/* 129 */ N_("Credential cache server returned an transport error"),
	NULL
};

#define num_errors 130

void initialize_hc_error_table_r(struct et_list **list)
{
    initialize_error_table_r(list, hc_error_strings, num_errors, ERROR_TABLE_BASE_hc);
}

void initialize_hc_error_table(void)
{
    init_error_table(hc_error_strings, ERROR_TABLE_BASE_hc, num_errors);
}
