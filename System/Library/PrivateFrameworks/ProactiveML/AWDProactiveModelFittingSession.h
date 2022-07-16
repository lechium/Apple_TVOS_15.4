//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveML/NSCopying-Protocol.h>

@class AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingSession : PBCodable <NSCopying>
{
    unsigned long long _label;	// 8 = 0x8
    unsigned long long _supervisionType;	// 16 = 0x10
    unsigned long long _timestamp;	// 24 = 0x18
    float _confidenceScore;	// 32 = 0x20
    AWDProactiveModelFittingModelInfo *_modelInfo;	// 40 = 0x28
    AWDProactiveModelFittingSparseFloatVector *_sparseFloatFeatures;	// 48 = 0x30
    struct {
        unsigned int label:1;
        unsigned int supervisionType:1;
        unsigned int timestamp:1;
        unsigned int confidenceScore:1;
    } _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000159c6
@property(nonatomic) float confidenceScore; // @synthesize confidenceScore=_confidenceScore;
@property(nonatomic) unsigned long long supervisionType; // @synthesize supervisionType=_supervisionType;
@property(retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatFeatures; // @synthesize sparseFloatFeatures=_sparseFloatFeatures;
@property(nonatomic) unsigned long long label; // @synthesize label=_label;
@property(retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000015825
- (unsigned long long)hash;	// IMP=0x0000000000015656
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000154d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000153b6
- (void)copyTo:(id)arg1;	// IMP=0x00000000000152d2
- (void)writeTo:(id)arg1;	// IMP=0x00000000000151e6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000151d9
- (id)dictionaryRepresentation;	// IMP=0x0000000000014f9e
- (id)description;	// IMP=0x0000000000014eef
@property(nonatomic) _Bool hasConfidenceScore;
@property(nonatomic) _Bool hasSupervisionType;
@property(readonly, nonatomic) _Bool hasSparseFloatFeatures;
@property(nonatomic) _Bool hasLabel;
@property(readonly, nonatomic) _Bool hasModelInfo;
@property(nonatomic) _Bool hasTimestamp;

@end
