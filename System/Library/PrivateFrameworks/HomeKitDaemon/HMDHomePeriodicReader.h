//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDBackgroundTaskAgentTimer, HMDHome, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDHomePeriodicReader : HMFObject <HMFLogging>
{
    HMDHome *_home;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMDBackgroundTaskAgentTimer *_btaReadTimer;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00000000005b5f59
- (void).cxx_destruct;	// IMP=0x00000000005b5de6
@property(readonly, nonatomic) HMDBackgroundTaskAgentTimer *btaReadTimer; // @synthesize btaReadTimer=_btaReadTimer;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak HMDHome *home; // @synthesize home=_home;
- (void)_startTimer;	// IMP=0x00000000005b5a4b
- (void)_issueCharacteristicRequests:(id)arg1;	// IMP=0x00000000005b57bb
- (void)_checkToIssueRead;	// IMP=0x00000000005b5679
- (void)checkToIssueRead;	// IMP=0x00000000005b5525
- (void)startReadTimer;	// IMP=0x00000000005b53d1
- (id)_characteristicsToRead;	// IMP=0x00000000005b4aca
- (void)residentUpdated;	// IMP=0x00000000005b49f3
- (void)timerFired:(id)arg1;	// IMP=0x00000000005b4898
- (void)handleCharacteristicBasedEventAdded:(id)arg1;	// IMP=0x00000000005b47c1
- (id)logIdentifier;	// IMP=0x00000000005b46e5
- (void)dealloc;	// IMP=0x00000000005b4670
- (void)configure:(id)arg1;	// IMP=0x00000000005b44e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

