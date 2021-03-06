//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView, UIStatusBarStyleAttributes;

__attribute__((visibility("hidden")))
@interface UIStatusBarBackgroundView
{
    UIStatusBarStyleAttributes *_style;	// 8 = 0x8
    UIImageView *_glowView;	// 16 = 0x10
    _Bool _glowEnabled;	// 24 = 0x18
    _Bool _suppressGlow;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x0000000000cb2680
- (id)_glowImage;	// IMP=0x0000000000cb25e0
- (id)_baseImage;	// IMP=0x0000000000cb2540
- (id)_backgroundImageName;	// IMP=0x0000000000cb2523
- (void)_stopGlowAnimation;	// IMP=0x0000000000cb2490
- (void)_startGlowAnimationWaitForNextCycle:(_Bool)arg1;	// IMP=0x0000000000cb20d5
- (_Bool)_styleCanGlow;	// IMP=0x0000000000cb20ac
- (void)setSuppressesGlow:(_Bool)arg1;	// IMP=0x0000000000cb2080
- (void)_setGlowAnimationEnabled:(_Bool)arg1 waitForNextCycle:(_Bool)arg2;	// IMP=0x0000000000cb2042
- (void)setGlowAnimationEnabled:(_Bool)arg1;	// IMP=0x0000000000cb202e
- (id)style;	// IMP=0x0000000000cb2019
- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2 backgroundColor:(id)arg3;	// IMP=0x0000000000cb1dda

@end

