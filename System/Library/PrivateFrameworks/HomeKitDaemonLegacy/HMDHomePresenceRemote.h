//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDHomePresenceCheck-Protocol.h>

@class NSDictionary;

@interface HMDHomePresenceRemote : HMFObject <HMDHomePresenceCheck>
{
    NSDictionary *_userPresenceMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000007c8d38
@property(readonly, nonatomic) NSDictionary *userPresenceMap; // @synthesize userPresenceMap=_userPresenceMap;
- (_Bool)isAnyUserAtHome;	// IMP=0x00000000007c8bbe
- (_Bool)isNoUserAtHome;	// IMP=0x00000000007c8a47
- (_Bool)areUsersNotAtHome:(id)arg1;	// IMP=0x00000000007c8870
- (_Bool)areUsersAtHome:(id)arg1;	// IMP=0x00000000007c8699
- (_Bool)isUserNotAtHome:(id)arg1;	// IMP=0x00000000007c8650
- (_Bool)isUserAtHome:(id)arg1;	// IMP=0x00000000007c8607
- (id)regionForUser:(id)arg1;	// IMP=0x00000000007c84e0
- (unsigned long long)hash;	// IMP=0x00000000007c849c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007c83d3
- (id)description;	// IMP=0x00000000007c8367
- (id)initWithPresenceByPairingIdentity:(id)arg1;	// IMP=0x00000000007c80d3
- (id)initWithPresenceByUserId:(id)arg1;	// IMP=0x00000000007c7e3f

@end

