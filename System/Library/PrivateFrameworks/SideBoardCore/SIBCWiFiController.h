//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SideBoardCore/SIBCConnectionDelegate-Protocol.h>

@class HHUDispatchTimer, NSString, SIBCConnectionManager, SIBCControlMessageCoder, SIBCEndpointStateManager, SIBCWiFiAssertion;
@protocol HHUNotifyRegistration, OS_dispatch_queue, SIBCWiFiControllerFactory;

@interface SIBCWiFiController : NSObject <SIBCConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <SIBCWiFiControllerFactory> _factory;	// 16 = 0x10
    SIBCControlMessageCoder *_messageCoder;	// 24 = 0x18
    SIBCConnectionManager *_connectionManager;	// 32 = 0x20
    SIBCWiFiAssertion *_wifiAssertion;	// 40 = 0x28
    HHUDispatchTimer *_wifiAssertionTimer;	// 48 = 0x30
    SIBCEndpointStateManager *_boostAssertions;	// 56 = 0x38
    id <HHUNotifyRegistration> _builtInVoiceTriggerRegistration;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000006bc9
- (void)connection:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x0000000000006ab7
- (void)_handleConnectionInvalidation:(id)arg1 error:(id)arg2 permanent:(_Bool)arg3;	// IMP=0x00000000000068e3
- (void)_handleExpirationForWiFiTimer:(id)arg1;	// IMP=0x00000000000067f2
- (void)_resetWiFiAssertionTimer;	// IMP=0x000000000000648b
- (void)_handleBuiltInVoiceTriggerNotification;	// IMP=0x00000000000062f2
- (void)_handleBoostTimerExpirationForContext:(id)arg1;	// IMP=0x00000000000061ed
- (void)_scheduleTimerForBoostContext:(id)arg1;	// IMP=0x00000000000060e1
- (void)_acquireBoostAssertionForConnection:(id)arg1;	// IMP=0x0000000000005bcb
- (void)_acquireAssertionForEndpointWithIdentifier:(id)arg1;	// IMP=0x0000000000005a70
- (void)_removeEndpointWithIdentifier:(id)arg1;	// IMP=0x000000000000598b
- (void)removeEndpoint:(id)arg1;	// IMP=0x00000000000058af
- (void)_addEndpointWithIdentifier:(id)arg1;	// IMP=0x00000000000054ae
- (void)_addEndpoint:(id)arg1;	// IMP=0x0000000000005435
- (void)addEndpoint:(id)arg1;	// IMP=0x000000000000538d
- (void)_registerForNotifications;	// IMP=0x00000000000051e2
- (void)startWithEndpoints:(id)arg1;	// IMP=0x0000000000004f9d
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000004f39
- (id)initWithQueue:(id)arg1 factory:(id)arg2;	// IMP=0x0000000000004e34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

