//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct WFRowTemplateValueInfo {
    Class _field1;
    SEL _field2;
    SEL _field3;
    id _field4;
    id _field5;
};

struct __SecKey {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        _Atomic unsigned long long _field2;
    } _field1;
    struct __SecKeyDescriptor *_field2;
    void *_field3;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

// Ambiguous groups
typedef struct {
    unsigned int actionCount:1;
} CDStruct_810980b6;

typedef struct {
    unsigned int completed:1;
} CDStruct_c267e6e8;

typedef struct {
    unsigned int duration:1;
} CDStruct_84479c50;

