//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface SISchemaABExperimentAllocation
{
    NSString *_experimentId;	// 8 = 0x8
    NSString *_treatmentId;	// 16 = 0x10
    long long _deploymentId;	// 24 = 0x18
    struct {
        unsigned int deploymentId:1;
    } _has;	// 32 = 0x20
    _Bool _hasExperimentId;	// 36 = 0x24
    _Bool _hasTreatmentId;	// 37 = 0x25
}

- (void).cxx_destruct;	// IMP=0x0000000000008491
@property(nonatomic) _Bool hasTreatmentId; // @synthesize hasTreatmentId=_hasTreatmentId;
@property(nonatomic) _Bool hasExperimentId; // @synthesize hasExperimentId=_hasExperimentId;
@property(nonatomic) long long deploymentId; // @synthesize deploymentId=_deploymentId;
@property(copy, nonatomic) NSString *treatmentId; // @synthesize treatmentId=_treatmentId;
@property(copy, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000008243
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000008185
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000007f81
- (unsigned long long)hash;	// IMP=0x0000000000007f0f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007c11
- (void)writeTo:(id)arg1;	// IMP=0x0000000000007b3d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000078e0
- (void)deleteDeploymentId;	// IMP=0x00000000000078b6
@property(nonatomic) _Bool hasDeploymentId;
- (void)deleteTreatmentId;	// IMP=0x000000000000785c
- (void)deleteExperimentId;	// IMP=0x0000000000007833
- (id)suppressMessageUnderConditions;	// IMP=0x000000000030c653

@end

