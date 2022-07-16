//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface CloudBackgroundTaskManager : NSObject
{
    NSMapTable *_jobNameToSelectorMap;	// 8 = 0x8
}

+ (id)sharedTaskManager;	// IMP=0x00400000000dc176
- (void).cxx_destruct;	// IMP=0x00200000000db969
- (_Bool)_cellularDataAllowedForJaliscoMedia;	// IMP=0x00100000000db8da
- (_Bool)_cellularDataAllowedForJaliscoApps;	// IMP=0x00100000000db890
- (id)_nextJaliscoAppsPollTimeKey;	// IMP=0x00100000000db883
- (id)_nextJaliscoMediaPollTimeKey;	// IMP=0x00100000000db876
- (id)_nextEvaluateSyncRulesThrottleOperationTimeKey;	// IMP=0x00100000000db869
- (id)_nextEvaluateSyncRulesOperationTimeKey;	// IMP=0x00100000000db85c
- (double)_throttledDeferredEvaluateKeepLocalTime;	// IMP=0x00100000000db7b1
- (id)_homeSharingPrefsNumberForKey:(id)arg1;	// IMP=0x00100000000db795
- (void)_setHomeSharingPrefsNumber:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000db76c
- (id)_baseBtaJobForPeriodicPollCellularDataAllowed:(_Bool)arg1;	// IMP=0x00100000000db754
- (id)_baseBtaJobForDeferredPush;	// IMP=0x00100000000db73c
- (void)_handleJobNamed:(const char *)arg1 satisfied:(_Bool)arg2 invalid:(_Bool)arg3;	// IMP=0x00100000000db622
- (void)_unscheduleJobNamed:(const char *)arg1;	// IMP=0x00100000000db61c
- (void)_scheduleJobNamed:(const char *)arg1 withStartTime:(id)arg2 baseBtaJob:(id)arg3;	// IMP=0x00100000000db616
- (void)_initializeBTAHandlers;	// IMP=0x00100000000db610
- (void)_handleJaliscoMediaDeferredPushUpdateJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;	// IMP=0x00100000000db3c9
- (void)_handleJaliscoMediaPeriodicPollJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;	// IMP=0x00100000000db14a
- (void)_handleSagaDeferredPushUpdateJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;	// IMP=0x00100000000daf01
- (void)unscheduleJaliscoMediaDeferredPushUpate;	// IMP=0x00100000000daefb
- (void)scheduleJaliscoMediaDeferredPushUpate;	// IMP=0x00100000000daef5
- (void)unscheduleJaliscoMediaPeriodicPoll;	// IMP=0x00100000000daeef
- (void)scheduleJaliscoMediaPeriodicPoll;	// IMP=0x00100000000daee9
- (void)unscheduleSagaDeferredPushUpate;	// IMP=0x00100000000daee3
- (void)scheduleSagaDeferredPushUpate;	// IMP=0x00100000000daedd
- (id)init;	// IMP=0x00100000000dae91

@end

