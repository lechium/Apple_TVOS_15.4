//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ImageTools : NSObject
{
}

+ (long long)createRGB8BufferFrom420Y8BiPlanarBuffer:(void *)arg1 withBytesPerRowLuma:(unsigned long long)arg2 andFrom420CbCr8Buffer:(void *)arg3 withBytesPerRowChroma:(unsigned long long)arg4 andWithWidth:(int)arg5 andWithHeight:(int)arg6 andAlphaFirst:(_Bool)arg7 toRGB8Buffer:(void *)arg8 withBytesPerRowDst:(unsigned long long)arg9;	// IMP=0x000000000004eff4
+ (long long)createRGB8BufferFrom420Y8PlanarBuffer:(void *)arg1 withBytesPerRowY:(unsigned long long)arg2 andFrom420Cb8Buffer:(void *)arg3 withBytesPerRowCb:(unsigned long long)arg4 andFrom420Cr8Buffer:(void *)arg5 withBytesPerRowCr:(unsigned long long)arg6 andWithWidth:(int)arg7 andWithHeight:(int)arg8 andAlphaFirst:(_Bool)arg9 toRGB8Buffer:(void *)arg10 withBytesPerRowDst:(unsigned long long)arg11;	// IMP=0x000000000004ec9f
+ (long long)create420YCbCr8BufferFromRGB8Buffer:(void *)arg1 withWidth:(int)arg2 andWithHeight:(int)arg3 andWithBytesPerRow:(unsigned long long)arg4 andAlphaFirst:(_Bool)arg5 toLumaBuffer:(void *)arg6 withBytesPerRowLuma:(unsigned long long)arg7 andToChromaBuffer:(void *)arg8 withBytesPerRowChroma:(unsigned long long)arg9;	// IMP=0x000000000004e85c
+ (long long)create420YCbCr8BufferFromPlanar8Buffer:(void *)arg1 withWidth:(int)arg2 andWithHeight:(int)arg3 andWithBytesPerRow:(unsigned long long)arg4 toLumaBuffer:(void *)arg5 withBytesPerRowLuma:(unsigned long long)arg6 andToChromaBuffer:(void *)arg7 withBytesPerRowChroma:(unsigned long long)arg8;	// IMP=0x000000000004e6ee
+ (long long)extractLumaFromBGRA8Buffer:(void *)arg1 withWidth:(int)arg2 andWithHeight:(int)arg3 andWithBytesPerRow:(unsigned long long)arg4 toBuffer:(void *)arg5 withBytesPerRow:(unsigned long long)arg6;	// IMP=0x000000000004e5d0
+ (struct vImage_Buffer)getVImageBufferFromCGImage:(struct CGImage *)arg1 error:(id *)arg2;	// IMP=0x000000000004e53d
+ (struct vImage_Buffer)getVImageBufferFromCGImageLuma:(struct CGImage *)arg1 error:(id *)arg2;	// IMP=0x000000000004e379
+ (struct vImage_Buffer)getVImageBufferFromCVPixelBuffer:(struct __CVBuffer *)arg1 channel:(int)arg2 error:(id *)arg3;	// IMP=0x000000000004e2e0
+ (id)saveRawBuffer:(void *)arg1 withWidth:(unsigned int)arg2 andHeight:(unsigned int)arg3 andRowBytes:(unsigned int)arg4 withName:(id)arg5 inFolder:(id)arg6 error:(id *)arg7;	// IMP=0x000000000004e145
+ (id)saveCGImage:(const struct CGImage *)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id *)arg4;	// IMP=0x000000000004e00f
+ (id)saveVImageBufferRGBA8:(const struct vImage_Buffer *)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id *)arg4;	// IMP=0x000000000004dec4
+ (_Bool)writeImage:(struct CGImage *)arg1 toFile:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004dd73
+ (id)saveVImageBufferRGBA8ToData:(const struct vImage_Buffer *)arg1 deriveTypeFromFileName:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004dcc6
+ (id)saveVImageBufferRGBA8ToJPEGData:(const struct vImage_Buffer *)arg1 withCompressionQuality:(float)arg2 error:(id *)arg3;	// IMP=0x000000000004daad
+ (id)writeImageToData:(struct CGImage *)arg1 type:(struct __CFString *)arg2 error:(id *)arg3;	// IMP=0x000000000004d975
+ (struct CGImage *)newCGImageFromRGBA8VImageBuffer:(const struct vImage_Buffer *)arg1 error:(id *)arg2;	// IMP=0x000000000004d837
+ (id)saveVImageBufferPlanar8:(const struct vImage_Buffer *)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id *)arg4;	// IMP=0x000000000004d6f6
+ (id)saveVImageBufferPlanar8ToData:(const struct vImage_Buffer *)arg1 deriveTypeFromFileName:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004d647
+ (id)saveVImageBufferPlanar8ToJPEGData:(const struct vImage_Buffer *)arg1 withCompressionQuality:(float)arg2 error:(id *)arg3;	// IMP=0x000000000004d42e
+ (struct CGImage *)newCGImageFromPlanar8VImageBuffer:(const struct vImage_Buffer *)arg1 error:(id *)arg2;	// IMP=0x000000000004d2f0
+ (id)saveCVPixelBuffer420YpCbCr8:(struct __CVBuffer *)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id *)arg4;	// IMP=0x000000000004cd69
+ (id)saveCVPixelBufferRGBA8:(struct __CVBuffer *)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id *)arg4;	// IMP=0x000000000004cb56
+ (id)saveCVPixelBufferPlane8:(int)arg1 from:(struct __CVBuffer *)arg2 withName:(id)arg3 inFolder:(id)arg4 error:(id *)arg5;	// IMP=0x000000000004c92e
+ (struct __CVBuffer *)loadCVPixelBuffer420YpCbCr8FromURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004c24c
+ (struct __CVBuffer *)loadCVPixelBufferARGB8FromURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004bda2
+ (struct vImage_Buffer *)loadVImageBufferEXIFRotatedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004bd12
+ (struct vImage_Buffer *)loadVImageBufferEXIFRotatedFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004bc82
+ (struct vImage_Buffer *)loadVImageBufferFromURL:(id)arg1 lumaOnly:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000004bb86
+ (struct vImage_Buffer *)loadVImageBufferFromData:(id)arg1 isRaw:(_Bool)arg2 lumaOnly:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000004b25d
+ (id)numberOfChannelsInImageData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004b093
+ (void *)loadRawBufferFromURL:(id)arg1 width:(unsigned int *)arg2 height:(unsigned int *)arg3 rowBytes:(unsigned int *)arg4 error:(id *)arg5;	// IMP=0x000000000004afe7
+ (void *)loadRawBufferFromData:(id)arg1 width:(unsigned int *)arg2 height:(unsigned int *)arg3 rowBytes:(unsigned int *)arg4 error:(id *)arg5;	// IMP=0x000000000004aeca
+ (struct CGImage *)loadCGImageEXIFRotatedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004ae7e
+ (struct CGImage *)loadCGImageEXIFRotatedFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004ae32
+ (struct CGImage *)loadCGImageEXIFRotatedFromSource:(struct CGImageSource *)arg1 error:(id *)arg2;	// IMP=0x000000000004ace2
+ (struct CGImage *)loadCGImageFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004abfb
+ (struct CGContext *)createARGBBitmapContextWithImage:(struct CGImage *)arg1;	// IMP=0x000000000004aabc
+ (struct CGImage *)rotateImage:(struct CGImage *)arg1 accordingToEXIFOrientation:(int)arg2;	// IMP=0x000000000004a9c3
+ (struct CGImage *)rotateImage:(struct CGImage *)arg1 withAngle:(float)arg2 andXFlip:(_Bool)arg3 andYFlip:(_Bool)arg4;	// IMP=0x000000000004a4d1
+ (id)getValueForTag:(id)arg1 inObject:(id)arg2 depth:(int)arg3 parent:(id)arg4;	// IMP=0x000000000004a0fa
+ (id)getValueForTag:(id)arg1 inObject:(id)arg2;	// IMP=0x000000000004a0e2
+ (struct __CFString *)guessType:(id)arg1;	// IMP=0x0000000000049f98

@end

