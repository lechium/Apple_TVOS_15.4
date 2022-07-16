//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSTimer;

@interface _TVB239FingerRestGestureRecognizer : UIGestureRecognizer
{
    _Bool _selectButtonDepressed;	// 8 = 0x8
    int _touchCount;	// 12 = 0xc
    long long _stateToEnter;	// 16 = 0x10
    double _minimumPressDuration;	// 24 = 0x18
    NSTimer *_pressDurationTimer;	// 32 = 0x20
    struct CGPoint _digitizerStartLocation;	// 40 = 0x28
    struct CGPoint _digitizerLocation;	// 56 = 0x38
}

+ (_Bool)_shouldDefaultToTouches;	// IMP=0x000000000001c3ca
- (void).cxx_destruct;	// IMP=0x000000000001cc59
@property(nonatomic) __weak NSTimer *pressDurationTimer; // @synthesize pressDurationTimer=_pressDurationTimer;
@property(nonatomic) double minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
@property(readonly, nonatomic) struct CGPoint digitizerLocation; // @synthesize digitizerLocation=_digitizerLocation;
@property(readonly, nonatomic) struct CGPoint digitizerStartLocation; // @synthesize digitizerStartLocation=_digitizerStartLocation;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000001cbd2
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000001c966
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000001c960
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000001c7c7
- (void)recognizeFingerRest;	// IMP=0x000000000001c75b
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000001c67e
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000001c5a1
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000001c533
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000001c3d2
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000001c37c

@end

