//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMRoom.h>

#import <Home/HFAccessoryLikeObjectContainer-Protocol.h>
#import <Home/HFHomeKitObject-Protocol.h>
#import <Home/HFReorderableHomeKitObject-Protocol.h>
#import <Home/HFStateDumpBuildable-Protocol.h>
#import <Home/HFWallaperHost-Protocol.h>

@class HMCameraProfile, HMHome, NSArray, NSDate, NSSet, NSString, NSUUID, UIImage;

@interface HMRoom (AbstractionAdditions) <HFAccessoryLikeObjectContainer, HFStateDumpBuildable, HFWallaperHost, HFHomeKitObject, HFReorderableHomeKitObject>
@property(readonly, nonatomic) NSSet *hf_accessoryLikeObjects;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x0000000000075a6a
- (id)hf_updateWallpaperImage:(id)arg1;	// IMP=0x00000000001214b8
@property(readonly, nonatomic) UIImage *hf_wallpaperImage;
@property(readonly, nonatomic) _Bool hf_hasAtleastOneReachableHomePod;
- (_Bool)hf_atleastOneMediaAccessorySupportsAndHasAnnounceEnabled;	// IMP=0x000000000012e34f
- (_Bool)hf_atleastOneHomePodSupportsAnnounce;	// IMP=0x000000000012e2b4
@property(readonly, nonatomic) _Bool hf_shouldShowAnnounceFeatureForThisRoom;
@property(readonly, nonatomic) _Bool hf_shouldShowAnnounceButtonForThisRoom;
@property(readonly, nonatomic) _Bool hf_hasVisibleAccessories;
@property(readonly, nonatomic) NSArray *hf_visibleAccessories;
@property(readonly, nonatomic) NSSet *hf_allVisibleServices;
@property(readonly, nonatomic) _Bool hf_hasAtleastOneHomePod;
- (id)availableHomePodsSupportingStereoPairingVersions:(unsigned long long)arg1;	// IMP=0x000000000012df92
- (id)availableHomeTheaterMediaPartnerFor:(id)arg1;	// IMP=0x000000000012dcea
@property(readonly, nonatomic) NSArray *hf_homePodsNotInHomeTheaterGroup;
@property(readonly, nonatomic) NSArray *hf_homePodPairsNotInHomeTheaterGroup;
@property(readonly, nonatomic) NSArray *hf_pairedHomePods;
@property(readonly, nonatomic) NSArray *hf_allZones;
@property(readonly, nonatomic) NSArray *hf_allServices;
@property(readonly, nonatomic) __weak HMCameraProfile *hf_unitaryCameraProfile;
@property(readonly, nonatomic) NSArray *hf_allCameraProfiles;
- (id)hf_updateDateAdded:(id)arg1;	// IMP=0x00000000002a570e
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, copy, nonatomic) NSString *hf_displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak HMHome *home; // @dynamic home;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

