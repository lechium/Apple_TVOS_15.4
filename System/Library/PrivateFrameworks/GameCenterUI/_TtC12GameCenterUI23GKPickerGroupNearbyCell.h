//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSLayoutConstraint, UILabel, UIView;

@interface _TtC12GameCenterUI23GKPickerGroupNearbyCell
{
    MISSING_TYPE *iconContainer;	// 8 = 0x8
    MISSING_TYPE *badgeLabel;	// 16 = 0x10
    MISSING_TYPE *titleLabel;	// 24 = 0x18
    MISSING_TYPE *container;	// 32 = 0x20
    MISSING_TYPE *iconContainerToTitleBaselineConstraint;	// 40 = 0x28
    MISSING_TYPE *iconContainerToTitleBaselineConstant;	// 48 = 0x30
    MISSING_TYPE *floatingView;	// 56 = 0x38
}

+ (id)reuseIdentifierAX;	// IMP=0x0000000000194380
+ (id)reuseIdentifier;	// IMP=0x0000000000194320
- (void).cxx_destruct;	// IMP=0x0000000000195a40
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000195940
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001958a0
- (void)prepareForReuse;	// IMP=0x0000000000195700
@property(nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;	// IMP=0x0000000000195460
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000001953f0
- (void)configureWithBadgeCount:(long long)arg1;	// IMP=0x0000000000194be0
- (void)awakeFromNib;	// IMP=0x0000000000194820
@property(nonatomic) __weak NSLayoutConstraint *iconContainerToTitleBaselineConstraint; // @synthesize iconContainerToTitleBaselineConstraint;
@property(nonatomic) __weak UIView *container; // @synthesize container;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UILabel *badgeLabel; // @synthesize badgeLabel;
@property(nonatomic) __weak UIView *iconContainer; // @synthesize iconContainer;

@end

