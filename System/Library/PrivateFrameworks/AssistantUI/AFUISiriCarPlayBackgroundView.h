//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AFUISiriCarPlayFullScreenBackgroundView;
@protocol AFUISiriCarPlayBackgroundViewDelegate;

@interface AFUISiriCarPlayBackgroundView : UIView
{
    AFUISiriCarPlayFullScreenBackgroundView *_fullScreenBackgroundView;	// 8 = 0x8
    UIView *_systemBackgroundView;	// 16 = 0x10
    id <AFUISiriCarPlayBackgroundViewDelegate> _delegate;	// 24 = 0x18
    _Bool _visible;	// 32 = 0x20
    long long _backgroundViewMode;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000041bd9
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) long long backgroundViewMode; // @synthesize backgroundViewMode=_backgroundViewMode;
- (void)_updateCarPlayStatusBarForVisibility:(_Bool)arg1 backgroundViewMode:(long long)arg2;	// IMP=0x0000000000041b10
- (void)_updateViewsForVisibility:(_Bool)arg1 backgroundViewMode:(long long)arg2;	// IMP=0x00000000000419f3
- (void)_animateBackgroundsWithVisibility:(_Bool)arg1 backgroundViewMode:(long long)arg2;	// IMP=0x000000000004190c
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000041134

@end

