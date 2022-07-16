//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIInteraction-Protocol.h>

@class NSString, UITextGestureTuning, UITextModernLoupeSession, UITextRangeAdjustmentGestureRecognizer, UITouch, UIView;
@protocol UITextRangeAdjustmentInteractionDelegate;

__attribute__((visibility("hidden")))
@interface UITextRangeAdjustmentInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction>
{
    UIView *_view;	// 8 = 0x8
    UITextGestureTuning *_gestureTuning;	// 16 = 0x10
    UITextModernLoupeSession *_loupeSession;	// 24 = 0x18
    _Bool _baseIsStart;	// 32 = 0x20
    id <UITextRangeAdjustmentInteractionDelegate> _delegate;	// 40 = 0x28
    UITextRangeAdjustmentGestureRecognizer *_adjustmentGestureRecognizer;	// 48 = 0x30
    double _initialDistance;	// 56 = 0x38
    double _firstMovedTime;	// 64 = 0x40
    UITouch *_activeTouch;	// 72 = 0x48
    struct CGPoint _initialExtentPoint;	// 80 = 0x50
    struct CGPoint _initialPoint;	// 96 = 0x60
    struct CGPoint _basePoint;	// 112 = 0x70
    struct CGPoint _extentPoint;	// 128 = 0x80
    struct CGPoint _initialBasePoint;	// 144 = 0x90
    struct CGPoint _touchOffset;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000004f99ad
@property(retain, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=_activeTouch;
@property(nonatomic) double firstMovedTime; // @synthesize firstMovedTime=_firstMovedTime;
@property(nonatomic) struct CGPoint touchOffset; // @synthesize touchOffset=_touchOffset;
@property(nonatomic) double initialDistance; // @synthesize initialDistance=_initialDistance;
@property(nonatomic) struct CGPoint initialBasePoint; // @synthesize initialBasePoint=_initialBasePoint;
@property(nonatomic) struct CGPoint extentPoint; // @synthesize extentPoint=_extentPoint;
@property(nonatomic) struct CGPoint basePoint; // @synthesize basePoint=_basePoint;
@property(nonatomic) struct CGPoint initialPoint; // @synthesize initialPoint=_initialPoint;
@property(readonly, nonatomic) UITextRangeAdjustmentGestureRecognizer *adjustmentGestureRecognizer; // @synthesize adjustmentGestureRecognizer=_adjustmentGestureRecognizer;
@property(nonatomic) __weak id <UITextRangeAdjustmentInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) struct CGPoint initialExtentPoint; // @synthesize initialExtentPoint=_initialExtentPoint;
@property(nonatomic) _Bool baseIsStart; // @synthesize baseIsStart=_baseIsStart;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void)manuallyUpdateInteractionWithGestureState:(long long)arg1 location:(struct CGPoint)arg2 locationOfFirstTouch:(struct CGPoint)arg3 forTouchType:(long long)arg4;	// IMP=0x00000000004f9784
- (void)_adjustmentInteractionCancelled;	// IMP=0x00000000004f9727
- (void)_adjustmentInteractionEndedAtLocation:(struct CGPoint)arg1 forTouchType:(long long)arg2;	// IMP=0x00000000004f960c
- (void)_adjustmentInteractionChangedWithLocation:(struct CGPoint)arg1 forTouchType:(long long)arg2;	// IMP=0x00000000004f92bd
- (void)_adjustmentInteractionBeganWithLocation:(struct CGPoint)arg1 startPoint:(struct CGPoint)arg2 forTouchType:(long long)arg3;	// IMP=0x00000000004f8f28
- (struct CGRect)_activeAdjustmentEdgeRect;	// IMP=0x00000000004f8eac
- (void)_updateAdjustmentInteractionWithState:(long long)arg1 location:(struct CGPoint)arg2 locationOfFirstTouch:(struct CGPoint)arg3 forTouchType:(long long)arg4;	// IMP=0x00000000004f8e3c
- (_Bool)_shouldApplyOffsetForTouchType:(long long)arg1;	// IMP=0x00000000004f8e34
- (void)updateBaseAndExtentPointsFromEdges;	// IMP=0x00000000004f8c04
- (_Bool)_pointCloserToEnd:(struct CGPoint)arg1 startEdge:(struct CGRect)arg2 endEdge:(struct CGRect)arg3;	// IMP=0x00000000004f8bc4
- (struct CGPoint)applyTouchOffset:(struct CGPoint)arg1;	// IMP=0x00000000004f8b6e
- (void)_setTouchOffset:(struct CGPoint)arg1 touchPoint:(struct CGPoint)arg2;	// IMP=0x00000000004f8b12
- (struct CGPoint)_convertPointToViewCoordinateSpace:(struct CGPoint)arg1;	// IMP=0x00000000004f8960
- (struct CGPoint)_activeTouchPoint;	// IMP=0x00000000004f88d0
- (_Bool)_gestureTuningEnabledForTouches:(id)arg1;	// IMP=0x00000000004f8864
- (void)_createGestureTuningIfNecessary;	// IMP=0x00000000004f8792
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00000000004f878a
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x00000000004f8770
- (void)_didRecognizeAdjustmentGesture:(id)arg1;	// IMP=0x00000000004f857d
- (void)didMoveToView:(id)arg1;	// IMP=0x00000000004f84b1
- (void)willMoveToView:(id)arg1;	// IMP=0x00000000004f8450

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
