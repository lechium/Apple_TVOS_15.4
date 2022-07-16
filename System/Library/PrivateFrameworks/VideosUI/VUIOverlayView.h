//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, NSArray, VUIBaseView, VUILabel, VUIProgressView, VUITextBadgeView;

__attribute__((visibility("hidden")))
@interface VUIOverlayView
{
    _Bool _hasPageControlDisplayedOnTop;	// 8 = 0x8
    VUILabel *_titleLabel;	// 16 = 0x10
    VUITextBadgeView *_textBadge;	// 24 = 0x18
    VUIProgressView *_progressView;	// 32 = 0x20
    VUIBaseView *_gradientView;	// 40 = 0x28
    CALayer *_gradientLayer;	// 48 = 0x30
    NSArray *_badgeViewWrappers;	// 56 = 0x38
    long long _overlayType;	// 64 = 0x40
    struct UIEdgeInsets _padding;	// 72 = 0x48
}

+ (id)overlayViewFromMediaItem:(id)arg1 overlayType:(long long)arg2 existingView:(id)arg3;	// IMP=0x000000000002838a
- (void).cxx_destruct;	// IMP=0x0000000000029f3b
@property(nonatomic) _Bool hasPageControlDisplayedOnTop; // @synthesize hasPageControlDisplayedOnTop=_hasPageControlDisplayedOnTop;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) long long overlayType; // @synthesize overlayType=_overlayType;
@property(copy, nonatomic) NSArray *badgeViewWrappers; // @synthesize badgeViewWrappers=_badgeViewWrappers;
@property(retain, nonatomic) CALayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) VUIBaseView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) VUIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) VUITextBadgeView *textBadge; // @synthesize textBadge=_textBadge;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (struct UIEdgeInsets)_overlayPadding;	// IMP=0x0000000000029e2c
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x0000000000028e7c

@end

