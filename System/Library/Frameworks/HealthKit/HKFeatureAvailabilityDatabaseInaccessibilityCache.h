//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKFeatureAvailabilityProviding-Protocol.h>

@class NSString;
@protocol HKFeatureAvailabilityCacheProviding, HKFeatureAvailabilityProviding, OS_os_log;

@interface HKFeatureAvailabilityDatabaseInaccessibilityCache : NSObject <HKFeatureAvailabilityProviding>
{
    id <HKFeatureAvailabilityProviding> _featureAvailabilityProviding;	// 8 = 0x8
    id <HKFeatureAvailabilityCacheProviding> _cacheProviding;	// 16 = 0x10
    NSObject<OS_os_log> *_loggingCategory;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002d515
- (void)saveOnboardingCompletion:(id)arg1 settings:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002d4ff
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)arg1 countryCodeProvenance:(long long)arg2 date:(id)arg3 settings:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000002d4e9
- (void)resetOnboardingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d4d3
- (void)registerObserver:(id)arg1 queue:(id)arg2;	// IMP=0x000000000002d4bd
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000002d4a7
- (id)regionAvailabilityWithError:(id *)arg1;	// IMP=0x000000000002d491
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)arg1;	// IMP=0x000000000002d47b
- (id)onboardedCountryCodeSupportedStateWithError:(id *)arg1;	// IMP=0x000000000002d465
- (id)pairedFeatureAttributesWithError:(id *)arg1;	// IMP=0x000000000002d44f
- (id)onboardingEligibilityForCountryCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002d439
- (id)featureAvailabilityRequirementsWithError:(id *)arg1;	// IMP=0x000000000002d423
- (id)canCompleteOnboardingForCountryCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002d40d
- (void)getFeatureOnboardingRecordWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d3f7
- (id)featureOnboardingRecordWithError:(id *)arg1;	// IMP=0x000000000002d3e1
- (void)removeFeatureSettingValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d3cb
- (void)setFeatureSettingString:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002d3b5
- (void)setFeatureSettingNumber:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002d39f
- (void)setFeatureSettingData:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002d389
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)arg1;	// IMP=0x000000000002d2a5
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d18b
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)arg1;	// IMP=0x000000000002d0b5
- (id)highestOnboardingVersionCompletedWithError:(id *)arg1;	// IMP=0x000000000002cfdf
@property(readonly, copy, nonatomic) NSString *featureIdentifier;
- (id)_processResult:(id)arg1 resultType:(Class)arg2 error:(id)arg3 cacheKey:(id)arg4;	// IMP=0x000000000002cc2e
- (id)_processNumber:(id)arg1 error:(id)arg2 cacheKey:(id)arg3;	// IMP=0x000000000002cb86
- (void)_setCachedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002cb0a
- (id)_cachedObjectForKey:(id)arg1;	// IMP=0x000000000002caaa
- (id)_namespacedKeyForKey:(id)arg1;	// IMP=0x000000000002ca14
- (id)description;	// IMP=0x000000000002c998
- (id)initWithFeatureAvailabilityProviding:(id)arg1 backedByCache:(id)arg2 loggingCategory:(id)arg3;	// IMP=0x000000000002c8e1

@end

