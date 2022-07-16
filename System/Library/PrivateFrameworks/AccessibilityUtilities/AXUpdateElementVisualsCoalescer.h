//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface AXUpdateElementVisualsCoalescer : NSObject
{
    double _threshold;	// 8 = 0x8
    double _progressInterval;	// 16 = 0x10
    CDUnknownBlockType _updateVisualsSequenceDidBeginHandler;	// 24 = 0x18
    CDUnknownBlockType _updateVisualsSequenceDidFinishHandler;	// 32 = 0x20
    CDUnknownBlockType _updateVisualsSequenceInProgressHandler;	// 40 = 0x28
    NSTimer *_timer;	// 48 = 0x30
    double _lastProgressTime;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000009887c
@property(nonatomic) double lastProgressTime; // @synthesize lastProgressTime=_lastProgressTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType updateVisualsSequenceInProgressHandler; // @synthesize updateVisualsSequenceInProgressHandler=_updateVisualsSequenceInProgressHandler;
@property(copy, nonatomic) CDUnknownBlockType updateVisualsSequenceDidFinishHandler; // @synthesize updateVisualsSequenceDidFinishHandler=_updateVisualsSequenceDidFinishHandler;
@property(copy, nonatomic) CDUnknownBlockType updateVisualsSequenceDidBeginHandler; // @synthesize updateVisualsSequenceDidBeginHandler=_updateVisualsSequenceDidBeginHandler;
@property(nonatomic) double progressInterval; // @synthesize progressInterval=_progressInterval;
@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
- (void)_timerDidFire:(id)arg1;	// IMP=0x0000000000098728
- (void)notifyUpdateElementVisualsEventDidOccur;	// IMP=0x000000000009854c
- (void)dealloc;	// IMP=0x00000000000984e1
- (id)init;	// IMP=0x0000000000098494

@end

