//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface TVPSpinnerView : UIView
{
    _Bool _shouldResumeAnimation;	// 8 = 0x8
    UIView *_spinnerContainer;	// 16 = 0x10
    UIView *_spinnerOverlayContainer;	// 24 = 0x18
    UIColor *_color;	// 32 = 0x20
    _Bool _animating;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000069bbe
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void)_removeAnimations;	// IMP=0x0000000000069aa6
- (void)_addAnimations;	// IMP=0x0000000000069653
- (void)_updateImagesForTraitCollection:(id)arg1;	// IMP=0x00000000000694d9
- (id)_spinnerImageForTraitCollection:(id)arg1 size:(struct CGSize)arg2 alpha:(double)arg3;	// IMP=0x0000000000069405
- (void)stopAnimating;	// IMP=0x00000000000693e0
- (void)startAnimating;	// IMP=0x0000000000069368
- (void)_applicationWillResignActiveNotification:(id)arg1;	// IMP=0x0000000000069309
- (void)_applicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x00000000000692b3
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000690fa
- (void)didMoveToWindow;	// IMP=0x000000000006907f
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000006901c
- (void)dealloc;	// IMP=0x0000000000068f7a
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2;	// IMP=0x000000000006872e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000006871a

@end

