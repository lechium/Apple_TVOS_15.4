//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, UnfairLock;

@interface SecureClock : NSObject
{
    UnfairLock *_lock;	// 8 = 0x8
    NSDate *_lastServerDate;	// 16 = 0x10
    double _uptimeAtLastServerResponse;	// 24 = 0x18
}

+ (id)_persistentStatePath;	// IMP=0x004000000011b7b8
+ (id)_hashForServerDate:(double)arg1 systemUptime:(double)arg2;	// IMP=0x001000000011b668
+ (id)_dateFromHeaderValue:(id)arg1;	// IMP=0x001000000011b5e5
+ (id)_dateFormatter;	// IMP=0x001000000011b575
+ (id)_global;	// IMP=0x001000000011b47e
+ (void)synchronizeWithURLResult:(id)arg1;	// IMP=0x001000000011b40c
+ (id)now;	// IMP=0x001000000011b3bc
- (void).cxx_destruct;	// IMP=0x002000000011c591
- (void)_logState;	// IMP=0x001000000011c41f
- (double)_timeIntervalSinceLastServerResponse;	// IMP=0x001000000011c3be
- (id)_currentTimeSynchronized;	// IMP=0x001000000011c272
- (id)_currentTime;	// IMP=0x001000000011c243
- (void)_readState;	// IMP=0x001000000011beaa
- (void)_writeState;	// IMP=0x001000000011bc66
- (void)_synchronizeWithURLResult:(id)arg1;	// IMP=0x001000000011b8e9
- (id)_init;	// IMP=0x001000000011b86e

@end

