//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGSize {
    double width;
    double height;
};

struct CloudVodkaAttributes_ {
    unsigned int _field1;
    unsigned int _field2;
    unsigned long long _field3;
};

struct VanillaVodkaAttributes_ {
    unsigned int _field1;
    struct sinfEntry_ *_field2;
    unsigned int _field3;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct atomic_flag {
    _Atomic _Bool _Value;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct os_unfair_recursive_lock_s {
    struct os_unfair_lock_s ourl_lock;
    unsigned int ourl_count;
};

struct sinfEntry_;

#pragma mark Typedef'd Structures

typedef struct {
    int *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_95bda58d;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

typedef struct {
    CDStruct_198678f7 _field1;
    CDStruct_198678f7 _field2;
} CDStruct_3c1748cc;

// Ambiguous groups
typedef struct {
    unsigned int position:1;
    unsigned int revision:1;
} CDStruct_bf543796;

typedef struct {
    unsigned int removeType:1;
    unsigned int revision:1;
} CDStruct_c634eefe;

typedef struct {
    unsigned int dSID:1;
} CDStruct_f07dd4d9;

typedef struct {
    unsigned int payload:1;
} CDStruct_69063d38;

typedef struct {
    unsigned int revision:1;
} CDStruct_3e022450;

typedef struct {
    unsigned int type:1;
} CDStruct_f953fb60;

#pragma mark Named Unions

union FPContentInfo_ {
    unsigned int _field1;
    struct VanillaVodkaAttributes_ _field2;
    struct CloudVodkaAttributes_ _field3;
};
