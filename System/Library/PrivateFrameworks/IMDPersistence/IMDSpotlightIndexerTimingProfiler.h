//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMTimingCollection, NSArray, NSMutableArray, NSMutableSet;

@interface IMDSpotlightIndexerTimingProfiler : NSObject
{
    IMTimingCollection *_timingCollection;	// 8 = 0x8
    double _timeout;	// 16 = 0x10
    NSMutableSet *_runningTimers;	// 24 = 0x18
    NSMutableArray *_runTimers;	// 32 = 0x20
    NSArray *_abortedTimers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000054b8f
@property(retain, nonatomic) NSArray *abortedTimers; // @synthesize abortedTimers=_abortedTimers;
@property(retain, nonatomic) NSMutableArray *runTimers; // @synthesize runTimers=_runTimers;
@property(retain, nonatomic) NSMutableSet *runningTimers; // @synthesize runningTimers=_runningTimers;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) IMTimingCollection *timingCollection; // @synthesize timingCollection=_timingCollection;
- (void)stopMainTimerAndLogAfterSuccess;	// IMP=0x00000000000548ea
- (void)stopMainTimerAndLogAfterFailure;	// IMP=0x000000000005483a
- (void)abortCurrentTimers;	// IMP=0x00000000000546b2
- (void)stopProfilingAfterIndexersBailed;	// IMP=0x00000000000545c9
- (void)logResults:(_Bool)arg1;	// IMP=0x0000000000054017
- (void)stopTimingForKey:(id)arg1 iteration:(long long)arg2;	// IMP=0x0000000000053f6a
- (void)stopTimingForKey:(id)arg1;	// IMP=0x0000000000053e42
- (void)startTimingForKey:(id)arg1 iteration:(long long)arg2;	// IMP=0x0000000000053d95
- (void)startTimingForKey:(id)arg1;	// IMP=0x0000000000053c5d
- (void)startMainTimerWithExpectedTimeoutInterval:(double)arg1;	// IMP=0x0000000000053aba

@end

