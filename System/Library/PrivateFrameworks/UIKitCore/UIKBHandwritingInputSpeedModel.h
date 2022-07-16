//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingInputSpeedModel : NSObject
{
    NSMutableArray *_recordedIntervals;	// 8 = 0x8
    NSMutableArray *_recordedSpeeds;	// 16 = 0x10
    double _lastStrokeTimeStamp;	// 24 = 0x18
    double _lastTouchTimeStamp;	// 32 = 0x20
    struct CGPoint _lastTouchLocation;	// 40 = 0x28
    NSMutableArray *_pointsCurrentStroke;	// 56 = 0x38
    _Bool _duringStroke;	// 64 = 0x40
    _Bool _autoConfirmationEnabled;	// 65 = 0x41
    double _minTimeout;	// 72 = 0x48
    double _maxTimeout;	// 80 = 0x50
    struct CGRect _handwritingFrame;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000856294
@property(nonatomic) struct CGRect handwritingFrame; // @synthesize handwritingFrame=_handwritingFrame;
@property(readonly, nonatomic) double maxTimeout; // @synthesize maxTimeout=_maxTimeout;
@property(readonly, nonatomic) double minTimeout; // @synthesize minTimeout=_minTimeout;
@property(readonly, nonatomic) _Bool autoConfirmationEnabled; // @synthesize autoConfirmationEnabled=_autoConfirmationEnabled;
- (void)updatePreferences;	// IMP=0x0000000000856077
- (double)timeoutForNextPage;	// IMP=0x0000000000855eb9
- (double)smoothValueFromArray:(id)arg1;	// IMP=0x0000000000855d66
- (double)speedForCurrentStroke;	// IMP=0x0000000000855a3c
- (void)endCharacter;	// IMP=0x0000000000855922
- (void)endStroke;	// IMP=0x00000000008558f9
- (void)addPoint:(struct CGPoint)arg1 timestamp:(double)arg2;	// IMP=0x0000000000855865
- (void)beginStroke;	// IMP=0x0000000000855763
- (id)init;	// IMP=0x000000000085569c

@end

