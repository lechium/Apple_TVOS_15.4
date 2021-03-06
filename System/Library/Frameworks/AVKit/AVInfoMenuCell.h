//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, NSString, UILabel, UIView, UIVisualEffectView, _UIFloatingContentView;
@protocol UIFocusEnvironment;

__attribute__((visibility("hidden")))
@interface AVInfoMenuCell : UICollectionViewCell
{
    id <UIFocusEnvironment> _targetFocusEnvironment;	// 8 = 0x8
    _UIFloatingContentView *_floatingView;	// 16 = 0x10
    UIVisualEffectView *_visualEffectView;	// 24 = 0x18
    UIView *_backgroundEffectView;	// 32 = 0x20
    UIView *_focusView;	// 40 = 0x28
    UILabel *_label;	// 48 = 0x30
    NSLayoutConstraint *_floatingViewHeightConstraint;	// 56 = 0x38
}

+ (double)widthForText:(id)arg1;	// IMP=0x00000000000f975e
- (void).cxx_destruct;	// IMP=0x00000000000f7b4c
@property(retain, nonatomic) NSLayoutConstraint *floatingViewHeightConstraint; // @synthesize floatingViewHeightConstraint=_floatingViewHeightConstraint;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *focusView; // @synthesize focusView=_focusView;
@property(retain, nonatomic) UIView *backgroundEffectView; // @synthesize backgroundEffectView=_backgroundEffectView;
@property(retain, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(nonatomic) __weak id <UIFocusEnvironment> targetFocusEnvironment; // @synthesize targetFocusEnvironment=_targetFocusEnvironment;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000f7a00
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000f7983
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000f7906
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000f7889
- (void)applyFocusStateForEvent:(id)arg1 controlState:(unsigned long long)arg2;	// IMP=0x00000000000f76b0
- (void)_updateAppearance;	// IMP=0x00000000000f7515
- (void)setControlState:(unsigned long long)arg1;	// IMP=0x00000000000f6f3b
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000000f6d2a
- (void)updateFocusState:(id)arg1;	// IMP=0x00000000000f6b80
@property(copy, nonatomic) NSString *text;
- (double)elementFocusViewOpacity;	// IMP=0x00000000000f691d
- (id)elementTintColor;	// IMP=0x00000000000f68c9
- (id)unfocusedElementTintColor;	// IMP=0x00000000000f687d
- (unsigned long long)elementControlState;	// IMP=0x00000000000f683e
- (void)layoutSubviews;	// IMP=0x00000000000f672a
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000f6670
- (id)preferredFocusEnvironments;	// IMP=0x00000000000f6522
- (void)prepareForReuse;	// IMP=0x00000000000f644d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f63fd
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000f639c

@end

