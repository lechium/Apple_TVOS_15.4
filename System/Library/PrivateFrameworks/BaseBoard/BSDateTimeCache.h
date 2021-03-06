//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BSDateTimeCache : NSObject
{
    double _yesterday;	// 8 = 0x8
    double _today;	// 16 = 0x10
    double _tomorrow;	// 24 = 0x18
    double _2daysFromNow;	// 32 = 0x20
    double _6daysAgo;	// 40 = 0x28
    double _prevWeek;	// 48 = 0x30
    double _nextWeek;	// 56 = 0x38
    double _lastAttemptedResetTime;	// 64 = 0x40
    double _lastSuccessfulResetTime;	// 72 = 0x48
    _Bool _isResetting;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x00000000000416ae
- (id)description;	// IMP=0x0000000000041921
- (void)_resetAndConfigure;	// IMP=0x0000000000041912
- (_Bool)isWithinNextWeek:(double)arg1;	// IMP=0x00000000000418dc
- (_Bool)isWithinPrevWeek:(double)arg1 includeToday:(_Bool)arg2;	// IMP=0x0000000000041882
- (_Bool)isWithinPrevWeek:(double)arg1;	// IMP=0x000000000004186e
- (_Bool)isYesterday:(double)arg1;	// IMP=0x0000000000041838
- (_Bool)isTomorrow:(double)arg1;	// IMP=0x0000000000041802
- (_Bool)isToday:(double)arg1;	// IMP=0x00000000000417c7
- (double)nextWeek;	// IMP=0x00000000000417ad
- (double)prevWeek;	// IMP=0x0000000000041793
- (double)yesterday;	// IMP=0x0000000000041779
- (double)tomorrow;	// IMP=0x000000000004175f
- (double)today;	// IMP=0x0000000000041703
- (void)dealloc;	// IMP=0x00000000000415e5
- (id)init;	// IMP=0x000000000004116f

@end

