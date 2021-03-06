//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMImageUtilities : NSObject
{
}

+ (double)scaleFactorForThumbnailWithSize:(struct CGSize)arg1 constraints:(struct IMPreviewConstraints)arg2 targetPxSize:(struct CGSize)arg3 shouldScaleUpPreview:(_Bool)arg4 maxUpScale:(double)arg5;	// IMP=0x0000000000052585
+ (struct CGImage *)newThumbnailForTargetSize:(struct CGSize)arg1 imageSize:(struct CGSize)arg2 imageSource:(struct CGImageSource *)arg3 atIndex:(unsigned long long)arg4 mode:(long long)arg5 scale:(double)arg6;	// IMP=0x00000000000524e5
+ (struct CGImage *)newThumbnailForTargetSize:(struct CGSize)arg1 imageSize:(struct CGSize)arg2 imageSource:(struct CGImageSource *)arg3 mode:(long long)arg4 scale:(double)arg5;	// IMP=0x00000000000524cb
+ (_Bool)persistPreviewToDiskCache:(struct CGImage *)arg1 previewURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000051c6c
+ (_Bool)persistCPBitmapWithImage:(struct CGImage *)arg1 url:(id)arg2;	// IMP=0x0000000000051b28
+ (void)sampleImageEdges:(char *)arg1 usingRect:(struct CGRect)arg2 forMostlyWhitePixels:(unsigned long long *)arg3 otherPixels:(unsigned long long *)arg4 bytesPerRow:(long long)arg5;	// IMP=0x0000000000051b22
+ (struct CGSize)imageRefPxSize:(struct CGImage *)arg1;	// IMP=0x0000000000051ac4
+ (struct CGSize)imageSourcePxSize:(struct CGImageSource *)arg1;	// IMP=0x000000000005199c

@end

