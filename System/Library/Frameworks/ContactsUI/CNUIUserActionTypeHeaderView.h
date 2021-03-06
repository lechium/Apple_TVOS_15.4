//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSLayoutConstraint, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface CNUIUserActionTypeHeaderView : UITableViewHeaderFooterView
{
    _Bool _highlighted;	// 8 = 0x8
    _Bool _expanded;	// 9 = 0x9
    UIImageView *_actionTypeImageView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
    UIImageView *_accessoryImageView;	// 40 = 0x28
    UIView *_divider;	// 48 = 0x30
    NSLayoutConstraint *_dividerHeightConstraint;	// 56 = 0x38
}

+ (id)subtitleColor;	// IMP=0x0000000000013d9c
+ (id)dividerExpandedBackgroundColor;	// IMP=0x0000000000013d73
+ (id)dividerRegularBackgroundColor;	// IMP=0x0000000000013d4a
+ (id)highlightedBackgroundColor;	// IMP=0x0000000000013d31
+ (id)regularExpandControlTitle;	// IMP=0x0000000000013cd3
+ (id)expandedExpandControlTitle;	// IMP=0x0000000000013c75
+ (id)regularBackgroundColor;	// IMP=0x0000000000013c4c
+ (id)expandedBackgroundColor;	// IMP=0x0000000000013c23
- (void).cxx_destruct;	// IMP=0x0000000000014c9e
@property(retain, nonatomic) NSLayoutConstraint *dividerHeightConstraint; // @synthesize dividerHeightConstraint=_dividerHeightConstraint;
@property(retain, nonatomic) UIView *divider; // @synthesize divider=_divider;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *actionTypeImageView; // @synthesize actionTypeImageView=_actionTypeImageView;
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000014b64
- (void)prepareForReuse;	// IMP=0x0000000000014afb
- (void)updateVisualStateAnimated:(_Bool)arg1;	// IMP=0x0000000000014848
- (void)setShowsAccessory:(_Bool)arg1;	// IMP=0x0000000000014746
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000014709
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000146cc
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x0000000000013dd0

@end

