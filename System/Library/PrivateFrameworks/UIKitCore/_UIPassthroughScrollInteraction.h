//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegateInternal-Protocol.h>
#import <UIKitCore/UIInteraction-Protocol.h>

@class NSString, UIView, _UIPassthroughGateGestureRecognizer, _UIPassthroughScrollGestureRecognizer;
@protocol _UIPassthroughScrollInteractionDelegate;

__attribute__((visibility("hidden")))
@interface _UIPassthroughScrollInteraction : NSObject <UIGestureRecognizerDelegateInternal, UIInteraction>
{
    _Bool _recognizeOnPrimaryButtonDown;	// 8 = 0x8
    _Bool _recognizeOnSecondaryButtonDown;	// 9 = 0x9
    _Bool _eatsTouches;	// 10 = 0xa
    UIView *_view;	// 16 = 0x10
    UIView *_touchFallbackView;	// 24 = 0x18
    _UIPassthroughScrollGestureRecognizer *_passthroughScrollGestureRecognizer;	// 32 = 0x20
    _UIPassthroughGateGestureRecognizer *_gestureGate;	// 40 = 0x28
    id <_UIPassthroughScrollInteractionDelegate> _delegate;	// 48 = 0x30
}

+ (_Bool)_isPassthroughGestureRecognizer:(id)arg1;	// IMP=0x0000000001110a55
- (void).cxx_destruct;	// IMP=0x0000000001111270
@property(nonatomic) _Bool eatsTouches; // @synthesize eatsTouches=_eatsTouches;
@property(nonatomic) _Bool recognizeOnSecondaryButtonDown; // @synthesize recognizeOnSecondaryButtonDown=_recognizeOnSecondaryButtonDown;
@property(nonatomic) _Bool recognizeOnPrimaryButtonDown; // @synthesize recognizeOnPrimaryButtonDown=_recognizeOnPrimaryButtonDown;
@property(nonatomic) __weak id <_UIPassthroughScrollInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x0000000001111201
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000001111169
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000111114c
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x0000000001111083
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x0000000001110fb6
- (_Bool)_delegateShouldInteractAtLocation:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000001110efd
- (void)_handlePassthroughGestureRecognizerEndWithReason:(unsigned long long)arg1;	// IMP=0x0000000001110da2
- (void)__forciblyEndWithReason:(unsigned long long)arg1;	// IMP=0x0000000001110d90
- (void)_handlePassthroughRecognizer:(id)arg1;	// IMP=0x0000000001110cca
- (void)didMoveToView:(id)arg1;	// IMP=0x0000000001110b5f
- (void)willMoveToView:(id)arg1;	// IMP=0x0000000001110b4d
- (void)_tearDown;	// IMP=0x0000000001110ab1
- (void)dealloc;	// IMP=0x0000000001110a17
- (void)_updateGesturesEatTouches;	// IMP=0x000000000111099f
- (void)_setUpForWindow:(id)arg1;	// IMP=0x0000000001110862
@property(readonly, nonatomic) _UIPassthroughGateGestureRecognizer *_gestureGate; // @synthesize _gestureGate;
@property(readonly, nonatomic) _UIPassthroughScrollGestureRecognizer *_passthroughScrollGestureRecognizer; // @synthesize _passthroughScrollGestureRecognizer;
@property(readonly, nonatomic) UIView *_touchFallbackView; // @synthesize _touchFallbackView;
@property(readonly, copy) NSString *description;
- (_Bool)_shouldEventBePassedThrough:(id)arg1;	// IMP=0x000000000111059d
- (id)init;	// IMP=0x0000000001110565

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

