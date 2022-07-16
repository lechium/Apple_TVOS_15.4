//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HMDNetworkRouterProfile
{
    unsigned long long _networkStatus;	// 16 = 0x10
    unsigned long long _wanStatus;	// 24 = 0x18
    long long _routerStatus;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000a23660
+ (id)logCategory;	// IMP=0x0000000000a23630
@property(nonatomic) long long routerStatus; // @synthesize routerStatus=_routerStatus;
@property(nonatomic) unsigned long long wanStatus; // @synthesize wanStatus=_wanStatus;
@property(nonatomic) unsigned long long networkStatus; // @synthesize networkStatus=_networkStatus;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a2143e
- (void)handleNetworkRouterSatelliteAddedOrRemoved:(id)arg1;	// IMP=0x0000000000a213cd
- (void)handleAccessoryConnected:(id)arg1;	// IMP=0x0000000000a213c3
- (void)handleCharacteristicsChangedNotification:(id)arg1;	// IMP=0x0000000000a21312
- (void)__handleNetworkAccessViolationUpdate:(id)arg1;	// IMP=0x0000000000a21006
- (void)_updateWANStatus:(unsigned long long)arg1;	// IMP=0x0000000000a20ef8
- (void)_updateRouterStatus:(long long)arg1;	// IMP=0x0000000000a20de0
- (void)__notifyClientsOfNetworkStatus:(unsigned long long)arg1;	// IMP=0x0000000000a20c32
- (void)handleInitialState;	// IMP=0x0000000000a20bb4
- (void)registerForMessages;	// IMP=0x0000000000a20982
- (id)runtimeState;	// IMP=0x0000000000a20849
- (void)dealloc;	// IMP=0x0000000000a2080b
- (void)unconfigure;	// IMP=0x0000000000a20760
- (id)description;	// IMP=0x0000000000a206a6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a205d3
- (id)initWithRouterService:(id)arg1 msgDispatcher:(id)arg2;	// IMP=0x0000000000a20365

@end
