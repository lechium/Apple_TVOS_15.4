//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPSImageBilinearScale, NSString, VCPBackwarp, VCPCorrelation, VCPFlowDecoder, VCPFlowFeatureExtractor;
@protocol MTLCommandQueue, MTLDeviceSPI, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface VCPModelR2D2 : NSObject
{
    NSString *_resConfig;	// 8 = 0x8
    int _numLevels;	// 16 = 0x10
    int _startLevel;	// 20 = 0x14
    VCPFlowFeatureExtractor *_featureExtractor;	// 24 = 0x18
    VCPFlowDecoder *_flowDecoder[7];	// 32 = 0x20
    VCPCorrelation *_correlation;	// 88 = 0x58
    VCPBackwarp *_backwarp;	// 96 = 0x60
    CDStruct_80570e6e _imageFeature[2];	// 104 = 0x68
    struct {
        struct __CVBuffer *correlations[7];
        struct __CVBuffer *flows[7];
        struct __CVBuffer *upscaledFlows[7];
        struct __CVBuffer *warpedBuffers[7];
    } _storage;	// 392 = 0x188
    id <MTLDeviceSPI> _device;	// 616 = 0x268
    id <MTLCommandQueue> _commandQueue;	// 624 = 0x270
    NSObject<OS_dispatch_semaphore> *_flowDecoderSemaphore;	// 632 = 0x278
    MPSImageBilinearScale *_bilinearScale;	// 640 = 0x280
    int _inputHeight;	// 648 = 0x288
    int _inputWidth;	// 652 = 0x28c
}

- (void).cxx_destruct;	// IMP=0x000000000002be6b
@property(readonly, nonatomic) int inputWidth; // @synthesize inputWidth=_inputWidth;
@property(readonly, nonatomic) int inputHeight; // @synthesize inputHeight=_inputHeight;
- (void)releaseMemory;	// IMP=0x000000000002be25
- (int)preferredInputFormat:(int *)arg1 height:(int *)arg2 format:(unsigned int *)arg3;	// IMP=0x000000000002bdf2
- (int)updateModelForAspectRatio:(id)arg1;	// IMP=0x000000000002bd71
- (int)scaleFlowTo:(struct __CVBuffer *)arg1 inFlow:(struct __CVBuffer *)arg2;	// IMP=0x000000000002b624
- (int)estimateFlowForLevel:(int)arg1 upperFlow:(struct __CVBuffer *)arg2 outputFlow:(struct __CVBuffer *)arg3;	// IMP=0x000000000002b1b0
- (int)estimateMotionFlow:(struct __CVBuffer *)arg1;	// IMP=0x000000000002b0cb
- (int)extractFeatureFromImage:(struct __CVBuffer *)arg1 toFeature:(CDStruct_80570e6e *)arg2;	// IMP=0x000000000002afdf
- (int)extractFeaturesFromFirst:(struct __CVBuffer *)arg1 andSecond:(struct __CVBuffer *)arg2;	// IMP=0x000000000002af8c
- (void)releaseFeatureBuffers;	// IMP=0x000000000002af26
- (int)allocateFeatures;	// IMP=0x000000000002ae42
- (int)allocateCorreleationBuffer:(struct __CVBuffer **)arg1 forLevel:(unsigned int)arg2;	// IMP=0x000000000002ae01
- (void)releaseStorages;	// IMP=0x000000000002ad84
- (int)allocateStorages;	// IMP=0x000000000002ac47
- (int)updateModulesWithConfig:(id)arg1;	// IMP=0x000000000002aadd
- (int)createModules;	// IMP=0x000000000002a94a
- (int)configForAspectRatio:(id)arg1;	// IMP=0x000000000002a860
- (id)initUsingLightweight:(_Bool)arg1 aspectRatio:(id)arg2 numLevels:(int)arg3 startLevel:(int)arg4;	// IMP=0x000000000002a680

@end

