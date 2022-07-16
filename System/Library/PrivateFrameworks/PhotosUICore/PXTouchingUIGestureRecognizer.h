//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@protocol PXTouchingUIGestureRecognizerDelegate;

@interface PXTouchingUIGestureRecognizer : UIGestureRecognizer
{
    _Bool __willBegin;	// 8 = 0x8
    _Bool __didBegin;	// 9 = 0x9
    double _minimumTouchDuration;	// 16 = 0x10
    double _maximumTouchMovement;	// 24 = 0x18
    id <PXTouchingUIGestureRecognizerDelegate> _touchDelegate;	// 32 = 0x20
    unsigned long long __touchCount;	// 40 = 0x28
    unsigned long long __beginRequestID;	// 48 = 0x30
    struct CGPoint __initialPointInView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000892a05
@property(nonatomic, setter=_setInitialPointInView:) struct CGPoint _initialPointInView; // @synthesize _initialPointInView=__initialPointInView;
@property(nonatomic, setter=_setDidBegin:) _Bool _didBegin; // @synthesize _didBegin=__didBegin;
@property(nonatomic, setter=_setWillBegin:) _Bool _willBegin; // @synthesize _willBegin=__willBegin;
@property(nonatomic, setter=_setBeginRequestID:) unsigned long long _beginRequestID; // @synthesize _beginRequestID=__beginRequestID;
@property(nonatomic, setter=_setTouchCount:) unsigned long long _touchCount; // @synthesize _touchCount=__touchCount;
@property(nonatomic) __weak id <PXTouchingUIGestureRecognizerDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
@property(nonatomic) double maximumTouchMovement; // @synthesize maximumTouchMovement=_maximumTouchMovement;
@property(nonatomic) double minimumTouchDuration; // @synthesize minimumTouchDuration=_minimumTouchDuration;
- (void)reset;	// IMP=0x00000000008928f9
- (void)setState:(long long)arg1;	// IMP=0x0000000000892850
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000089268d
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000008925b2
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000089257e
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000089254a
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000892516
- (void)_beginWithRequestID:(unsigned long long)arg1;	// IMP=0x00000000008924d9
- (void)_decrementTouchesBy:(unsigned long long)arg1;	// IMP=0x00000000008922cc
- (void)_incrementTouchesBy:(unsigned long long)arg1;	// IMP=0x000000000089228c
- (struct CGPoint)initialLocationInView:(id)arg1;	// IMP=0x00000000008921e7
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000089218f

@end

