//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface _HBMultiSizedImageView : UIView
{
    UIImage *_image;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UIImageView *_shadowImageView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000057c07
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x001000000005799d
- (id)_shadowImage;	// IMP=0x001000000005776c
- (id)_shadowPath;	// IMP=0x00100000000576f0
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2;	// IMP=0x0010000000057487
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000057453
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000005743f

@end

