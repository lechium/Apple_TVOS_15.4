//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (PhotosUICore)
+ (id)px_roundedCornerMaskImage:(CDStruct_2bd92d94)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000005caa6c
+ (id)_px_createOverlayImageWithGlyphStyle:(unsigned long long)arg1 backgroundWhite:(double)arg2 backgroundAlpha:(double)arg3 glyphAlpha:(double)arg4;	// IMP=0x00000000005ca8f8
+ (void)px_preloadPlayOverlayGlyphsIfNeeded;	// IMP=0x00000000005ca8d4
+ (id)px_playOverlayImage:(unsigned long long)arg1;	// IMP=0x00000000005ca5f9
+ (id)px_imageFromSolidColor:(id)arg1;	// IMP=0x00000000005ca544
+ (id)px_systemImageNamed:(id)arg1;	// IMP=0x00000000005ca52b
+ (id)px_imageNamed:(id)arg1;	// IMP=0x00000000005ca49d
- (id)px_predrawnImage;	// IMP=0x00000000005c9d21
- (id)px_backdropImageWithStyle:(long long)arg1;	// IMP=0x00000000005c9c19
- (id)px_debugImageWithStrokeRect:(struct CGRect)arg1 color:(id)arg2 text:(id)arg3;	// IMP=0x00000000005c9996
- (id)px_debugImageWithStrokeRect:(struct CGRect)arg1 color:(id)arg2;	// IMP=0x00000000005c9982
- (id)px_ASTCCompressedImageWithBlockSize:(unsigned int)arg1;	// IMP=0x00000000005c98d5
- (id)px_extractPlayOverlayBackgroundImageFromLocation:(struct CGPoint)arg1 inViewportWithSize:(struct CGSize)arg2 contentMode:(long long)arg3 contentsRect:(struct CGRect)arg4 asynchronously:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00000000005c9667
- (void)px_drawInRect:(struct CGRect)arg1 withContentMode:(long long)arg2;	// IMP=0x00000000005c9410
- (id)px_imageByCroppingRect:(struct CGRect)arg1 pixelTargetSize:(struct CGSize)arg2 cornerRadius:(double)arg3;	// IMP=0x00000000005c9157
- (id)px_imageByCroppingRect:(struct CGRect)arg1;	// IMP=0x00000000005c90a5
- (id)px_imageByCroppingEdgeInsets:(struct UIEdgeInsets)arg1;	// IMP=0x00000000005c9020
- (id)px_imageWithDebugRect:(struct CGRect)arg1;	// IMP=0x00000000005c8f56
- (id)px_tintedCircularImageWithColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x00000000005c8da9
- (id)px_imageByApplyingAlpha:(double)arg1;	// IMP=0x00000000005c8cf1
- (id)px_tintedImageWithColor:(id)arg1;	// IMP=0x00000000005c8bf5
- (_Bool)px_isLargerThan:(id)arg1;	// IMP=0x00000000005c8b69
@property(readonly, nonatomic) struct CGSize px_pixelSize;
@end

