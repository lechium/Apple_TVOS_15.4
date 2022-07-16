//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HKFeatureAvailabilityRequirements : NSObject
{
}

+ (id)countryIsSupportedOnWatchForFeatureWithIdentifier:(id)arg1 isSupportedIfCountryListMissing:(_Bool)arg2;	// IMP=0x00000000000b40b7
+ (id)wristDetectionIsEnabledForActiveWatch;	// IMP=0x00000000000b409e
+ (id)seedIsNotExpiredForFeatureWithIdentifier:(id)arg1;	// IMP=0x00000000000b4051
+ (id)profileIsNotFamilySetupPairingProfile;	// IMP=0x00000000000b4038
+ (id)onboardingRecordIsPresentForFeatureWithIdentifier:(id)arg1;	// IMP=0x00000000000b3feb
+ (id)onboardingRecordIsNotPresentForMutuallyExclusiveFeatureWithIdentifier:(id)arg1;	// IMP=0x00000000000b3f9e
+ (id)onboardingRecordIsNotPresentForFeatureWithIdentifier:(id)arg1;	// IMP=0x00000000000b3f51
+ (id)onboardedAtLeastDaysAgo:(long long)arg1 featureIdentifier:(id)arg2;	// IMP=0x00000000000b3ef5
+ (id)notInStoreDemoMode;	// IMP=0x00000000000b3edc
+ (id)notAgeGatedForUserDefaultsKey:(id)arg1;	// IMP=0x00000000000b3e8f
+ (id)mutuallyExclusiveFeatureIsOffWithIdentifier:(id)arg1 isOnIfSettingIsAbsent:(_Bool)arg2;	// IMP=0x00000000000b3e33
+ (id)heartRateIsEnabledInPrivacy;	// IMP=0x00000000000b3e1a
+ (id)healthAppIsNotHidden;	// IMP=0x00000000000b3e01
+ (id)featureIsOnWithIdentifier:(id)arg1 isOnIfSettingIsAbsent:(_Bool)arg2;	// IMP=0x00000000000b3da5
+ (id)featureIsNotRemotelyDisabledWithIdentifier:(id)arg1;	// IMP=0x00000000000b3d58
+ (id)featureFlagIsEnabled:(_Bool)arg1;	// IMP=0x00000000000b3d24
+ (id)countryIsSupportedOnLocalDeviceForFeatureWithIdentifier:(id)arg1;	// IMP=0x00000000000b3cd7
+ (id)countryIsSupportedOnActiveRemoteDeviceForFeatureWithIdentifier:(id)arg1 isSupportedIfCountryListMissing:(_Bool)arg2;	// IMP=0x00000000000b3c7b
+ (id)capabilityIsSupportedOnActiveRemoteDeviceForFeatureWithIdentifier:(id)arg1;	// IMP=0x00000000000b3c2e
+ (id)activeRemoteDeviceIsPresentForFeatureWithIdentifier:(id)arg1;	// IMP=0x00000000000b3be1

@end
