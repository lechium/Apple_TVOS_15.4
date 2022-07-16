//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKFeatureAvailabilityOnboardingEligibility, HKFeatureAvailabilityRequirementSet, HKFeatureOnboardingRecord, HKFeatureSettings, HKOnboardingCompletion, HKPairedFeatureAttributes, HKRegionAvailability, NSData, NSDate, NSNumber, NSObject, NSString;
@protocol HKFeatureAvailabilityProvidingObserver, OS_dispatch_queue;

@protocol HKFeatureAvailabilityProviding
@property(readonly, copy, nonatomic) NSString *featureIdentifier;
- (void)resetOnboardingWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)removeFeatureSettingValueForKey:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setFeatureSettingNumber:(NSNumber *)arg1 forKey:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)setFeatureSettingString:(NSString *)arg1 forKey:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)setFeatureSettingData:(NSData *)arg1 forKey:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)saveOnboardingCompletion:(HKOnboardingCompletion *)arg1 settings:(HKFeatureSettings *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(NSString *)arg1 countryCodeProvenance:(long long)arg2 date:(NSDate *)arg3 settings:(HKFeatureSettings *)arg4 completion:(void (^)(_Bool, NSError *))arg5;
- (void)unregisterObserver:(id <HKFeatureAvailabilityProvidingObserver>)arg1;
- (void)registerObserver:(id <HKFeatureAvailabilityProvidingObserver>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (HKRegionAvailability *)regionAvailabilityWithError:(id *)arg1;
- (HKFeatureAvailabilityRequirementSet *)featureAvailabilityRequirementsWithError:(id *)arg1;
- (HKPairedFeatureAttributes *)pairedFeatureAttributesWithError:(id *)arg1;
- (NSDate *)earliestDateLowestOnboardingVersionCompletedWithError:(id *)arg1;
- (NSNumber *)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)arg1;
- (NSNumber *)onboardedCountryCodeSupportedStateWithError:(id *)arg1;
- (HKFeatureAvailabilityOnboardingEligibility *)onboardingEligibilityForCountryCode:(NSString *)arg1 error:(id *)arg2;
- (NSNumber *)canCompleteOnboardingForCountryCode:(NSString *)arg1 error:(id *)arg2;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (NSNumber *)isCurrentOnboardingVersionCompletedWithError:(id *)arg1;
- (NSNumber *)highestOnboardingVersionCompletedWithError:(id *)arg1;
- (void)getFeatureOnboardingRecordWithCompletion:(void (^)(HKFeatureOnboardingRecord *, NSError *))arg1;
- (HKFeatureOnboardingRecord *)featureOnboardingRecordWithError:(id *)arg1;
@end

