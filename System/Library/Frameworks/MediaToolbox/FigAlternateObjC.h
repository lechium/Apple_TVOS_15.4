//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FigAlternateObjCAudioAttributes, FigAlternateObjCVideoAttributes;

@interface FigAlternateObjC : NSObject
{
    struct OpaqueFigAlternate *_alternate;	// 8 = 0x8
    FigAlternateObjCVideoAttributes *_videoAttributes;	// 16 = 0x10
    FigAlternateObjCAudioAttributes *_audioAttributes;	// 24 = 0x18
    struct OpaqueFigSimpleMutex *_mutex;	// 32 = 0x20
    double _peakBitRate;	// 40 = 0x28
    double _averageBitRate;	// 48 = 0x30
}

@property(readonly, nonatomic) struct OpaqueFigAlternate *figAlternate; // @synthesize figAlternate=_alternate;
@property(readonly, nonatomic) double averageBitRate; // @synthesize averageBitRate=_averageBitRate;
@property(readonly, nonatomic) double peakBitRate; // @synthesize peakBitRate=_peakBitRate;
- (void)dealloc;	// IMP=0x0000000000353de4
@property(readonly, nonatomic) FigAlternateObjCAudioAttributes *audioAttributes;
@property(readonly, nonatomic) FigAlternateObjCVideoAttributes *videoAttributes;
- (id)initWithFigAlternate:(struct OpaqueFigAlternate *)arg1;	// IMP=0x0000000000353c5d

@end

