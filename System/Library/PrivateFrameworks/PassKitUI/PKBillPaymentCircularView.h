//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor, UIImage, UIImageView;

@interface PKBillPaymentCircularView : UIView
{
    UIView *_primaryView;	// 8 = 0x8
    UIView *_secondaryView;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    UIColor *_primaryColor;	// 32 = 0x20
    struct CGRect _shadowFrame;	// 40 = 0x28
    UIColor *_secondaryColor;	// 72 = 0x48
    UIImage *_image;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000001b4be5
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
- (id)_defaultSecondaryColor;	// IMP=0x00000000001b4baa
@property(copy, nonatomic) UIColor *primaryColor;
- (void)_updateColors;	// IMP=0x00000000001b4a18
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001b48fb
- (void)layoutSubviews;	// IMP=0x00000000001b45f3
- (id)init;	// IMP=0x00000000001b4374

@end

