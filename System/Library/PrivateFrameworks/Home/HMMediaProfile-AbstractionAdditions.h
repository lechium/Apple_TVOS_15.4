//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMMediaProfile.h>

#import <Home/HFMediaProfileContainer-Protocol.h>
#import <Home/HFServiceNameComponentsProviding-Protocol.h>
#import <Home/HFUIRepresentableHomeObject-Protocol.h>

@class HFHomeKitSettingsAdapterManager, HFHomeKitSettingsValueManager, HFServiceNameComponents, HMAccessory, HMAccessorySettings, HMHome, HMMediaSession, HMRoom, HMSymptomsHandler, NSDate, NSSet, NSString, NSUUID;
@protocol HFHomeKitObject, HFMediaValueSource, HFUIRepresentableHomeObject, HMMediaObjectDelegate;

@interface HMMediaProfile (AbstractionAdditions) <HFUIRepresentableHomeObject, HFMediaProfileContainer, HFServiceNameComponentsProviding>
- (id)hf_associatedAccessories;	// IMP=0x0000000000037401
- (id)hf_containedProfiles;	// IMP=0x00000000000373ef
- (id)hf_containedCharacteristics;	// IMP=0x0000000000037379
- (id)hf_containedServices;	// IMP=0x0000000000037303
- (Class)hf_itemClass;	// IMP=0x00000000000372f2
@property(readonly, nonatomic) id <HFUIRepresentableHomeObject> hf_topLevelUIRepresentableHomeObject;
@property(readonly, nonatomic) NSSet *hf_accessories;
@property(readonly, nonatomic) NSSet *hf_profiles;
@property(readonly, nonatomic) NSSet *hf_services;
- (unsigned long long)hf_preferredUserSelectionType;	// IMP=0x00000000001e2dec
- (id)hf_preferredMediaUser;	// IMP=0x00000000001e2d80
@property(readonly, nonatomic) _Bool hf_supportsPreferredMediaUser;
@property(readonly, nonatomic) _Bool hf_supportsHomeTheater;
- (id)hf_destination;	// IMP=0x00000000001e2bb6
- (id)hf_updateDateAdded:(id)arg1;	// IMP=0x00000000001e2b45
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, copy, nonatomic) NSString *hf_displayName;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x00000000001e2aa1
- (id)hf_updateIsFavorite:(_Bool)arg1;	// IMP=0x00000000001e2a42
@property(readonly, nonatomic) _Bool hf_shouldShowInFavorites;
@property(readonly, nonatomic) _Bool hf_hasSetFavorite;
@property(readonly, nonatomic) _Bool hf_isFavorite;
- (id)hf_fetchLog:(id)arg1 timeout:(double)arg2;	// IMP=0x00000000001e2907
- (id)hf_fetchLogListWithTimeout:(double)arg1;	// IMP=0x00000000001e288b
- (id)hf_idsDeviceIdentifierWithError:(id *)arg1;	// IMP=0x00000000001e27e5
- (id)hf_siriLanguageOptionsManager;	// IMP=0x00000000001e25fa
- (id)hf_mediaAccessoryCommonSettingsManager;	// IMP=0x00000000001e24ca
@property(readonly, nonatomic) HFHomeKitSettingsValueManager *hf_settingsValueManager;
- (id)hf_isEitherHomePodMediaAccountOrHomeMediaAccountPresent;	// IMP=0x00000000001e1bd6
- (id)hf_homePodMediaAccountIsMismatchedWithHomeMediaAccount;	// IMP=0x00000000001e1258
- (id)hf_homePodSupportsMultiUserLanguage;	// IMP=0x00000000001e1250
- (id)hf_appleMusicCurrentLoggedInAccountDSID;	// IMP=0x00000000001e1248
- (id)hf_appleMusicCurrentLoggedInAccount;	// IMP=0x00000000001e1240
@property(readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup;
@property(readonly, nonatomic) _Bool isContainedWithinItemGroup;
@property(readonly, nonatomic) _Bool isItemGroup;
@property(readonly, nonatomic) NSSet *homekitObjectIdentifiers;
@property(readonly, nonatomic) _Bool hasValidSettings;
@property(readonly, copy, nonatomic) NSString *hf_mediaRouteIdentifier;
@property(readonly, copy, nonatomic) NSSet *hf_deviceIdentifiers;
@property(readonly, nonatomic) _Bool hf_homePodIsCapableOfShowingSplitAccountError;
@property(readonly, nonatomic) _Bool hf_homePodSupportsMultiUser;
@property(readonly, nonatomic) _Bool hf_supportsMultiUser;
@property(readonly, nonatomic) HMAccessory *hf_backingAccessory;
@property(readonly, nonatomic) NSSet *hf_dependentHomeKitObjectsForDownstreamItems;
@property(readonly, copy, nonatomic) NSString *hf_categoryLowercaseLocalizedDescription;
@property(readonly, copy, nonatomic) NSString *hf_categoryCapitalizedLocalizedDescription;
@property(readonly, nonatomic) HFHomeKitSettingsAdapterManager *hf_settingsAdapterManager;
@property(readonly, nonatomic) id <HFMediaValueSource> hf_mediaValueSource;
@property(readonly, nonatomic) _Bool hf_isAccessorySettingsReachable;
@property(readonly, nonatomic) _Bool hf_isAppleMusicReachable;
@property(readonly, nonatomic) _Bool hf_supportsSoftwareUpdate;
@property(readonly, nonatomic) _Bool hf_showsAudioSettings;
@property(readonly, nonatomic) _Bool hf_supportsMusicAlarm;
@property(readonly, nonatomic) _Bool hf_supportsStereoPairing;
@property(readonly, nonatomic) _Bool hf_isReachable;
@property(readonly, nonatomic) NSSet *hf_fakeDebugSymptoms;
@property(readonly, copy) NSSet *symptoms;
@property(readonly, nonatomic) HMSymptomsHandler *symptomsHandler;
- (_Bool)hf_offersAutomation;	// IMP=0x00000000001e03fb
@property(readonly, nonatomic) _Bool hf_isCurrentAccessory;
@property(readonly, nonatomic) __weak HMRoom *hf_parentRoom;
@property(readonly, nonatomic) HMHome *hf_home;
@property(readonly, nonatomic) NSSet *mediaProfiles;
@property(readonly, nonatomic) NSSet *accessories;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)hf_rootAccessoryLikeHomeKitObject;	// IMP=0x0000000000236597
@property(readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak id <HMMediaObjectDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *hf_prettyDescription;
@property(readonly, copy, nonatomic) HMMediaSession *mediaSession;
@property(readonly) HMAccessorySettings *settings;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

