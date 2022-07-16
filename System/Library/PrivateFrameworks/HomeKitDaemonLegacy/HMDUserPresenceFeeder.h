//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDBackgroundTaskAgentTimer, HMDUserPresenceFeed, HMDUserPresenceFeedSession, NSString;

@interface HMDUserPresenceFeeder <HMFLogging>
{
    unsigned long long _presenceRegionStatus;	// 8 = 0x8
    HMDBackgroundTaskAgentTimer *_btaUpdateTimer;	// 16 = 0x10
    HMDUserPresenceFeedSession *_currentFeedSession;	// 24 = 0x18
    HMDUserPresenceFeed *_lastSentFeed;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000002bcdd6
- (void).cxx_destruct;	// IMP=0x00000000002bc89a
@property(retain, nonatomic) HMDUserPresenceFeed *lastSentFeed; // @synthesize lastSentFeed=_lastSentFeed;
@property(retain, nonatomic) HMDUserPresenceFeedSession *currentFeedSession; // @synthesize currentFeedSession=_currentFeedSession;
@property(readonly, nonatomic) HMDBackgroundTaskAgentTimer *btaUpdateTimer; // @synthesize btaUpdateTimer=_btaUpdateTimer;
@property(nonatomic) unsigned long long presenceRegionStatus; // @synthesize presenceRegionStatus=_presenceRegionStatus;
- (void)notifyDidLeaveHomeRegion;	// IMP=0x00000000002bc7ac
- (void)notifyDidEnterHomeRegion;	// IMP=0x00000000002bc73b
- (void)notifyDidLeaveHome;	// IMP=0x00000000002bc6ca
- (void)notifyDidArriveHome;	// IMP=0x00000000002bc659
- (void)homeDataProcessed;	// IMP=0x00000000002bc653
- (void)presenceAuthChanged;	// IMP=0x00000000002bc64d
- (void)presenceAuthStatusChangedForUser:(id)arg1 presenceAuthStatus:(id)arg2;	// IMP=0x00000000002bc647
- (id)init;	// IMP=0x00000000002bc604

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

