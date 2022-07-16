//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TRIExperimentDeployment;

@interface TRIExperimentFactorsState
{
    TRIExperimentDeployment *_deployment;	// 8 = 0x8
    NSString *_treatmentId;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001bc5c
- (void).cxx_destruct;	// IMP=0x000000000001be76
@property(readonly, nonatomic) NSString *treatmentId; // @synthesize treatmentId=_treatmentId;
@property(readonly, nonatomic) TRIExperimentDeployment *deployment; // @synthesize deployment=_deployment;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001bc64
- (id)description;	// IMP=0x000000000001bb8d
- (unsigned long long)hash;	// IMP=0x000000000001bb70
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001bafc
- (_Bool)_isEqualToState:(id)arg1;	// IMP=0x000000000001ba9e
- (id)persisted;	// IMP=0x000000000001b979
- (id)experimentIdentifiers;	// IMP=0x000000000001b8e5
- (id)initWithDeployment:(id)arg1 treatmentId:(id)arg2;	// IMP=0x000000000001b741

@end
