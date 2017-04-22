/* Generated from /Users/andyhyatt/Downloads/Heimdal-498.50.8/lib/heimcred/hc_err.et */
/* $Id$ */

#ifndef __hc_err_h__
#define __hc_err_h__

struct et_list;

void initialize_hc_error_table_r(struct et_list **);

void initialize_hc_error_table(void);
#define init_hc_err_tbl initialize_hc_error_table

typedef enum hc_error_number{
	kHeimCredErrorUnknownKey = 564480,
	kHeimCredErrorMissingSchemaKey = 564481,
	kHeimCredErrorNoSuchSchema = 564482,
	kHeimCredErrorNoItemsMatchesQuery = 564483,
	kHeimCredErrorServerDisconnected = 564608,
	kHeimCredErrorServerReturnedError = 564609
} hc_error_number;

#define ERROR_TABLE_BASE_hc 564480

#define COM_ERR_BINDDOMAIN_hc "heim_com_err564480"

#endif /* __hc_err_h__ */
