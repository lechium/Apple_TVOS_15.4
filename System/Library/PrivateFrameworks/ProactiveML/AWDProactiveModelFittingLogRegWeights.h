//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveML/NSCopying-Protocol.h>

@class AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingQuantizedDenseVector, AWDProactiveModelFittingQuantizedSparseVector, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingLogRegWeights : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    AWDProactiveModelFittingQuantizedDenseVector *_denseQuantizedWeights;	// 16 = 0x10
    AWDProactiveModelFittingEvalMetrics *_evaluationMetrics;	// 24 = 0x18
    AWDProactiveModelFittingMinibatchStats *_minibatchStats;	// 32 = 0x20
    AWDProactiveModelFittingModelInfo *_modelInfo;	// 40 = 0x28
    AWDProactiveModelFittingSparseFloatVector *_sparseFloatWeights;	// 48 = 0x30
    AWDProactiveModelFittingQuantizedSparseVector *_sparseQuantizedWeights;	// 56 = 0x38
    float _weightsL2norm;	// 64 = 0x40
    float _weightsScaleFactor;	// 68 = 0x44
    struct {
        unsigned int timestamp:1;
        unsigned int weightsL2norm:1;
        unsigned int weightsScaleFactor:1;
    } _has;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000004515
@property(retain, nonatomic) AWDProactiveModelFittingQuantizedDenseVector *denseQuantizedWeights; // @synthesize denseQuantizedWeights=_denseQuantizedWeights;
@property(nonatomic) float weightsL2norm; // @synthesize weightsL2norm=_weightsL2norm;
@property(nonatomic) float weightsScaleFactor; // @synthesize weightsScaleFactor=_weightsScaleFactor;
@property(retain, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedWeights; // @synthesize sparseQuantizedWeights=_sparseQuantizedWeights;
@property(retain, nonatomic) AWDProactiveModelFittingEvalMetrics *evaluationMetrics; // @synthesize evaluationMetrics=_evaluationMetrics;
@property(retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats; // @synthesize minibatchStats=_minibatchStats;
@property(retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatWeights; // @synthesize sparseFloatWeights=_sparseFloatWeights;
@property(retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000422c
- (unsigned long long)hash;	// IMP=0x0000000000003f3f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003d19
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003b79
- (void)copyTo:(id)arg1;	// IMP=0x0000000000003a2d
- (void)writeTo:(id)arg1;	// IMP=0x00000000000038eb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000038de
- (id)dictionaryRepresentation;	// IMP=0x00000000000035c4
- (id)description;	// IMP=0x0000000000003515
@property(readonly, nonatomic) _Bool hasDenseQuantizedWeights;
@property(nonatomic) _Bool hasWeightsL2norm;
@property(nonatomic) _Bool hasWeightsScaleFactor;
@property(readonly, nonatomic) _Bool hasSparseQuantizedWeights;
@property(readonly, nonatomic) _Bool hasEvaluationMetrics;
@property(readonly, nonatomic) _Bool hasMinibatchStats;
@property(readonly, nonatomic) _Bool hasSparseFloatWeights;
@property(readonly, nonatomic) _Bool hasModelInfo;
@property(nonatomic) _Bool hasTimestamp;

@end

