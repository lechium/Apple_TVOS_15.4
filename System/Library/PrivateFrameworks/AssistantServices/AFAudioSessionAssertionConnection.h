//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFInvalidating-Protocol.h>
#import <AssistantServices/AFRelinquishableAssertion-Protocol.h>

@class AFAssertionContext, AFInstanceContext, AFTwoArgumentSafetyBlock, NSString, NSUUID, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AFAudioSessionAssertionConnection : NSObject <AFInvalidating, AFRelinquishableAssertion>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
    NSXPCConnection *_xpcConnection;	// 24 = 0x18
    AFAssertionContext *_acquisitionContext;	// 32 = 0x20
    AFTwoArgumentSafetyBlock *_relinquishmentHandler;	// 40 = 0x28
    NSUUID *_uuid;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000003edf5
@property(readonly, nonatomic) AFAssertionContext *context; // @synthesize context=_acquisitionContext;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)_clearXPCConnection;	// IMP=0x000000000003ed61
- (id)_xpcConnection;	// IMP=0x000000000003eb2b
- (void)handleXPCConnectionInvalidated;	// IMP=0x000000000003eae4
- (void)handleXPCConnectionInterrupted;	// IMP=0x000000000003ea9d
- (void)_finalizeWithContext:(id)arg1 error:(id)arg2;	// IMP=0x000000000003e970
- (void)_relinquishWithContext:(id)arg1 error:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000003e622
- (void)_acquireWithContext:(id)arg1;	// IMP=0x000000000003e1ea
- (void)relinquishWithError:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000003e054
- (void)relinquishWithContext:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000003dec7
- (void)invalidate;	// IMP=0x000000000003dd55
- (void)dealloc;	// IMP=0x000000000003dc19
@property(readonly, copy) NSString *description;
- (id)initWithInstanceContext:(id)arg1 acquisitionContext:(id)arg2 relinquishmentHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003d7f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
