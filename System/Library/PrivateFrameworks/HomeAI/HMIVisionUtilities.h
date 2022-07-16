//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class NSString;

@interface HMIVisionUtilities : HMFObject <HMFLogging>
{
}

+ (id)logCategory;	// IMP=0x0000000000013bd5
+ (void)releaseCachedVisionResources;	// IMP=0x0000000000013b91
+ (struct __CVBuffer *)transferPixelBuffer:(struct __CVBuffer *)arg1 rotationAngle:(float)arg2 crop:(struct CGRect)arg3 size:(struct CGSize)arg4 precision:(unsigned long long)arg5 error:(id *)arg6;	// IMP=0x000000000001368d
+ (struct CGRect)maintainAspectRatio:(struct CGRect)arg1 originalSize:(struct CGSize)arg2 ratioThreshold:(float)arg3;	// IMP=0x0000000000013528
+ (struct CGRect)imposeMinSizeFor:(struct CGRect)arg1 withOriginalSize:(struct CGSize)arg2 minCrop:(struct CGSize)arg3;	// IMP=0x00000000000133e4
+ (struct CGRect)applyPadding:(struct CGRect)arg1 withOriginalSize:(struct CGSize)arg2 padding:(struct CGSize)arg3;	// IMP=0x0000000000013204
+ (struct __CVBuffer *)createPixelBufferWithSize:(struct CGSize)arg1 pixelFormat:(unsigned int)arg2 useIOSurface:(_Bool)arg3;	// IMP=0x0000000000013104
+ (struct __CVBuffer *)createPixelBufferFromImageData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000012fcb
+ (struct __CVBuffer *)createPixelBufferFromJPEGData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000012f34
+ (struct __CVBuffer *)createPixelBufferFromJPEGPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000012e85
+ (struct __CVBuffer *)createPixelBufferFromJPEGDataProvider:(struct CGDataProvider *)arg1 error:(id *)arg2;	// IMP=0x0000000000012c04
+ (id)createJPEGDataFromPixelBuffer:(struct __CVBuffer *)arg1 scale:(float)arg2 encodeQuality:(float)arg3 error:(id *)arg4;	// IMP=0x000000000001261a
+ (struct __CVBuffer *)transferPixelBuffer:(struct __CVBuffer *)arg1 crop:(struct CGRect)arg2 size:(struct CGSize)arg3 pixelFormat:(unsigned int)arg4 options:(long long)arg5 error:(id *)arg6;	// IMP=0x0000000000011efa
+ (struct __CVBuffer *)transferPixelBuffer:(struct __CVBuffer *)arg1 pixelFormat:(unsigned int)arg2 options:(long long)arg3 error:(id *)arg4;	// IMP=0x0000000000011e90
+ (struct __CVBuffer *)resizePixelBuffer:(struct __CVBuffer *)arg1 size:(struct CGSize)arg2 pixelFormat:(unsigned int)arg3 options:(long long)arg4 error:(id *)arg5;	// IMP=0x0000000000011e5e
+ (struct __CVBuffer *)resizePixelBuffer:(struct __CVBuffer *)arg1 size:(struct CGSize)arg2 error:(id *)arg3;	// IMP=0x0000000000011def
+ (struct __CVBuffer *)cropPixelBuffer:(struct __CVBuffer *)arg1 crop:(struct CGRect)arg2 error:(id *)arg3;	// IMP=0x0000000000011da1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

