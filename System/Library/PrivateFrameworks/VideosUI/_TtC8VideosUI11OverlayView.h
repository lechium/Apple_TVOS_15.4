//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, VUILabel;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI11OverlayView
{
    MISSING_TYPE *hasPageControlDisplayedOnTop;	// 8 = 0x8
    MISSING_TYPE *padding;	// 16 = 0x10
    MISSING_TYPE *badgeViewWrappers;	// 48 = 0x30
    MISSING_TYPE *overlayType;	// 56 = 0x38
    MISSING_TYPE *gradientLayer;	// 64 = 0x40
    MISSING_TYPE *gradientView;	// 72 = 0x48
    MISSING_TYPE *titleLabel;	// 80 = 0x50
    MISSING_TYPE *textBadge;	// 88 = 0x58
    MISSING_TYPE *progressView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000288aa0
@property(nonatomic, readonly) VUILabel *accessibilityTitleLabel;
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000002889c0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000287630
@property(nonatomic, readonly) _Bool vuiDebugUI;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002875f0

@end

