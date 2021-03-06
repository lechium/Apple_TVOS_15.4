//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDBackgroundTaskAgentTimer, HMDUserPresenceFeed, HMDUserPresenceFeedSession, NSString;

@interface HMDUserPresenceFeeder <HMFLogging>
{
    unsigned long long _presenceRegionStatus;	// 8 = 0x8
    HMDBackgroundTaskAgentTimer *_btaUpdateTimer;	// 16 = 0x10
    HMDUserPresenceFeedSession *_currentFeedSession;	// 24 = 0x18
    HMDUserPresenceFeed *_lastSentFeed;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000002ea205
- (void).cxx_destruct;	// IMP=0x00000000002e9cc9
@property(retain, nonatomic) HMDUserPresenceFeed *lastSentFeed; // @synthesize lastSentFeed=_lastSentFeed;
@property(retain, nonatomic) HMDUserPresenceFeedSession *currentFeedSession; // @synthesize currentFeedSession=_currentFeedSession;
@property(readonly, nonatomic) HMDBackgroundTaskAgentTimer *btaUpdateTimer; // @synthesize btaUpdateTimer=_btaUpdateTimer;
@property(nonatomic) unsigned long long presenceRegionStatus; // @synthesize presenceRegionStatus=_presenceRegionStatus;
- (void)notifyDidLeaveHomeRegion;	// IMP=0x00000000002e9bdb
- (void)notifyDidEnterHomeRegion;	// IMP=0x00000000002e9b6a
- (void)notifyDidLeaveHome;	// IMP=0x00000000002e9af9
- (void)notifyDidArriveHome;	// IMP=0x00000000002e9a88
- (void)homeDataProcessed;	// IMP=0x00000000002e9a82
- (void)presenceAuthChanged;	// IMP=0x00000000002e9a7c
- (void)presenceAuthStatusChangedForUser:(id)arg1 presenceAuthStatus:(id)arg2;	// IMP=0x00000000002e9a76
- (id)init;	// IMP=0x00000000002e9a33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

