//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIWindowAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _shouldCrossfade;	// 8 = 0x8
    UIWindow *_window;	// 16 = 0x10
}

+ (id)animationControllerWithWindow:(id)arg1;	// IMP=0x0000000000505018
@property(nonatomic) _Bool shouldCrossfade; // @synthesize shouldCrossfade=_shouldCrossfade;
@property(nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000505ab0
- (void)_performLayoutAnimationWithContext:(id)arg1 windowGeometryUpdatingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000005058b5
- (void)_performCrossfadeAnimationWithContext:(id)arg1 windowGeometryUpdatingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000005050f7
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000005050e9
- (id)initWithWindow:(id)arg1;	// IMP=0x0000000000505069

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
