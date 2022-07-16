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

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000ae1c88
+ (id)logCategory;	// IMP=0x0000000000ae1c58
@property(nonatomic) long long routerStatus; // @synthesize routerStatus=_routerStatus;
@property(nonatomic) unsigned long long wanStatus; // @synthesize wanStatus=_wanStatus;
@property(nonatomic) unsigned long long networkStatus; // @synthesize networkStatus=_networkStatus;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000adfa66
- (void)handleNetworkRouterSatelliteAddedOrRemoved:(id)arg1;	// IMP=0x0000000000adf9f5
- (void)handleAccessoryConnected:(id)arg1;	// IMP=0x0000000000adf9eb
- (void)handleCharacteristicsChangedNotification:(id)arg1;	// IMP=0x0000000000adf93a
- (void)__handleNetworkAccessViolationUpdate:(id)arg1;	// IMP=0x0000000000adf62e
- (void)_updateWANStatus:(unsigned long long)arg1;	// IMP=0x0000000000adf520
- (void)_updateRouterStatus:(long long)arg1;	// IMP=0x0000000000adf408
- (void)__notifyClientsOfNetworkStatus:(unsigned long long)arg1;	// IMP=0x0000000000adf25a
- (void)handleInitialState;	// IMP=0x0000000000adf1dc
- (void)registerForMessages;	// IMP=0x0000000000adefaa
- (id)runtimeState;	// IMP=0x0000000000adee71
- (void)dealloc;	// IMP=0x0000000000adee33
- (void)unconfigure;	// IMP=0x0000000000aded88
- (id)description;	// IMP=0x0000000000adecce
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000adebfb
- (id)initWithRouterService:(id)arg1 msgDispatcher:(id)arg2;	// IMP=0x0000000000ade98d

@end

