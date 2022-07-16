//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface InpaintingEspressoHelpers : NSObject
{
}

+ (int)selectModelProcessingResolutionBasedOnEdgeSize:(double)arg1 amongResolutions:(id)arg2;	// IMP=0x00000000001762c9
+ (_Bool)selectConfigurationAndBuildPlanForNetwork:(id)arg1 configurationName:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001759e6
+ (_Bool)createSingleNetworkPlanFromResourceDescriptor:(id)arg1 resourceFileName:(id)arg2 lowPriorityMode:(_Bool)arg3 cpuOnlyModel:(_Bool)arg4 membraneModel:(_Bool)arg5 modelInputPixelFormat:(int)arg6 modelOutputPixelFormat:(int)arg7 inputBlobNames:(id)arg8 outputBlobNames:(id)arg9 storeInEspressoResources:(id)arg10 error:(id *)arg11;	// IMP=0x0000000000175576
+ (void *)createEspressoContextForCPUEngine:(int *)arg1;	// IMP=0x000000000017555f
+ (void *)createEspressoContextUsingFastestDevicePresent__engineUsed:(int *)arg1;	// IMP=0x0000000000175409
+ (id)generatePoissonMembraneOnBGRA8VTargetImage:(id)arg1 forSourceImage:(id)arg2 usingMaskOutline:(id)arg3 atProcessingResolution:(int)arg4 withOutputFormat:(int)arg5 outputImage:(id)arg6 andModel:(id)arg7 error:(id *)arg8;	// IMP=0x00000000001750bc
+ (id)performInpaintingOnBGRA8VImage:(id)arg1 usingMask:(id)arg2 atProcessingResolution:(int)arg3 withOutputFormat:(int)arg4 outputImage:(id)arg5 andModel:(id)arg6 error:(id *)arg7;	// IMP=0x0000000000174b87
+ (id)convertEspressoOutput:(CDStruct_cf098810)arg1 intoOutputImageWrapper:(id)arg2 usingOutputPixelsRange:(int)arg3 andOutputFormat:(int)arg4 error:(id *)arg5;	// IMP=0x00000000001749b2
+ (_Bool)bindEspressoInputBufferForInputName:(id)arg1 buffer:(struct vImage_Buffer)arg2 preprocessingParams:(CDStruct_18e74ac9)arg3 network:(CDStruct_2bc666a5)arg4 noAlphaPremultiply:(_Bool)arg5 error:(id *)arg6;	// IMP=0x000000000017477b
+ (id)performInpaintingOnImage:(id)arg1 usingMask:(id)arg2 atProcessingResolution:(int)arg3 withModel:(id)arg4 error:(id *)arg5;	// IMP=0x000000000017430e
+ (id)pathForEspressoNetworkModelFileWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000174270

@end
