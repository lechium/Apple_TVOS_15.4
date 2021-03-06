//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

@interface PXCMMSpec
{
    unsigned long long _activityType;	// 8 = 0x8
    UIColor *_reviewBackgroundColor;	// 16 = 0x10
    long long _reviewGridContentMode;	// 24 = 0x18
    double _reviewHeaderTopInset;	// 32 = 0x20
    double _reviewHeaderCornerRadius;	// 40 = 0x28
    double _reviewBannerHeight;	// 48 = 0x30
    double _reviewSendBackFooterHeight;	// 56 = 0x38
    double _reviewFooterBottomInset;	// 64 = 0x40
    double _reviewSectionHeaderHeight;	// 72 = 0x48
    UIColor *_composeRecipientViewBackgroundColor;	// 80 = 0x50
    double _composeCornerRadius;	// 88 = 0x58
    double _composePrivacyMessageInset;	// 96 = 0x60
    double _composeHeaderVerticalPadding;	// 104 = 0x68
    double _bubbleStatusIconCornerRadius;	// 112 = 0x70
    struct CGSize _reviewGridInterItemSpacing;	// 120 = 0x78
    struct CGSize _reviewGridItemSize;	// 136 = 0x88
    struct UIEdgeInsets _reviewContentInsets;	// 152 = 0x98
    struct UIEdgeInsets _reviewSafeAreaInsets;	// 184 = 0xb8
    struct UIEdgeInsets _reviewGridContentInsets;	// 216 = 0xd8
    struct UIEdgeInsets _composeHeaderLabelMargins;	// 248 = 0xf8
    struct UIEdgeInsets _composeFooterInsets;	// 280 = 0x118
    struct UIEdgeInsets _composeFooterMargins;	// 312 = 0x138
}

+ (double)maxBubbleWidthForDisplayScale:(double)arg1;	// IMP=0x000000000039253d
- (void).cxx_destruct;	// IMP=0x000000000039250c
@property(readonly, nonatomic) double bubbleStatusIconCornerRadius; // @synthesize bubbleStatusIconCornerRadius=_bubbleStatusIconCornerRadius;
@property(readonly, nonatomic) struct UIEdgeInsets composeFooterMargins; // @synthesize composeFooterMargins=_composeFooterMargins;
@property(readonly, nonatomic) struct UIEdgeInsets composeFooterInsets; // @synthesize composeFooterInsets=_composeFooterInsets;
@property(readonly, nonatomic) double composeHeaderVerticalPadding; // @synthesize composeHeaderVerticalPadding=_composeHeaderVerticalPadding;
@property(readonly, nonatomic) struct UIEdgeInsets composeHeaderLabelMargins; // @synthesize composeHeaderLabelMargins=_composeHeaderLabelMargins;
@property(readonly, nonatomic) double composePrivacyMessageInset; // @synthesize composePrivacyMessageInset=_composePrivacyMessageInset;
@property(readonly, nonatomic) double composeCornerRadius; // @synthesize composeCornerRadius=_composeCornerRadius;
@property(readonly, nonatomic) UIColor *composeRecipientViewBackgroundColor; // @synthesize composeRecipientViewBackgroundColor=_composeRecipientViewBackgroundColor;
@property(readonly, nonatomic) double reviewSectionHeaderHeight; // @synthesize reviewSectionHeaderHeight=_reviewSectionHeaderHeight;
@property(readonly, nonatomic) double reviewFooterBottomInset; // @synthesize reviewFooterBottomInset=_reviewFooterBottomInset;
@property(readonly, nonatomic) double reviewSendBackFooterHeight; // @synthesize reviewSendBackFooterHeight=_reviewSendBackFooterHeight;
@property(readonly, nonatomic) double reviewBannerHeight; // @synthesize reviewBannerHeight=_reviewBannerHeight;
@property(readonly, nonatomic) double reviewHeaderCornerRadius; // @synthesize reviewHeaderCornerRadius=_reviewHeaderCornerRadius;
@property(readonly, nonatomic) double reviewHeaderTopInset; // @synthesize reviewHeaderTopInset=_reviewHeaderTopInset;
@property(readonly, nonatomic) long long reviewGridContentMode; // @synthesize reviewGridContentMode=_reviewGridContentMode;
@property(readonly, nonatomic) struct UIEdgeInsets reviewGridContentInsets; // @synthesize reviewGridContentInsets=_reviewGridContentInsets;
@property(readonly, nonatomic) struct UIEdgeInsets reviewSafeAreaInsets; // @synthesize reviewSafeAreaInsets=_reviewSafeAreaInsets;
@property(readonly, nonatomic) struct CGSize reviewGridItemSize; // @synthesize reviewGridItemSize=_reviewGridItemSize;
@property(readonly, nonatomic) struct CGSize reviewGridInterItemSpacing; // @synthesize reviewGridInterItemSpacing=_reviewGridInterItemSpacing;
@property(readonly, nonatomic) struct UIEdgeInsets reviewContentInsets; // @synthesize reviewContentInsets=_reviewContentInsets;
@property(readonly, nonatomic) UIColor *reviewBackgroundColor; // @synthesize reviewBackgroundColor=_reviewBackgroundColor;
@property(readonly, nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
- (double)_reviewSectionHeaderHeightForContentSize:(id)arg1;	// IMP=0x0000000000392225
@property(readonly, nonatomic) UIColor *bubbleBackgroundColor;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000003921f7
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 activityType:(unsigned long long)arg3;	// IMP=0x0000000000391d5b

@end

