//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMFTimer, HMFUnfairLock, NSString;

@interface HMDWatchConnectivityLogEventManager : HMFObject <HMFTimerDelegate>
{
    _Bool _hasCompleteReport;	// 8 = 0x8
    unsigned long long _watchAddedNotificationCountForCurrentIncompleteReport;	// 16 = 0x10
    unsigned long long _watchRemovedNotificationCountForCurrentIncompleteReport;	// 24 = 0x18
    unsigned long long _watchAddedNotificationCountForLastCompleteReport;	// 32 = 0x20
    unsigned long long _watchRemovedNotificationCountForLastCompleteReport;	// 40 = 0x28
    HMFTimer *_watchConnectivityLogEventManagerTimer;	// 48 = 0x30
    HMFUnfairLock *_lock;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x0000000000452bd4
- (void).cxx_destruct;	// IMP=0x00000000004529bb
@property(readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) HMFTimer *watchConnectivityLogEventManagerTimer; // @synthesize watchConnectivityLogEventManagerTimer=_watchConnectivityLogEventManagerTimer;
@property(nonatomic) unsigned long long watchRemovedNotificationCountForLastCompleteReport; // @synthesize watchRemovedNotificationCountForLastCompleteReport=_watchRemovedNotificationCountForLastCompleteReport;
@property(nonatomic) unsigned long long watchAddedNotificationCountForLastCompleteReport; // @synthesize watchAddedNotificationCountForLastCompleteReport=_watchAddedNotificationCountForLastCompleteReport;
@property(nonatomic) unsigned long long watchRemovedNotificationCountForCurrentIncompleteReport; // @synthesize watchRemovedNotificationCountForCurrentIncompleteReport=_watchRemovedNotificationCountForCurrentIncompleteReport;
@property(nonatomic) unsigned long long watchAddedNotificationCountForCurrentIncompleteReport; // @synthesize watchAddedNotificationCountForCurrentIncompleteReport=_watchAddedNotificationCountForCurrentIncompleteReport;
@property(nonatomic) _Bool hasCompleteReport; // @synthesize hasCompleteReport=_hasCompleteReport;
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000045286c
- (struct HMDWatchConnectivityLogEventManagerSnapshot)currentWatchConnectivitySnapshot;	// IMP=0x0000000000452757
- (void)completeCurrentReport;	// IMP=0x00000000004526b5
- (void)incrementWatchRemovedNotificationCount;	// IMP=0x0000000000452613
- (void)incrementWatchAddedNotificationCount;	// IMP=0x0000000000452571
- (id)init;	// IMP=0x0000000000452483

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

