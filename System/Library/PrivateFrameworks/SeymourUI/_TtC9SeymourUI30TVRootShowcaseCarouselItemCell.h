//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI30TVRootShowcaseCarouselItemCell
{
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *itemInfo;	// 1110338917 = 0x422e6d65
    MISSING_TYPE *onElementAppearance;	// 25193 = 0x6269
    MISSING_TYPE *onElementDisappearance;	// 12 = 0xc
    MISSING_TYPE *onVisibleBoundsChange;	// 24 = 0x18
    MISSING_TYPE *onImpressionableBoundsChange;	// 65536 = 0x10000
    MISSING_TYPE *layout;	// 1937330991 = 0x7379532f
    MISSING_TYPE *carouselItemDelegate;	// 1919052108 = 0x7262694c
    MISSING_TYPE *artworkView;	// 1835102790 = 0x6d617246
    MISSING_TYPE *avPlayer;	// 1093628779 = 0x412f736b
    MISSING_TYPE *avPlayerLayer;	// 779053412 = 0x2e6f6964
    MISSING_TYPE *blurView;	// 1919907685 = 0x726f7765
    MISSING_TYPE *buttonStackView;	// 1685406022 = 0x64754146
    MISSING_TYPE *textStackView;	// 12 = 0xc
    MISSING_TYPE *captionLabel;	// 24 = 0x18
    MISSING_TYPE *titleLabel;	// 131072 = 0x20000
    MISSING_TYPE *subtitleLabel;	// 1937330991 = 0x7379532f
    MISSING_TYPE *focusContainerGuide;	// 1919052108 = 0x7262694c
    MISSING_TYPE *buttonWidthConstraint;	// 1835102790 = 0x6d617246
    MISSING_TYPE *buttons;	// 1093628779 = 0x412f736b
    MISSING_TYPE *buttonActions;	// 1952539758 = 0x7461646e
}

- (void).cxx_destruct;	// IMP=0x0000000000309aa0
@property(nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property(nonatomic, readonly) UILabel *accessibilityCaptionLabel;
- (void)restartVideo;	// IMP=0x0000000000309430
- (void)handleTappedButton:(id)arg1;	// IMP=0x00000000003093e0
- (void)layoutSubviews;	// IMP=0x00000000003080a0
- (void)didMoveToWindow;	// IMP=0x0000000000308070
- (void)prepareForReuse;	// IMP=0x0000000000307c30
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000307c10
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000307be0
@property(nonatomic, readonly) _Bool canBecomeFocused;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;

@end

