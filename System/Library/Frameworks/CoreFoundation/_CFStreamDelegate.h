//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreFoundation/NSStreamDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _CFStreamDelegate : NSObject <NSStreamDelegate>
{
    unsigned long long _flags;	// 8 = 0x8
    CDStruct_4210025a _client;	// 16 = 0x10
    union {
        CDUnknownFunctionPointerType _rcb;
        CDUnknownFunctionPointerType _wcb;
        CDUnknownFunctionPointerType genericCallback;
        void *genericPointer;
    } _cb;	// 56 = 0x38
}

- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x00000000000a0841
- (void)dealloc;	// IMP=0x00000000000a07d9
- (id)initWithStreamEvents:(unsigned long long)arg1 callback:(void *)arg2 context:(CDStruct_4210025a *)arg3;	// IMP=0x00000000000a072a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

