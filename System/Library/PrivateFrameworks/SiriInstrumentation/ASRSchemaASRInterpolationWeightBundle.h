//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface ASRSchemaASRInterpolationWeightBundle
{
    unsigned long long _startTimeInNs;	// 8 = 0x8
    unsigned long long _endTimeInNs;	// 16 = 0x10
    NSArray *_weights;	// 24 = 0x18
    CDStruct_b5935cb6 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000027448
@property(copy, nonatomic) NSArray *weights; // @synthesize weights=_weights;
@property(nonatomic) unsigned long long endTimeInNs; // @synthesize endTimeInNs=_endTimeInNs;
@property(nonatomic) unsigned long long startTimeInNs; // @synthesize startTimeInNs=_startTimeInNs;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000270e3
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000027025
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000026e10
- (unsigned long long)hash;	// IMP=0x0000000000026da9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000026ba6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000026a0c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000026716
- (float)weightsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000266bb
- (unsigned long long)weightsCount;	// IMP=0x000000000002669e
- (void)addWeights:(float)arg1;	// IMP=0x0000000000026603
- (void)deleteWeights;	// IMP=0x00000000000265f1
- (void)clearWeights;	// IMP=0x00000000000265d4
- (void)deleteEndTimeInNs;	// IMP=0x00000000000265aa
@property(nonatomic) _Bool hasEndTimeInNs;
- (void)deleteStartTimeInNs;	// IMP=0x0000000000026536
@property(nonatomic) _Bool hasStartTimeInNs;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000030ed21

@end

