//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CSAttributeEvaluatorContext {
    id _field1;
    CDUnknownBlockType _field2;
    char *_field3;
    CDStruct_183601bc *_field4;
    CDStruct_183601bc *_field5;
    int *_field6;
    long long _field7;
    long long _field8;
    long long _field9;
    long long _field10;
    long long _field11;
    unsigned long long _field12;
    _Bool _field13;
};

struct CSUnpackInfo {
    short _field1;
    short _field2;
    short _field3;
    short _field4;
    short _field5;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct CDStruct_183601bc;

typedef struct {
    char *containerBytes;
    struct {
        unsigned int embeddedReference;
        unsigned char type;
    } reference;
} CDStruct_b7fac349;

