//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@interface UINavigationController (PXDiagnosticsEnvironment)
+ (id)px_defaultDelegateForNavigationController:(id)arg1;	// IMP=0x00000000003ab32c
+ (id)px_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;	// IMP=0x00000000003ab2a5
+ (id)px_navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;	// IMP=0x00000000003ab20a
+ (id)px_navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x00000000003ab146
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x0000000000309296
- (id)px_navigationDestination;	// IMP=0x00000000006b6f47
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000006b6cfa
- (void)_px_prepareNavigationFromViewController:(id)arg1 routingOptions:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000006b6bf5
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;	// IMP=0x00000000006b6b4e
- (unsigned long long)routingOptionsForDestination:(id)arg1;	// IMP=0x00000000006b6ab1
- (void)px_navigateToStateAllowingTabSwitchingWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006b6a0f
- (_Bool)px_allowsTabSwitching;	// IMP=0x00000000006b699c
- (void)px_pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000076cd21
- (id)px_popToViewControllerPrecedingViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000076cc47
- (_Bool)px_preparePopToViewController:(id)arg1 forced:(_Bool)arg2;	// IMP=0x000000000076c9fa
- (void)_ppt_setTransitionAnimationCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000076c993
- (CDUnknownBlockType)_ppt_transitionAnimationCompletionHandler;	// IMP=0x000000000076c955
- (void)ppt_notifyTransitionAnimationDidComplete;	// IMP=0x000000000076c909
- (void)ppt_installTransitionAnimationCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000076c816
- (id)px_endPointForTransition:(id)arg1;	// IMP=0x000000000083d438
@end

