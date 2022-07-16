//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIDelayedAction;
@protocol _UIPanOrFlickGestureRecognizerDelegate;

@interface _UIPanOrFlickGestureRecognizer
{
    unsigned long long _touchCount;	// 8 = 0x8
    _Bool _didLongPress;	// 16 = 0x10
    _Bool _longPressOnly;	// 17 = 0x11
    unsigned long long _allowedFlickDirections;	// 24 = 0x18
    double _maximumFlickDuration;	// 32 = 0x20
    double _minimumFlickDistance;	// 40 = 0x28
    double _minimumPressDuration;	// 48 = 0x30
    double _allowableMovement;	// 56 = 0x38
    double _responsivenessDelay;	// 64 = 0x40
    double _timestampBeforeGestureBegan;	// 72 = 0x48
    double _timestampOfLastEvent;	// 80 = 0x50
    UIDelayedAction *_elapsedAction;	// 88 = 0x58
    UIDelayedAction *_responsivenessAction;	// 96 = 0x60
    struct CGPoint _initialCentroidLocation;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000df1844
@property(nonatomic) struct CGPoint initialCentroidLocation; // @synthesize initialCentroidLocation=_initialCentroidLocation;
@property(retain, nonatomic) UIDelayedAction *responsivenessAction; // @synthesize responsivenessAction=_responsivenessAction;
@property(retain, nonatomic) UIDelayedAction *elapsedAction; // @synthesize elapsedAction=_elapsedAction;
@property(nonatomic) double timestampOfLastEvent; // @synthesize timestampOfLastEvent=_timestampOfLastEvent;
@property(nonatomic) double timestampBeforeGestureBegan; // @synthesize timestampBeforeGestureBegan=_timestampBeforeGestureBegan;
@property(nonatomic) double responsivenessDelay; // @synthesize responsivenessDelay=_responsivenessDelay;
@property(readonly, nonatomic) _Bool didLongPress; // @synthesize didLongPress=_didLongPress;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(nonatomic) double minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
@property(nonatomic) double minimumFlickDistance; // @synthesize minimumFlickDistance=_minimumFlickDistance;
@property(nonatomic) double maximumFlickDuration; // @synthesize maximumFlickDuration=_maximumFlickDuration;
@property(nonatomic) unsigned long long allowedFlickDirections; // @synthesize allowedFlickDirections=_allowedFlickDirections;
@property(nonatomic) _Bool longPressOnly; // @synthesize longPressOnly=_longPressOnly;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000df159a
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000df14b8
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000df13fd
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000df12d3
- (void)startTimer;	// IMP=0x0000000000df1144
- (void)clearTimer;	// IMP=0x0000000000df10d2
- (_Bool)_shouldTryToBeginWithEvent:(id)arg1;	// IMP=0x0000000000df1092
- (void)enoughTimeElapsed:(id)arg1;	// IMP=0x0000000000df101f
- (void)responsivenessTimeElapsed:(id)arg1;	// IMP=0x0000000000df0f2f
- (_Bool)isValidLongPress;	// IMP=0x0000000000df0e46
@property(readonly, nonatomic) unsigned long long recognizedFlickDirection;
@property(readonly, nonatomic) id <_UIPanOrFlickGestureRecognizerDelegate> panOrFlickDelegate;
- (void)reset;	// IMP=0x0000000000df0c06
- (void)dealloc;	// IMP=0x0000000000df0b9d
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000df0b2e

@end
