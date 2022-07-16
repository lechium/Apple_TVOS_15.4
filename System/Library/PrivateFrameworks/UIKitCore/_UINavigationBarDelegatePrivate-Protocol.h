//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationBarDelegate-Protocol.h>

@class NSArray, UINavigationBar, UINavigationItem, UISearchController, UIWindow;
@protocol UIViewControllerTransitionCoordinator;

@protocol _UINavigationBarDelegatePrivate <UINavigationBarDelegate>

@optional
- (NSArray *)_navigationBarAdditionalActionsForBackButtonMenu:(UINavigationBar *)arg1;
- (void)_navigationBar:(UINavigationBar *)arg1 itemBackButtonUpdated:(UINavigationItem *)arg2;
- (void)_navigationBar:(UINavigationBar *)arg1 topItemUpdatedContentLayout:(UINavigationItem *)arg2;
- (void)_navigationBarDidUpdateStack:(UINavigationBar *)arg1;
- (void)_navigationBar:(UINavigationBar *)arg1 topItemUpdatedLargeTitleDisplayMode:(UINavigationItem *)arg2;
- (_Bool)_navigationBar:(UINavigationBar *)arg1 getContentOffsetOfObservedScrollViewIfApplicable:(struct CGPoint *)arg2;
- (_Bool)_navigationBarLayoutIsInInteractiveScroll;
- (_Bool)_navigationBarShouldUpdateProgress;
- (struct CGRect)_incomingNavigationBarFrame;
- (void)_navigationItemDidUpdateSearchController:(UINavigationItem *)arg1 oldSearchController:(UISearchController *)arg2;
- (void)_navigationBarDidEndAnimation:(UINavigationBar *)arg1;
- (_Bool)isNavigationBarHidden;
- (_Bool)enableBackButtonDuringTransition;
- (void)_updatePaletteConstraints;
- (void)_updatePalettesWithBlock:(void (^)(_UINavigationControllerPalette *))arg1;
- (double)_customNavigationTransitionDuration;
- (_Bool)_isInteractiveCustomNavigationTransition;
- (_Bool)_shouldCrossFadeNavigationBar;
- (_Bool)_willPerformCustomNavigationTransitionForPush;
- (_Bool)_willPerformCustomNavigationTransitionForPop;
- (id <UIViewControllerTransitionCoordinator>)_transitionCoordinator;
- (_Bool)_hasInterruptibleNavigationTransition;
- (void)_navigationBar:(UINavigationBar *)arg1 requestPopToItem:(UINavigationItem *)arg2;
- (UIWindow *)_navigationBarWindowForInterfaceOrientation:(UINavigationBar *)arg1;
- (void)_navigationBar:(UINavigationBar *)arg1 itemEnabledAutoScrollTransition:(UINavigationItem *)arg2;
- (double)_navigationBar:(UINavigationBar *)arg1 preferredHeightForTransitionToHeightRange:(CDStruct_cf303044)arg2;
- (struct NSDirectionalEdgeInsets)_layoutMarginsforNavigationBar:(UINavigationBar *)arg1;
- (void)_navigationBarWillBeginCoordinatedTransitionAnimations:(UINavigationBar *)arg1;
- (void)_popNavigationBar:(UINavigationBar *)arg1 item:(UINavigationItem *)arg2;
- (void)_navigationBarChangedSize:(UINavigationBar *)arg1;
- (void)_navigationBarDidChangeStyle:(UINavigationBar *)arg1;
- (void)navigationBarDidChangeOpacity:(UINavigationBar *)arg1;
- (void)navigationBarDidResizeForPrompt:(UINavigationBar *)arg1;
@end

