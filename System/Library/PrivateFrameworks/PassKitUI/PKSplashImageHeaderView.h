//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSString, UIColor, UIImage, UIImageView, UILabel;

@interface PKSplashImageHeaderView : UIView
{
    UIView *_fallbackColorView;	// 8 = 0x8
    UIImageView *_backgroundImageView;	// 16 = 0x10
    CAGradientLayer *_gradientLayer;	// 24 = 0x18
    UIImageView *_iconImageView;	// 32 = 0x20
    UILabel *_primaryLabel;	// 40 = 0x28
    UILabel *_secondaryLabel;	// 48 = 0x30
    UILabel *_attributionLabel;	// 56 = 0x38
    _Bool _showsGradientOverlay;	// 64 = 0x40
    NSString *_primaryText;	// 72 = 0x48
    NSString *_secondaryText;	// 80 = 0x50
    UIImage *_iconImage;	// 88 = 0x58
    UIImage *_backgroundImage;	// 96 = 0x60
    UIColor *_fallbackColor;	// 104 = 0x68
    NSString *_attributionProviderName;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000043dff2
@property(copy, nonatomic) NSString *attributionProviderName; // @synthesize attributionProviderName=_attributionProviderName;
@property(retain, nonatomic) UIColor *fallbackColor; // @synthesize fallbackColor=_fallbackColor;
@property(nonatomic) _Bool showsGradientOverlay; // @synthesize showsGradientOverlay=_showsGradientOverlay;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(copy, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
- (void)setBackgroundImage:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000043dbd9
- (void)layoutSubviews;	// IMP=0x000000000043d13b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000043d10e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000043c99e

@end
