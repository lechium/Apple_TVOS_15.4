//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomePubSub/NSCopying-Protocol.h>

@interface BPSPBApproxPercentileDigest : PBCodable <NSCopying>
{
    struct {
        float *list;
        unsigned long long count;
        unsigned long long size;
    } _centroidMeans;	// 8 = 0x8
    struct {
        unsigned int *list;
        unsigned long long count;
        unsigned long long size;
    } _centroidWeights;	// 32 = 0x20
    unsigned int _bufferMultiplier;	// 56 = 0x38
    unsigned int _centroidCount;	// 60 = 0x3c
    float _max;	// 64 = 0x40
    float _min;	// 68 = 0x44
    struct {
        unsigned int bufferMultiplier:1;
        unsigned int centroidCount:1;
        unsigned int max:1;
        unsigned int min:1;
    } _has;	// 72 = 0x48
}

@property(nonatomic) unsigned int bufferMultiplier; // @synthesize bufferMultiplier=_bufferMultiplier;
@property(nonatomic) unsigned int centroidCount; // @synthesize centroidCount=_centroidCount;
@property(nonatomic) float max; // @synthesize max=_max;
@property(nonatomic) float min; // @synthesize min=_min;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001156f
- (unsigned long long)hash;	// IMP=0x0000000000011302
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000111b9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000110c9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000010f26
- (void)writeTo:(id)arg1;	// IMP=0x0000000000010dbd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000010db0
- (id)dictionaryRepresentation;	// IMP=0x00000000000105dc
- (id)description;	// IMP=0x000000000001052d
- (void)setCentroidWeights:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000010516
- (unsigned int)centroidWeightsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000010449
- (void)addCentroidWeights:(unsigned int)arg1;	// IMP=0x0000000000010436
- (void)clearCentroidWeights;	// IMP=0x0000000000010425
@property(readonly, nonatomic) unsigned int *centroidWeights;
@property(readonly, nonatomic) unsigned long long centroidWeightsCount;
- (void)setCentroidMeans:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000103eb
- (float)centroidMeansAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001031c
- (void)addCentroidMeans:(float)arg1;	// IMP=0x000000000001030b
- (void)clearCentroidMeans;	// IMP=0x00000000000102fa
@property(readonly, nonatomic) float *centroidMeans;
@property(readonly, nonatomic) unsigned long long centroidMeansCount;
@property(nonatomic) _Bool hasBufferMultiplier;
@property(nonatomic) _Bool hasCentroidCount;
@property(nonatomic) _Bool hasMax;
@property(nonatomic) _Bool hasMin;
- (void)dealloc;	// IMP=0x0000000000010160

@end

