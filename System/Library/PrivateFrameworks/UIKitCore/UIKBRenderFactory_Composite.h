//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIKBRenderFactory;

__attribute__((visibility("hidden")))
@interface UIKBRenderFactory_Composite
{
    UIKBRenderFactory *_overlayFactory;	// 8 = 0x8
}

- (_Bool)isTallPopup;	// IMP=0x0000000000886333
- (double)popupFontSize;	// IMP=0x00000000008862fa
- (struct CGPoint)popupSymbolTextOffset;	// IMP=0x00000000008862c1
- (struct CGPoint)variantAnnotationTextOffset;	// IMP=0x0000000000886288
- (struct CGPoint)variantSymbolTextOffset;	// IMP=0x000000000088624f
- (struct UIEdgeInsets)variantSymbolFrameInsets;	// IMP=0x0000000000886200
- (struct UIEdgeInsets)variantPaddedFrameInsets;	// IMP=0x00000000008861b1
- (struct UIEdgeInsets)wideShadowPopupMenuInsets;	// IMP=0x0000000000886162
- (struct UIEdgeInsets)wideShadowPaddleInsets;	// IMP=0x0000000000886113
- (void)dealloc;	// IMP=0x00000000008860d1
- (id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(_Bool)arg2;	// IMP=0x0000000000886042
- (Class)_overlayFactoryClass;	// IMP=0x000000000088603a

@end

