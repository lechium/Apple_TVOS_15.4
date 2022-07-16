//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSObject, NSString, UIActivityIndicatorView, UILabel, UIVisualEffectView;
@protocol OS_dispatch_source;

@interface TVActivityIndicatorViewController : UIViewController
{
    UILabel *_activityTextLabel;	// 8 = 0x8
    _Bool _showingSpinner;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_spinnerTimer;	// 24 = 0x18
    UIActivityIndicatorView *_spinnerView;	// 32 = 0x20
    UIVisualEffectView *_visualEffectView;	// 40 = 0x28
    _Bool _activityIndicatorHidden;	// 48 = 0x30
    NSString *_activityText;	// 56 = 0x38
    double _activityIndicatorDelay;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000079cba
@property(nonatomic) double activityIndicatorDelay; // @synthesize activityIndicatorDelay=_activityIndicatorDelay;
@property(nonatomic, getter=isActivityIndicatorHidden) _Bool activityIndicatorHidden; // @synthesize activityIndicatorHidden=_activityIndicatorHidden;
@property(copy, nonatomic) NSString *activityText; // @synthesize activityText=_activityText;
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000797d6
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000079614
- (void)loadView;	// IMP=0x000000000007936e
- (void)dealloc;	// IMP=0x0000000000079312
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000792c9

@end
