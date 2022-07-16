//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITapRecognizerDelegate-Protocol.h>

@class NSArray, NSString, UITapRecognizer;

__attribute__((visibility("hidden")))
@interface UITextMultiTapRecognizer <UITapRecognizerDelegate>
{
    id _target;	// 16 = 0x10
    SEL _tapAction;	// 24 = 0x18
    UITapRecognizer *_tapRecognizer;	// 32 = 0x20
    unsigned long long _tapCount;	// 40 = 0x28
    unsigned long long _touchDownCount;	// 48 = 0x30
    _Bool _sendTapAction;	// 56 = 0x38
    _Bool _recognizesOnSubsequentTouchDowns;	// 57 = 0x39
}

- (void).cxx_destruct;	// IMP=0x000000000061ec5f
@property _Bool recognizesOnSubsequentTouchDowns; // @synthesize recognizesOnSubsequentTouchDowns=_recognizesOnSubsequentTouchDowns;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000061eb91
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000061eafb
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000061ea56
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000061e975
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x000000000061e831
- (void)reset;	// IMP=0x000000000061e7c0
- (struct CGPoint)locationInView:(id)arg1;	// IMP=0x000000000061e7a3
- (void)resetTapCountForTapRecognizer:(id)arg1;	// IMP=0x000000000061e785
- (double)_touchSloppinessFactor;	// IMP=0x000000000061e735
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;	// IMP=0x000000000061e690
- (void)tapRecognizerRecognizedTap:(id)arg1;	// IMP=0x000000000061e614
- (_Bool)tapIsPossibleForTapRecognizer:(id)arg1;	// IMP=0x000000000061e60c
@property(readonly) struct CGPoint location;
@property(readonly) unsigned long long tapCount;
@property(readonly) NSArray *touchesForTap;
@property double maximumIntervalBetweenTaps;
@property double maximumTouchDownDuration;
@property double allowableMovement;
@property unsigned long long minimumNumberOfTapsRequired;
@property unsigned long long numberOfTouchesRequired;
- (void)onStateUpdate:(id)arg1;	// IMP=0x000000000061e36a
- (id)initWithTarget:(id)arg1 tapAction:(SEL)arg2;	// IMP=0x000000000061e23a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

