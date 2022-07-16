//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct sockaddr_storage {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[6];
    long long _field4;
    char _field5[112];
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
} CDStruct_9d3ac55b;

typedef struct {
    unsigned char _field1[16];
    unsigned char _field2[16];
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned short _field11;
    unsigned short _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned short _field15;
    _Bool _field16;
    char _field17[16];
    unsigned char _field18;
} CDStruct_ab50c87c;

typedef struct {
    char *_field1;
    char *_field2;
    char *_field3;
    char *_field4;
    _Bool _field5;
} CDStruct_457e09f6;

typedef struct {
    char _field1;
    unsigned short _field2;
    unsigned char _field3;
    unsigned short _field4;
    unsigned char _field5;
} CDStruct_4aae7d13;

typedef struct {
    long long _field1;
    long long _field2;
    long long _field3;
} CDStruct_2ec95fd7;

typedef struct {
    unsigned int _field1;
    unsigned long long _field2;
    unsigned short _field3;
    unsigned char _field4;
    char _field5;
    unsigned short _field6[12];
    unsigned char _field7;
    unsigned short _field8;
    CDStruct_9d3ac55b _field9;
    double _field10;
    unsigned long long _field11;
    _Bool _field12;
    unsigned long long _field13;
} CDStruct_a035aa27;

typedef struct {
    char *_field1;
    unsigned long long _field2;
    long long _field3;
    long long _field4;
    unsigned int _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
    unsigned int _field12;
    struct sockaddr_storage _field13;
    struct sockaddr_storage _field14;
    unsigned short _field15;
    unsigned char _field16;
    int _field17;
    struct {
        char *_field1;
        unsigned short _field2;
        int _field3;
        unsigned short _field4[12];
        long long _field5;
        unsigned char _field6;
        unsigned short _field7;
        unsigned char _field8;
        _Bool _field9;
        _Bool _field10;
        unsigned short _field11;
        CDStruct_9d3ac55b _field12;
        _Bool _field13;
        _Bool _field14;
        int _field15;
        unsigned short _field16[4];
        unsigned char _field17;
        unsigned int _field18;
    } _field18[8];
    char _field19;
    char _field20;
    int _field21;
    double _field22;
    unsigned long long _field23;
    unsigned char _field24[0];
} CDStruct_d00011ad;

