//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITabBarController.h>

#import <PhotosUICore/PXProgrammaticNavigationUpdateTarget-Protocol.h>

@class NSString;

@interface UITabBarController (PhotosUICore) <PXProgrammaticNavigationUpdateTarget>
- (void)_px_selectTabForKeyCommand:(id)arg1;	// IMP=0x0000000000116210
- (id)px_defaultKeyCommandsWithDelegate:(id)arg1;	// IMP=0x00000000001160c8
- (struct CGRect)px_frameForTabItem:(unsigned long long)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x00000000001160aa
- (void)px_performAddToTabAnimation:(unsigned long long)arg1 withSnapshotView:(id)arg2;	// IMP=0x000000000011558f
@property(readonly, nonatomic) _Bool px_hidesTabBarForCurrentHorizontalSizeClass;
@property(readonly, nonatomic) _Bool px_hidesTabBarForRegularHorizontalSizeClass;
- (_Bool)px_canPerformAddToTabAnimationForTab:(unsigned long long)arg1;	// IMP=0x0000000000115473
- (id)px_navigateToMemoryWithLocalIdentifier:(id)arg1 dismissAnyPresentedViewController:(_Bool)arg2;	// IMP=0x000000000011546b
@property(readonly, nonatomic, getter=px_isTabBarHidden) _Bool px_tabBarHidden;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x00000000003091e7
- (void)_switchToBarBarItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005b0242
- (void)ppt_runTabSwitchingTestWithName:(id)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000005af96e
- (id)px_navigationDestination;	// IMP=0x00000000006b65c2
- (void)px_switchToTabAndNavigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000006b640e
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000006b626f
- (void)_px_prepareNavigationFromViewController:(id)arg1 routingOptions:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000006b6171
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;	// IMP=0x00000000006b60f1
- (unsigned long long)routingOptionsForDestination:(id)arg1;	// IMP=0x00000000006b6026
- (id)px_endPointForTransition:(id)arg1;	// IMP=0x000000000083d3a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

