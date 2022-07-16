//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UINavigationController, UINavigationItem, UIPresentationController, UIScrollView, UITabBarController, UITabBarItem, UITraitCollection, UIView;
@protocol UIViewControllerTransitioningDelegate;

@interface UIViewController (VideosUICore)
- (void)vui_setContentScrollView:(id)arg1 forEdge:(unsigned long long)arg2;	// IMP=0x000000000001320f
- (id)vui_contentScrollViewForEdge:(unsigned long long)arg1;	// IMP=0x00000000000131fd
- (_Bool)vui_addSubview:(id)arg1 oldView:(id)arg2;	// IMP=0x0000000000013172
- (void)vui_updateViewConstraints;	// IMP=0x000000000001316c
- (void)vui_didMoveToParentViewController:(id)arg1;	// IMP=0x0000000000013166
- (void)vui_willMoveToParentViewController:(id)arg1;	// IMP=0x0000000000013160
- (void)vui_setOverrideTraitCollection:(id)arg1 forChildViewController:(id)arg2;	// IMP=0x000000000001314e
- (void)vui_endAppearanceTransition;	// IMP=0x000000000001313c
- (void)vui_beginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001312a
- (void)vui_removeFromParentViewController;	// IMP=0x0000000000013118
- (void)vui_addChildViewController:(id)arg1;	// IMP=0x0000000000013106
- (void)vui_showViewController:(id)arg1 sender:(id)arg2;	// IMP=0x00000000000130f4
- (void)vui_dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000130e2
- (void)vui_presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000130d0
- (void)vui_viewDidLayoutSubviews;	// IMP=0x00000000000130ca
- (void)vui_viewWillLayoutSubviews;	// IMP=0x00000000000130c4
- (void)vui_viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000130be
- (void)vui_viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000130b8
- (void)vui_viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000130b2
- (void)vui_viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000130ac
- (void)vui_viewDidLoad;	// IMP=0x00000000000130a6
- (void)vui_loadView;	// IMP=0x00000000000130a0
- (id)vui_initWithCoder:(id)arg1;	// IMP=0x0000000000013070
- (id)vui_initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000001303b
@property(copy, nonatomic) NSString *vuiViewControllerIdentifier;
@property(readonly, nonatomic, getter=vuiPPTIsLoading) _Bool vuiPPTLoading;
@property(retain, nonatomic) UIScrollView *vuiTabBarObservedScrollView;
@property(readonly, nonatomic) UITabBarController *vuiTabBarController;
@property(retain, nonatomic) UITabBarItem *vuiTabBarItem;
@property(readonly, nonatomic) _Bool vuiIsNavigationRoot;
@property(readonly, nonatomic) UINavigationController *vuiNavigationController;
@property(readonly, nonatomic) UINavigationItem *vuiNavigationItem;
@property(nonatomic, getter=vuiIsModalInPresentation) _Bool vuiModalInPresentation;
@property(readonly, nonatomic) UIPresentationController *vuiPresentationController;
@property(nonatomic) __weak id <UIViewControllerTransitioningDelegate> vuiTransitioningDelegate;
@property(readonly, nonatomic) _Bool vuiShouldAutomaticallyForwardAppearanceMethods;
@property(readonly, nonatomic) NSArray *vuiChildViewControllers;
@property(readonly, nonatomic) _Bool vuiIsRTL;
@property(readonly, nonatomic) UITraitCollection *vuiTraitCollection;
- (void)vui_setOverrideUserInterfaceStyle:(unsigned long long)arg1;	// IMP=0x0000000000012e22
@property(readonly, nonatomic) unsigned long long vuiOverrideUserInterfaceStyle;
@property(readonly, nonatomic) unsigned long long vuiUserInterfaceStyle;
@property(nonatomic) struct CGSize vuiPreferredContentSize;
@property(nonatomic) _Bool vuiAutomaticallyAdjustsScrollViewInsets;
@property(nonatomic) _Bool vuiModalPresentationCapturesStatusBarAppearance;
@property(nonatomic) long long vuiModalPresentationStyle;
@property(readonly, nonatomic, getter=vuiIsMovingFromParentViewController) _Bool vuiMovingFromParentViewController;
@property(readonly, nonatomic, getter=vuiIsMovingToParentViewController) _Bool vuiMovingToParentViewController;
@property(readonly, nonatomic, getter=vuiIsBeingDismissed) _Bool vuiBeingDismissed;
@property(readonly, nonatomic, getter=vuiIsBeingPresented) _Bool vuiBeingPresented;
@property(readonly, nonatomic) UIViewController *vuiPresentingViewController;
@property(readonly, nonatomic) UIViewController *vuiPresentedViewController;
@property(readonly, nonatomic) __weak UIViewController *vuiParentViewController;
@property(copy, nonatomic) NSString *vuiTitle;
@property(readonly, nonatomic, getter=vuiIsViewLoaded) _Bool vuiViewLoaded;
@property(retain, nonatomic) UIView *vuiView;
@end

