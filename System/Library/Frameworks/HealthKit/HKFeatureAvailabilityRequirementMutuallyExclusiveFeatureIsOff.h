//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKObservableFeatureAvailabilityRequirement-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementMutuallyExclusiveFeatureIsOff : NSObject <HKObservableFeatureAvailabilityRequirement>
{
    _Bool _isOnWhenSettingIsAbsent;	// 8 = 0x8
    NSString *_featureIdentifier;	// 16 = 0x10
    NSString *_settingsOnKey;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000db4f3
+ (id)requirementIdentifier;	// IMP=0x00000000000db0b1
- (void).cxx_destruct;	// IMP=0x00000000000db683
@property(readonly, nonatomic) _Bool isOnWhenSettingIsAbsent; // @synthesize isOnWhenSettingIsAbsent=_isOnWhenSettingIsAbsent;
@property(readonly, copy, nonatomic) NSString *settingsOnKey; // @synthesize settingsOnKey=_settingsOnKey;
@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000db583
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000db4fb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000db4e8
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000db405
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;	// IMP=0x00000000000db38c
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;	// IMP=0x00000000000db27c
- (_Bool)_isFeatureOnWithOnboardingRecord:(id)arg1;	// IMP=0x00000000000db18f
- (_Bool)_isSatisfiedWithOnboardingRecord:(id)arg1;	// IMP=0x00000000000db17a
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000db0ee
@property(readonly, nonatomic) NSString *requirementDescription;
- (id)initWithFeatureIdentifier:(id)arg1 settingsOnKey:(id)arg2 isOnWhenSettingIsAbsent:(_Bool)arg3;	// IMP=0x00000000000db00d
- (id)initWithFeatureIdentifier:(id)arg1 isOnWhenSettingIsAbsent:(_Bool)arg2;	// IMP=0x00000000000dafee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

