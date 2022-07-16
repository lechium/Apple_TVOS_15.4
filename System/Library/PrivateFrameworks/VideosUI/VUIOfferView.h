//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIOfferView
{
    _Bool _isEntitled;	// 8 = 0x8
    UIView *_imageView;	// 16 = 0x10
    UIView *_logoView;	// 24 = 0x18
    UIView *_appIconView;	// 32 = 0x20
    VUILabel *_channelNameLabel;	// 40 = 0x28
    VUILabel *_titleLabel;	// 48 = 0x30
    VUILabel *_subtitleLabel;	// 56 = 0x38
    VUILabel *_textLabel;	// 64 = 0x40
    UIView *_versionsButton;	// 72 = 0x48
    UIView *_channelImageBackgroundView;	// 80 = 0x50
    double _AXBaselineMargin;	// 88 = 0x58
    double _topPartAspectRatio;	// 96 = 0x60
    struct UIEdgeInsets _padding;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000051629
@property(nonatomic) double topPartAspectRatio; // @synthesize topPartAspectRatio=_topPartAspectRatio;
@property(nonatomic) double AXBaselineMargin; // @synthesize AXBaselineMargin=_AXBaselineMargin;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) _Bool isEntitled; // @synthesize isEntitled=_isEntitled;
@property(retain, nonatomic) UIView *channelImageBackgroundView; // @synthesize channelImageBackgroundView=_channelImageBackgroundView;
@property(retain, nonatomic) UIView *versionsButton; // @synthesize versionsButton=_versionsButton;
@property(retain, nonatomic) VUILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) VUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) VUILabel *channelNameLabel; // @synthesize channelNameLabel=_channelNameLabel;
@property(retain, nonatomic) UIView *appIconView; // @synthesize appIconView=_appIconView;
@property(retain, nonatomic) UIView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UIView *imageView; // @synthesize imageView=_imageView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000000513fd
- (struct CGSize)computeSizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000051378
- (void)layoutOfferSubviews;	// IMP=0x0000000000050378
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x0000000000050342
- (double)_chinHeightForSize:(struct CGSize)arg1;	// IMP=0x000000000004fc94
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x000000000004fbe6
- (void)prepareForCellReuse;	// IMP=0x000000000004f6b7

@end

