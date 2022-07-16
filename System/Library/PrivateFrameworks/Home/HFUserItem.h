//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFHomeKitItemProtocol-Protocol.h>
#import <Home/HFHomeKitSettingsVendor-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class HFHomeKitSettingsAdapterManager, HFHomeKitSettingsValueManager, HFUserNameFormatter, HMHome, HMSettings, HMUser, NSSet, NSString, NSUUID;
@protocol HFHomeKitObject;

@interface HFUserItem <HFHomeKitItemProtocol, HFHomeKitSettingsVendor, NSCopying>
{
    _Bool _isItemGroup;	// 8 = 0x8
    _Bool _isContainedWithinItemGroup;	// 9 = 0x9
    HMHome *_home;	// 16 = 0x10
    HMUser *_user;	// 24 = 0x18
    unsigned long long _numberOfItemsContainedWithinGroup;	// 32 = 0x20
    NSUUID *_uniqueIdentifier;	// 40 = 0x28
    HFUserNameFormatter *_userNameFormatter;	// 48 = 0x30
    HMHome *_hf_home;	// 56 = 0x38
}

+ (id)_fakeHMSettings;	// IMP=0x0000000000182430
+ (void)set_fakeHMSettings:(id)arg1;	// IMP=0x000000000018241e
- (void).cxx_destruct;	// IMP=0x000000000018519e
@property(retain, nonatomic) HMHome *hf_home; // @synthesize hf_home=_hf_home;
@property(readonly, nonatomic) HFUserNameFormatter *userNameFormatter; // @synthesize userNameFormatter=_userNameFormatter;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup; // @synthesize numberOfItemsContainedWithinGroup=_numberOfItemsContainedWithinGroup;
@property(readonly, nonatomic) _Bool isContainedWithinItemGroup; // @synthesize isContainedWithinItemGroup=_isContainedWithinItemGroup;
@property(readonly, nonatomic) _Bool isItemGroup; // @synthesize isItemGroup=_isItemGroup;
@property(readonly, nonatomic) HMUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSSet *homekitObjectIdentifiers;
- (id)incrementAddSceneButtonPresentedCount;	// IMP=0x0000000000185053
- (_Bool)shouldHideAddSceneButton;	// IMP=0x000000000018502c
- (id)setDismissAccessoryFirmwareUpdateOnboarding:(_Bool)arg1;	// IMP=0x0000000000185008
- (_Bool)hasDismissedAccessoryFirmwareUpdateOnboarding;	// IMP=0x0000000000184fe1
- (id)setDismissAccessCodeOnboarding:(_Bool)arg1;	// IMP=0x0000000000184fbd
- (_Bool)hasDismissedAccessCodeOnboarding;	// IMP=0x0000000000184f96
- (id)setDismissWalletKeyExpressModeOnboarding:(_Bool)arg1 forWalletKeyUUID:(id)arg2;	// IMP=0x00000000001848de
- (id)hasDismissedWalletKeyExpressModeOnboardingOnThisDevice;	// IMP=0x00000000001845ed
- (_Bool)_hasDismissedWalletKeyExpressModeOnboarding;	// IMP=0x00000000001845c6
- (_Bool)isAnnounceEnabled;	// IMP=0x000000000018452d
- (id)setEnableAnnounce:(_Bool)arg1;	// IMP=0x0000000000184355
- (id)setDismissedWelcomeUIBanner:(_Bool)arg1;	// IMP=0x00000000001842a4
- (_Bool)hasDismissedWelcomeUIBanner;	// IMP=0x00000000001841ec
- (_Bool)hasCompletedNonOwnerUserHomeSwitchingUI;	// IMP=0x00000000001841c8
- (id)setCompletedNonOwnerUserHomeSwitchingUI:(_Bool)arg1;	// IMP=0x00000000001841a4
- (_Bool)hasDismissedUserSplitMediaAccountWarning;	// IMP=0x000000000018417d
- (id)setDismissUserSplitMediaAccountWarning:(_Bool)arg1;	// IMP=0x0000000000184159
- (_Bool)isAllowiTunesAccountEnabled;	// IMP=0x0000000000184135
- (id)setAllowiTunesAccount:(_Bool)arg1;	// IMP=0x0000000000184114
- (_Bool)isPlaybackInfluencesForYouEnabled;	// IMP=0x00000000001840f0
- (id)setPlaybackInfluencesForYou:(_Bool)arg1;	// IMP=0x00000000001840cf
- (_Bool)isIdentifyVoiceEnabled;	// IMP=0x00000000001840ab
- (id)setEnableIdentifyVoice:(_Bool)arg1;	// IMP=0x000000000018408a
- (id)setDismissCameraRecordingReminderBanner:(_Bool)arg1;	// IMP=0x0000000000184066
- (_Bool)hasDismissedCameraRecordingReminderBanner;	// IMP=0x000000000018403f
- (id)setDismissCameraRecordingOnboarding:(_Bool)arg1;	// IMP=0x000000000018401b
- (_Bool)hasDismissedCameraRecordingOnboarding;	// IMP=0x0000000000183ff4
- (id)setDismissNaturalLightingOnboarding:(_Bool)arg1;	// IMP=0x0000000000183fd0
- (_Bool)hasDismissedNaturalLightingOnboarding;	// IMP=0x0000000000183fa9
- (id)setDismissTVViewingProfilesReminderBanner:(_Bool)arg1;	// IMP=0x0000000000183f85
- (_Bool)hasDismissedTVViewingProfilesReminderBanner;	// IMP=0x0000000000183f5e
- (id)setDismissTVViewingProfilesOnboarding:(_Bool)arg1;	// IMP=0x0000000000183f3a
- (_Bool)hasDismissedTVViewingProfilesOnboarding;	// IMP=0x0000000000183f13
- (id)setDismissHomeTheaterOnboarding:(_Bool)arg1;	// IMP=0x0000000000183eef
- (_Bool)hasDismissedHomeTheaterOnboarding;	// IMP=0x0000000000183ec8
- (id)setDismissAnnounceOnboarding:(_Bool)arg1;	// IMP=0x0000000000183ea4
- (_Bool)hasDismissedAnnounceOnboarding;	// IMP=0x0000000000183e7d
- (id)setDismissIdentifyVoiceReminderBanner:(_Bool)arg1;	// IMP=0x0000000000183e59
- (_Bool)hasDismissedIdentifyVoiceReminderBanner;	// IMP=0x0000000000183e32
- (id)setDismissIdentifyVoiceOnboarding:(_Bool)arg1;	// IMP=0x0000000000183e0e
- (_Bool)hasDismissedVoiceProfileOnboarding;	// IMP=0x0000000000183de7
- (void)_setFakeBoolSettingsValueForKeyPath:(id)arg1 newValue:(_Bool)arg2;	// IMP=0x0000000000183c4f
- (_Bool)_getFakeBoolSettingsValueForKeyPath:(id)arg1 defaultValue:(_Bool)arg2;	// IMP=0x0000000000183977
- (id)_incrementSettingsValueForKeyPath:(id)arg1 stepValue:(long long)arg2 maximumValue:(long long)arg3 settingsType:(unsigned long long)arg4;	// IMP=0x00000000001837ec
- (_Bool)_isSettingsValueForKeyPath:(id)arg1 atMaximumValue:(long long)arg2 settingsType:(unsigned long long)arg3;	// IMP=0x000000000018378f
- (id)_setBoolSettingsValueForKeyPath:(id)arg1 newValue:(_Bool)arg2 settingsType:(unsigned long long)arg3;	// IMP=0x000000000018368f
- (_Bool)_getBoolSettingsValueForKeyPath:(id)arg1 defaultValue:(_Bool)arg2 settingsType:(unsigned long long)arg3;	// IMP=0x00000000001835c3
- (id)_setSettingsValueForKeyPath:(id)arg1 settingsType:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000183244
- (id)_getSettingsValueForKeyPath:(id)arg1 defaultValue:(id)arg2 settingsType:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000182e1a
- (_Bool)_hasValidPrivateSettings;	// IMP=0x0000000000182db7
- (id)_privateSettings;	// IMP=0x0000000000182d10
- (id)_privateSettingsValueManager;	// IMP=0x0000000000182c1a
@property(readonly, nonatomic) _Bool hasValidSettings;
@property(readonly) HMSettings *settings;
@property(readonly, nonatomic) HFHomeKitSettingsValueManager *hf_settingsValueManager;
@property(readonly, nonatomic) HFHomeKitSettingsAdapterManager *hf_settingsAdapterManager;
@property(readonly, nonatomic) NSSet *hf_dependentHomeKitObjectsForDownstreamItems;
- (id)_accessDescription;	// IMP=0x000000000018276b
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x00000000001825a3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001824fc
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, nonatomic) unsigned long long nameStyle;
- (id)initWithHome:(id)arg1 user:(id)arg2 nameStyle:(unsigned long long)arg3;	// IMP=0x00000000001822c0
- (id)init;	// IMP=0x000000000018220b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
