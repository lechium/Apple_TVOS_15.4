//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, UIView, UIVisualEffectView, _TtC12GameCenterUI26CappedSizeDynamicTypeLabel;

@interface _TtC12GameCenterUI17ProfileAvatarView
{
    MISSING_TYPE *profileEditButtonBackground;	// 24 = 0x18
    MISSING_TYPE *profileEditLabel;	// 32 = 0x20
    MISSING_TYPE *roundedEditButton;	// 40 = 0x28
    MISSING_TYPE *isEditable;	// 48 = 0x30
    MISSING_TYPE *tapGestureRecognizer;	// 56 = 0x38
    MISSING_TYPE *tapHandler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000025e2b0
@property(nonatomic, readonly) _TtC12GameCenterUI26CappedSizeDynamicTypeLabel *accessibilityProfileEditLabel;
@property(nonatomic, readonly) UIView *accessibilityRoundedEditButton;
@property(nonatomic, readonly) UIVisualEffectView *accessibilityProfileEditButtonBackground;
@property(nonatomic, readonly) _Bool accessibilityIsEditable;
- (void)didTap;	// IMP=0x000000000025df40
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000025deb0
- (void)layoutSubviews;	// IMP=0x000000000025de80
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000025d3c0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000025d390

@end

