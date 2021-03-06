//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface FigCaptureVisionDataSinkConfiguration
{
    float _maxFrameRate;	// 16 = 0x10
    float _maxBurstFrameRate;	// 20 = 0x14
    CDStruct_1b6d18a9 _maxBurstDuration;	// 24 = 0x18
    unsigned int _gaussianPyramidOctavesCount;	// 48 = 0x30
    float _gaussianPyramidBaseOctaveDownscalingFactor;	// 52 = 0x34
    unsigned int _maxKeypointsCount;	// 56 = 0x38
    float _keypointDetectionThreshold;	// 60 = 0x3c
    _Bool _featureBinningEnabled;	// 64 = 0x40
    _Bool _featureOrientationAssignmentEnabled;	// 65 = 0x41
}

@property(nonatomic) _Bool featureOrientationAssignmentEnabled; // @synthesize featureOrientationAssignmentEnabled=_featureOrientationAssignmentEnabled;
@property(nonatomic) _Bool featureBinningEnabled; // @synthesize featureBinningEnabled=_featureBinningEnabled;
@property(nonatomic) float keypointDetectionThreshold; // @synthesize keypointDetectionThreshold=_keypointDetectionThreshold;
@property(nonatomic) unsigned int maxKeypointsCount; // @synthesize maxKeypointsCount=_maxKeypointsCount;
@property(nonatomic) float gaussianPyramidBaseOctaveDownscalingFactor; // @synthesize gaussianPyramidBaseOctaveDownscalingFactor=_gaussianPyramidBaseOctaveDownscalingFactor;
@property(nonatomic) unsigned int gaussianPyramidOctavesCount; // @synthesize gaussianPyramidOctavesCount=_gaussianPyramidOctavesCount;
@property(nonatomic) CDStruct_1b6d18a9 maxBurstDuration; // @synthesize maxBurstDuration=_maxBurstDuration;
@property(nonatomic) float maxBurstFrameRate; // @synthesize maxBurstFrameRate=_maxBurstFrameRate;
@property(nonatomic) float maxFrameRate; // @synthesize maxFrameRate=_maxFrameRate;
@property(readonly, nonatomic) NSDictionary *embeddedCaptureDeviceConfiguration;
- (int)sinkType;	// IMP=0x000000000000db14
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000da7f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d941
- (id)description;	// IMP=0x000000000000d7af
- (id)copyXPCEncoding;	// IMP=0x000000000000d626
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x000000000000d4e6

@end

