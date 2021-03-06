//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel, UIStackView, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface _AVUnifiedPlayerInfoPanelDescriptionButton : UIControl
{
    _UIFloatingContentView *_floatingContentView;	// 8 = 0x8
    UIStackView *_stackView;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    UILabel *_label;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000125ff5
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
- (void)_setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000125f3f
- (_Bool)_canHandlePresses:(id)arg1;	// IMP=0x0000000000125ee8
- (void)_updateAppearance;	// IMP=0x0000000000125e0e
- (unsigned long long)_currentControlState;	// IMP=0x0000000000125dcd
- (void)_updateUsingAction:(id)arg1;	// IMP=0x0000000000125d14
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000125c3b
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000125b87
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000125ae7
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000125a44
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000125a30
- (void)layoutSubviews;	// IMP=0x00000000001259bb
- (id)initWithFrame:(struct CGRect)arg1 primaryAction:(id)arg2;	// IMP=0x0000000000124efa

@end

