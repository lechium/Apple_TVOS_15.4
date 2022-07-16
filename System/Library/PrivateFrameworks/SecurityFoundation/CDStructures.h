//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CC_MD5state_st {
    unsigned int A;
    unsigned int B;
    unsigned int C;
    unsigned int D;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    int num;
};

struct CC_SHA1state_st {
    unsigned int h0;
    unsigned int h1;
    unsigned int h2;
    unsigned int h3;
    unsigned int h4;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    int num;
};

struct CC_SHA256state_st {
    unsigned int count[2];
    unsigned int hash[8];
    unsigned int wbuf[16];
};

struct CC_SHA512state_st {
    unsigned long long count[2];
    unsigned long long hash[8];
    unsigned long long wbuf[16];
};

struct __SecKey {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        _Atomic unsigned long long _field2;
    } _field1;
    struct __SecKeyDescriptor *_field2;
    void *_field3;
};

struct ccdigest_info {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    char *_field5;
    void *_field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
};

struct ccrng_state {
    CDUnknownFunctionPointerType _field1;
};

struct ccspake_cp;

struct ccspake_ctx {
    struct ccspake_cp *_field1;
    struct ccspake_mac *_field2;
    struct ccrng_state *_field3;
    _Bool _field4;
    unsigned long long _field5;
    char *_field6;
    unsigned char _field7;
    unsigned long long _field8[0];
};

struct ccspake_mac;

#pragma mark Typedef'd Structures

typedef struct {
    long long mode;
    struct {
        unsigned long long authenticationRequirements;
        long long subsetCount;
    } authenticationPolicy;
} CDStruct_9d0d652d;

