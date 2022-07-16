//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSMutableOrderedSet, NSObject, NSString, NSXPCConnection, SQLitePredicate;
@protocol OS_dispatch_queue;

@interface JobManagerClient
{
    NSXPCConnection *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSString *_persistenceIdentifier;	// 32 = 0x20
    NSMutableOrderedSet *_queuedChangedJobs;	// 40 = 0x28
    NSMutableOrderedSet *_queuedCompletedJobs;	// 48 = 0x30
    NSMutableDictionary *_queuedCompletedJobsPhases;	// 56 = 0x38
    NSMutableDictionary *_queuedProgressUpdates;	// 64 = 0x40
    NSMutableDictionary *_queuedStateUpdates;	// 72 = 0x48
    _Bool _shouldFilterExternalJobs;	// 80 = 0x50
    _Bool _shouldReportDownloadProgress;	// 81 = 0x51
}

- (void).cxx_destruct;	// IMP=0x00200000000c56ce
- (void)_sendJobProgressUpdated:(id)arg1;	// IMP=0x00000000000c553b
- (void)_sendJobStatesUpdated:(id)arg1;	// IMP=0x00100000000c53a8
- (void)_sendJobsCompleted:(id)arg1 finalPhases:(id)arg2;	// IMP=0x00100000000c51bc
- (void)_sendJobsChanged:(id)arg1;	// IMP=0x00100000000c5029
- (void)_dequeuePendingStateUpdates;	// IMP=0x00100000000c4f6b
- (void)_dequeuePendingProgressUpdates;	// IMP=0x00100000000c4ead
- (void)_dequeuePendingJobsCompleted;	// IMP=0x00100000000c4d87
- (void)_dequeuePendingJobChanges;	// IMP=0x00100000000c4c9f
- (void)setOptions:(id)arg1;	// IMP=0x00100000000c4c02
- (void)sendJobProgressUpdated:(id)arg1;	// IMP=0x00100000000c4b53
- (void)sendJobStatesUpdated:(id)arg1;	// IMP=0x00100000000c4aa4
- (void)sendJobsCompleted:(id)arg1 finalPhases:(id)arg2;	// IMP=0x00100000000c489e
- (void)sendJobsChanged:(id)arg1;	// IMP=0x00100000000c47ef
@property(readonly, copy) SQLitePredicate *jobsQueryPredicate;
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000000c4559

@end

