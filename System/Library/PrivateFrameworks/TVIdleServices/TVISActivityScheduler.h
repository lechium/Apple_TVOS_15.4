//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TVISActivityScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
}

+ (unsigned long long)assetServiceRunContextForBackgroundActivityContext:(id)arg1;	// IMP=0x000000000000b560
+ (long long)_performBackgroundActivityWithContext:(id)arg1 outDidUpdate:(_Bool *)arg2;	// IMP=0x000000000000b0a0
+ (id)sharedInstance;	// IMP=0x0000000000009b10
- (void).cxx_destruct;	// IMP=0x000000000000b650
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)_anticipatedDownloadDateForInterval:(long long)arg1;	// IMP=0x000000000000ae70
- (_Bool)_shouldScheduleUpdateForDate:(id)arg1 previouslyScheduledDate:(id)arg2;	// IMP=0x000000000000ada0
- (void)_scheduleBackgroundActivityForced:(_Bool)arg1;	// IMP=0x000000000000a430
- (void)_checkForUpdatesWithActivityContext:(id)arg1 logContext:(id)arg2 forceScheduling:(_Bool)arg3;	// IMP=0x000000000000a340
- (void)_registerLaunchEvents;	// IMP=0x0000000000009ee0
- (void)checkForUpdates;	// IMP=0x0000000000009de0
- (void)start;	// IMP=0x0000000000009cd0
- (id)init;	// IMP=0x0000000000009c00

@end

