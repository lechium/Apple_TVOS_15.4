//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class UITapGestureRecognizer, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface AVxCustomOverlayHostViewController : UIViewController
{
    UITapGestureRecognizer *_menuTapGestureRecognizer;	// 8 = 0x8
    _Bool _isTouching;	// 16 = 0x10
    _Bool _enforcingMargins;	// 17 = 0x11
    UIVisualEffectView *_backgroundView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000752b7
@property(readonly, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic, getter=isEnforcingMargins) _Bool enforcingMargins; // @synthesize enforcingMargins=_enforcingMargins;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000075176
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000007512a
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000750de
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000075092
- (void)_handleMenuTapGesture:(id)arg1;	// IMP=0x0000000000074fde
- (void)autoDismissAfterDelay;	// IMP=0x0000000000074f9f
- (void)cancelAutoDismiss;	// IMP=0x0000000000074f79
- (void)_timeoutDismissal;	// IMP=0x0000000000074e50
- (void)_dismiss;	// IMP=0x0000000000074cab
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000074c6d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000074b90
- (void)viewDidLoad;	// IMP=0x00000000000741ac
- (void)_updatePresentationStyleAfterLayout;	// IMP=0x000000000007412f
- (void)_updateCornerCurves:(_Bool)arg1;	// IMP=0x0000000000073e1b
- (void)_updatePresentationStyle;	// IMP=0x0000000000073d43
- (void)loadView;	// IMP=0x0000000000073bcd
@property(readonly, nonatomic) UIViewController *hostedViewController;
- (void)dealloc;	// IMP=0x0000000000073b3f

@end
