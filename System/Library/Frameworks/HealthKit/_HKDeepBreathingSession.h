//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/_HKDeepBreathingSessionClient-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKTaskServerProxyProvider, NSString, _HKDeepBreathingSessionConfiguration;
@protocol OS_dispatch_queue, _HKDeepBreathingSessionDelegate;

@interface _HKDeepBreathingSession : NSObject <_HKXPCExportable, _HKDeepBreathingSessionClient>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_clientQueue;	// 16 = 0x10
    long long _serverState;	// 24 = 0x18
    HKTaskServerProxyProvider *_proxyProvider;	// 32 = 0x20
    id <_HKDeepBreathingSessionDelegate> _delegate;	// 40 = 0x28
}

+ (id)taskIdentifier;	// IMP=0x000000000010e3a3
- (void).cxx_destruct;	// IMP=0x000000000010f1c7
@property __weak id <_HKDeepBreathingSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_queue_alertDelegateDidEncounterError:(id)arg1;	// IMP=0x000000000010f054
- (void)_queue_alertDelegateDidReceiveHeartRate:(double)arg1;	// IMP=0x000000000010ef72
- (void)clientRemote_sessionDidReceiveError:(id)arg1;	// IMP=0x000000000010eec8
- (void)clientRemote_sessionDidReceiveHeartRate:(double)arg1;	// IMP=0x000000000010ee40
- (_Bool)_queue_isServerAttached;	// IMP=0x000000000010ee32
- (_Bool)_isServerAttached;	// IMP=0x000000000010ed78
- (void)_connectionDidEncounterError:(id)arg1;	// IMP=0x000000000010ecb4
- (void)_queue_transitionToServerState:(long long)arg1;	// IMP=0x000000000010eba3
@property(readonly) long long serverState;
@property(readonly, copy) _HKDeepBreathingSessionConfiguration *sessionConfiguration;
- (void)_queue_deactivate;	// IMP=0x000000000010eab5
- (void)fetchProxyWithHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010e9c1
- (void)endSessionWithEndReason:(long long)arg1;	// IMP=0x000000000010e901
- (void)startGuiding;	// IMP=0x000000000010e87e
- (void)startSessionWithStartDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000010e496
- (void)connectionInvalidated;	// IMP=0x000000000010e435
- (id)remoteInterface;	// IMP=0x000000000010e3f5
- (id)exportedInterface;	// IMP=0x000000000010e3b5
@property(readonly, copy) NSString *description;
- (id)initWithHealthStore:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000010e1a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

