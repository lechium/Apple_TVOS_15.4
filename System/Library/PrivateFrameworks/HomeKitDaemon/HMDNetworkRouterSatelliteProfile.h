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

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000008f8ebc
+ (id)logCategory;	// IMP=0x00000000008f8e8c
@property(nonatomic) long long satelliteStatus; // @synthesize satelliteStatus=_satelliteStatus;
@property(nonatomic) unsigned long long networkStatus; // @synthesize networkStatus=_networkStatus;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008f8bfb
- (void)handleAccessoryConnected:(id)arg1;	// IMP=0x00000000008f8be9
- (void)__handleAccessoryConnected;	// IMP=0x00000000008f8b78
- (void)handleCharacteristicsChangedNotification:(id)arg1;	// IMP=0x00000000008f8ac7
- (void)_handleCharacteristicsChangedPayload:(id)arg1;	// IMP=0x00000000008f883f
- (void)_handleCharacteristicChanges:(id)arg1;	// IMP=0x00000000008f8543
- (void)__updateSatelliteStatus:(id)arg1;	// IMP=0x00000000008f84cd
- (void)_updateNetworkStatus;	// IMP=0x00000000008f844a
- (void)__notifyClientsOfNetworkStatusUpdate:(unsigned long long)arg1;	// IMP=0x00000000008f829c
- (void)handleInitialState;	// IMP=0x00000000008f8216
- (void)registerForMessages;	// IMP=0x00000000008f81d5
- (void)_registerForNotifications;	// IMP=0x00000000008f8105
- (id)runtimeState;	// IMP=0x00000000008f7fcc
- (void)dealloc;	// IMP=0x00000000008f7f8e
- (void)unconfigure;	// IMP=0x00000000008f7ee3
- (id)description;	// IMP=0x00000000008f7e29
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008f7d56
- (id)initWithRouterSatelliteService:(id)arg1 msgDispatcher:(id)arg2;	// IMP=0x00000000008f7afb

@end

