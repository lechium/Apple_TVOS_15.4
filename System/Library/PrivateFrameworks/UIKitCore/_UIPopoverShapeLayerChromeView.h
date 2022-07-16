//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIVisualEffectView, _UIPopoverShapeLayerMaskView;

__attribute__((visibility("hidden")))
@interface _UIPopoverShapeLayerChromeView
{
    UIVisualEffectView *_blurView;	// 112 = 0x70
    long long _requestedBackgroundStyle;	// 120 = 0x78
    long long _backgroundStyle;	// 128 = 0x80
    _Bool _popoverBackgroundColorIsOpaque;	// 136 = 0x88
    _Bool _arrowVisible;	// 137 = 0x89
    _Bool _shapeLayerPathNeedsUpdate;	// 138 = 0x8a
    _UIPopoverShapeLayerMaskView *_shapeLayerMaskView;	// 144 = 0x90
}

+ (double)cornerRadius;	// IMP=0x0000000000cc8d7b
+ (double)arrowBase;	// IMP=0x0000000000cc8d6d
+ (double)arrowHeight;	// IMP=0x0000000000cc8d5f
- (void).cxx_destruct;	// IMP=0x0000000000ccb105
- (void)didMoveToWindow;	// IMP=0x0000000000ccb04c
- (void)_loadNecessaryViews;	// IMP=0x0000000000ccaf89
- (void)_updateBackgroundStyle;	// IMP=0x0000000000ccaef3
- (long long)_resolvedBackgroundStyle;	// IMP=0x0000000000ccae6d
- (void)setBackgroundStyle:(long long)arg1;	// IMP=0x0000000000ccae50
- (long long)backgroundStyle;	// IMP=0x0000000000ccae3f
- (id)backgroundEffect;	// IMP=0x0000000000ccad50
- (void)_removeEffectView;	// IMP=0x0000000000ccad18
- (void)_configureEffectView;	// IMP=0x0000000000ccab8c
- (void)_updateShapeLayerPath;	// IMP=0x0000000000cca589
- (void)_generateRightArrowShapeInPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5 isPinned:(_Bool)arg6;	// IMP=0x0000000000cca1e6
- (void)_generateLeftArrowShapeInPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5 isPinned:(_Bool)arg6;	// IMP=0x0000000000cc9e49
- (void)_generateBottomArrowShapeInPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5 isPinned:(_Bool)arg6;	// IMP=0x0000000000cc9ab5
- (void)_generateTopArrowShapeInPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5 isPinned:(_Bool)arg6;	// IMP=0x0000000000cc971c
- (void)_addArrowCurveToPath:(id)arg1 direction:(unsigned long long)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5;	// IMP=0x0000000000cc93ca
- (void)_addLineWithSlightTrailingAndLeadingCurveToPath:(id)arg1 startPoint:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3 leadingEdge:(_Bool)arg4 isVertical:(_Bool)arg5;	// IMP=0x0000000000cc9221
- (double)_leftAndRightStartYLocationForBounds:(struct CGRect)arg1;	// IMP=0x0000000000cc9150
- (double)_upAndDownStartingXLocationForBounds:(struct CGRect)arg1;	// IMP=0x0000000000cc907f
- (void)setArrowOffset:(double)arg1;	// IMP=0x0000000000cc9033
- (void)setArrowDirection:(unsigned long long)arg1;	// IMP=0x0000000000cc8fe7
- (void)layoutSubviews;	// IMP=0x0000000000cc8fa6
- (void)_updateShapeLayerPathIfNeeded;	// IMP=0x0000000000cc8f77
- (id)_shadowPath;	// IMP=0x0000000000cc8f6f
- (struct CGSize)_shadowOffset;	// IMP=0x0000000000cc8f59
- (double)_shadowRadius;	// IMP=0x0000000000cc8f50
- (double)_shadowOpacity;	// IMP=0x0000000000cc8f47
- (struct UIEdgeInsets)_shadowInsets;	// IMP=0x0000000000cc8f34
- (double)maxNonPinnedOffset;	// IMP=0x0000000000cc8e9f
- (double)minNonPinnedOffset;	// IMP=0x0000000000cc8e02
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000cc8d89

@end
