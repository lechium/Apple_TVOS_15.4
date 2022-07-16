//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIDelayedAction, UITextMagnifierTimeWeightedPoint;
@protocol _UIKeyboardTextSelectionGestureControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIKeyboardTextSelectionGestureController : NSObject
{
    NSMutableArray *_deallocHandlers;	// 8 = 0x8
    _Bool _wasScrollingEnabled;	// 16 = 0x10
    _Bool _wasNestedPinchingDisabled;	// 17 = 0x11
    _Bool _suppressTwoFingerPan;	// 18 = 0x12
    _Bool _didSuppressSelectionGrabbers;	// 19 = 0x13
    _Bool _isLongPressing;	// 20 = 0x14
    _Bool _isPanning;	// 21 = 0x15
    _Bool _isSpacePan;	// 22 = 0x16
    _Bool _hadAddedTouch;	// 23 = 0x17
    _Bool _didFloatCursor;	// 24 = 0x18
    int _previousForcePressCount;	// 28 = 0x1c
    id <_UIKeyboardTextSelectionGestureControllerDelegate> _delegate;	// 32 = 0x20
    double _lastPressTimestamp;	// 40 = 0x28
    UITextMagnifierTimeWeightedPoint *_weightedPoint;	// 48 = 0x30
    double _twoFingerTapTimestamp;	// 56 = 0x38
    long long _previousRepeatedGranularity;	// 64 = 0x40
    long long _panGestureState;	// 72 = 0x48
    double _spacePanDistance;	// 80 = 0x50
    NSMutableArray *_activeGestures;	// 88 = 0x58
    UIDelayedAction *_tapLogTimer;	// 96 = 0x60
    UIDelayedAction *_longForcePressAction;	// 104 = 0x68
    struct CGPoint _lastPanTranslation;	// 112 = 0x70
    struct CGPoint _accumulatedAcceleration;	// 128 = 0x80
    struct CGPoint _accumulatedBounding;	// 144 = 0x90
    struct CGPoint _cursorLocationBase;	// 160 = 0xa0
}

+ (id)sharedInstance;	// IMP=0x0000000000a05806
@property(retain, nonatomic) UIDelayedAction *longForcePressAction; // @synthesize longForcePressAction=_longForcePressAction;
@property(nonatomic) int previousForcePressCount; // @synthesize previousForcePressCount=_previousForcePressCount;
@property(retain, nonatomic) UIDelayedAction *tapLogTimer; // @synthesize tapLogTimer=_tapLogTimer;
@property(nonatomic) struct CGPoint cursorLocationBase; // @synthesize cursorLocationBase=_cursorLocationBase;
@property(nonatomic) _Bool didFloatCursor; // @synthesize didFloatCursor=_didFloatCursor;
@property(retain, nonatomic) NSMutableArray *activeGestures; // @synthesize activeGestures=_activeGestures;
@property(nonatomic) double spacePanDistance; // @synthesize spacePanDistance=_spacePanDistance;
@property(nonatomic) _Bool hadAddedTouch; // @synthesize hadAddedTouch=_hadAddedTouch;
@property(nonatomic) _Bool isSpacePan; // @synthesize isSpacePan=_isSpacePan;
@property(nonatomic) _Bool isPanning; // @synthesize isPanning=_isPanning;
@property(nonatomic) _Bool isLongPressing; // @synthesize isLongPressing=_isLongPressing;
@property(nonatomic) _Bool didSuppressSelectionGrabbers; // @synthesize didSuppressSelectionGrabbers=_didSuppressSelectionGrabbers;
@property(nonatomic) _Bool suppressTwoFingerPan; // @synthesize suppressTwoFingerPan=_suppressTwoFingerPan;
@property(nonatomic) _Bool wasNestedPinchingDisabled; // @synthesize wasNestedPinchingDisabled=_wasNestedPinchingDisabled;
@property(nonatomic) _Bool wasScrollingEnabled; // @synthesize wasScrollingEnabled=_wasScrollingEnabled;
@property(nonatomic) long long panGestureState; // @synthesize panGestureState=_panGestureState;
@property(nonatomic) long long previousRepeatedGranularity; // @synthesize previousRepeatedGranularity=_previousRepeatedGranularity;
@property(nonatomic) double twoFingerTapTimestamp; // @synthesize twoFingerTapTimestamp=_twoFingerTapTimestamp;
@property(retain, nonatomic) UITextMagnifierTimeWeightedPoint *weightedPoint; // @synthesize weightedPoint=_weightedPoint;
@property(nonatomic) double lastPressTimestamp; // @synthesize lastPressTimestamp=_lastPressTimestamp;
@property(nonatomic) struct CGPoint accumulatedBounding; // @synthesize accumulatedBounding=_accumulatedBounding;
@property(nonatomic) struct CGPoint accumulatedAcceleration; // @synthesize accumulatedAcceleration=_accumulatedAcceleration;
@property(nonatomic) struct CGPoint lastPanTranslation; // @synthesize lastPanTranslation=_lastPanTranslation;
@property(nonatomic) id <_UIKeyboardTextSelectionGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)configureOneFingerForcePressRecognizer:(id)arg1;	// IMP=0x0000000000a0604d
- (void)configureTwoFingerTapGestureRecognizer:(id)arg1;	// IMP=0x0000000000a06007
- (void)configureTwoFingerPanGestureRecognizer:(id)arg1;	// IMP=0x0000000000a05fc1
- (id)addLongPressTextSelectionInteractionsToView:(id)arg1;	// IMP=0x0000000000a05fb9
- (id)addTwoFingerTextSelectionInteractionsToView:(id)arg1;	// IMP=0x0000000000a05edd
- (id)addOneFingerTextSelectionInteractionsToView:(id)arg1;	// IMP=0x0000000000a05e59
- (_Bool)_longPressAllowedForView:(id)arg1;	// IMP=0x0000000000a05e3d
- (_Bool)allowOneFingerDeepPress;	// IMP=0x0000000000a05e35
- (double)oneFingerForcePressAllowableMovement;	// IMP=0x0000000000a05e27
- (_Bool)oneFingerForcePressShouldCancelTouchesInView;	// IMP=0x0000000000a05e1f
- (_Bool)oneFingerForcePressShouldFailWithoutForce;	// IMP=0x0000000000a05e17
- (double)oneFingerForcePressMinimumDuration;	// IMP=0x0000000000a05e09
- (void)redisableEnclosingScrollViewNestedPinching;	// IMP=0x0000000000a05d53
- (void)enableEnclosingScrollViewNestedPinching;	// IMP=0x0000000000a05c93
- (void)didRemoveSelectionController;	// IMP=0x0000000000a05c8d
- (void)willRemoveSelectionController;	// IMP=0x0000000000a05bf2
- (void)_cleanupDeadGesturesIfNecessary;	// IMP=0x0000000000a05b3f
- (id)selectionController;	// IMP=0x0000000000a05b14
- (void)dealloc;	// IMP=0x0000000000a0597d
- (void)removeDeallocationHandler:(id)arg1;	// IMP=0x0000000000a05960
- (id)addDeallocationHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a058ea
- (id)init;	// IMP=0x0000000000a0588e
- (_Bool)shouldAddForceGesture;	// IMP=0x0000000000a0585c
- (Class)textInteractionClass;	// IMP=0x0000000000a0584b

@end

