//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class ASCBorderView, ASCScreenshotDisplayConfiguration, NSString, UIColor, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface ASCArtworkView : UIView
{
    NSString *_decoration;	// 8 = 0x8
    ASCScreenshotDisplayConfiguration *_screenshotDisplayConfiguration;	// 16 = 0x10
    UIColor *_placeholderColor;	// 24 = 0x18
    UIView *_overlayView;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
    ASCBorderView *_borderView;	// 48 = 0x30
    struct CGSize _preferredSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001134f
@property(readonly, nonatomic) ASCBorderView *borderView; // @synthesize borderView=_borderView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(copy, nonatomic) ASCScreenshotDisplayConfiguration *screenshotDisplayConfiguration; // @synthesize screenshotDisplayConfiguration=_screenshotDisplayConfiguration;
@property(retain, nonatomic) NSString *decoration; // @synthesize decoration=_decoration;
@property(nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
- (id)description;	// IMP=0x0000000000011150
- (void)layoutSubviews;	// IMP=0x0000000000010daf
- (unsigned long long)cornerMaskForContentRect:(struct CGRect)arg1;	// IMP=0x0000000000010cce
- (id)cornerCurveForContentRect:(struct CGRect)arg1;	// IMP=0x0000000000010bcd
- (double)cornerRadiusForContentRect:(struct CGRect)arg1;	// IMP=0x00000000000107f8
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000001079b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000001062e
- (void)invalidateIntrinsicContentSize;	// IMP=0x00000000000105ad
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000001058b
- (struct CGRect)jet_focusedFrame;	// IMP=0x000000000001044d
- (void)setDataChanged;	// IMP=0x00000000000101e7
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x000000000001013a
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(retain, nonatomic) UIImage *image;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000faf1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000fac6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000f825

@end

