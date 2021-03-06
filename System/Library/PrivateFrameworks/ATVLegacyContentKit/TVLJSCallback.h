//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ATVLegacyContentKit/TVLJSObject-Protocol.h>

@protocol OS_dispatch_queue;

@interface TVLJSCallback : NSObject <TVLJSObject>
{
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 8 = 0x8
    CDUnknownBlockType _failureBlock;	// 16 = 0x10
    CDUnknownBlockType _successBlock;	// 24 = 0x18
    unsigned long long _successArgCount;	// 32 = 0x20
    struct OpaqueJSValue *_jsObjectRef;	// 40 = 0x28
    CDUnknownBlockType _parameterParsingBlock;	// 48 = 0x30
}

@property(copy, nonatomic) CDUnknownBlockType parameterParsingBlock; // @synthesize parameterParsingBlock=_parameterParsingBlock;
@property(readonly, nonatomic) struct OpaqueJSValue *jsObjectRef; // @synthesize jsObjectRef=_jsObjectRef;
- (void)_jsFinalize;	// IMP=0x0000000000055ed5
- (void)_callbackFailureWithContext:(struct OpaqueJSContext *)arg1 argumentCount:(unsigned long long)arg2 arguments:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;	// IMP=0x0000000000055d9e
- (void)_callbackSuccessWithContext:(struct OpaqueJSContext *)arg1 argumentCount:(unsigned long long)arg2 arguments:(const struct OpaqueJSValue **)arg3 exception:(const struct OpaqueJSValue **)arg4;	// IMP=0x0000000000055c0c
- (void)dealloc;	// IMP=0x0000000000055bad
- (id)initWithContext:(struct OpaqueJSContext *)arg1 callbackQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3 successArgCount:(unsigned long long)arg4 failureBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000055af1
- (id)initWithContext:(struct OpaqueJSContext *)arg1 successBlock:(CDUnknownBlockType)arg2 successArgCount:(unsigned long long)arg3 failureBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000005592b

@end

