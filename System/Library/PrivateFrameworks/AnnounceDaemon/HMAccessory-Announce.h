//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMAccessory.h>

@interface HMAccessory (Announce)
+ (id)appleAnnounceHostAccessoriesFromAccessories:(id)arg1;	// IMP=0x0000000000055950
+ (id)appleAnnounceAccessoriesFromAccessories:(id)arg1;	// IMP=0x000000000005591f
+ (id)announceAccessoriesWithAnnounceEnabledFromAccessories:(id)arg1;	// IMP=0x00000000000558b3
+ (id)announceAccessoriesFromAccessories:(id)arg1;	// IMP=0x0000000000055882
+ (id)accessoriesWithAnnounceEnabledFromAccessories:(id)arg1;	// IMP=0x0000000000055851
@property(readonly) _Bool an_isAppleAnnounceHostAccessory;
@property(readonly) _Bool an_isAppleAnnounceAccessory;
@property(readonly) _Bool an_isAnnounceAccessory;
@property(readonly, nonatomic) _Bool an_isAnnounceEnabled;
@end

