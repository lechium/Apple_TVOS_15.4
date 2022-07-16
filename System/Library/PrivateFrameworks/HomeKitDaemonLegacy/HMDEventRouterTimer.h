//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMETimer-Protocol.h>
#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>

@class HMFTimer, NSString;

@interface HMDEventRouterTimer : NSObject <HMETimer, HMFTimerDelegate>
{
    CDUnknownBlockType _timerFireHandler;	// 8 = 0x8
    HMFTimer *_timer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000a6fdcd
@property(readonly) HMFTimer *timer; // @synthesize timer=_timer;
@property(readonly) CDUnknownBlockType timerFireHandler; // @synthesize timerFireHandler=_timerFireHandler;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000a6fd72
- (void)suspend;	// IMP=0x0000000000a6fd35
- (void)resume;	// IMP=0x0000000000a6fcf8
- (id)initWithQueue:(id)arg1 interval:(double)arg2 timerFireHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a6fc07

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

