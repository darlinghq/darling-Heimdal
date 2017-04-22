#ifndef _DNS_SD_PRIVATE_H
#define _DNS_SD_PRIVATE_H

DNSServiceErrorType DNSSD_API
DNSServiceCreateDelegateConnection(DNSServiceRef *sdRef, int32_t pid, uuid_t uuid);

#endif
