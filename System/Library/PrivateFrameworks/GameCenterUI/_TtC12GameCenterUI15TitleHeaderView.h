//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString, UIView, _TtC12GameCenterUI16DynamicTypeLabel;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI15TitleHeaderView
{
    MISSING_TYPE *titleLabel;	// 8 = 0x8
    MISSING_TYPE *detailLabel;	// 16 = 0x10
    MISSING_TYPE *style;	// 2901328 = 0x2c4550
    MISSING_TYPE *accessoryView;	// 0 = 0x0
    MISSING_TYPE *accessory;	// 2 = 0x2
    MISSING_TYPE *accessoryAction;	// 0 = 0x0
    MISSING_TYPE *separatorLineView;	// 1937071967 = 0x73755f5f
    MISSING_TYPE *separatorInset;	// 103 = 0x67
    MISSING_TYPE *allowsAccessibilityLayouts;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *avoidanceRegion;	// 0 = 0x0
    MISSING_TYPE *state;	// 2997054 = 0x2dbb3e
}

- (void).cxx_destruct;	// IMP=0x000000000017e8c0
@property(nonatomic, readonly) UIView *accessibilityAccessoryView;
@property(nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
@property(nonatomic, copy) NSString *accessibilityLabel;
- (void)prepareForReuse;	// IMP=0x000000000017e020
- (void)layoutSubviews;	// IMP=0x000000000017d920
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000017c520
- (void)didTapWithAccessoryView:(id)arg1;	// IMP=0x000000000017c220
@property(nonatomic, retain) UIView *accessoryView; // @synthesize accessoryView;
@property(nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *titleLabel; // @synthesize titleLabel;
- (_Bool)_disableRasterizeInAnimations;	// IMP=0x000000000017bf20
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017be30
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000017be00

@end
