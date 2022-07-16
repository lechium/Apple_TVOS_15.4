//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFHeartBeat;
@protocol OS_dispatch_queue;

@interface _ADQueueObserver : NSObject
{
    unsigned long long _numberOfOccurrences;	// 8 = 0x8
    AFHeartBeat *_heartBeat;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    double _heartBeatInterval;	// 32 = 0x20
    double _timeoutInterval;	// 40 = 0x28
    CDUnknownBlockType _timeoutHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000243392
- (void)timeoutDetected;	// IMP=0x0010000000243334
- (void)heartBeatFiredWithQueue:(id)arg1;	// IMP=0x0010000000242fc6
- (void)stop;	// IMP=0x0010000000242f65
- (void)startWithQueue:(id)arg1;	// IMP=0x0010000000242d99
- (id)initWithQueue:(id)arg1 heartBeatInterval:(double)arg2 timeoutInterval:(double)arg3 timeoutHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000242cd0

@end

