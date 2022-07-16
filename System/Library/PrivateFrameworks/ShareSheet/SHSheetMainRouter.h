//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShareSheet/SHSheetActivityPerformerPresentationInterface-Protocol.h>
#import <ShareSheet/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, UINavigationController, UIViewController;
@protocol SHSheetActivityPerformerPresentationInterface, SHSheetContentViewInterface;

@interface SHSheetMainRouter : NSObject <SHSheetActivityPerformerPresentationInterface, UIViewControllerTransitioningDelegate>
{
    _Bool _listenForDismissalTransition;	// 8 = 0x8
    UIViewController *_rootViewController;	// 16 = 0x10
    id <SHSheetActivityPerformerPresentationInterface> _activityPresentationController;	// 24 = 0x18
    UINavigationController *_mainNavigationController;	// 32 = 0x20
    UINavigationController *_secondaryNavigationController;	// 40 = 0x28
    UINavigationController *_userDefaultsNavigationController;	// 48 = 0x30
    UIViewController<SHSheetContentViewInterface> *_mainViewController;	// 56 = 0x38
    UIViewController<SHSheetContentViewInterface> *_secondaryViewController;	// 64 = 0x40
    UIViewController *_presentationViewController;	// 72 = 0x48
    UIViewController *_currentViewControllerForActivityBeingListened;	// 80 = 0x50
    CDUnknownBlockType _listenerCompletionHandler;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000683ba
@property(copy, nonatomic) CDUnknownBlockType listenerCompletionHandler; // @synthesize listenerCompletionHandler=_listenerCompletionHandler;
@property(nonatomic) _Bool listenForDismissalTransition; // @synthesize listenForDismissalTransition=_listenForDismissalTransition;
@property(retain, nonatomic) UIViewController *currentViewControllerForActivityBeingListened; // @synthesize currentViewControllerForActivityBeingListened=_currentViewControllerForActivityBeingListened;
@property(retain, nonatomic) UIViewController *presentationViewController; // @synthesize presentationViewController=_presentationViewController;
@property(nonatomic) __weak UIViewController<SHSheetContentViewInterface> *secondaryViewController; // @synthesize secondaryViewController=_secondaryViewController;
@property(nonatomic) __weak UIViewController<SHSheetContentViewInterface> *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(nonatomic) __weak UINavigationController *userDefaultsNavigationController; // @synthesize userDefaultsNavigationController=_userDefaultsNavigationController;
@property(nonatomic) __weak UINavigationController *secondaryNavigationController; // @synthesize secondaryNavigationController=_secondaryNavigationController;
@property(retain, nonatomic) UINavigationController *mainNavigationController; // @synthesize mainNavigationController=_mainNavigationController;
@property(retain, nonatomic) id <SHSheetActivityPerformerPresentationInterface> activityPresentationController; // @synthesize activityPresentationController=_activityPresentationController;
@property(readonly, nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x0000000000068127
- (void)_presentationControllerDismissalTransitionDidEndNotification:(id)arg1;	// IMP=0x0000000000067eec
- (void)activityPerformerStopListeningForDismissalTransition:(id)arg1;	// IMP=0x0000000000067e28
- (void)activityPerformer:(id)arg1 startListeningForDismissalTransitionWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000067ce6
- (void)activityPerformCleanUpPresentation:(id)arg1;	// IMP=0x0000000000067c91
- (void)activityPerformer:(id)arg1 presentViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006784b
- (void)activityPerformer:(id)arg1 preparePresentationWithContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000067289
- (_Bool)activityPerformer:(id)arg1 presentPopoverContentViewController:(id)arg2;	// IMP=0x0000000000066f61
- (_Bool)activityPerformerCanPresent:(id)arg1;	// IMP=0x0000000000066e95
- (void)_installChildViewController:(id)arg1 forParentViewController:(id)arg2;	// IMP=0x0000000000066dc0
- (void)_configureAirdropViewController:(id)arg1;	// IMP=0x0000000000066ca6
- (void)_configureMainViewController:(id)arg1;	// IMP=0x0000000000066919
- (void)dismissForActivityPerformerResult:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000066108
- (void)dismissUserDefaultsViewControllerAnimated:(_Bool)arg1;	// IMP=0x0000000000065fe8
- (void)dismissSecondaryViewControllerAnimated:(_Bool)arg1;	// IMP=0x0000000000065ec2
- (void)_dismissOptionsViewController;	// IMP=0x0000000000065e7e
- (void)presentOptionsViewController:(id)arg1;	// IMP=0x0000000000065c10
- (void)presentAlertController:(id)arg1;	// IMP=0x0000000000065b60
- (void)installAirdropViewController:(id)arg1;	// IMP=0x0000000000065acb
- (void)presentAirdropViewController:(id)arg1;	// IMP=0x0000000000065a76
- (void)_presentViewController:(id)arg1;	// IMP=0x000000000006591d
- (void)presentUserDefaultsViewController:(id)arg1;	// IMP=0x0000000000065738
- (void)presentSecondaryViewController:(id)arg1;	// IMP=0x0000000000065584
- (void)presentMainViewController:(id)arg1 withNavigationControllerSupport:(_Bool)arg2;	// IMP=0x00000000000653e1
@property(readonly, nonatomic) _Bool isPresentedWithinPopover;
- (id)initWithRootViewController:(id)arg1;	// IMP=0x000000000006520e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

