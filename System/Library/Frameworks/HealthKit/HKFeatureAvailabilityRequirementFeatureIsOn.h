//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKFeatureAvailabilityRequirement-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementFeatureIsOn <HKFeatureAvailabilityRequirement>
{
    _Bool _isOnWhenSettingIsAbsent;	// 8 = 0x8
    NSString *_settingsOnKey;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000097f4a
+ (id)requirementIdentifier;	// IMP=0x0000000000097c81
- (void).cxx_destruct;	// IMP=0x00000000000980d5
@property(readonly, nonatomic) _Bool isOnWhenSettingIsAbsent; // @synthesize isOnWhenSettingIsAbsent=_isOnWhenSettingIsAbsent;
@property(readonly, copy, nonatomic) NSString *settingsOnKey; // @synthesize settingsOnKey=_settingsOnKey;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000097ff3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000097f52
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000097f3f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000097e36
- (id)isSatisfiedWithOnboardingRecord:(id)arg1 dataSource:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000097d01
@property(readonly, nonatomic) NSString *requirementDescription;
- (id)initWithFeatureIdentifier:(id)arg1 settingsOnKey:(id)arg2 isOnWhenSettingIsAbsent:(_Bool)arg3;	// IMP=0x0000000000097bf7
- (id)initWithFeatureIdentifier:(id)arg1 isOnWhenSettingIsAbsent:(_Bool)arg2;	// IMP=0x0000000000097bd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

