//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNTracePlayerTimelineStream, NSMutableArray, NSTimer;
@protocol MNTracePlayerSchedulerDelegate;

@interface MNTracePlayerScheduler : NSObject
{
    id <MNTracePlayerSchedulerDelegate> _delegate;	// 8 = 0x8
    NSTimer *_timer;	// 16 = 0x10
    double _lastTimerScheduleTime;	// 24 = 0x18
    double _speedMultiplier;	// 32 = 0x20
    NSMutableArray *_timelineStreams;	// 40 = 0x28
    double _position;	// 48 = 0x30
    MNTracePlayerTimelineStream *_nextTimelineStream;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000007f954
@property(nonatomic) double position; // @synthesize position=_position;
@property(nonatomic) double speedMultiplier; // @synthesize speedMultiplier=_speedMultiplier;
@property(nonatomic) __weak id <MNTracePlayerSchedulerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_timerUpdated:(id)arg1;	// IMP=0x000000000007f83d
- (void)_update;	// IMP=0x000000000007f5bf
- (void)pause;	// IMP=0x000000000007f58d
- (void)resume;	// IMP=0x000000000007f506
- (void)removeAllTimelineStreams;	// IMP=0x000000000007f4d4
- (void)removeTimelineStream:(id)arg1;	// IMP=0x000000000007f486
- (void)addTimelineStream:(id)arg1;	// IMP=0x000000000007f3fd
- (void)dealloc;	// IMP=0x000000000007f27d
- (id)init;	// IMP=0x000000000007f221

@end

