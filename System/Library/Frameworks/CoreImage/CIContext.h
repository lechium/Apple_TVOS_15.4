//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CIContext : NSObject
{
    void *_priv;	// 8 = 0x8
}

+ (struct CGColorSpace *)defaultGrayColorSpace;	// IMP=0x000000000004cb56
+ (struct CGColorSpace *)defaultRGBColorSpace;	// IMP=0x000000000004caf3
+ (struct CGColorSpace *)defaultWorkingColorSpace;	// IMP=0x000000000004cae1
+ (int)_crashed_because_nonaddressable_memory_was_passed_to_render:(id)arg1 toBitmap:(void *)arg2 rowBytes:(long long)arg3 bounds:(struct CGRect)arg4 format:(int)arg5 colorSpace:(struct CGColorSpace *)arg6;	// IMP=0x000000000004b161
+ (id)contextWithMTLCommandQueue:(id)arg1 options:(id)arg2;	// IMP=0x000000000004b126
+ (id)contextWithMTLCommandQueue:(id)arg1;	// IMP=0x000000000004b106
+ (id)contextWithMTLDevice:(id)arg1 options:(id)arg2;	// IMP=0x000000000004af6c
+ (id)contextWithMTLDevice:(id)arg1;	// IMP=0x000000000004af34
+ (id)contextWithEAGLContext:(id)arg1 options:(id)arg2;	// IMP=0x000000000004ae02
+ (id)contextWithEAGLContext:(id)arg1;	// IMP=0x000000000004adcc
+ (id)contextWithCGContext:(struct CGContext *)arg1 options:(id)arg2;	// IMP=0x000000000004ab81
+ (id)contextWithOptions:(id)arg1;	// IMP=0x000000000004a74e
+ (id)context;	// IMP=0x000000000004a733
+ (id)_singletonContext;	// IMP=0x000000000004a049
+ (void)purgeArchive:(id)arg1;	// IMP=0x0000000000049ffd
+ (void)clearArchives;	// IMP=0x0000000000049fb7
+ (_Bool)loadArchive:(id)arg1;	// IMP=0x0000000000049e8d
+ (void *)internalCLContextWithOptions:(id)arg1;	// IMP=0x000000000004e4fe
+ (void *)internalCLContextWithOptions:(id)arg1 glContext:(void *)arg2;	// IMP=0x000000000004e4f6
+ (void *)internalContextWithMTLCommandQueue:(id)arg1 options:(id)arg2;	// IMP=0x000000000004de6d
+ (void *)internalContextWithMTLDevice:(id)arg1 options:(id)arg2;	// IMP=0x000000000004ddf2
+ (void *)internalContextWithEAGLContext:(id)arg1 options:(id)arg2;	// IMP=0x000000000004d791
+ (void *)internalGLContextWithOptions:(id)arg1;	// IMP=0x000000000004d773
- (id)createColorCubeDataForFilters:(id)arg1 dimension:(int)arg2;	// IMP=0x000000000004d748
- (id)createColorCubeDataForFilters:(id)arg1 dimension:(int)arg2 colorSpace:(struct CGColorSpace *)arg3;	// IMP=0x000000000004d325
- (id)description;	// IMP=0x000000000004cf05
- (struct CGRect)bounds;	// IMP=0x000000000004ceb4
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000004ce8f
- (struct CGAffineTransform)CTM;	// IMP=0x000000000004ce36
- (void)setCTM:(struct CGAffineTransform)arg1;	// IMP=0x000000000004ce11
- (_Bool)measureRequirementsOf:(id)arg1 query:(int)arg2:(id *)arg3 results:(struct CGRect *)arg4;	// IMP=0x000000000004cc71
- (id)flatten:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4;	// IMP=0x000000000004cbe4
- (void)clearCaches;	// IMP=0x000000000004cbbf
- (void)reclaimResources;	// IMP=0x000000000004cbb9
@property(readonly, nonatomic) int workingFormat;
@property(readonly, nonatomic) struct CGColorSpace *workingColorSpace;
- (struct CGColorSpace *)_outputColorSpace;	// IMP=0x000000000004ca82
- (struct CGSize)outputImageMaximumSize;	// IMP=0x000000000004ca3b
- (struct CGSize)inputImageMaximumSize;	// IMP=0x000000000004c9f4
- (unsigned long long)maximumOutputImageSize;	// IMP=0x000000000004c9cd
- (unsigned long long)maximumInputImageSize;	// IMP=0x000000000004c9a6
- (struct CGLayer *)createCGLayerWithSize:(struct CGSize)arg1 info:(struct __CFDictionary *)arg2;	// IMP=0x000000000004c8f3
- (void)render:(id)arg1 toIOSurface:(struct __IOSurface *)arg2 bounds:(struct CGRect)arg3 colorSpace:(struct CGColorSpace *)arg4;	// IMP=0x000000000004c7a3
- (void)render:(id)arg1 toMTLTexture:(id)arg2 commandBuffer:(id)arg3 bounds:(struct CGRect)arg4 colorSpace:(struct CGColorSpace *)arg5;	// IMP=0x000000000004c4d8
- (void)render:(id)arg1 toTexture:(unsigned int)arg2 target:(unsigned int)arg3 bounds:(struct CGRect)arg4 colorSpace:(struct CGColorSpace *)arg5;	// IMP=0x000000000004c205
- (void)render:(id)arg1 toTexture:(unsigned int)arg2 bounds:(struct CGRect)arg3 colorSpace:(struct CGColorSpace *)arg4;	// IMP=0x000000000004c1ea
- (void)drawImage:(id)arg1 inRect:(struct CGRect)arg2 fromRect:(struct CGRect)arg3;	// IMP=0x000000000004bd01
- (void)drawImage:(id)arg1 atPoint:(struct CGPoint)arg2 fromRect:(struct CGRect)arg3;	// IMP=0x000000000004bc0d
- (void)render:(id)arg1;	// IMP=0x000000000004ba84
- (void)_insertEventMarker:(const char *)arg1;	// IMP=0x000000000004ba43
- (_Bool)_isCGBackedContext;	// IMP=0x000000000004ba1f
- (_Bool)_isGLBackedContext;	// IMP=0x000000000004b9e0
- (_Bool)_isGLInternalContext;	// IMP=0x000000000004b9b5
- (_Bool)_isMetalInternalContext;	// IMP=0x000000000004b98a
- (void)render:(id)arg1 toCVPixelBuffer:(struct __CVBuffer *)arg2 bounds:(struct CGRect)arg3 colorSpace:(struct CGColorSpace *)arg4;	// IMP=0x000000000004b83a
- (void)render:(id)arg1 toCVPixelBuffer:(struct __CVBuffer *)arg2;	// IMP=0x000000000004b771
- (void)render:(id)arg1 toBitmap:(void *)arg2 rowBytes:(long long)arg3 bounds:(struct CGRect)arg4 format:(int)arg5 colorSpace:(struct CGColorSpace *)arg6;	// IMP=0x000000000004b226
- (id)initWithMTLCommandQueue:(id)arg1 options:(id)arg2;	// IMP=0x000000000004b04e
- (id)initWithMTLDevice:(id)arg1 options:(id)arg2;	// IMP=0x000000000004afa7
- (id)initWithEAGLContext:(id)arg1 options:(id)arg2;	// IMP=0x000000000004ae51
- (id)initWithEAGLContext:(id)arg1;	// IMP=0x000000000004ae3d
- (id)initWithCGContext:(struct CGContext *)arg1 options:(id)arg2;	// IMP=0x000000000004abbc
- (id)initWithOptions:(id)arg1;	// IMP=0x000000000004a798
- (id)init;	// IMP=0x000000000004a784
- (void)invalidate;	// IMP=0x000000000004a72d
- (void)abort;	// IMP=0x000000000004a700
- (id)objectForKey:(id)arg1;	// IMP=0x000000000004a4cf
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000004a13f
- (_Bool)loadArchive:(id)arg1;	// IMP=0x0000000000049e34
- (void)unlock;	// IMP=0x0000000000049cf7
- (void)lock;	// IMP=0x0000000000049ba0
@property(readonly) unsigned long long identifier;
- (id)clientCommandQueue;	// IMP=0x0000000000049b56
- (id)internalCommandQueue;	// IMP=0x0000000000049b1b
- (id)device;	// IMP=0x0000000000049ae0
- (void)dealloc;	// IMP=0x0000000000049a6d
- (void)_gpuContextCheck;	// IMP=0x000000000004e800
- (id)_initWithInternalRepresentation:(void *)arg1;	// IMP=0x000000000004e512
@property(readonly) void *_internalContext;
- (id)_pdfDataRepresentation;	// IMP=0x000000000004e806
- (struct CGImage *)createCGImage:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 deferred:(_Bool)arg5;	// IMP=0x00000000000500ec
- (struct CGImage *)createCGImage:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 deferred:(_Bool)arg5 error:(id)arg6;	// IMP=0x00000000000500a0
- (struct CGImage *)createCGImage:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4;	// IMP=0x000000000005003c
- (struct CGImage *)createCGImage:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3;	// IMP=0x000000000004ff42
- (struct CGImage *)createCGImage:(id)arg1 fromRect:(struct CGRect)arg2;	// IMP=0x000000000004fe74
- (struct CGImage *)_createCGImage:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 deferred:(struct Trilean)arg5 error:(CDUnknownBlockType)arg6;	// IMP=0x000000000004e9c4
- (id)_createClone;	// IMP=0x000000000004e914
- (_Bool)writeHEIF10RepresentationOfImage:(id)arg1 toURL:(id)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000055644
- (_Bool)writeHEIFRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 options:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000055466
- (_Bool)writeJPEGRepresentationOfImage:(id)arg1 toURL:(id)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000055242
- (_Bool)writePNGRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 options:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000055064
- (_Bool)writeTIFFRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 options:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000054e86
- (id)HEIF10RepresentationOfImage:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000053fd1
- (id)_HEIFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000053987
- (id)HEIFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4;	// IMP=0x0000000000053964
- (id)_JPEGRepresentationOfImage:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000520b0
- (id)JPEGRepresentationOfImage:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 options:(id)arg3;	// IMP=0x000000000005209b
- (id)_PNGRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000051c55
- (id)PNGRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4;	// IMP=0x0000000000051c32
- (id)_TIFFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x000000000005141d
- (id)TIFFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4;	// IMP=0x00000000000513fa
- (id)depthBlurEffectFilterForImage:(id)arg1 disparityImage:(id)arg2 portraitEffectsMatte:(id)arg3 hairSemanticSegmentation:(id)arg4 glassesMatte:(id)arg5 gainMap:(id)arg6 orientation:(unsigned int)arg7 options:(id)arg8;	// IMP=0x0000000000056f3e
- (id)depthBlurEffectFilterForImage:(id)arg1 disparityImage:(id)arg2 portraitEffectsMatte:(id)arg3 hairSemanticSegmentation:(id)arg4 orientation:(unsigned int)arg5 options:(id)arg6;	// IMP=0x0000000000056f0a
- (id)depthBlurEffectFilterForImage:(id)arg1 disparityImage:(id)arg2 portraitEffectsMatte:(id)arg3 orientation:(unsigned int)arg4 options:(id)arg5;	// IMP=0x0000000000056ed7
- (void)_performFaceDetection:(id)arg1 image:(id)arg2 orientation:(int)arg3 filter:(id)arg4;	// IMP=0x000000000005648a
- (id)depthBlurEffectFilterForImageURL:(id)arg1 options:(id)arg2;	// IMP=0x0000000000056189
- (id)depthBlurEffectFilterForImageData:(id)arg1 options:(id)arg2;	// IMP=0x0000000000055e88
- (id)startTaskToClear:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000149b53
- (_Bool)prepareRender:(id)arg1 fromRect:(struct CGRect)arg2 toDestination:(id)arg3 atPoint:(struct CGPoint)arg4 error:(id *)arg5;	// IMP=0x0000000000149a8a
- (id)startTaskToRender:(id)arg1 toDestination:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000149a65
- (id)_startTaskToRender:(id)arg1 toDestination:(id)arg2 forPrepareRender:(_Bool)arg3 forClear:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0000000000148b4a
- (id)startTaskToRender:(id)arg1 fromRect:(struct CGRect)arg2 toDestination:(id)arg3 atPoint:(struct CGPoint)arg4 error:(id *)arg5;	// IMP=0x0000000000148a91

@end

