//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADisplayLink, NSMutableArray, NSMutableIndexSet, UIKBHandwritingQuadCurvePointFIFO;

__attribute__((visibility("hidden")))
@interface UIKeyboardPathEffectView
{
    _Bool _increasedContrastEnabled;	// 8 = 0x8
    _Bool _done;	// 9 = 0x9
    UIKBHandwritingQuadCurvePointFIFO *_pointInterpolator;	// 16 = 0x10
    double _startTime;	// 24 = 0x18
    NSMutableArray *_paths;	// 32 = 0x20
    NSMutableIndexSet *_pointDecayQueue;	// 40 = 0x28
    CADisplayLink *_pointDecayDisplayLink;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000a4c5d7
@property(retain, nonatomic) CADisplayLink *pointDecayDisplayLink; // @synthesize pointDecayDisplayLink=_pointDecayDisplayLink;
@property(retain, nonatomic) NSMutableIndexSet *pointDecayQueue; // @synthesize pointDecayQueue=_pointDecayQueue;
@property(nonatomic) _Bool done; // @synthesize done=_done;
@property(nonatomic) _Bool increasedContrastEnabled; // @synthesize increasedContrastEnabled=_increasedContrastEnabled;
@property(retain, nonatomic) NSMutableArray *paths; // @synthesize paths=_paths;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) UIKBHandwritingQuadCurvePointFIFO *pointInterpolator; // @synthesize pointInterpolator=_pointInterpolator;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000a4bff6
- (CDStruct_d2b197d1)_currentThemeSettings;	// IMP=0x0000000000a4bf54
- (void)accessibilityValueChanged:(id)arg1;	// IMP=0x0000000000a4bf32
- (long long)keyboardAppearance;	// IMP=0x0000000000a4bebd
- (void)reset;	// IMP=0x0000000000a4be6a
- (void)buildOut;	// IMP=0x0000000000a4be2a
- (void)_clearPointInterpolators;	// IMP=0x0000000000a4bded
- (void)addPoint:(struct CGPoint)arg1 force:(double)arg2 timestamp:(double)arg3;	// IMP=0x0000000000a4bd7f
- (void)_addDrawingPoint:(struct CGPoint)arg1 force:(double)arg2 sentinel:(_Bool)arg3;	// IMP=0x0000000000a4bb33
- (void)_displayLinkFired:(id)arg1;	// IMP=0x0000000000a4b55a
- (id)_currentPath;	// IMP=0x0000000000a4b50a
- (id)_pushNewPath;	// IMP=0x0000000000a4b4a5
- (void)didMoveToWindow;	// IMP=0x0000000000a4b2c3
- (int)textEffectsVisibilityLevel;	// IMP=0x0000000000a4b2b8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000a4ae83

@end

