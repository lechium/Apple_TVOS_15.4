//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFAccessoryRepresentableItem-Protocol.h>
#import <Home/HFActionBuilderFactory-Protocol.h>
#import <Home/HFMediaAccessoryLikeItem-Protocol.h>
#import <Home/HFMediaAccessoryProtocol-Protocol.h>

@class HFMediaAccessoryCommonSettingsManager, HMHome, NSSet, NSString;
@protocol HFAccessoryRepresentable, HFCharacteristicValueSource, HFHomeKitObject, HFHomeKitSettingsVendor, HFMediaProfileContainer, HFMediaValueSource;

@interface HFMediaAccessoryItem <HFAccessoryRepresentableItem, HFMediaAccessoryProtocol, HFMediaAccessoryLikeItem, HFActionBuilderFactory>
{
    _Bool _isItemInActionBuilder;	// 8 = 0x8
    id <HFHomeKitObject> _homeKitObject;	// 16 = 0x10
    id <HFHomeKitSettingsVendor> _homeKitSettingsVendor;	// 24 = 0x18
    id <HFCharacteristicValueSource> _valueSource;	// 32 = 0x20
    id <HFMediaProfileContainer> _mediaProfileContainer;	// 40 = 0x28
    long long _mediaAccessoryItemType;	// 48 = 0x30
}

+ (id)itemWithAccessoryRepresentableObject:(id)arg1 valueSource:(id)arg2;	// IMP=0x00000000001742c3
- (void).cxx_destruct;	// IMP=0x000000000029e208
@property(nonatomic) _Bool isItemInActionBuilder; // @synthesize isItemInActionBuilder=_isItemInActionBuilder;
@property(readonly, nonatomic) long long mediaAccessoryItemType; // @synthesize mediaAccessoryItemType=_mediaAccessoryItemType;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) id <HFHomeKitSettingsVendor> homeKitSettingsVendor; // @synthesize homeKitSettingsVendor=_homeKitSettingsVendor;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject; // @synthesize homeKitObject=_homeKitObject;
- (id)currentStateActionBuildersForHome:(id)arg1;	// IMP=0x000000000029dffe
- (_Bool)actionsMayRequireDeviceUnlock;	// IMP=0x000000000029dff6
- (_Bool)containsActions;	// IMP=0x000000000029dfee
- (unsigned long long)preferredActionOnTap:(id)arg1;	// IMP=0x000000000029dfa4
- (id)iconDescriptor:(id)arg1;	// IMP=0x000000000029dc89
- (id)serviceNameComponents;	// IMP=0x000000000029dc39
- (_Bool)_isInstallingSoftwareUpdate;	// IMP=0x000000000029da71
- (id)performStandardUpdateWithOptions:(id)arg1;	// IMP=0x000000000029d99f
- (void)_decorateWithSiriEndpointProfileSpecificKeys:(id)arg1;	// IMP=0x000000000029d849
- (void)_decorateWithMediaSystemSpecificKeys:(id)arg1;	// IMP=0x000000000029d6f1
- (void)_decorateServiceLikeItemKeys:(id)arg1;	// IMP=0x000000000029d4bf
- (void)_decorateSettingsSyncKeys:(id)arg1;	// IMP=0x000000000029d3bc
- (void)_decorateWithMediaSessionKeys:(id)arg1;	// IMP=0x000000000029cf7b
- (void)_decorateWithSoftwareUpdateStateKeys:(id)arg1;	// IMP=0x000000000029cbbc
- (void)_decorateOutcomeWithAccessorySpecificKeys:(id)arg1;	// IMP=0x000000000029ca3a
- (_Bool)supportsAlarmQuickControls;	// IMP=0x000000000029c9ed
- (_Bool)supportsMediaQuickControls;	// IMP=0x000000000029c969
- (id)enableDoorbellChime:(_Bool)arg1;	// IMP=0x000000000029c868
- (_Bool)isDoorbellChimeEnabled;	// IMP=0x000000000029c811
- (_Bool)isSiriDisabled;	// IMP=0x000000000029c604
- (_Bool)isAudioReceiver;	// IMP=0x000000000029c596
- (_Bool)_isHAPCapableSpeaker;	// IMP=0x000000000029c4fc
- (_Bool)_isDumbSpeaker;	// IMP=0x000000000029c48e
- (_Bool)isAirPort;	// IMP=0x000000000029c420
- (_Bool)isAppleTV;	// IMP=0x000000000029c3b2
- (_Bool)isContainedWithinMediaSystem;	// IMP=0x000000000029c2cc
- (_Bool)isHomePodAndIsInMediaSystem;	// IMP=0x000000000029c293
- (_Bool)isStandaloneHomePod;	// IMP=0x000000000029c25c
- (_Bool)supportsMultiUser;	// IMP=0x000000000029c1e3
- (unsigned long long)homePodVariant;	// IMP=0x000000000029c0d4
- (_Bool)isHomePod;	// IMP=0x000000000029c066
- (_Bool)isHomePodMediaSystem;	// IMP=0x000000000029c007
@property(readonly, nonatomic) _Bool supportsMediaAction;
@property(readonly, nonatomic) _Bool allowsAppleMusicAccount;
@property(readonly, nonatomic) NSSet *availableSoftwareUpdates;
@property(readonly, nonatomic) NSSet *accessoriesSupportingSoftwareUpdate;
@property(readonly, nonatomic) _Bool isContainedWithinItemGroup;
@property(readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup;
@property(readonly, nonatomic) _Bool isItemGroup;
- (id)namingComponentForHomeKitObject;	// IMP=0x000000000029bbed
- (id)serviceLikeBuilderInHome:(id)arg1;	// IMP=0x000000000029bb45
- (id)accessories;	// IMP=0x000000000029baf5
@property(readonly, nonatomic) NSSet *services;
@property(readonly, nonatomic) HMHome *home;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;	// IMP=0x000000000029b716
- (id)copyWithValueSource:(id)arg1;	// IMP=0x000000000029b679
- (id)settings;	// IMP=0x000000000029b625
- (id)profiles;	// IMP=0x000000000029b5d5
- (id)setEnableAnnounce:(_Bool)arg1;	// IMP=0x000000000029b374
- (_Bool)isAnnounceEnabled;	// IMP=0x000000000029b1a9
- (_Bool)_hasOnboarded;	// IMP=0x000000000029b13a
- (_Bool)isSiriEndpointAccessory;	// IMP=0x000000000029b0ce
@property(readonly, nonatomic) HFMediaAccessoryCommonSettingsManager *commonSettingsManager;
- (id)room;	// IMP=0x000000000029afe6
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x000000000029a3b2
- (id)createControlItems;	// IMP=0x000000000029a20c
@property(readonly, nonatomic) id <HFMediaValueSource> mediaValueSource;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000299fb5
- (id)initWithValueSource:(id)arg1 homeKitObject:(id)arg2;	// IMP=0x0000000000299c54
- (id)initWithValueSource:(id)arg1 mediaProfileContainer:(id)arg2;	// IMP=0x0000000000299531
- (id)init;	// IMP=0x000000000029947c
@property(readonly, nonatomic) id <HFAccessoryRepresentable> accessoryRepresentableObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
