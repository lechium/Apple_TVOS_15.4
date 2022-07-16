//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVPlayback/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVPNavigationFadeAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _usesCustomEasing;	// 8 = 0x8
    _Bool _shouldAnimateHalfwayThenPopIn;	// 9 = 0x9
    double _transitionDuration;	// 16 = 0x10
}

@property(nonatomic) _Bool shouldAnimateHalfwayThenPopIn; // @synthesize shouldAnimateHalfwayThenPopIn=_shouldAnimateHalfwayThenPopIn;
@property(nonatomic) _Bool usesCustomEasing; // @synthesize usesCustomEasing=_usesCustomEasing;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
- (void)_beginFadeAnimationFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000b285
- (void)animateTransition:(id)arg1;	// IMP=0x000000000000b152
- (double)transitionDuration:(id)arg1;	// IMP=0x000000000000b147
- (id)init;	// IMP=0x000000000000b105

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

