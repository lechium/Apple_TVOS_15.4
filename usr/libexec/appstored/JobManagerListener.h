//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface JobManagerListener
{
    NSMapTable *_clients;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSMutableDictionary *_progress;	// 24 = 0x18
    _Bool _progressDirty;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000174fb3
- (void)_notifyClientsOfStatesChanged:(id)arg1;	// IMP=0x0010000000174afa
- (void)_notifyClientsOfProgressChanged:(id)arg1;	// IMP=0x001000000017474b
- (void)_notifyClientsOfJobCompleted:(id)arg1 finalPhase:(id)arg2 isPersistent:(_Bool)arg3;	// IMP=0x001000000017443a
- (void)_notifyClientsOfJobsChanged:(id)arg1;	// IMP=0x00100000001742b0
- (void)_initializeConnection:(id)arg1;	// IMP=0x0010000000173dde
- (void)_handleDisconnect:(id)arg1;	// IMP=0x0010000000173c4d
- (id)_getJobsWithIDs:(id)arg1 forClient:(id)arg2;	// IMP=0x0010000000173b65
- (id)_getJobsWithExternalIDs:(id)arg1 forClient:(id)arg2;	// IMP=0x0010000000173542
- (id)_getJobsForClient:(id)arg1;	// IMP=0x001000000017352b
- (long long)_externalPhaseForPhase:(long long)arg1;	// IMP=0x00100000001734a6
- (void)_enumerateInstallsWithJobIDs:(id)arg1 usingTransactionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001730ce
- (void)_enumerateClientsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000172f5b
- (id)_copyJobIDsForClient:(id)arg1;	// IMP=0x0010000000172c77
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000001729de
- (void)_progressTimerFired;	// IMP=0x001000000017274a
- (void)_dirtyProgress:(id)arg1;	// IMP=0x00100000001725a4
- (void)_handleLegacyNotifications:(id)arg1;	// IMP=0x00100000001720cf
- (void)resumeJobsWithIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000171e40
- (void)registerJobManagerWithOptions:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000171a5c
- (void)pauseJobsWithIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001717cd
- (void)getJobsWithIDs:(id)arg1 usingReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000017150b
- (void)getJobsUsingReplyBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000171312
- (void)finishJobsWithIDs:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000171083
- (void)cancelJobsWithIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000170ded
- (id)init;	// IMP=0x0010000000170ce7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
