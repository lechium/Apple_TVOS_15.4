//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>

@class HMFTimer, NSHashTable, NSMutableArray, NSMutableDictionary, NSString;
@protocol HMDUserCloudShareControllerDelegate, OS_dispatch_queue, OS_os_log;

@interface HMDUserCloudShareController : NSObject <HMFTimerDelegate, HMFLogging>
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    NSHashTable *_connectedClients;	// 16 = 0x10
    NSMutableDictionary *_containerIdToConnectionIdentifierMap;	// 24 = 0x18
    id <HMDUserCloudShareControllerDelegate> _delegate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_clientQueue;	// 40 = 0x28
    NSMutableArray *_pendingRequests;	// 48 = 0x30
    double _pendingRequestTimeoutInterval;	// 56 = 0x38
    HMFTimer *_pendingRequestTimer;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x00000000005a00f9
+ (id)identifierForConnection:(id)arg1;	// IMP=0x000000000059ff7b
- (void).cxx_destruct;	// IMP=0x000000000059f721
@property(retain, nonatomic) HMFTimer *pendingRequestTimer; // @synthesize pendingRequestTimer=_pendingRequestTimer;
@property(readonly, nonatomic) double pendingRequestTimeoutInterval; // @synthesize pendingRequestTimeoutInterval=_pendingRequestTimeoutInterval;
@property(readonly, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property __weak id <HMDUserCloudShareControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *containerIdToConnectionIdentifierMap; // @synthesize containerIdToConnectionIdentifierMap=_containerIdToConnectionIdentifierMap;
- (void)invalidateXpcClient:(id)arg1;	// IMP=0x000000000059f5fe
- (void)_invalidateXpcClient:(id)arg1;	// IMP=0x000000000059f48f
- (void)deregisterXpcClient:(id)arg1;	// IMP=0x000000000059f3de
- (void)_deregisterXpcClient:(id)arg1;	// IMP=0x000000000059efed
- (void)registerWithXpcClient:(id)arg1 containerIDs:(id)arg2;	// IMP=0x000000000059ef11
- (void)_registerWithXpcClient:(id)arg1 containerIDs:(id)arg2;	// IMP=0x000000000059e8e9
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000059e878
@property(readonly, nonatomic) NSHashTable *connectedClients; // @synthesize connectedClients=_connectedClients;
- (void)handleShareRepairForRemoteClientRequest:(id)arg1 home:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000059e34c
- (void)handleShareForRemoteClientRequest:(id)arg1 home:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000059df38
- (void)_handleShareForRemoteClientRequest:(id)arg1;	// IMP=0x000000000059dd1c
- (void)_sendRepairRequest:(id)arg1 toConnection:(id)arg2;	// IMP=0x000000000059db2b
- (void)_sendShareRequest:(id)arg1 toConnection:(id)arg2;	// IMP=0x000000000059d950
- (void)_resumeRequestsForContainerID:(id)arg1 connection:(id)arg2;	// IMP=0x000000000059d458
- (void)_handlePendingRequestTimeouts;	// IMP=0x000000000059d045
- (void)_addRequestToPending:(id)arg1;	// IMP=0x000000000059cee4
- (void)_removeTimerIfNotNeeded;	// IMP=0x000000000059cd51
- (void)_startTimerIfNeeded;	// IMP=0x000000000059cbde
- (id)_connectionForContainerID:(id)arg1;	// IMP=0x000000000059c956
- (void)configure;	// IMP=0x000000000059c950
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 pendingRequestTimeoutInterval:(double)arg3;	// IMP=0x000000000059c812

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

