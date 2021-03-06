//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMTranscoderImageSizeEstimator : NSObject
{
    struct CGSize _originalSize;	// 8 = 0x8
    double _normalizedInputFactor;	// 24 = 0x18
}

+ (id)newEstimatorWithURL:(id)arg1 uti:(id)arg2 imageSource:(struct CGImageSource *)arg3;	// IMP=0x000000000000beb0
- (unsigned long long)estimatedSizeForOutputUTI:(id)arg1 maximumDimension:(long long)arg2 quality:(double)arg3;	// IMP=0x000000000000c2d6
- (double)_estimatedBytesPerPixelForJPEGQuality:(double)arg1;	// IMP=0x000000000000c297
- (double)_normalizedInputFactorForUTI:(id)arg1 bytesPerPixel:(double)arg2;	// IMP=0x000000000000c22d
- (double)_nominalBytesPerPixelForUTI:(id)arg1;	// IMP=0x000000000000c19f
- (struct CGSize)_newSizeForMaximumDimension:(long long)arg1 originalSize:(struct CGSize)arg2;	// IMP=0x000000000000c166
- (id)initWithUTI:(id)arg1 originalSize:(struct CGSize)arg2 fileSize:(unsigned long long)arg3;	// IMP=0x000000000000c0ca
- (id)initWithUTI:(id)arg1 imageSource:(struct CGImageSource *)arg2;	// IMP=0x000000000000bf4d

@end

