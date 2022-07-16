//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKActiveWatchRemoteFeatureAvailabilityDataSource, HKHealthStore, HKKeyValueDomain, HKMobileCountryCodeManager, HKObserverSet, NSDate, NSMutableSet, NSNumber, NSString, NSUserDefaults;

@interface HKHeartRhythmAvailability : NSObject
{
    struct os_unfair_lock_s _cacheLock;	// 8 = 0x8
    struct os_unfair_lock_s _onboardingKeysReadLock;	// 12 = 0xc
    NSNumber *_electrocardiogramRescindedStatusCache;	// 16 = 0x10
    int _onboardingStateDidChangeNotificationToken;	// 24 = 0x18
    int _featureAvailabilityConditionsDidUpdateNotificationToken;	// 28 = 0x1c
    int _userCharacteristicsDidChangeNotificationToken;	// 32 = 0x20
    HKHealthStore *_healthStore;	// 40 = 0x28
    HKKeyValueDomain *_keyValueDomain;	// 48 = 0x30
    NSUserDefaults *_heartRhythmUserDefaults;	// 56 = 0x38
    HKObserverSet *_heartRhythmAvailabilityObservers;	// 64 = 0x40
    HKActiveWatchRemoteFeatureAvailabilityDataSource *_electrocardiogramAvailabilityDataSource;	// 72 = 0x48
    NSMutableSet *_onboardingKeysReadSet;	// 80 = 0x50
    HKMobileCountryCodeManager *_mobileCountryCodeManager;	// 88 = 0x58
    NSString *_currentCountryCode;	// 96 = 0x60
}

+ (id)_history:(id)arg1 addCurrentOnboardingVersionCompletedIfApplicable:(long long)arg2 countryCode:(id)arg3;	// IMP=0x0000000000192faa
+ (id)_onboardingHistoryWithVersionCompletedKey:(id)arg1 keyValueDomain:(id)arg2;	// IMP=0x0000000000192d3b
+ (id)electrocardiogramOnboardingHistoryMaxKnownWithKeyValueDomain:(id)arg1;	// IMP=0x0000000000192a8c
+ (long long)currentElectrocardiogramOnboardingVersion;	// IMP=0x00000000001925c2
+ (long long)_electrocardiogramRescindedStatusWithDataSource:(id)arg1;	// IMP=0x0000000000191fd8
+ (id)_availabilityPlistURL;	// IMP=0x0000000000191f11
+ (id)_ECG2SupportedCountriesOnDevice:(id)arg1;	// IMP=0x0000000000191e37
+ (id)_ECG2SupportedCountriesOnDevice;	// IMP=0x0000000000191dcd
+ (_Bool)_isECG2SupportedForCountryCode:(id)arg1 andPhoneDevice:(id)arg2;	// IMP=0x0000000000191c04
+ (_Bool)_isECG2SupportedForCountryCode:(id)arg1 andWatchDevice:(id)arg2;	// IMP=0x0000000000191a40
+ (_Bool)isECG1SupportedOnlyForCountryCode:(id)arg1;	// IMP=0x000000000019199b
+ (_Bool)isElectrocardiogram2SupportedWithCountryCode:(id)arg1;	// IMP=0x0000000000190c5a
+ (_Bool)_isECG1SupportedOnCompanionDevice:(id)arg1 geolocatedCountryCode:(id)arg2;	// IMP=0x00000000001908b2
+ (_Bool)_isElectrocardiogramSupportedOnPhone:(id)arg1 geolocatedCountryCode:(id)arg2;	// IMP=0x0000000000190833
+ (_Bool)_isElectrocardiogramSupportedOnPhone:(id)arg1;	// IMP=0x0000000000190547
+ (_Bool)electrocardiogramSupportedForDevice:(id)arg1;	// IMP=0x00000000001904d1
+ (_Bool)isElectrocardiogramSupportedOnPairedPhoneWithGeolocatedCountryCode:(id)arg1;	// IMP=0x00000000001902f5
+ (_Bool)isElectrocardiogramSupportedOnPairedPhone;	// IMP=0x0000000000190091
+ (unsigned long long)electrocardiogramSupportedState;	// IMP=0x000000000018f043
+ (unsigned long long)_electrocardiogramSupportedStateForDeviceRegion:(id)arg1;	// IMP=0x000000000018efe7
+ (_Bool)isElectrocardiogramAppDeletableForActiveWatch;	// IMP=0x000000000018ef6b
+ (unsigned long long)electrocardiogramSupportedStateForActiveWatch;	// IMP=0x000000000018ee75
+ (unsigned long long)electrocardiogramSupportedStateForWatch:(id)arg1;	// IMP=0x000000000018ec20
+ (_Bool)isElectrocardiogramSupportedOnAllWatches;	// IMP=0x000000000018e935
+ (_Bool)isElectrocardiogramSupportedOnActiveWatch;	// IMP=0x000000000018e75b
+ (_Bool)isElectrocardiogramSupportedOnAnyWatch;	// IMP=0x000000000018e4ae
+ (_Bool)isElectrocardiogramSupportedOnWatch:(id)arg1;	// IMP=0x000000000018e27d
+ (_Bool)isElectrocardiogramAppInstallableForLocale:(id)arg1;	// IMP=0x000000000018d9e1
+ (_Bool)shouldInstallWatchApp;	// IMP=0x000000000018d4d9
+ (id)_onboardingCountryCodeKeyFromCompletedKey:(id)arg1;	// IMP=0x000000000018ae7b
+ (id)_onboardingHistoryKeyFromCompletedKey:(id)arg1;	// IMP=0x000000000018adde
+ (id)featureAvailabilityUserDefaults;	// IMP=0x000000000018a60e
+ (id)currentDeviceRegionCode;	// IMP=0x000000000018a5f5
+ (_Bool)isCompanionRegionCheckEnabledOnPairedPhone;	// IMP=0x000000000018a393
+ (_Bool)isCompanionRegionCheckEnabledForDevice:(id)arg1;	// IMP=0x000000000018a234
+ (_Bool)isCompanionRegionCheckEnabledForActiveWatch;	// IMP=0x000000000018a1ce
+ (Class)deviceRegionFeatureSupportedStateProviderForCompanionDevice:(id)arg1;	// IMP=0x000000000018a1bd
+ (Class)deviceRegionFeatureSupportedStateProviderForCurrentWatchOSDevice;	// IMP=0x000000000018a1ac
+ (id)pairedDevices;	// IMP=0x000000000018a154
+ (id)activePairedDevice;	// IMP=0x000000000018a0a3
+ (_Bool)isHeartRateEnabledInPrivacy;	// IMP=0x00000000001894c9
- (void).cxx_destruct;	// IMP=0x0000000000193586
@property(retain, nonatomic) NSString *currentCountryCode; // @synthesize currentCountryCode=_currentCountryCode;
@property(retain, nonatomic) HKMobileCountryCodeManager *mobileCountryCodeManager; // @synthesize mobileCountryCodeManager=_mobileCountryCodeManager;
@property(nonatomic) int userCharacteristicsDidChangeNotificationToken; // @synthesize userCharacteristicsDidChangeNotificationToken=_userCharacteristicsDidChangeNotificationToken;
@property(nonatomic) int featureAvailabilityConditionsDidUpdateNotificationToken; // @synthesize featureAvailabilityConditionsDidUpdateNotificationToken=_featureAvailabilityConditionsDidUpdateNotificationToken;
@property(nonatomic) int onboardingStateDidChangeNotificationToken; // @synthesize onboardingStateDidChangeNotificationToken=_onboardingStateDidChangeNotificationToken;
@property(retain, nonatomic) NSMutableSet *onboardingKeysReadSet; // @synthesize onboardingKeysReadSet=_onboardingKeysReadSet;
@property(retain, nonatomic) HKActiveWatchRemoteFeatureAvailabilityDataSource *electrocardiogramAvailabilityDataSource; // @synthesize electrocardiogramAvailabilityDataSource=_electrocardiogramAvailabilityDataSource;
@property(retain, nonatomic) HKObserverSet *heartRhythmAvailabilityObservers; // @synthesize heartRhythmAvailabilityObservers=_heartRhythmAvailabilityObservers;
@property(retain, nonatomic) NSUserDefaults *heartRhythmUserDefaults; // @synthesize heartRhythmUserDefaults=_heartRhythmUserDefaults;
@property(retain, nonatomic) HKKeyValueDomain *keyValueDomain; // @synthesize keyValueDomain=_keyValueDomain;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(readonly, nonatomic) long long atrialFibrillationDetectionRescindedStatus;
@property(readonly, nonatomic, getter=isAtrialFibrillationDetectionDisabled) _Bool atrialFibrillationDetectionDisabled;
- (_Bool)shouldAdvertiseAtrialFibrillationDetectionForActiveWatch;	// IMP=0x0000000000193253
@property(readonly, nonatomic, getter=isAtrialFibrillationDetectionOnboardingCompleted) _Bool atrialFibrillationDetectionOnboardingCompleted;
@property(readonly, nonatomic, getter=isAtrialFibrillationDetectionSettingEnabled) _Bool atrialFibrillationDetectionSettingEnabled;
- (id)_electrocardiogramOnboardingHistoryKnown;	// IMP=0x000000000019299b
- (id)_electrocardiogramOnboardingHistory;	// IMP=0x000000000019287c
- (id)electrocardiogramOnboardingHistoryType:(long long)arg1;	// IMP=0x0000000000192842
- (_Bool)isElectrocardiogramOnboardingCompletedForAnyOnboardingVersion;	// IMP=0x00000000001925db
@property(readonly, nonatomic) NSDate *electrocardiogramFirstOnboardingCompletedDate;
@property(readonly, nonatomic) long long electrocardiogramRecordingRescindedStatus;
@property(readonly, nonatomic, getter=isElectrocardiogramRecordingDisabled) _Bool electrocardiogramRecordingDisabled;
- (void)_resetElectrocardiogramRescindedStatusCacheWithLock:(_Bool)arg1;	// IMP=0x0000000000192471
- (_Bool)_isECG1SupportedForCountryCode:(id)arg1 watchOSVersion:(unsigned int)arg2 isWatchOSSeedBuild:(_Bool)arg3;	// IMP=0x0000000000191981
- (void)isElectrocardiogramOnboardingAvailableInCurrentLocationForWatch:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000190d42
- (void)isElectrocardiogramOnboardingAvailableInCurrentLocationForActiveWatch:(CDUnknownBlockType)arg1;	// IMP=0x0000000000190cd1
- (_Bool)_shouldAdvertiseECG2UpgradeWithDevice:(id)arg1;	// IMP=0x000000000019004d
- (_Bool)_shouldAdvertiseElectrocardiogramUpgradeForDevice:(id)arg1;	// IMP=0x000000000018ff8a
- (_Bool)shouldAdvertiseElectrocardiogramUpgradeForActivePhone;	// IMP=0x000000000018ff02
- (_Bool)shouldAdvertiseElectrocardiogramUpgradeForActiveWatch;	// IMP=0x000000000018fea7
- (_Bool)_shouldAdvertiseWithAdvertiseECGVersions:(id)arg1;	// IMP=0x000000000018fd59
- (id)_ecg2AvailabilityWithPhoneDevice:(id)arg1;	// IMP=0x000000000018f96e
- (id)_ecg2AvailabilityWithWatchDevice:(id)arg1;	// IMP=0x000000000018f505
- (_Bool)_shouldAdvertiseECG2DirectOnboardingWithWatchDevice:(id)arg1;	// IMP=0x000000000018f4c1
- (_Bool)_shouldAdvertiseECGDirectOnboardingWithDevice:(id)arg1;	// IMP=0x000000000018f2ef
- (_Bool)shouldAdvertiseElectrocardiogramForWatch:(id)arg1;	// IMP=0x000000000018f1c2
- (_Bool)shouldAdvertiseElectrocardiogramForActiveWatch;	// IMP=0x000000000018f0c7
- (_Bool)isElectrocardiogramAppInstallAllowedForWatch:(id)arg1;	// IMP=0x000000000018dd6d
- (void)setAllowInstallingElectrocardiogramWatchApp:(_Bool)arg1;	// IMP=0x000000000018dbbe
- (_Bool)_activePairedDevicesSupportECGAlgorithmVersionTwo:(id)arg1;	// IMP=0x000000000018d441
- (_Bool)activePairedDevicesSupportElectrocardiogramAlgorithmVersion:(long long)arg1;	// IMP=0x000000000018d331
- (void)resetElectrocardiogramOnboarding;	// IMP=0x000000000018cffd
@property(nonatomic, getter=isElectrocardiogramFirstRecordingCompleted) _Bool electrocardiogramFirstRecordingCompleted;
- (void)_setElectrocardiogramOnboardingCompletedForVersion:(long long)arg1 inCountryCode:(id)arg2;	// IMP=0x000000000018cd48
- (void)unitTest_setCurrentCountryCode:(id)arg1;	// IMP=0x000000000018cd36
- (void)unitTest_setElectrocardiogramOnboardingCompletedForVersion:(long long)arg1 countryCode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000018cc55
- (void)setElectrocardiogramOnboardingCompletedVersion:(long long)arg1 countryCode:(id)arg2;	// IMP=0x000000000018cc43
- (void)setElectrocardiogramFirstOnboardingCompletedDate:(id)arg1;	// IMP=0x000000000018cc27
- (void)setElectrocardiogramOnboardingCompleted;	// IMP=0x000000000018cbe2
- (id)_electrocardiogramFirstOnboardingCompletedDate;	// IMP=0x000000000018caa4
- (id)electrocardiogramOnboardingCountryCode;	// IMP=0x000000000018c748
- (long long)electrocardiogramOnboardingCompletedVersionNoCache;	// IMP=0x000000000018c669
- (void)updateElectrocardiogramWatchAppInstallIsAllowed;	// IMP=0x000000000018c621
- (void)updateOnboardingCompletionVersionCache;	// IMP=0x000000000018c5e9
- (_Bool)isElectrocardiogramOnboardingCompletedNoCache;	// IMP=0x000000000018c4eb
@property(readonly, nonatomic, getter=isElectrocardiogramOnboardingCompleted) _Bool electrocardiogramOnboardingCompleted;
- (_Bool)isElectrocardiogramAvailableForOnboardingCountryCode:(id)arg1;	// IMP=0x000000000018c262
- (_Bool)isElectrocardiogramAvailableOnWatch:(id)arg1 countryCode:(id)arg2;	// IMP=0x000000000018c195
- (void)_triggerFeatureAvailabilityUpdateOnPhoneAndWatchWithDelay:(long long)arg1;	// IMP=0x000000000018c007
- (void)_removeFirstOnboardingCompletedDatesForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018bcdd
- (void)_setFirstOnboardingCompletedDate:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000018b826
- (void)_setOnboardingVersionCompleted:(long long)arg1 forKey:(id)arg2 additionalValues:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000018b0d2
- (id)_makeOnboardingHistoryWithVersionCompleted:(long long)arg1 versionCompletedKey:(id)arg2 additionalValues:(id)arg3 countryCodeKey:(id)arg4;	// IMP=0x000000000018af21
- (void)_updateOnboardingCompletionForKey:(id)arg1 andVersion:(long long)arg2;	// IMP=0x000000000018ad2c
- (long long)_getOnboardingVersionForKey:(id)arg1;	// IMP=0x000000000018ab31
- (_Bool)_isOnboardingCompletedForKey:(id)arg1 version:(long long)arg2 useCache:(_Bool)arg3;	// IMP=0x000000000018a63f
- (_Bool)_isOnboardingCompletedForKey:(id)arg1 version:(long long)arg2;	// IMP=0x000000000018a627
- (void)_localeDidChange;	// IMP=0x000000000018a091
- (void)_pairedOrActiveDevicesDidChange:(id)arg1;	// IMP=0x000000000018a041
- (void)_featureAvailabilityConditionsDidUpdate;	// IMP=0x000000000018a00e
- (void)_unregisterForNotifications;	// IMP=0x0000000000189fbc
- (void)_registerForNotifications;	// IMP=0x0000000000189835
- (_Bool)_meetsMinimumAgeRequirementWithMinimumRequiredAge:(long long)arg1 currentDate:(id)arg2;	// IMP=0x0000000000189753
- (_Bool)_meetsMinimumAgeRequirementForElectrocardiogramWithCurrentDate:(id)arg1;	// IMP=0x0000000000189739
- (_Bool)isHeartAgeGatingEnabledOnWatch:(id)arg1 currentDate:(id)arg2;	// IMP=0x00000000001895e2
- (_Bool)isHeartAgeGatingEnabledOnActiveWatchWithCurrentDate:(id)arg1;	// IMP=0x0000000000189563
- (void)notifyHeartRhythmAvailabilityDidUpdate;	// IMP=0x0000000000189497
- (void)removeHeartRhythmAvailabilityObserver:(id)arg1;	// IMP=0x0000000000189481
- (void)addHeartRhythmAvailabilityObserver:(id)arg1;	// IMP=0x000000000018946b
- (void)dealloc;	// IMP=0x000000000018942d
- (id)initWithHealthStore:(id)arg1 currentCountryCode:(id)arg2;	// IMP=0x00000000001893ce
- (id)initWithHealthStore:(id)arg1;	// IMP=0x000000000018928a

@end

