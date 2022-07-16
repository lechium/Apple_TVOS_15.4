//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKObservableFeatureAvailabilityRequirement-Protocol.h>

@class NSString;

@interface HKFeatureAvailabilityRequirementCountryIsSupportedOnActiveRemoteDevice <HKObservableFeatureAvailabilityRequirement>
{
    _Bool _isSupportedIfCountryListMissing;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003e7ab
+ (id)requirementIdentifier;	// IMP=0x000000000003e284
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003e831
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003e7b3
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003e6ea
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;	// IMP=0x000000000003e678
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;	// IMP=0x000000000003e416
- (id)isSatisfiedWithOnboardingEligibility:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003e35a
@property(readonly, nonatomic) NSString *requirementDescription;
- (id)initWithFeatureIdentifier:(id)arg1 isSupportedIfCountryListMissing:(_Bool)arg2;	// IMP=0x000000000003e2ac
- (id)initWithFeatureIdentifier:(id)arg1;	// IMP=0x000000000003e298

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
