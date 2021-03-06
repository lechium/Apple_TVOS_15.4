//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAlertController.h>

@class UIActivityIndicatorView, UIProgressView, UIView, _PXAlertContentViewController;

@interface PXAlertController : UIAlertController
{
    _PXAlertContentViewController *_contentViewController;	// 8 = 0x8
    UIActivityIndicatorView *_activityIndicatorView;	// 16 = 0x10
    UIProgressView *_progressView;	// 24 = 0x18
    UIView *_contentView;	// 32 = 0x20
}

+ (id)progressAlertControllerWithMessage:(id)arg1;	// IMP=0x0000000000111fb7
+ (id)activityAlertControllerWithTitle:(id)arg1 cancelHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000111ecd
- (void).cxx_destruct;	// IMP=0x0000000000111e7a
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000111e20
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000111dd7
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000111dba
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000111c41

@end

