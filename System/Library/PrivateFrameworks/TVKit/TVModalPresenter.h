//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVKit/UIGestureRecognizerDelegate-Protocol.h>
#import <TVKit/UINavigationControllerDelegate-Protocol.h>
#import <TVKit/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, TVModalPresentationAnimator, UINavigationController, UIViewController;

@interface TVModalPresenter : NSObject <UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate>
{
    TVModalPresentationAnimator *_presentingAnimator;	// 8 = 0x8
    TVModalPresentationAnimator *_dismissingAnimator;	// 16 = 0x10
    UINavigationController *_modalRootViewController;	// 24 = 0x18
}

+ (id)presenter;	// IMP=0x00000000000815f5
- (void).cxx_destruct;	// IMP=0x000000000008239c
@property(readonly, nonatomic) UINavigationController *modalRootViewController; // @synthesize modalRootViewController=_modalRootViewController;
- (void)_dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000082173
- (void)hideAllAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000082161
- (void)hideController:(id)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000081d48
- (void)showController:(id)arg1 fromController:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000817dc
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x000000000008176c
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000000008175e
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000000081750
@property(readonly, nonatomic) UIViewController *presentedViewController;
- (id)hidden;	// IMP=0x00000000000814c5
- (id)init;	// IMP=0x00000000000814b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
