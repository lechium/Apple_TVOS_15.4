//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDUser, HMDUserPresenceFeedRetryTimer, HMDUserPresenceRegion, HMDUserPresenceUpdateReason, HMFMessageDispatcher, HMUserPresenceAuthorization, HMUserPresenceCompute, NSDate, NSObject, NSString, NSUUID;
@protocol HMDUserPresenceFeedSessionDelegate, OS_dispatch_queue;

@interface HMDUserPresenceFeedSession : HMFObject <HMFLogging, HMFTimerDelegate>
{
    id <HMDUserPresenceFeedSessionDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSUUID *_targetUUID;	// 24 = 0x18
    HMFMessageDispatcher *_messageDispatcher;	// 32 = 0x20
    HMDUser *_user;	// 40 = 0x28
    HMUserPresenceAuthorization *_presenceAuthStatus;	// 48 = 0x30
    HMUserPresenceCompute *_presenceComputeStatus;	// 56 = 0x38
    HMDUserPresenceRegion *_presenceRegionStatus;	// 64 = 0x40
    HMDUserPresenceUpdateReason *_reason;	// 72 = 0x48
    NSDate *_statusChangeDate;	// 80 = 0x50
    NSUUID *_sessionID;	// 88 = 0x58
    HMDUserPresenceFeedRetryTimer *_statusUpdateRetryTimer;	// 96 = 0x60
    NSString *_logIdentifierString;	// 104 = 0x68
}

+ (id)logCategory;	// IMP=0x00000000003a3844
- (void).cxx_destruct;	// IMP=0x00000000003a3415
@property(copy, nonatomic) NSString *logIdentifierString; // @synthesize logIdentifierString=_logIdentifierString;
@property(retain, nonatomic) HMDUserPresenceFeedRetryTimer *statusUpdateRetryTimer; // @synthesize statusUpdateRetryTimer=_statusUpdateRetryTimer;
@property(readonly, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSDate *statusChangeDate; // @synthesize statusChangeDate=_statusChangeDate;
@property(retain, nonatomic) HMDUserPresenceUpdateReason *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) HMDUserPresenceRegion *presenceRegionStatus; // @synthesize presenceRegionStatus=_presenceRegionStatus;
@property(readonly, nonatomic) HMUserPresenceCompute *presenceComputeStatus; // @synthesize presenceComputeStatus=_presenceComputeStatus;
@property(readonly, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus; // @synthesize presenceAuthStatus=_presenceAuthStatus;
@property(readonly, nonatomic) HMDUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, nonatomic) NSUUID *targetUUID; // @synthesize targetUUID=_targetUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak id <HMDUserPresenceFeedSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000003a3185
- (id)logIdentifier;	// IMP=0x00000000003a3173
- (void)_callDelegate;	// IMP=0x00000000003a30b2
- (void)_handleStatusUpdateMessageError:(id)arg1 responseTime:(double)arg2;	// IMP=0x00000000003a2f9c
- (void)_send;	// IMP=0x00000000003a224c
- (void)send;	// IMP=0x00000000003a21db
- (id)attributeDescriptions;	// IMP=0x00000000003a1fb7
- (void)dealloc;	// IMP=0x00000000003a1e74
- (id)initWithDelegate:(id)arg1 workQueue:(id)arg2 targetUUID:(id)arg3 messageDispatcher:(id)arg4 user:(id)arg5 presenceAuthStatus:(id)arg6 presenceComputeStatus:(id)arg7 presenceRegionStatus:(id)arg8 reason:(id)arg9;	// IMP=0x00000000003a1b4e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

