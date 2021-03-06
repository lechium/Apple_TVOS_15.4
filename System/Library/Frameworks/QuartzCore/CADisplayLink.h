//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplay;

@interface CADisplayLink : NSObject
{
    void *_impl;	// 8 = 0x8
}

+ (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;	// IMP=0x0000000000016f3d
+ (void)dispatchDeferredDisplayLinks;	// IMP=0x000000000001750b
+ (void)setWillFireHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000174b7
+ (double)expectedWakeupBeforeCommitDeadline:(double)arg1;	// IMP=0x00000000000174ae
+ (_Bool)supportsExpectedWakeupBeforeCommitDeadline;	// IMP=0x00000000000174a6
+ (long long)willFireInfoVersion;	// IMP=0x000000000001749b
+ (id)displayLinkWithDisplay:(id)arg1 target:(id)arg2 selector:(SEL)arg3;	// IMP=0x0000000000017398
- (void)invalidate;	// IMP=0x0000000000016dfc
@property(nonatomic) struct CAFrameRateRange preferredFrameRateRange;
@property(nonatomic) long long preferredFramesPerSecond;
@property(readonly, nonatomic) double targetTimestamp;
@property(nonatomic) long long frameInterval;
@property(nonatomic) long long priority;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double timestamp;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x00000000000168e9
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x00000000000167e5
- (void)dealloc;	// IMP=0x0000000000016774
- (id)_initWithDisplayLinkItem:(void *)arg1;	// IMP=0x00000000000166ec
@property(nonatomic) double timingOffset;
- (void)setHighFrameRateReasons:(const unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000017300
@property unsigned int highFrameRateReason;
@property(readonly, nonatomic) long long actualFramesPerSecond;
@property(readonly, nonatomic) long long minimumFrameDuration;
@property(readonly, nonatomic) double heartbeatRate;
@property(retain, nonatomic) id userInfo;
@property(readonly, nonatomic) double maximumRefreshRate;
@property(readonly, nonatomic) CADisplay *display;

@end

