//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>

@class NSString, TRIExperimentDeployment, TRIRolloutDeployment, TRITreatmentContentDescriptor;
@protocol TRIFactorPackSetId;

@interface TRIContentDescriptorUnion : NSObject <NSCopying>
{
    unsigned char _type;	// 8 = 0x8
    TRIExperimentDeployment *_experiment;	// 16 = 0x10
    TRITreatmentContentDescriptor *_treatment;	// 24 = 0x18
    TRIRolloutDeployment *_rollout;	// 32 = 0x20
    NSString<TRIFactorPackSetId> *_factorPackSet;	// 40 = 0x28
}

+ (id)unionWithType:(unsigned char)arg1 experiment:(id)arg2 treatment:(id)arg3 rollout:(id)arg4 factorPackSet:(id)arg5;	// IMP=0x000000000000bed2
- (void).cxx_destruct;	// IMP=0x000000000000c597
@property(readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSet; // @synthesize factorPackSet=_factorPackSet;
@property(readonly, nonatomic) TRIRolloutDeployment *rollout; // @synthesize rollout=_rollout;
@property(readonly, nonatomic) TRITreatmentContentDescriptor *treatment; // @synthesize treatment=_treatment;
@property(readonly, nonatomic) TRIExperimentDeployment *experiment; // @synthesize experiment=_experiment;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
- (id)init;	// IMP=0x000000000000c55f
- (id)description;	// IMP=0x000000000000c4ce
- (unsigned long long)hash;	// IMP=0x000000000000c446
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000c3de
- (_Bool)isEqualToUnion:(id)arg1;	// IMP=0x000000000000c17e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000c173
- (id)copyWithReplacementFactorPackSet:(id)arg1;	// IMP=0x000000000000c10d
- (id)copyWithReplacementRollout:(id)arg1;	// IMP=0x000000000000c0a4
- (id)copyWithReplacementTreatment:(id)arg1;	// IMP=0x000000000000c03b
- (id)copyWithReplacementExperiment:(id)arg1;	// IMP=0x000000000000bfd2
- (id)copyWithReplacementType:(unsigned char)arg1;	// IMP=0x000000000000bf84
- (id)initWithType:(unsigned char)arg1 experiment:(id)arg2 treatment:(id)arg3 rollout:(id)arg4 factorPackSet:(id)arg5;	// IMP=0x000000000000bdee

@end

