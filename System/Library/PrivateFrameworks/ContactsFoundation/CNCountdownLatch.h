//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNUnfairLock;
@protocol OS_dispatch_semaphore;

@interface CNCountdownLatch : NSObject
{
    unsigned long long _count;	// 8 = 0x8
    CNUnfairLock *_lock;	// 16 = 0x10
    NSObject<OS_dispatch_semaphore> *_latchedSemaphore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000011da8
- (_Bool)awaitWhileSpinningRunloopWithTimeout:(double)arg1;	// IMP=0x0000000000011c9f
- (_Bool)awaitOnSemaphoreWithTimeout:(double)arg1;	// IMP=0x0000000000011c76
- (_Bool)hasLatched;	// IMP=0x0000000000011bb9
- (_Bool)awaitImmediate;	// IMP=0x0000000000011ba7
- (_Bool)awaitWithTimeout:(double)arg1 strategy:(unsigned long long)arg2;	// IMP=0x0000000000011b6e
- (_Bool)awaitWithTimeout:(double)arg1;	// IMP=0x0000000000011b5a
- (void)await;	// IMP=0x0000000000011b40
- (void)countDown;	// IMP=0x0000000000011ac6
- (id)description;	// IMP=0x0000000000011a40
- (id)initWithStartingCount:(unsigned long long)arg1;	// IMP=0x00000000000119b7
- (id)init;	// IMP=0x00000000000119a3

@end

