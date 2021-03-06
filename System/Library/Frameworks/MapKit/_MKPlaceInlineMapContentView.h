//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKViewWithHairline, NSLayoutConstraint, UIImage, UIImageView, UIView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface _MKPlaceInlineMapContentView
{
    MKViewWithHairline *_hairlineView;	// 8 = 0x8
    NSLayoutConstraint *_topToTitleConstraint;	// 16 = 0x10
    NSLayoutConstraint *_titleToBottomConstraint;	// 24 = 0x18
    UIView *_mapView;	// 32 = 0x20
    UIImageView *_mapImageView;	// 40 = 0x28
    _MKUILabel *_titleLabel;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000003a53f
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000003a503
- (double)mapViewHeight;	// IMP=0x000000000003a4f5
@property(retain, nonatomic) UIImage *map;
- (void)infoCardThemeChanged;	// IMP=0x000000000003a309
@property(nonatomic, getter=isBottomHairlineHidden) _Bool bottomHairlineHidden;
- (void)_contentSizeDidChange;	// IMP=0x000000000003a1f6
- (double)titleHeight;	// IMP=0x000000000003a1a4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000039538
- (_Bool)useImageView;	// IMP=0x0000000000039530
- (_Bool)hasTitle;	// IMP=0x0000000000039528

@end

