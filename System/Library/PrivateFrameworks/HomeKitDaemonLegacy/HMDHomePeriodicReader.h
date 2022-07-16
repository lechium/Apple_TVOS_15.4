//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDBackgroundTaskAgentTimer, HMDHome, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDHomePeriodicReader : HMFObject <HMFLogging>
{
    HMDHome *_home;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMDBackgroundTaskAgentTimer *_btaReadTimer;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x000000000054b10d
- (void).cxx_destruct;	// IMP=0x000000000054af9a
@property(readonly, nonatomic) HMDBackgroundTaskAgentTimer *btaReadTimer; // @synthesize btaReadTimer=_btaReadTimer;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak HMDHome *home; // @synthesize home=_home;
- (void)_startTimer;	// IMP=0x000000000054abff
- (void)_issueCharacteristicRequests:(id)arg1;	// IMP=0x000000000054a96f
- (void)_checkToIssueRead;	// IMP=0x000000000054a82d
- (void)checkToIssueRead;	// IMP=0x000000000054a6d9
- (void)startReadTimer;	// IMP=0x000000000054a585
- (id)_characteristicsToRead;	// IMP=0x0000000000549c7e
- (void)residentUpdated;	// IMP=0x0000000000549ba7
- (void)timerFired:(id)arg1;	// IMP=0x0000000000549a4c
- (void)handleCharacteristicBasedEventAdded:(id)arg1;	// IMP=0x0000000000549975
- (id)logIdentifier;	// IMP=0x0000000000549899
- (void)dealloc;	// IMP=0x0000000000549824
- (void)configure:(id)arg1;	// IMP=0x0000000000549697

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

