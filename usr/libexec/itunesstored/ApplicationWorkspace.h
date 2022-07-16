//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSCountedSet, NSLock, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ApplicationWorkspace : NSObject
{
    NSMutableDictionary *_appProgress;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSLock *_lock;	// 32 = 0x20
    NSMutableArray *_operations;	// 40 = 0x28
    NSCountedSet *_pendingInstalls;	// 48 = 0x30
    ISOperationQueue *_placeholderIconOperationQueue;	// 56 = 0x38
    NSMutableArray *_syncWaitBlocks;	// 64 = 0x40
    NSMutableDictionary *_waitBlocks;	// 72 = 0x48
}

+ (_Bool)keepSafeHarborDataForBundleID:(id)arg1;	// IMP=0x00400000000f2b53
+ (id)defaultWorkspace;	// IMP=0x00100000000f1317
- (void).cxx_destruct;	// IMP=0x00200000000f616d
- (void)_decrementPendingInstallsForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000f5f54
- (void)_incrementPendingInstallsForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000f5edd
- (void)_updatePlaceholderWithODRProgressForApplicationHandle:(id)arg1;	// IMP=0x00100000000f5dfd
- (id)_thumbnailDownloadOperationForDownloadID:(long long)arg1;	// IMP=0x00100000000f5c41
- (void)_stopObservingODRProgress:(id)arg1;	// IMP=0x00100000000f5bdc
- (void)_removeOperationsForDownloadIdentifier:(long long)arg1 operationClass:(Class)arg2;	// IMP=0x00100000000f5ac6
- (void)_removeOperationsForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000f5ab2
- (void)_removeApplicationDownloadProgressForApplicationHandle:(id)arg1;	// IMP=0x00100000000f5a65
- (void)_performNextOperation;	// IMP=0x00100000000f57c3
- (_Bool)_isInstallingForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000f5583
- (_Bool)_hasThumbnailDownloadOperationForDownloadID:(long long)arg1;	// IMP=0x00100000000f5550
- (void)_fireWaitBlocksForSyncTermination;	// IMP=0x00100000000f52f0
- (void)_fireWaitBlocksIfNecessaryForDownloadWithIdentifier:(long long)arg1;	// IMP=0x00100000000f50a7
- (id)_copyCombinedApplicationProgress:(id)arg1 forApplicationHandle:(id)arg2;	// IMP=0x00100000000f4ff0
- (void)_cancelPlaceholderThumbnailInstallForDownloadID:(long long)arg1;	// IMP=0x00100000000f4e12
- (void)_addProgressOperation:(id)arg1;	// IMP=0x00100000000f4b64
- (void)_addOperationAtBeginning:(id)arg1;	// IMP=0x00100000000f4a8f
- (id)sinfPathForBundleID:(id)arg1;	// IMP=0x00100000000f48ba
- (void)waitForSyncBubbleToTerminateWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f48b4
- (void)waitForInstallOfDownloadIdentifier:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f4591
- (void)updatePlaceholderWithApplicationProgress:(id)arg1;	// IMP=0x00100000000f4454
- (void)updatePlaceholderForApplicationHandle:(id)arg1;	// IMP=0x00100000000f4367
- (void)uninstallPlaceholderForApplicationHandle:(id)arg1;	// IMP=0x00100000000f4258
- (void)suspendQuotas;	// IMP=0x00100000000f4252
- (_Bool)shouldModifyQuota:(id)arg1;	// IMP=0x00100000000f41f1
- (void)setIconData:(id)arg1 forApplicationHandle:(id)arg2;	// IMP=0x00100000000f3fac
- (void)resumeQuotas;	// IMP=0x00100000000f3fa6
- (void)restorePlaceholderForApplicationHandle:(id)arg1;	// IMP=0x00100000000f3eba
- (void)resetProgressForApplicationHandle:(id)arg1;	// IMP=0x00100000000f3dd2
- (void)replayIncompleteOperations;	// IMP=0x00100000000f2db2
- (void)markFailedPlaceholderForApplicationHandle:(id)arg1;	// IMP=0x00100000000f2ca3
- (_Bool)isRemovedSystemApp:(id)arg1;	// IMP=0x00100000000f2b3e
- (_Bool)isInstalledApp:(id)arg1;	// IMP=0x00100000000f2a0d
- (void)installPlaceholderForApplicationHandle:(id)arg1;	// IMP=0x00100000000f2767
- (_Bool)isMultiUser;	// IMP=0x00100000000f275f
- (_Bool)isDownloadingOrInstallingForItemIdentifier:(id)arg1;	// IMP=0x00100000000f1b51
- (void)finishInstallOfApplicationHandle:(id)arg1;	// IMP=0x00100000000f1a35
- (void)endExternalInstallationForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000f19a9
- (void)cancelPlaceholderInstallationForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000f1942
- (void)beginExternalInstallationForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000f1930
- (void)addPlaceholderThumbnailOperation:(id)arg1;	// IMP=0x00100000000f1658
- (void)applyWorkspaceChanges:(id)arg1;	// IMP=0x00100000000f13a8
- (id)init;	// IMP=0x00100000000f11a8

@end
