//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/NSObject-Protocol.h>

@class UIViewController;
@protocol UIViewControllerAnimatedTransitioning;

@protocol _TSKAnimatorDelegate <NSObject>
- (void)animatorDidCompleteTransition:(id <UIViewControllerAnimatedTransitioning>)arg1 fromViewController:(UIViewController *)arg2 toViewController:(UIViewController *)arg3;
- (void)animatorWillBeginTransition:(id <UIViewControllerAnimatedTransitioning>)arg1 fromViewController:(UIViewController *)arg2 toViewController:(UIViewController *)arg3;
- (void)animator:(id <UIViewControllerAnimatedTransitioning>)arg1 transitionToPreview:(UIViewController *)arg2 animated:(_Bool)arg3;
- (UIViewController *)animator:(id <UIViewControllerAnimatedTransitioning>)arg1 previewViewControllerForViewController:(UIViewController *)arg2;
@end

