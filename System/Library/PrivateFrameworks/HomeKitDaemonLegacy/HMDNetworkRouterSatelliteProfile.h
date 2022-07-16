//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HMDNetworkRouterSatelliteProfile
{
    unsigned long long _networkStatus;	// 16 = 0x10
    long long _satelliteStatus;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000846699
+ (id)logCategory;	// IMP=0x0000000000846669
@property(nonatomic) long long satelliteStatus; // @synthesize satelliteStatus=_satelliteStatus;
@property(nonatomic) unsigned long long networkStatus; // @synthesize networkStatus=_networkStatus;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008463d8
- (void)handleAccessoryConnected:(id)arg1;	// IMP=0x00000000008463c6
- (void)__handleAccessoryConnected;	// IMP=0x0000000000846355
- (void)handleCharacteristicsChangedNotification:(id)arg1;	// IMP=0x00000000008462a4
- (void)_handleCharacteristicsChangedPayload:(id)arg1;	// IMP=0x000000000084601c
- (void)_handleCharacteristicChanges:(id)arg1;	// IMP=0x0000000000845d20
- (void)__updateSatelliteStatus:(id)arg1;	// IMP=0x0000000000845caa
- (void)_updateNetworkStatus;	// IMP=0x0000000000845c27
- (void)__notifyClientsOfNetworkStatusUpdate:(unsigned long long)arg1;	// IMP=0x0000000000845a79
- (void)handleInitialState;	// IMP=0x00000000008459f3
- (void)registerForMessages;	// IMP=0x00000000008459b2
- (void)_registerForNotifications;	// IMP=0x00000000008458e2
- (id)runtimeState;	// IMP=0x00000000008457a9
- (void)dealloc;	// IMP=0x000000000084576b
- (void)unconfigure;	// IMP=0x00000000008456c0
- (id)description;	// IMP=0x0000000000845606
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000845533
- (id)initWithRouterSatelliteService:(id)arg1 msgDispatcher:(id)arg2;	// IMP=0x00000000008452d8

@end
