//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDMediaAccessoryAdvertisement, HMDMediaProfile, NSDictionary, NSString;

@interface HMDMediaAccessory <HMFLogging>
{
    HMDMediaAccessoryAdvertisement *_advertisement;	// 32 = 0x20
    HMDMediaProfile *_mediaProfile;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004a1e39
- (void).cxx_destruct;	// IMP=0x00000000004a1a49
@property(readonly) HMDMediaProfile *mediaProfile; // @synthesize mediaProfile=_mediaProfile;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004a199f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004a1911
- (id)dumpSimpleState;	// IMP=0x00000000004a180a
- (id)dumpState;	// IMP=0x00000000004a1703
- (void)removeHostedAccessory:(id)arg1;	// IMP=0x00000000004a16fd
- (void)addHostedAccessory:(id)arg1;	// IMP=0x00000000004a16f7
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000004a1288
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;	// IMP=0x00000000004a11cc
- (void)handleUpdatedPassword:(id)arg1;	// IMP=0x00000000004a11c6
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;	// IMP=0x00000000004a11c0
- (long long)reachableTransports;	// IMP=0x00000000004a1109
- (void)setRemotelyReachable:(_Bool)arg1;	// IMP=0x00000000004a0fb8
- (void)notifyConnectivityChangedWithReachabilityState:(_Bool)arg1;	// IMP=0x00000000004a0f3c
- (void)handleUpdatedAdvertisement:(id)arg1;	// IMP=0x00000000004a0e52
- (void)setAdvertisement:(id)arg1;	// IMP=0x00000000004a0d12
@property(readonly, copy) HMDMediaAccessoryAdvertisement *advertisement; // @synthesize advertisement=_advertisement;
- (void)handleRoomChanged:(id)arg1;	// IMP=0x00000000004a0a12
- (void)handleRoomNameChanged:(id)arg1;	// IMP=0x00000000004a0871
- (id)transportReports;	// IMP=0x00000000004a0869
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 initialConfiguration:(_Bool)arg4;	// IMP=0x00000000004a075a
- (id)name;	// IMP=0x00000000004a06d3
- (_Bool)providesHashRouteID;	// IMP=0x00000000004a06cb
- (void)removeAdvertisement:(id)arg1;	// IMP=0x00000000004a0516
- (void)addAdvertisement:(id)arg1;	// IMP=0x00000000004a038f
- (id)_createMediaProfile;	// IMP=0x00000000004a0359
- (_Bool)_shouldFilterAccessoryProfile:(id)arg1;	// IMP=0x00000000004a030e
- (void)_registerForMessages;	// IMP=0x00000000004a023a
- (unsigned long long)supportedTransports;	// IMP=0x00000000004a022f
- (id)init;	// IMP=0x00000000004a01c2
- (id)initWithTransaction:(id)arg1 home:(id)arg2;	// IMP=0x000000000049ff62
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

