//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface PPTopicTransform : NSObject
{
    NSData *_data;	// 8 = 0x8
    struct header_s _header;	// 16 = 0x10
    const float *_bias;	// 32 = 0x20
    const unsigned int *_qids;	// 40 = 0x28
    const unsigned int *_matrixIndices;	// 48 = 0x30
    const float *_matrixElts;	// 56 = 0x38
    const char *_payloads;	// 64 = 0x40
    unsigned char _featureSmoothingType;	// 72 = 0x48
    unsigned char _featureScalingType;	// 73 = 0x49
    unsigned char _featureNormalizationType;	// 74 = 0x4a
    unsigned char _outputScalingType;	// 75 = 0x4b
    unsigned char _activationType;	// 76 = 0x4c
    float _featureSmoothingFactor;	// 80 = 0x50
    float _featureScalingFactor;	// 84 = 0x54
    float _outputScalingFactor;	// 88 = 0x58
    float _attenuationFactor;	// 92 = 0x5c
    float _threshold;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000098f4f
@property(readonly, nonatomic) float threshold; // @synthesize threshold=_threshold;
- (void)applyOutputAttenuation:(float *)arg1 nonzeroCounts:(unsigned short *)arg2;	// IMP=0x0000000000098e60
- (void)applyOutputActivation:(float *)arg1;	// IMP=0x0000000000098c73
- (void)applyFeatureNormalization:(float *)arg1 vectorLength:(int)arg2;	// IMP=0x0000000000098bed
- (void)applyOutputScaling:(float *)arg1 vectorLength:(int)arg2;	// IMP=0x0000000000098bd3
- (void)applyFeatureScaling:(float *)arg1 vectorLength:(int)arg2;	// IMP=0x0000000000098bb9
- (void)applyFeatureSmoothing:(float *)arg1 vectorLength:(int)arg2;	// IMP=0x0000000000098b6f
- (void)addBias:(float *)arg1;	// IMP=0x0000000000098b44
- (id)QIDWeightsWithMappedTopicIdentifier:(id)arg1;	// IMP=0x000000000009886a
- (void)addWeightedTopicScoreToBuffer:(float *)arg1 qid:(unsigned int)arg2 score:(float)arg3;	// IMP=0x00000000000987c1
- (void)addWeightedTopicScoreToBuffer:(float *)arg1 countNonZeroComponentsInBuffer:(unsigned short *)arg2 qid:(unsigned int)arg3 score:(float)arg4;	// IMP=0x0000000000098710
- (id)payloadForTopic:(unsigned int)arg1;	// IMP=0x00000000000985ca
- (_Bool)containsMappedTopic:(id)arg1;	// IMP=0x00000000000985a9
@property(readonly, nonatomic) unsigned long long outputTopicCount;
- (id)init;	// IMP=0x000000000009859a
- (id)initWithPath:(id)arg1 mappingId:(id)arg2;	// IMP=0x0000000000097d05

@end

