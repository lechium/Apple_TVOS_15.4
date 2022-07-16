//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

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

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
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
    id _field1;
    id _field2;
    id _field3;
    _Bool _field4;
    id _field5;
    id _field6;
    id _field7;
    _Bool _field8;
    unsigned long long _field9;
} CDStruct_334d6f95;

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    long long _field1;
    double _field2;
} CDStruct_7f320dbc;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

// Ambiguous groups
typedef struct {
    unsigned char _field1;
    unsigned char _field2[7];
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
} CDStruct_06537ce9;

