//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI22TVStandardBrickRowCell
{
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *itemInfo;	// 1835102790 = 0x6d617246
    MISSING_TYPE *layout;	// 1127183211 = 0x432f736b
    MISSING_TYPE *tvArtworkView;	// 1634296933 = 0x61696465
    MISSING_TYPE *titleLabel;	// 1870095725 = 0x6f77656d
    MISSING_TYPE *subtitleLabel;	// 1298494063 = 0x4d65726f
}

- (void).cxx_destruct;	// IMP=0x000000000034d320
@property(nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) UILabel *accessibilityTitleLabel;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x000000000034d1b0
- (void)prepareForReuse;	// IMP=0x000000000034d040
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000034ce90
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000034ce60

@end
