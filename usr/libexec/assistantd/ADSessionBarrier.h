//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface ADSessionBarrier : NSObject
{
    CDUnknownBlockType _thunkBlock;	// 8 = 0x8
    CDUnknownBlockType _barrierBlock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_barrierQueue;	// 24 = 0x18
    NSString *aceId;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000022f44e
@property(copy, nonatomic) NSString *aceId; // @synthesize aceId;
- (_Bool)siriCore_supportedByRemoteLimitedSession;	// IMP=0x001000000022f42d
- (_Bool)siriCore_supportedByLocalSession;	// IMP=0x001000000022f425
- (void)siriCore_setSessionRequestId:(id)arg1;	// IMP=0x001000000022f41f
- (id)siriCore_requestId;	// IMP=0x001000000022f417
- (id)siriCore_serializedAceDataError:(id *)arg1;	// IMP=0x001000000022f40f
- (void)siriCore_logDiagnostics;	// IMP=0x001000000022f409
- (_Bool)siriCore_isProvisional;	// IMP=0x001000000022f401
- (_Bool)siriCore_isRestartable;	// IMP=0x001000000022f3f9
- (_Bool)siriCore_isRetryable;	// IMP=0x001000000022f3f1
- (_Bool)siriCore_bufferingAllowedDuringActiveSession;	// IMP=0x001000000022f3e9
@property(copy, nonatomic) NSString *refId;
- (void)siriCore_invokeThunk;	// IMP=0x001000000022f3c2
- (void)barrierResultReturnedWithSuccess:(_Bool)arg1;	// IMP=0x001000000022f32d
- (void)dealloc;	// IMP=0x001000000022f2ee
- (id)initWithThunk:(CDUnknownBlockType)arg1 barrier:(CDUnknownBlockType)arg2;	// IMP=0x001000000022f204

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
