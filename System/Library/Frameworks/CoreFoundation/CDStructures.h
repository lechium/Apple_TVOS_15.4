//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Block_byref {
    void *_field1;
    struct Block_byref *_field2;
    int _field3;
    unsigned int _field4;
};

struct CFMethodSignatureROMEntry {
    struct NSMethodFrameDescriptor *_field1;
    char *_field2;
    unsigned long long _field3;
};

struct NSMethodFrameArgInfo {
    struct NSMethodFrameArgInfo *_field1;
    struct NSMethodFrameArgInfo *_field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned char _field7;
    char _field8;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned char _field9;
    char _field10[0];
};

struct NSMethodFrameDescriptor {
    struct NSMethodFrameArgInfo *_field1;
    struct NSMethodFrameArgInfo *_field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __CFArray;

struct __CFDateComponents {
    struct __CFRuntimeBase _field1;
    struct __CFCalendar *_field2;
    struct __CFTimeZone *_field3;
    long long _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    long long _field8;
    long long _field9;
    long long _field10;
    long long _field11;
    long long _field12;
    long long _field13;
    long long _field14;
    long long _field15;
    long long _field16;
    long long _field17;
    long long _field18;
    long long _field19;
};

struct __CFPasteboard {
    struct __CFRuntimeBase _field1;
    struct __CFString *_field2;
    id _field3;
    struct __CFUUID *_field4;
    struct __CFArray *_field5;
    unsigned char _field6;
    id _field7;
    id _field8;
    _Atomic unsigned long long _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
};

struct __CFRuntimeBase {
    unsigned long long _field1;
    _Atomic unsigned long long _field2;
};

struct __cfobservers_t {
    id slot;
    struct __cfobservers_t *next;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct edge {
    unsigned long long _field1;
    unsigned long long _field2[2];
    unsigned long long _field3;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct vertex {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long *_field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long state;
    id *itemsPtr;
    unsigned long long *mutationsPtr;
    unsigned long long extra[5];
} CDStruct_58648341;

typedef struct {
    int _field1;
    long long _field2;
    long long _field3;
} CDStruct_b6748e3c;

typedef struct {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_4210025a;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    struct __CFBasicHash *set;
    NSMutableArray *array;
} CDStruct_2595eaee;

typedef struct {
    int _field1;
    long long _field2;
    struct __CFArray *_field3;
    struct __CFArray *_field4;
} CDStruct_9e943ef1;

typedef struct {
    int _field1;
    long long _field2;
    struct __CFArray *_field3;
} CDStruct_6ea78fe2;

typedef struct {
    int _field1;
    long long _field2;
    struct __CFData *_field3;
    unsigned long long _field4;
} CDStruct_55991ab6;

typedef struct {
    id *objs;
    union {
        unsigned long long mutations;
        struct {
            unsigned int muts;
            unsigned int used:26;
            unsigned int szidx:6;
        } ;
    } state;
} CDStruct_af6d7307;

typedef struct {
    id *buffer;
    union {
        struct {
            unsigned long long mutations;
        } ;
        struct {
            unsigned int muts;
            unsigned int other;
        } ;
        struct {
            unsigned int mutbits:31;
            unsigned int copyKeys:1;
            unsigned int used:25;
            unsigned int kvo:1;
            unsigned int szidx:6;
        } ;
    } state;
} CDStruct_bc24fd1e;

typedef struct {
    id *list;
    unsigned int offset;
    unsigned int size;
    union {
        unsigned long long mutations;
        struct {
            unsigned int muts;
            unsigned int used;
        } ;
    } state;
} CDStruct_a6934631;

