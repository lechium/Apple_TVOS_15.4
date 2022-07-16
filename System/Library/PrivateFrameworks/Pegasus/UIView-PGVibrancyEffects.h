//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (PGVibrancyEffects)
+ (void)PG_animateUsingDefaultDampedSpringWithInitialSpringVelocity:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003005b
+ (void)PG_animateUsingDefaultTimingWithOptions:(unsigned long long)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ff40
+ (void)PG_animateUsingDefaultTimingWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ff26
+ (void)PG_performWithoutRetargetingAnimation:(CDUnknownBlockType)arg1;	// IMP=0x000000000002fe34
+ (void)PG_performWithoutAnimation:(CDUnknownBlockType)arg1;	// IMP=0x000000000002fd40
- (void)PG_recursivelyDisallowGroupBlending;	// IMP=0x000000000000179b
- (void)PG_removeVibrancyEffect;	// IMP=0x00000000000016d0
- (void)PG_updateVibrancyEffectForTintColor;	// IMP=0x00000000000015b5
- (_Bool)PG_preferredVisibilityForView:(id)arg1;	// IMP=0x00000000000131ac
- (id)PG_backdropGroupLeader;	// IMP=0x000000000001315c
- (id)PG_acquireAssertionToPreventAutoHideOfControlsWithReason:(id)arg1;	// IMP=0x0000000000030182
- (_Bool)PG_disablesLayerCloning;	// IMP=0x000000000002fcfa
- (double)PG_cornerRadius;	// IMP=0x000000000002fc95
@property(retain, nonatomic, setter=PG_setCompositingFilter:) id PG_compositingFilter;
@property(nonatomic, setter=PG_setAnchorPoint:) struct CGPoint PG_anchorPoint;
@property(nonatomic, setter=PG_setAllowsGroupBlending:) _Bool PG_allowsGroupBlending;
@property(nonatomic, setter=PG_setAllowsEdgeAntialiasing:) _Bool PG_allowsEdgeAntialiasing;
@end

