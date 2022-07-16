//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDHomePresenceCheck-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDDevice, HMDHome, NSArray, NSDictionary, NSString;

@interface HMDHomePresence : HMFObject <HMFLogging, HMDHomePresenceCheck>
{
    HMDHome *_home;	// 8 = 0x8
    NSDictionary *_userPresenceMap;	// 16 = 0x10
    HMDDevice *_lastUpdateByDevice;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00000000007c7dd8
- (void).cxx_destruct;	// IMP=0x00000000007c7826
@property(readonly, nonatomic) HMDDevice *lastUpdateByDevice; // @synthesize lastUpdateByDevice=_lastUpdateByDevice;
@property(readonly, nonatomic) NSDictionary *userPresenceMap; // @synthesize userPresenceMap=_userPresenceMap;
@property(readonly, nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (_Bool)areUsersNotAtHome:(id)arg1;	// IMP=0x00000000007c7663
- (_Bool)areUsersAtHome:(id)arg1;	// IMP=0x00000000007c74dd
- (_Bool)isPresenceRegionKnownForUser:(id)arg1;	// IMP=0x00000000007c721a
- (_Bool)isUserNotAtHome:(id)arg1;	// IMP=0x00000000007c6f8b
- (_Bool)isUserAtHome:(id)arg1;	// IMP=0x00000000007c6cfc
@property(readonly, nonatomic) _Bool hasPresenceRegionForAllUsers;
- (_Bool)isAnyUserAtHome;	// IMP=0x00000000007c68b1
- (_Bool)isNoUserAtHome;	// IMP=0x00000000007c668a
- (id)attributeDescriptions;	// IMP=0x00000000007c6575
- (id)logIdentifier;	// IMP=0x00000000007c6499
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007c638c
- (id)serializedIdentifierDictionary;	// IMP=0x00000000007c6281
- (id)serializedUUIDDictionary;	// IMP=0x00000000007c6176
@property(readonly, nonatomic) NSArray *authorizedUsers;
- (id)initWithHome:(id)arg1 userPresenceMap:(id)arg2 lastUpdateByDevice:(id)arg3;	// IMP=0x00000000007c5e05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
