//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Named Structures

struct ccrsa_full_ctx {
    unsigned long long pb_n;
    unsigned long long pb_bitlen;
    struct cczp_funcs *pb_funcs;
    unsigned long long pb_ccn[0];
};

struct ccrsa_pub_ctx {
    unsigned long long pb_n;
    unsigned long long pb_bitlen;
    struct cczp_funcs *pb_funcs;
    unsigned long long pb_ccn[0];
};

struct cczp_funcs;

