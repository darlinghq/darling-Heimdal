/* Generated from /Users/andyhyatt/Downloads/Heimdal-498.50.8/lib/krb5/krb_err.et */
/* $Id: krb_err.et,v 1.7 1998/03/29 14:19:52 bg Exp $ */

#ifndef __krb_err_h__
#define __krb_err_h__

struct et_list;

void initialize_krb_error_table_r(struct et_list **);

void initialize_krb_error_table(void);
#define init_krb_err_tbl initialize_krb_error_table

typedef enum krb_error_number{
	KRB4ET_KSUCCESS = 39525376,
	KRB4ET_KDC_NAME_EXP = 39525377,
	KRB4ET_KDC_SERVICE_EXP = 39525378,
	KRB4ET_KDC_AUTH_EXP = 39525379,
	KRB4ET_KDC_PKT_VER = 39525380,
	KRB4ET_KDC_P_MKEY_VER = 39525381,
	KRB4ET_KDC_S_MKEY_VER = 39525382,
	KRB4ET_KDC_BYTE_ORDER = 39525383,
	KRB4ET_KDC_PR_UNKNOWN = 39525384,
	KRB4ET_KDC_PR_N_UNIQUE = 39525385,
	KRB4ET_KDC_NULL_KEY = 39525386,
	KRB4ET_KDC_GEN_ERR = 39525396,
	KRB4ET_GC_TKFIL = 39525397,
	KRB4ET_GC_NOTKT = 39525398,
	KRB4ET_MK_AP_TGTEXP = 39525402,
	KRB4ET_RD_AP_UNDEC = 39525407,
	KRB4ET_RD_AP_EXP = 39525408,
	KRB4ET_RD_AP_NYV = 39525409,
	KRB4ET_RD_AP_REPEAT = 39525410,
	KRB4ET_RD_AP_NOT_US = 39525411,
	KRB4ET_RD_AP_INCON = 39525412,
	KRB4ET_RD_AP_TIME = 39525413,
	KRB4ET_RD_AP_BADD = 39525414,
	KRB4ET_RD_AP_VERSION = 39525415,
	KRB4ET_RD_AP_MSG_TYPE = 39525416,
	KRB4ET_RD_AP_MODIFIED = 39525417,
	KRB4ET_RD_AP_ORDER = 39525418,
	KRB4ET_RD_AP_UNAUTHOR = 39525419,
	KRB4ET_GT_PW_NULL = 39525427,
	KRB4ET_GT_PW_BADPW = 39525428,
	KRB4ET_GT_PW_PROT = 39525429,
	KRB4ET_GT_PW_KDCERR = 39525430,
	KRB4ET_GT_PW_NULLTKT = 39525431,
	KRB4ET_SKDC_RETRY = 39525432,
	KRB4ET_SKDC_CANT = 39525433,
	KRB4ET_INTK_W_NOTALL = 39525437,
	KRB4ET_INTK_BADPW = 39525438,
	KRB4ET_INTK_PROT = 39525439,
	KRB4ET_INTK_ERR = 39525446,
	KRB4ET_AD_NOTGT = 39525447,
	KRB4ET_NO_TKT_FIL = 39525452,
	KRB4ET_TKT_FIL_ACC = 39525453,
	KRB4ET_TKT_FIL_LCK = 39525454,
	KRB4ET_TKT_FIL_FMT = 39525455,
	KRB4ET_TKT_FIL_INI = 39525456,
	KRB4ET_KNAME_FMT = 39525457
} krb_error_number;

#define ERROR_TABLE_BASE_krb 39525376

#define COM_ERR_BINDDOMAIN_krb "heim_com_err39525376"

#endif /* __krb_err_h__ */
