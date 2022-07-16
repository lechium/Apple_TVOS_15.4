//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface HBUITopShelfParadeButtonIndeterminateProgressView : UIView
{
    _Bool _animating;	// 8 = 0x8
}

@property(readonly, nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void)_applicationWillEnterForeground;	// IMP=0x000000000000965e
- (void)_applicationDidEnterBackground;	// IMP=0x000000000000964c
- (void)_removeRotationAnimation;	// IMP=0x0000000000009608
- (void)_addRotationAnimationIfNeeded;	// IMP=0x00000000000094e8
- (struct CGRect)_contentRect;	// IMP=0x0000000000009413
- (void)stopAnimating;	// IMP=0x00000000000093f6
- (void)startAnimating;	// IMP=0x00000000000093d9
- (void)didMoveToWindow;	// IMP=0x0000000000009398
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000009357
- (void)tintColorDidChange;	// IMP=0x0000000000009316
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000000091b3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000009098

@end

