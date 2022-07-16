//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>

@class NSArray, NSNumber, NSString, TRIClientRolloutArtifact, TRIRolloutDeployment;
@protocol TRIFactorPackSetId, TRIRampId;

@interface TRIRolloutRecord : NSObject <NSCopying>
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
    TRIClientRolloutArtifact *_artifact;	// 80 = 0x50
}

+ (id)recordWithDeployment:(id)arg1 rampId:(id)arg2 activeFactorPackSetId:(id)arg3 activeTargetingRuleIndex:(id)arg4 targetedFactorPackSetId:(id)arg5 targetedTargetingRuleIndex:(id)arg6 status:(long long)arg7 namespaces:(id)arg8 isShadow:(_Bool)arg9 artifact:(id)arg10;	// IMP=0x000000000000ab45
- (void).cxx_destruct;	// IMP=0x000000000000b8ea
@property(readonly, nonatomic) TRIClientRolloutArtifact *artifact; // @synthesize artifact=_artifact;
@property(readonly, nonatomic) _Bool isShadow; // @synthesize isShadow=_isShadow;
@property(readonly, nonatomic) NSArray *namespaces; // @synthesize namespaces=_namespaces;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSNumber *targetedTargetingRuleIndex; // @synthesize targetedTargetingRuleIndex=_targetedTargetingRuleIndex;
@property(readonly, nonatomic) NSString<TRIFactorPackSetId> *targetedFactorPackSetId; // @synthesize targetedFactorPackSetId=_targetedFactorPackSetId;
@property(readonly, nonatomic) NSNumber *activeTargetingRuleIndex; // @synthesize activeTargetingRuleIndex=_activeTargetingRuleIndex;
@property(readonly, nonatomic) NSString<TRIFactorPackSetId> *activeFactorPackSetId; // @synthesize activeFactorPackSetId=_activeFactorPackSetId;
@property(readonly, nonatomic) NSString<TRIRampId> *rampId; // @synthesize rampId=_rampId;
@property(readonly, nonatomic) TRIRolloutDeployment *deployment; // @synthesize deployment=_deployment;
- (id)init;	// IMP=0x000000000000b881
- (id)description;	// IMP=0x000000000000b773
- (unsigned long long)hash;	// IMP=0x000000000000b67a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000b612
- (_Bool)isEqualToRecord:(id)arg1;	// IMP=0x000000000000b189
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000b17e
- (id)copyWithReplacementArtifact:(id)arg1;	// IMP=0x000000000000b0fe
- (id)copyWithReplacementIsShadow:(_Bool)arg1;	// IMP=0x000000000000b098
- (id)copyWithReplacementNamespaces:(id)arg1;	// IMP=0x000000000000b00f
- (id)copyWithReplacementStatus:(long long)arg1;	// IMP=0x000000000000afa1
- (id)copyWithReplacementTargetedTargetingRuleIndex:(id)arg1;	// IMP=0x000000000000af18
- (id)copyWithReplacementTargetedFactorPackSetId:(id)arg1;	// IMP=0x000000000000ae8f
- (id)copyWithReplacementActiveTargetingRuleIndex:(id)arg1;	// IMP=0x000000000000ae0c
- (id)copyWithReplacementActiveFactorPackSetId:(id)arg1;	// IMP=0x000000000000ad89
- (id)copyWithReplacementRampId:(id)arg1;	// IMP=0x000000000000ad06
- (id)copyWithReplacementDeployment:(id)arg1;	// IMP=0x000000000000ac83
- (id)initWithDeployment:(id)arg1 rampId:(id)arg2 activeFactorPackSetId:(id)arg3 activeTargetingRuleIndex:(id)arg4 targetedFactorPackSetId:(id)arg5 targetedTargetingRuleIndex:(id)arg6 status:(long long)arg7 namespaces:(id)arg8 isShadow:(_Bool)arg9 artifact:(id)arg10;	// IMP=0x000000000000a874

@end

