/* Generated from /Users/user/Downloads/darling-Heimdal/lib/hdb/hdb_err.et */
/* $Id$ */

#include <stddef.h>
#include <com_err.h>
#include "hdb_err.h"

#define N_(x) (x)

static const char *hdb_error_strings[] = {
	/* 000 */ NULL,
	/* 001 */ N_("Database store error"),
	/* 002 */ N_("Database read error"),
	/* 003 */ N_("No such entry in the database"),
	/* 004 */ N_("Database is locked or in use--try again later"),
	/* 005 */ N_("Database was modified during read"),
	/* 006 */ N_("Attempt to lock database twice"),
	/* 007 */ N_("Attempt to unlock database when not locked"),
	/* 008 */ N_("Invalid kdb lock mode"),
	/* 009 */ N_("Insufficient access to lock database"),
	/* 010 */ N_("Entry already exists in database"),
	/* 011 */ N_("Wrong database version"),
	/* 012 */ N_("No correct master key"),
	/* 013 */ N_("Entry contains unknown mandatory extension"),
	/* 014 */ N_("HDB backend doesn't contain write support"),
	/* 015 */ N_("The secret for this entry is not replicated to this database"),
	/* 016 */ N_("Incorrect use of the API"),
	/* 017 */ N_("Entry key version number not found"),
	NULL
};

#define num_errors 18

void initialize_hdb_error_table_r(struct et_list **list)
{
    initialize_error_table_r(list, hdb_error_strings, num_errors, ERROR_TABLE_BASE_hdb);
}

void initialize_hdb_error_table(void)
{
    init_error_table(hdb_error_strings, ERROR_TABLE_BASE_hdb, num_errors);
}
