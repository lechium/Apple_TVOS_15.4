//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIColor, UIView, UIVisualEffectView, _UIFloatingContentView;
@protocol VUIBaseListViewCellDelegate;

__attribute__((visibility("hidden")))
@interface VUIBaseListViewCell : UICollectionViewCell
{
    UIColor *_backgroundColor;	// 8 = 0x8
    UIColor *_highlightedBackgroundColor;	// 16 = 0x10
    UIVisualEffectView *_backgroundVisualEffectView;	// 24 = 0x18
    _Bool _visualEffectViewBackgroundEnabled;	// 32 = 0x20
    _Bool _disabled;	// 33 = 0x21
    _Bool _shouldAppearSelected;	// 34 = 0x22
    _UIFloatingContentView *_floatingView;	// 40 = 0x28
    id <VUIBaseListViewCellDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000011d124
@property(nonatomic) _Bool shouldAppearSelected; // @synthesize shouldAppearSelected=_shouldAppearSelected;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <VUIBaseListViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(nonatomic) _Bool visualEffectViewBackgroundEnabled; // @synthesize visualEffectViewBackgroundEnabled=_visualEffectViewBackgroundEnabled;
- (void)_updateSelectedBackgroundColor;	// IMP=0x000000000011cf5f
- (unsigned long long)_floatingViewControlState;	// IMP=0x000000000011cf20
- (void)prepareForReuse;	// IMP=0x000000000011cec8
- (void)layoutSubviews;	// IMP=0x000000000011cdbe
- (id)contentView;	// IMP=0x000000000011cd70
@property(readonly, nonatomic) UIView *vuiContentView;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000011cc59
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000011cb54
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000011ca3a
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000011c8b5
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000011c6b6
- (void)updateFloatingViewControlStateForPreviouslyFocusedView:(id)arg1;	// IMP=0x000000000011c5de
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x000000000011c576
- (_Bool)canBecomeFocused;	// IMP=0x000000000011c561
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000011c544
- (_Bool)_descendantsShouldHighlight;	// IMP=0x000000000011c4bb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000011c1d3

@end

