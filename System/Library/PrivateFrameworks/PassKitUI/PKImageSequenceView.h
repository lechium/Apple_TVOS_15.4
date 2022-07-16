//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UIImageView;

@interface PKImageSequenceView : UIView
{
    _Bool _isAnimating;	// 8 = 0x8
    unsigned long long _animationContext;	// 16 = 0x10
    unsigned long long _activeImageIndex;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
    UIImageView *_fadeInImageView;	// 40 = 0x28
    NSArray *_images;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002c13e1
- (void)_finishedTransitionToImage:(id)arg1;	// IMP=0x00000000002c12c5
- (void)_transitionToImage:(id)arg1 immedately:(_Bool)arg2 fast:(_Bool)arg3;	// IMP=0x00000000002c0ee3
- (void)stopAnimation;	// IMP=0x00000000002c0ec7
- (void)startAnimation;	// IMP=0x00000000002c0d84
- (void)updateImages:(id)arg1;	// IMP=0x00000000002c0d38
- (void)layoutSubviews;	// IMP=0x00000000002c0c6d
- (id)initWitImages:(id)arg1;	// IMP=0x00000000002c0a83

@end
