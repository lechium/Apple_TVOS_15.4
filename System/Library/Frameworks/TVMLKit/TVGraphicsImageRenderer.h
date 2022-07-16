//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TVGraphicsImageRenderer : NSObject
{
}

+ (id)sharedBlurRenderer;	// IMP=0x0000000000004844
+ (id)blurRenderer:(id)arg1 renderImage:(id)arg2 targetSize:(struct CGSize)arg3 scaleSize:(struct CGSize)arg4 blurStyle:(long long)arg5 blurRadius:(double)arg6;	// IMP=0x000000000000463f
+ (id)blurRenderer:(id)arg1 renderImage:(id)arg2 blurStyle:(long long)arg3 targetSize:(struct CGSize)arg4 blurRadius:(double)arg5;	// IMP=0x00000000000044e0
+ (id)decodedImage:(id)arg1 opaque:(_Bool)arg2;	// IMP=0x0000000000004353
+ (id)imageWithSize:(struct CGSize)arg1 alpha:(_Bool)arg2 cgContextActions:(CDUnknownBlockType)arg3;	// IMP=0x00000000000041c6
+ (id)imageWithSize:(struct CGSize)arg1 alpha:(_Bool)arg2 actions:(CDUnknownBlockType)arg3;	// IMP=0x000000000000405e
+ (id)imageWithSize:(struct CGSize)arg1 format:(id)arg2 cgContextActions:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003ee8
+ (id)imageWithSize:(struct CGSize)arg1 format:(id)arg2 actions:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003d97
+ (id)formatWithUIImage:(id)arg1;	// IMP=0x0000000000003c16
+ (id)formatWithCGImage:(struct CGImage *)arg1;	// IMP=0x0000000000003ba5
+ (id)preferredFormat;	// IMP=0x0000000000003ae2

@end
