//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HMAccessory, NSDictionary;

@interface TVHMNearbyAccessoriesItemManager : HFItemManager
{
    HMAccessory *_primaryAccessory;	// 8 = 0x8
    NSDictionary *_customNearbyAccessories;	// 16 = 0x10
}

+ (id)itemProvidersForPrimaryAccessory:(id)arg1 inHome:(id)arg2;	// IMP=0x000000000000bc40
- (void).cxx_destruct;	// IMP=0x000000000000c490
@property(retain, nonatomic) NSDictionary *customNearbyAccessories; // @synthesize customNearbyAccessories=_customNearbyAccessories;
@property(retain, nonatomic) HMAccessory *primaryAccessory; // @synthesize primaryAccessory=_primaryAccessory;
- (id)userFilteredIdentifiers;	// IMP=0x000000000000b870
- (_Bool)_isAPreferredServiceType:(id)arg1;	// IMP=0x000000000000b600
- (_Bool)shouldHideItem:(id)arg1;	// IMP=0x000000000000a2e0
- (_Bool)hasEmptyNearbyAccessories;	// IMP=0x000000000000a260
- (_Bool)hasCustomNearbyAccessories;	// IMP=0x000000000000a200
- (id)_itemsToHideInSet:(id)arg1;	// IMP=0x0000000000009f90
- (_Bool)_isServiceItemAssociatedWithPrimaryAccessory:(id)arg1;	// IMP=0x0000000000009eb0
- (unsigned long long)_numberOfSections;	// IMP=0x0000000000009e90
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x0000000000009de0
- (id)identifier;	// IMP=0x0000000000009d60
- (id)initWithDelegate:(id)arg1 primaryAccessory:(id)arg2;	// IMP=0x0000000000009c70

@end
