//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel, UIVisualEffectView, _UIFloatingContentView;

@interface PXStoryTVInfoPanelButton : UIView
{
    _UIFloatingContentView *_floatingContentView;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
    UIView *_focusView;	// 24 = 0x18
    UIVisualEffectView *_backgroundEffectView;	// 32 = 0x20
}

+ (double)widthForText:(id)arg1;	// IMP=0x00000000008d12d6
- (void).cxx_destruct;	// IMP=0x00000000008d0d0e
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000008d0ccd
- (void)_updateAppearance;	// IMP=0x00000000008d0c31
- (void)setControlState:(unsigned long long)arg1;	// IMP=0x00000000008d093f
- (void)updateFocusState:(id)arg1;	// IMP=0x00000000008d082a
@property(copy, nonatomic) NSString *text;
- (id)elementTintColor;	// IMP=0x00000000008d0671
- (unsigned long long)elementControlState;	// IMP=0x00000000008d0657
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000008d059d
- (_Bool)canBecomeFocused;	// IMP=0x00000000008d0595
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000008cf9d6

@end
