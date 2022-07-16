//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/NSCopying-Protocol.h>
#import <Trial/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSString, TRIRolloutDeployment;
@protocol TRIFactorPackSetId, TRIRampId;

@interface TRIPartialRolloutRecord : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isShadow;	// 8 = 0x8
    TRIRolloutDeployment *_deployment;	// 16 = 0x10
    NSString<TRIRampId> *_rampId;	// 24 = 0x18
    NSString<TRIFactorPackSetId> *_activeFactorPackSetId;	// 32 = 0x20
    NSNumber *_activeTargetingRuleIndex;	// 40 = 0x28
    NSString<TRIFactorPackSetId> *_targetedFactorPackSetId;	// 48 = 0x30
    NSNumber *_targetedTargetingRuleIndex;	// 56 = 0x38
    long long _status;	// 64 = 0x40
    NSArray *_namespaces;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000046ef2
+ (id)recordWithDeployment:(id)arg1 rampId:(id)arg2 activeFactorPackSetId:(id)arg3 activeTargetingRuleIndex:(id)arg4 targetedFactorPackSetId:(id)arg5 targetedTargetingRuleIndex:(id)arg6 status:(long long)arg7 namespaces:(id)arg8 isShadow:(_Bool)arg9;	// IMP=0x0000000000046445
+ (id)partialRecordWithFullRecord:(id)arg1;	// IMP=0x000000000001774e
- (void).cxx_destruct;	// IMP=0x000000000004838a
@property(readonly, nonatomic) _Bool isShadow; // @synthesize isShadow=_isShadow;
@property(readonly, nonatomic) NSArray *namespaces; // @synthesize namespaces=_namespaces;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSNumber *targetedTargetingRuleIndex; // @synthesize targetedTargetingRuleIndex=_targetedTargetingRuleIndex;
@property(readonly, nonatomic) NSString<TRIFactorPackSetId> *targetedFactorPackSetId; // @synthesize targetedFactorPackSetId=_targetedFactorPackSetId;
@property(readonly, nonatomic) NSNumber *activeTargetingRuleIndex; // @synthesize activeTargetingRuleIndex=_activeTargetingRuleIndex;
@property(readonly, nonatomic) NSString<TRIFactorPackSetId> *activeFactorPackSetId; // @synthesize activeFactorPackSetId=_activeFactorPackSetId;
@property(readonly, nonatomic) NSString<TRIRampId> *rampId; // @synthesize rampId=_rampId;
@property(readonly, nonatomic) TRIRolloutDeployment *deployment; // @synthesize deployment=_deployment;
- (id)init;	// IMP=0x000000000004832b
- (id)description;	// IMP=0x000000000004822a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000480e9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000046efa
- (unsigned long long)hash;	// IMP=0x0000000000046e0e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000046da6
- (_Bool)isEqualToRecord:(id)arg1;	// IMP=0x000000000004699f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000046994
- (id)copyWithReplacementIsShadow:(_Bool)arg1;	// IMP=0x0000000000046937
- (id)copyWithReplacementNamespaces:(id)arg1;	// IMP=0x00000000000468b7
- (id)copyWithReplacementStatus:(long long)arg1;	// IMP=0x0000000000046852
- (id)copyWithReplacementTargetedTargetingRuleIndex:(id)arg1;	// IMP=0x00000000000467d2
- (id)copyWithReplacementTargetedFactorPackSetId:(id)arg1;	// IMP=0x0000000000046752
- (id)copyWithReplacementActiveTargetingRuleIndex:(id)arg1;	// IMP=0x00000000000466d8
- (id)copyWithReplacementActiveFactorPackSetId:(id)arg1;	// IMP=0x000000000004665e
- (id)copyWithReplacementRampId:(id)arg1;	// IMP=0x00000000000465e4
- (id)copyWithReplacementDeployment:(id)arg1;	// IMP=0x000000000004656a
- (id)initWithDeployment:(id)arg1 rampId:(id)arg2 activeFactorPackSetId:(id)arg3 activeTargetingRuleIndex:(id)arg4 targetedFactorPackSetId:(id)arg5 targetedTargetingRuleIndex:(id)arg6 status:(long long)arg7 namespaces:(id)arg8 isShadow:(_Bool)arg9;	// IMP=0x0000000000046208

@end
