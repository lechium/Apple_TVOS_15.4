//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIImageView, UILabel, _UIBackdropView;

@interface PLProgressHUD : UIView
{
    _UIBackdropView *_backdropView;	// 8 = 0x8
    UIActivityIndicatorView *_activityIndicatorView;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
    UIImageView *_checkmarkView;	// 32 = 0x20
    _Bool _isShowing;	// 40 = 0x28
}

- (void)layoutSubviews;	// IMP=0x00000000000244ba
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000243b9
- (void)done;	// IMP=0x00000000000242b2
- (void)hide;	// IMP=0x000000000002426e
- (void)showInView:(id)arg1;	// IMP=0x000000000002413f
- (void)setText:(id)arg1;	// IMP=0x0000000000024106
- (void)dealloc;	// IMP=0x0000000000024075
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000023c9c

@end

