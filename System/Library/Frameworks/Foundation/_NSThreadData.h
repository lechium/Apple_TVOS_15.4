//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _NSThreadData : NSObject
{
    id _target;	// 8 = 0x8
    SEL _selector;	// 16 = 0x10
    id _argument;	// 24 = 0x18
    id dict;	// 32 = 0x20
    id name;	// 40 = 0x28
    int seqNum;	// 48 = 0x30
    unsigned char qstate;	// 52 = 0x34
    BOOL qos;	// 53 = 0x35
    unsigned char cancel;	// 54 = 0x36
    _Atomic unsigned char status;	// 55 = 0x37
    id performQ;	// 56 = 0x38
    NSMutableDictionary *performD;	// 64 = 0x40
    struct _opaque_pthread_attr_t {
        long long __sig;
        char __opaque[56];
    } attr;	// 72 = 0x48
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *tid;	// 136 = 0x88
    double pri;	// 144 = 0x90
    double defpri;	// 152 = 0x98
}

- (id)init;	// IMP=0x00000000001441d5

@end

