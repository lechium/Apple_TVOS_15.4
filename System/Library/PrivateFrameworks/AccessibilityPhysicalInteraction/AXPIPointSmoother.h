//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol AXPIPointSmootherClientDelegate;

@interface AXPIPointSmoother : NSObject
{
    _Bool _useWeightedMovingAverage;	// 8 = 0x8
    _Bool _shouldOffsetBufferPoints;	// 9 = 0x9
    unsigned long long _bufferSize;	// 16 = 0x10
    id <AXPIPointSmootherClientDelegate> _delegate;	// 24 = 0x18
    double _smoothingMaxDelta;	// 32 = 0x20
    double _xOrder;	// 40 = 0x28
    double _yOrder;	// 48 = 0x30
    double _xOffset;	// 56 = 0x38
    double _yOffset;	// 64 = 0x40
    NSMutableArray *_pointBuffer;	// 72 = 0x48
    unsigned long long _framesPerSecond;	// 80 = 0x50
    unsigned long long _lastTimePointAdded;	// 88 = 0x58
    unsigned long long _lowFPSDetectedCount;	// 96 = 0x60
}

+ (struct CGPoint)_averagePointsInArray:(id)arg1;	// IMP=0x0000000000009db6
- (void).cxx_destruct;	// IMP=0x000000000000a06d
@property(nonatomic) unsigned long long lowFPSDetectedCount; // @synthesize lowFPSDetectedCount=_lowFPSDetectedCount;
@property(nonatomic) unsigned long long lastTimePointAdded; // @synthesize lastTimePointAdded=_lastTimePointAdded;
@property(nonatomic) unsigned long long framesPerSecond; // @synthesize framesPerSecond=_framesPerSecond;
@property(retain, nonatomic) NSMutableArray *pointBuffer; // @synthesize pointBuffer=_pointBuffer;
@property(nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(nonatomic) double xOffset; // @synthesize xOffset=_xOffset;
@property(nonatomic) double yOrder; // @synthesize yOrder=_yOrder;
@property(nonatomic) double xOrder; // @synthesize xOrder=_xOrder;
@property(nonatomic) _Bool shouldOffsetBufferPoints; // @synthesize shouldOffsetBufferPoints=_shouldOffsetBufferPoints;
@property(nonatomic) double smoothingMaxDelta; // @synthesize smoothingMaxDelta=_smoothingMaxDelta;
@property(nonatomic) _Bool useWeightedMovingAverage; // @synthesize useWeightedMovingAverage=_useWeightedMovingAverage;
@property(nonatomic) __weak id <AXPIPointSmootherClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
- (void)updateFPS;	// IMP=0x0000000000009cc8
- (void)removeAllPoints;	// IMP=0x0000000000009c50
- (struct CGSize)_deltaForPoint:(struct CGPoint)arg1;	// IMP=0x0000000000009941
@property(readonly, nonatomic) struct CGPoint point;
- (void)addPoint:(struct CGPoint)arg1;	// IMP=0x00000000000091cf
- (id)init;	// IMP=0x0000000000009136

@end

