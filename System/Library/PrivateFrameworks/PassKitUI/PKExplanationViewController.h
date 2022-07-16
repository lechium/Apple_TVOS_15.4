//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>

@class NSString, PKExplanationView, UIActivityIndicatorView, UIBarButtonItem;
@protocol PKExplanationViewControllerDelegate;

@interface PKExplanationViewController : UIViewController <PKExplanationViewDelegate>
{
    UIBarButtonItem *_spinningItem;	// 8 = 0x8
    UIBarButtonItem *_hiddenRightBarButtonItem;	// 16 = 0x10
    UIActivityIndicatorView *_activityIndicatorView;	// 24 = 0x18
    _Bool _showingSpinner;	// 32 = 0x20
    _Bool _wasBackHidden;	// 33 = 0x21
    _Bool _showCancelButton;	// 34 = 0x22
    _Bool _showDoneButton;	// 35 = 0x23
    id <PKExplanationViewControllerDelegate> _explanationViewControllerDelegate;	// 40 = 0x28
    long long _context;	// 48 = 0x30
    PKExplanationView *_explanationView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002fa7cf
@property(readonly, nonatomic) PKExplanationView *explanationView; // @synthesize explanationView=_explanationView;
@property(nonatomic) _Bool showDoneButton; // @synthesize showDoneButton=_showDoneButton;
@property(nonatomic) _Bool showCancelButton; // @synthesize showCancelButton=_showCancelButton;
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
@property(nonatomic) __weak id <PKExplanationViewControllerDelegate> explanationViewControllerDelegate; // @synthesize explanationViewControllerDelegate=_explanationViewControllerDelegate;
- (void)_setNavigationBarEnabled:(_Bool)arg1;	// IMP=0x00000000002fa631
- (void)showNavigationBarSpinner:(_Bool)arg1;	// IMP=0x00000000002fa386
- (void)_dismissViewController;	// IMP=0x00000000002fa224
- (void)_donePressed;	// IMP=0x00000000002fa1bb
- (void)_cancelPressed;	// IMP=0x00000000002fa152
- (void)viewWillLayoutSubviews;	// IMP=0x00000000002f9faa
- (id)contentScrollView;	// IMP=0x00000000002f9f8d
- (void)viewDidLoad;	// IMP=0x00000000002f9f49
- (void)loadView;	// IMP=0x00000000002f9e9e
- (id)initWithContext:(long long)arg1;	// IMP=0x00000000002f9da8
- (id)init;	// IMP=0x00000000002f9d94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

