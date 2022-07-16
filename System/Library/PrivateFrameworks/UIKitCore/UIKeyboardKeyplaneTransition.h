//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray, UIKBKeyViewAnimator, UIKBTree, UIView;
@protocol UIKeyboardKeyplaneTransitionDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardKeyplaneTransition : NSObject
{
    double _currentProgress;	// 8 = 0x8
    double _liftOffProgress;	// 16 = 0x10
    double _finishProgress;	// 24 = 0x18
    double _finishDuration;	// 32 = 0x20
    double _finalTransitionStartTime;	// 40 = 0x28
    CADisplayLink *_displayLink;	// 48 = 0x30
    UIKBTree *_keyboard;	// 56 = 0x38
    UIKBTree *_start;	// 64 = 0x40
    UIKBTree *_end;	// 72 = 0x48
    UIView *_startView;	// 80 = 0x50
    UIView *_endView;	// 88 = 0x58
    CDUnknownBlockType _completionBlock;	// 96 = 0x60
    id <UIKeyboardKeyplaneTransitionDelegate> _transitionDelegate;	// 104 = 0x68
    _Bool _initiallyAtEnd;	// 112 = 0x70
    NSMutableArray *_transitionViews;	// 120 = 0x78
    UIKBKeyViewAnimator *_keyViewAnimator;	// 128 = 0x80
}

@property(retain, nonatomic) UIKBKeyViewAnimator *keyViewAnimator; // @synthesize keyViewAnimator=_keyViewAnimator;
@property(nonatomic) _Bool initiallyAtEnd; // @synthesize initiallyAtEnd=_initiallyAtEnd;
@property(nonatomic) id <UIKeyboardKeyplaneTransitionDelegate> transitionDelegate; // @synthesize transitionDelegate=_transitionDelegate;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) UIKBTree *keyboard; // @synthesize keyboard=_keyboard;
- (_Bool)canDisplayTransitionFromKeyplane:(id)arg1 toKeyplane:(id)arg2;	// IMP=0x0000000000a14e14
- (void)finishWithProgress:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a14d04
- (void)transitionToFinalState:(id)arg1;	// IMP=0x0000000000a14c72
- (void)finalizeTransition;	// IMP=0x0000000000a14bc1
- (void)removeAllAnimations;	// IMP=0x0000000000a149fb
- (void)updateWithProgress:(double)arg1;	// IMP=0x0000000000a1476c
- (void)cancelNonInteractiveAnimation;	// IMP=0x0000000000a1471c
- (void)runNonInteractivelyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a1470a
@property(readonly, nonatomic) double nonInteractiveDuration;
- (void)commitTransitionRebuild;	// IMP=0x0000000000a146fb
- (void)addTransitionView:(id)arg1 startFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3;	// IMP=0x0000000000a1446b
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;	// IMP=0x0000000000a14394
@property(readonly, nonatomic) double endHeight;
@property(readonly, nonatomic) double startHeight;
- (void)dealloc;	// IMP=0x0000000000a1426b

@end

