//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSOrderedSet, NSString;

@interface HKFeatureAvailabilityRequirementsEvaluation : NSObject <NSCopying, NSSecureCoding>
{
    NSOrderedSet *_requirementIdentifiersOrderedByPriority;	// 8 = 0x8
    NSDictionary *_satisfactionByRequirementIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e48a1
+ (id)emptyEvaluation;	// IMP=0x00000000000e41da
+ (id)evaluationOfRequirements:(id)arg1 dataSource:(id)arg2 overrides:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000e3de9
- (void).cxx_destruct;	// IMP=0x00000000000e4a74
@property(readonly, copy, nonatomic) NSDictionary *satisfactionByRequirementIdentifier; // @synthesize satisfactionByRequirementIdentifier=_satisfactionByRequirementIdentifier;
@property(readonly, copy, nonatomic) NSOrderedSet *requirementIdentifiersOrderedByPriority; // @synthesize requirementIdentifiersOrderedByPriority=_requirementIdentifiersOrderedByPriority;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e49f2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e48a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e4896
- (id)description;	// IMP=0x00000000000e4855
- (unsigned long long)hash;	// IMP=0x00000000000e4816
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e4783
- (id)copyUpdatingRequirementForIdentifier:(id)arg1 isSatisfied:(_Bool)arg2;	// IMP=0x00000000000e4619
@property(readonly, copy, nonatomic) NSArray *unsatisfiedRequirementIdentifiers;
- (_Bool)areAllRequirementsSatisfied;	// IMP=0x00000000000e4504
- (_Bool)isRequirementSatisfiedWithIdentifier:(id)arg1;	// IMP=0x00000000000e442a
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000000e43f5
@property(readonly, nonatomic) NSString *highestPriorityUnsatisfiedRequirement;
- (id)initWithRequirementIdentifiersOrderedByPriority:(id)arg1 satisfactionByRequirementIdentifier:(id)arg2;	// IMP=0x00000000000e3d30

@end

