//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary;

@interface NviDirectionalitySignalData
{
    float _confidence;	// 8 = 0x8
    float _azimuth;	// 12 = 0xc
    float _estimatedAzimuth;	// 16 = 0x10
    unsigned long long _startSample;	// 24 = 0x18
    unsigned long long _endSample;	// 32 = 0x20
    double _processedAudioDurMs;	// 40 = 0x28
    NSArray *_spatialSpectrumData;	// 48 = 0x30
    NSDictionary *_azDistribution;	// 56 = 0x38
}

+ (id)headerString;	// IMP=0x000000000008dc0e
- (void).cxx_destruct;	// IMP=0x000000000008e1bf
@property(retain, nonatomic) NSDictionary *azDistribution; // @synthesize azDistribution=_azDistribution;
@property(retain, nonatomic) NSArray *spatialSpectrumData; // @synthesize spatialSpectrumData=_spatialSpectrumData;
@property(nonatomic) double processedAudioDurMs; // @synthesize processedAudioDurMs=_processedAudioDurMs;
@property(nonatomic) float estimatedAzimuth; // @synthesize estimatedAzimuth=_estimatedAzimuth;
@property(nonatomic) float azimuth; // @synthesize azimuth=_azimuth;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(nonatomic) unsigned long long endSample; // @synthesize endSample=_endSample;
@property(nonatomic) unsigned long long startSample; // @synthesize startSample=_startSample;
- (id)_spatialSpectrumLogStr;	// IMP=0x000000000008df84
- (id)description;	// IMP=0x000000000008dec0
- (id)stringForLogging;	// IMP=0x000000000008de2f
@property(readonly, nonatomic) float mostSampledAzimuth;
- (id)initWithStartSample:(unsigned long long)arg1 endSample:(unsigned long long)arg2 confidence:(float)arg3 azimuth:(float)arg4 estimatedAzimuth:(float)arg5;	// IMP=0x000000000008db3e

@end

