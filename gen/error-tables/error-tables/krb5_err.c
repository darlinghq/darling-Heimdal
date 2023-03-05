/* Generated from /Users/user/Downloads/darling-Heimdal/lib/krb5/krb5_err.et */
/* $Id$ */

#include <stddef.h>
#include <com_err.h>
#include "krb5_err.h"

#define N_(x) (x)

static const char *krb5_error_strings[] = {
	/* 000 */ N_("No error"),
	/* 001 */ N_("Client's entry in database has expired"),
	/* 002 */ N_("Server's entry in database has expired"),
	/* 003 */ N_("Requested protocol version not supported"),
	/* 004 */ N_("Client's key is encrypted in an old master key"),
	/* 005 */ N_("Server's key is encrypted in an old master key"),
	/* 006 */ N_("Client not found in Kerberos database"),
	/* 007 */ N_("Server not found in Kerberos database"),
	/* 008 */ N_("Principal has multiple entries in Kerberos database"),
	/* 009 */ N_("Client or server has a null key"),
	/* 010 */ N_("Ticket is ineligible for postdating"),
	/* 011 */ N_("Requested effective lifetime is negative or too short"),
	/* 012 */ N_("KDC policy rejects request"),
	/* 013 */ N_("KDC can't fulfill requested option"),
	/* 014 */ N_("KDC has no support for encryption type"),
	/* 015 */ N_("KDC has no support for checksum type"),
	/* 016 */ N_("KDC has no support for padata type"),
	/* 017 */ N_("KDC has no support for transited type"),
	/* 018 */ N_("Clients credentials have been revoked"),
	/* 019 */ N_("Credentials for server have been revoked"),
	/* 020 */ N_("TGT has been revoked"),
	/* 021 */ N_("Client not yet valid - try again later"),
	/* 022 */ N_("Server not yet valid - try again later"),
	/* 023 */ N_("Password has expired"),
	/* 024 */ N_("Preauthentication failed"),
	/* 025 */ N_("Additional pre-authentication required"),
	/* 026 */ N_("Requested server and ticket don't match"),
	/* 027 */ N_("Server principal valid for user2user only"),
	/* 028 */ N_("KDC Policy rejects transited path"),
	/* 029 */ N_("A service is not available"),
	/* 030 */ NULL,
	/* 031 */ N_("Decrypt integrity check failed"),
	/* 032 */ N_("Ticket expired"),
	/* 033 */ N_("Ticket not yet valid"),
	/* 034 */ N_("Request is a replay"),
	/* 035 */ N_("The ticket isn't for us"),
	/* 036 */ N_("Ticket/authenticator don't match"),
	/* 037 */ N_("Clock skew too great"),
	/* 038 */ N_("Incorrect net address"),
	/* 039 */ N_("Protocol version mismatch"),
	/* 040 */ N_("Invalid message type"),
	/* 041 */ N_("Message stream modified"),
	/* 042 */ N_("Message out of order"),
	/* 043 */ N_("Invalid cross-realm ticket"),
	/* 044 */ N_("Key version is not available"),
	/* 045 */ N_("Service key not available"),
	/* 046 */ N_("Mutual authentication failed"),
	/* 047 */ N_("Incorrect message direction"),
	/* 048 */ N_("Alternative authentication method required"),
	/* 049 */ N_("Incorrect sequence number in message"),
	/* 050 */ N_("Inappropriate type of checksum in message"),
	/* 051 */ N_("Policy rejects transited path"),
	/* 052 */ N_("Response too big for UDP, retry with TCP"),
	/* 053 */ NULL,
	/* 054 */ NULL,
	/* 055 */ NULL,
	/* 056 */ NULL,
	/* 057 */ NULL,
	/* 058 */ NULL,
	/* 059 */ NULL,
	/* 060 */ N_("Generic error (see e-text)"),
	/* 061 */ N_("Field is too long for this implementation"),
	/* 062 */ N_("Client not trusted"),
	/* 063 */ N_("KDC not trusted"),
	/* 064 */ N_("Invalid signature"),
	/* 065 */ N_("DH parameters not accepted"),
	/* 066 */ NULL,
	/* 067 */ NULL,
	/* 068 */ N_("Wrong realm"),
	/* 069 */ N_("User to user required"),
	/* 070 */ N_("Cannot verify certificate"),
	/* 071 */ N_("Certificate invalid"),
	/* 072 */ N_("Certificate revoked"),
	/* 073 */ N_("Revocation status unknown"),
	/* 074 */ N_("Revocation status unavaible"),
	/* 075 */ N_("Client name mismatch in certificate"),
	/* 076 */ N_("Inconsistent key purpose"),
	/* 077 */ N_("Digest in certificate not accepted"),
	/* 078 */ N_("paChecksum must be included"),
	/* 079 */ N_("Digest in signedData not accepted"),
	/* 080 */ N_("Public key encryption not supported"),
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
	/* 091 */ N_("More preauth data required"),
	/* 092 */ NULL,
	/* 093 */ NULL,
	/* 094 */ N_("Invalid OTP digest algorithm"),
	/* 095 */ N_("Invalid OTP iteration count"),
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
	/* 128 */ N_("$Id$"),
	/* 129 */ N_("Invalid flag for file lock mode"),
	/* 130 */ N_("Cannot read password"),
	/* 131 */ N_("Password mismatch"),
	/* 132 */ N_("Password read interrupted"),
	/* 133 */ N_("Invalid character in component name"),
	/* 134 */ N_("Malformed representation of principal"),
	/* 135 */ N_("Can't open/find configuration file"),
	/* 136 */ N_("Improper format of configuration file"),
	/* 137 */ N_("Insufficient space to return complete information"),
	/* 138 */ N_("Invalid message type specified for encoding"),
	/* 139 */ N_("Credential cache name malformed"),
	/* 140 */ N_("Unknown credential cache type"),
	/* 141 */ N_("Matching credential not found"),
	/* 142 */ N_("End of credential cache reached"),
	/* 143 */ N_("Request did not supply a ticket"),
	/* 144 */ N_("Wrong principal in request"),
	/* 145 */ N_("Ticket has invalid flag set"),
	/* 146 */ N_("Requested principal and ticket don't match"),
	/* 147 */ N_("KDC reply did not match expectations"),
	/* 148 */ N_("Clock skew too great in KDC reply"),
	/* 149 */ N_("Client/server realm mismatch in initial ticket request"),
	/* 150 */ N_("Program lacks support for encryption type"),
	/* 151 */ N_("Program lacks support for key type"),
	/* 152 */ N_("Requested encryption type not used in message"),
	/* 153 */ N_("Program lacks support for checksum type"),
	/* 154 */ N_("Cannot find KDC for requested realm"),
	/* 155 */ N_("Kerberos service unknown"),
	/* 156 */ N_("Cannot contact any KDC for requested realm"),
	/* 157 */ N_("No local name found for principal name"),
	/* 158 */ N_("Mutual authentication failed"),
	/* 159 */ N_("Replay cache type is already registered"),
	/* 160 */ N_("No more memory to allocate (in replay cache code)"),
	/* 161 */ N_("Replay cache type is unknown"),
	/* 162 */ N_("Generic unknown RC error"),
	/* 163 */ N_("Message is a replay"),
	/* 164 */ N_("Replay I/O operation failed XXX"),
	/* 165 */ N_("Replay cache type does not support non-volatile storage"),
	/* 166 */ N_("Replay cache name parse/format error"),
	/* 167 */ N_("End-of-file on replay cache I/O"),
	/* 168 */ N_("No more memory to allocate (in replay cache I/O code)"),
	/* 169 */ N_("Permission denied in replay cache code"),
	/* 170 */ N_("I/O error in replay cache i/o code"),
	/* 171 */ N_("Generic unknown RC/IO error"),
	/* 172 */ N_("Insufficient system space to store replay information"),
	/* 173 */ N_("Can't open/find realm translation file"),
	/* 174 */ N_("Improper format of realm translation file"),
	/* 175 */ N_("Can't open/find lname translation database"),
	/* 176 */ N_("No translation available for requested principal"),
	/* 177 */ N_("Improper format of translation database entry"),
	/* 178 */ N_("Cryptosystem internal error"),
	/* 179 */ N_("Key table name malformed"),
	/* 180 */ N_("Unknown Key table type"),
	/* 181 */ N_("Key table entry not found"),
	/* 182 */ N_("End of key table reached"),
	/* 183 */ N_("Cannot write to specified key table"),
	/* 184 */ N_("Error writing to key table"),
	/* 185 */ N_("Cannot find ticket for requested realm"),
	/* 186 */ N_("DES key has bad parity"),
	/* 187 */ N_("DES key is a weak key"),
	/* 188 */ N_("Bad encryption type"),
	/* 189 */ N_("Key size is incompatible with encryption type"),
	/* 190 */ N_("Message size is incompatible with encryption type"),
	/* 191 */ N_("Credentials cache type is already registered."),
	/* 192 */ N_("Key table type is already registered."),
	/* 193 */ N_("Credentials cache I/O operation failed XXX"),
	/* 194 */ N_("Credentials cache file permissions incorrect"),
	/* 195 */ N_("No credentials cache file found"),
	/* 196 */ N_("Internal file credentials cache error"),
	/* 197 */ N_("Error writing to credentials cache file"),
	/* 198 */ N_("No more memory to allocate (in credentials cache code)"),
	/* 199 */ N_("Bad format in credentials cache"),
	/* 200 */ N_("No credentials found with supported encryption types"),
	/* 201 */ N_("Invalid KDC option combination (library internal error)"),
	/* 202 */ N_("Request missing second ticket"),
	/* 203 */ N_("No credentials supplied to library routine"),
	/* 204 */ N_("Bad sendauth version was sent"),
	/* 205 */ N_("Bad application version was sent (via sendauth)"),
	/* 206 */ N_("Bad response (during sendauth exchange)"),
	/* 207 */ N_("Server rejected authentication (during sendauth exchange)"),
	/* 208 */ N_("Unsupported preauthentication type"),
	/* 209 */ N_("Required preauthentication key not supplied"),
	/* 210 */ N_("Generic preauthentication failure"),
	/* 211 */ N_("Unsupported replay cache format version number"),
	/* 212 */ N_("Unsupported credentials cache format version number"),
	/* 213 */ N_("Unsupported key table format version number"),
	/* 214 */ N_("Program lacks support for address type"),
	/* 215 */ N_("Message replay detection requires rcache parameter"),
	/* 216 */ N_("Hostname cannot be canonicalized"),
	/* 217 */ N_("Cannot determine realm for host"),
	/* 218 */ N_("Conversion to service principal undefined for name type"),
	/* 219 */ N_("Initial Ticket response appears to be Version 4"),
	/* 220 */ N_("Cannot resolve KDC for requested realm"),
	/* 221 */ N_("Requesting ticket can't get forwardable tickets"),
	/* 222 */ N_("Bad principal name while trying to forward credentials"),
	/* 223 */ N_("Looping detected inside krb5_get_in_tkt"),
	/* 224 */ N_("Configuration file does not specify default realm"),
	/* 225 */ N_("Bad SAM flags in obtain_sam_padata"),
	/* 226 */ N_("Invalid encryption type in SAM challenge"),
	/* 227 */ N_("Missing checksum in SAM challenge"),
	/* 228 */ N_("Bad checksum in SAM challenge"),
	/* 229 */ NULL,
	/* 230 */ NULL,
	/* 231 */ NULL,
	/* 232 */ NULL,
	/* 233 */ NULL,
	/* 234 */ NULL,
	/* 235 */ NULL,
	/* 236 */ NULL,
	/* 237 */ NULL,
	/* 238 */ N_("Program called an obsolete, deleted function"),
	/* 239 */ NULL,
	/* 240 */ NULL,
	/* 241 */ NULL,
	/* 242 */ NULL,
	/* 243 */ NULL,
	/* 244 */ NULL,
	/* 245 */ N_("Invalid key generation parameters from KDC"),
	/* 246 */ N_("Service not available"),
	/* 247 */ N_("Credential cache function not supported"),
	/* 248 */ N_("Invalid format of Kerberos lifetime or clock skew string"),
	/* 249 */ N_("Supplied data not handled by this plugin"),
	/* 250 */ N_("Plugin does not support the operaton"),
	NULL
};

#define num_errors 251

void initialize_krb5_error_table_r(struct et_list **list)
{
    initialize_error_table_r(list, krb5_error_strings, num_errors, ERROR_TABLE_BASE_krb5);
}

void initialize_krb5_error_table(void)
{
    init_error_table(krb5_error_strings, ERROR_TABLE_BASE_krb5, num_errors);
}