//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVMLKit/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <TVMLKit/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSArray, NSHashTable, NSString, _UIProgressiveBlurPresentationAnimator;

@interface TVModalPresenter : NSObject <UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate>
{
    NSHashTable *__presentationControllers;	// 8 = 0x8
    _UIProgressiveBlurPresentationAnimator *_presentingAnimator;	// 16 = 0x10
    _UIProgressiveBlurPresentationAnimator *_dismissingAnimator;	// 24 = 0x18
}

+ (id)_viewControllerForResponder:(id)arg1;	// IMP=0x000000000002f624
+ (id)sharedInstance;	// IMP=0x000000000002dd93
- (void).cxx_destruct;	// IMP=0x000000000002f81d
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x000000000002f78e
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000000002f728
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x000000000002f6c2
- (void)dismissAllViewControllersWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f35d
- (void)dismissViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002f064
- (void)dismissViewControllerWithResponder:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ee64
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002e3e4
- (void)presentViewController:(id)arg1 forResponder:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002e1e2
@property(readonly, copy, nonatomic) NSArray *presentedViewControllers;
@property(readonly, nonatomic) NSHashTable *_presentationControllers;
- (id)init;	// IMP=0x000000000002dde8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

