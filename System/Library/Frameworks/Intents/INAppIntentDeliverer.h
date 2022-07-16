//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/RBSAssertionObserving-Protocol.h>

@class INIntentForwardingAction, INWatchdogTimer, NSString, RBSAssertion, RBSProcessMonitor;
@protocol INIntentBackgroundHandlingAssertion, OS_dispatch_queue;

@interface INAppIntentDeliverer : NSObject <RBSAssertionObserving>
{
    INIntentForwardingAction *_intentForwardingAction;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    RBSAssertion *_processAssertion;	// 32 = 0x20
    RBSProcessMonitor *_processMonitor;	// 40 = 0x28
    CDUnknownBlockType _completionBlock;	// 48 = 0x30
    INWatchdogTimer *_requestTimer;	// 56 = 0x38
    id <INIntentBackgroundHandlingAssertion> _auxiliaryAssertion;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000189dbd
@property(retain, nonatomic) id <INIntentBackgroundHandlingAssertion> auxiliaryAssertion; // @synthesize auxiliaryAssertion=_auxiliaryAssertion;
@property(retain, nonatomic) INWatchdogTimer *requestTimer; // @synthesize requestTimer=_requestTimer;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) RBSProcessMonitor *processMonitor; // @synthesize processMonitor=_processMonitor;
@property(readonly, nonatomic) RBSAssertion *processAssertion; // @synthesize processAssertion=_processAssertion;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) INIntentForwardingAction *intentForwardingAction; // @synthesize intentForwardingAction=_intentForwardingAction;
- (void)completeWithIntentForwardingActionResponse:(id)arg1;	// IMP=0x0000000000189c8b
- (void)invalidateIntentDelivery;	// IMP=0x0000000000189c1a
- (void)_deliverIntentForwardingActionWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000189719
- (void)deliverIntent:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000018963c
- (void)deliverIntentForwardingActionWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000018958a
- (void)assertion:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x00000000001891f4
- (void)dealloc;	// IMP=0x0000000000189189
- (id)initWithBundleIdentifier:(id)arg1 intentForwardingAction:(id)arg2;	// IMP=0x0000000000188f12
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0000000000188efe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
