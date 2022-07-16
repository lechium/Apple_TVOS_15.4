//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class GKGame, GKRemoteViewServiceController;

@interface GKHostedViewController : UIViewController
{
    _Bool _presentingRemoteViewController;	// 8 = 0x8
    _Bool _shouldPresentRemoteViewController;	// 9 = 0x9
    _Bool _isRequestingRemoteViewController;	// 10 = 0xa
    _Bool _gkIsDisappearing;	// 11 = 0xb
    GKGame *_game;	// 16 = 0x10
    GKRemoteViewServiceController *_remoteViewController;	// 24 = 0x18
    CDUnknownBlockType _remoteViewReadyHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000386cc
@property(nonatomic) _Bool gkIsDisappearing; // @synthesize gkIsDisappearing=_gkIsDisappearing;
@property(nonatomic) _Bool isRequestingRemoteViewController; // @synthesize isRequestingRemoteViewController=_isRequestingRemoteViewController;
@property(copy, nonatomic) CDUnknownBlockType remoteViewReadyHandler; // @synthesize remoteViewReadyHandler=_remoteViewReadyHandler;
@property(nonatomic) _Bool shouldPresentRemoteViewController; // @synthesize shouldPresentRemoteViewController=_shouldPresentRemoteViewController;
@property(nonatomic) _Bool presentingRemoteViewController; // @synthesize presentingRemoteViewController=_presentingRemoteViewController;
@property(retain, nonatomic) GKRemoteViewServiceController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;	// IMP=0x00000000000385e8
- (_Bool)shouldAutomaticallyForwardRotationMethods;	// IMP=0x00000000000385e0
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;	// IMP=0x00000000000385d8
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000000000385cd
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x00000000000385c5
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000038440
- (void)dismissModalViewControllerAnimated:(_Bool)arg1;	// IMP=0x00000000000382fa
- (void)presentRemoteViewControllerIfNeeded;	// IMP=0x00000000000381aa
- (void)resetRemoteViewController;	// IMP=0x000000000003805b
- (void)requestRemoteViewControllerIfNeeded;	// IMP=0x0000000000037719
- (id)_presentingViewController;	// IMP=0x0000000000037710
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000375c1
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000003747d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000003733d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000371fe
- (void)viewDidLoad;	// IMP=0x0000000000037156
- (void)didGetRemoteViewController;	// IMP=0x0000000000037150
- (void)donePressed:(id)arg1;	// IMP=0x00000000000370ef
- (void)didReceiveMemoryWarning;	// IMP=0x00000000000370c0
- (id)init;	// IMP=0x0000000000036f43
- (id)hostSideViewControllerClassName;	// IMP=0x0000000000036f36
- (id)serviceSideViewControllerClassName;	// IMP=0x0000000000036f29

@end
