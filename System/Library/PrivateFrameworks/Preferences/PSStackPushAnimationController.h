//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Preferences/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSArray, NSMutableArray, NSString, UINavigationController;

@interface PSStackPushAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    NSArray *_snapshots;	// 8 = 0x8
    NSMutableArray *_animationsToRunAlongsideToVC;	// 16 = 0x10
    _Bool _hasStartedAnimation;	// 24 = 0x18
    NSArray *_viewControllers;	// 32 = 0x20
    UINavigationController *_navigationController;	// 40 = 0x28
    CDUnknownBlockType _completionBlock;	// 48 = 0x30
    long long _animationPreset;	// 56 = 0x38
    double _startStagger;	// 64 = 0x40
    double _completionStagger;	// 72 = 0x48
    double _pushDuration;	// 80 = 0x50
    double _springDamping;	// 88 = 0x58
}

+ (void)resetDefaultAnimationParameters;	// IMP=0x00000000000a1243
+ (void)setDefaultAnimationPreset:(long long)arg1;	// IMP=0x00000000000a10b1
+ (id)_animationParametersForPreset:(long long)arg1;	// IMP=0x00000000000a0aa9
+ (id)_snapshotOfViewController:(id)arg1 withNavigationBar:(id)arg2 prevViewController:(id)arg3;	// IMP=0x000000000009f5c9
+ (id)controllerWithViewControllerStack:(id)arg1 navigationController:(id)arg2;	// IMP=0x000000000009f53d
- (void).cxx_destruct;	// IMP=0x00000000000a14a2
@property(nonatomic) double springDamping; // @synthesize springDamping=_springDamping;
@property(nonatomic) double pushDuration; // @synthesize pushDuration=_pushDuration;
@property(nonatomic) double completionStagger; // @synthesize completionStagger=_completionStagger;
@property(nonatomic) double startStagger; // @synthesize startStagger=_startStagger;
@property(nonatomic) long long animationPreset; // @synthesize animationPreset=_animationPreset;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void)_loadDefaultValues;	// IMP=0x00000000000a0eea
- (id)_valueForAnimationParameter:(id)arg1;	// IMP=0x00000000000a0db4
- (void)animationEnded:(_Bool)arg1;	// IMP=0x00000000000a0a52
- (void)animateAlongsideToViewController:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a09f9
- (void)_addAnimation:(CDUnknownBlockType)arg1 forViewAtIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000a08de
- (void)animateTransition:(id)arg1;	// IMP=0x000000000009fc55
- (double)transitionDuration:(id)arg1;	// IMP=0x000000000009fc43
- (double)_actualDuration;	// IMP=0x000000000009fba1
- (double)_desiredDuration;	// IMP=0x000000000009fb39
- (_Bool)_shouldSkipFirstPush;	// IMP=0x000000000009faee
- (id)init;	// IMP=0x000000000009fa88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

