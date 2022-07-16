//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNMPImageData : NSObject
{
    _Bool _freeImageInDealloc;	// 8 = 0x8
    struct vImage_Buffer *_image;	// 16 = 0x10
    struct __CVBuffer *_imageCVPixelBuffer;	// 24 = 0x18
    NSString *_imageFilePath;	// 32 = 0x20
    NSString *_externalImageId;	// 40 = 0x28
    long long _exifTimestamp;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000119341
@property(readonly) long long exifTimestamp; // @synthesize exifTimestamp=_exifTimestamp;
@property(readonly) NSString *externalImageId; // @synthesize externalImageId=_externalImageId;
@property _Bool freeImageInDealloc; // @synthesize freeImageInDealloc=_freeImageInDealloc;
@property(retain) NSString *imageFilePath; // @synthesize imageFilePath=_imageFilePath;
@property(readonly) struct __CVBuffer *imageCVPixelBuffer; // @synthesize imageCVPixelBuffer=_imageCVPixelBuffer;
@property(readonly) struct vImage_Buffer *image; // @synthesize image=_image;
- (void)dealloc;	// IMP=0x000000000011926b
- (id)initWithCVPixelBufferImage:(struct __CVBuffer *)arg1 externalImageId:(id)arg2 andExifTimestampValue:(long long)arg3 error:(id *)arg4;	// IMP=0x00000000001191aa
- (id)initWithCVPixelBufferImage:(struct __CVBuffer *)arg1 externalImageId:(id)arg2 andExifTimestampString:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000119128
- (id)initWithVImage:(struct vImage_Buffer *)arg1 externalImageId:(id)arg2 andExifTimestampValue:(long long)arg3 error:(id *)arg4;	// IMP=0x0000000000119010
- (id)initWithVImage:(struct vImage_Buffer *)arg1 externalImageId:(id)arg2 andExifTimestampString:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000118f8e

@end

