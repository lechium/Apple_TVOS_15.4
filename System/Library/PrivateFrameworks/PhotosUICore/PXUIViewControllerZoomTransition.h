//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXUIViewControllerZoomTransition
{
}

+ (id)_leafViewControllerForTransitionWithViewController:(id)arg1;	// IMP=0x00000000002f7830
+ (_Bool)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2;	// IMP=0x00000000002f77af
- (void)animateZoomTransition:(id)arg1 withInitialVelocity:(struct PXDisplayVelocity)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002f7a98
- (void)animateTransition:(id)arg1;	// IMP=0x00000000002f79fb
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000002f79a4
- (long long)transitionIdentifierForTransitionMode:(unsigned long long)arg1;	// IMP=0x00000000002f791b
- (_Bool)supportsEdgeSwipeBackGesture;	// IMP=0x00000000002f7913

@end

