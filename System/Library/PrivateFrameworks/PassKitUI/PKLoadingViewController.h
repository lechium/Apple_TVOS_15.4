//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class UIActivityIndicatorView, UILabel;
@protocol PKLoadingViewControllerDelegate;

@interface PKLoadingViewController : UIViewController
{
    id <PKLoadingViewControllerDelegate> _delegate;	// 8 = 0x8
    UIActivityIndicatorView *_spinner;	// 16 = 0x10
    UILabel *_loadingLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000013e3ba
- (void)_cancelButtonTapped:(id)arg1;	// IMP=0x000000000013e37e
- (void)viewDidLayoutSubviews;	// IMP=0x000000000013e18e
- (void)viewDidLoad;	// IMP=0x000000000013dfc6
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000013dea4

@end

