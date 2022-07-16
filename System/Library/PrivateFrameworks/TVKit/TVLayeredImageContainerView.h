//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIStackedImageContainerView.h>

@class TVLayeredImageProxy, UIView, _UIStackedImageContainerLayer;

@interface TVLayeredImageContainerView : _UIStackedImageContainerView
{
    TVLayeredImageProxy *_layeredImageProxy;	// 8 = 0x8
    _Bool _layeredImageLoaded;	// 16 = 0x10
    UIView *_overlayView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006b4a5
@property(nonatomic, getter=isLayeredImageLoaded) _Bool layeredImageLoaded; // @synthesize layeredImageLoaded=_layeredImageLoaded;
@property(retain, nonatomic) TVLayeredImageProxy *layeredImageProxy; // @synthesize layeredImageProxy=_layeredImageProxy;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
- (void)_loadLayeredImage;	// IMP=0x000000000006adfd
@property(readonly, nonatomic) _UIStackedImageContainerLayer *layeredImageContainerLayer;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006ad6e
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000006ad1d
- (void)setPressed:(_Bool)arg1;	// IMP=0x000000000006acd1
- (void)setFocusDirection:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x000000000006ac6e
- (void)setFocusDirection:(struct CGPoint)arg1;	// IMP=0x000000000006ac15
- (struct CGPoint)focusDirection;	// IMP=0x000000000006abbb
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3;	// IMP=0x000000000006ab3e
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000006aac1
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000006aa70
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000006aa24
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000006a9ac
- (id)initWithLayeredImageProxy:(id)arg1;	// IMP=0x000000000006a7c0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000006a731

@end
