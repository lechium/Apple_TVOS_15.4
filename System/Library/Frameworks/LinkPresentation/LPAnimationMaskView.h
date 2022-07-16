//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface LPAnimationMaskView : UIView
{
    UIImage *_image;	// 8 = 0x8
    long long _animationOrigin;	// 16 = 0x10
    UIView *_imageView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002e981
@property(nonatomic) long long animationOrigin; // @synthesize animationOrigin=_animationOrigin;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)layoutSubviews;	// IMP=0x000000000002e520
@property(readonly, retain, nonatomic) UIView *imageView;
- (id)init;	// IMP=0x000000000002e484

@end

