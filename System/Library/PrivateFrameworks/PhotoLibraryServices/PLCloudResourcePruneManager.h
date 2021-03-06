//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLCloudPhotoLibraryManager, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLCloudResourcePruneManager : NSObject
{
    PLPhotoLibrary *_photoLibrary;	// 8 = 0x8
    PLCloudPhotoLibraryManager *_cplManager;	// 16 = 0x10
    _Bool _stopped;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003714c6
- (long long)pruneResources:(id)arg1 inPhotoLibrary:(id)arg2;	// IMP=0x0000000000371326
- (id)_identifierForResource:(id)arg1;	// IMP=0x000000000037127e
- (id)_predicateForPruneWithUrgency:(long long)arg1;	// IMP=0x000000000037119c
- (long long)diskSpaceToPrune;	// IMP=0x0000000000370f04
- (long long)_localResourcesSize;	// IMP=0x0000000000370e5a
- (void)_updateLocalStateForPrunedResources:(id)arg1 inPhotoLibrary:(id)arg2;	// IMP=0x000000000037094a
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000370894
- (id)pruneStatusForDebug:(_Bool)arg1;	// IMP=0x00000000003707e6
- (long long)_fetchResourcesForPruningWithBudget:(long long)arg1 urgency:(long long)arg2 batchHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003704d8
- (void)stop;	// IMP=0x0000000000370419
- (void)startAutomaticPruneWithBudget:(long long)arg1 urgency:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000370155
- (void)updateCacheDeletePurgeableAmount;	// IMP=0x000000000036ff87
- (void)_handleCacheDeleteRegistration;	// IMP=0x000000000036fda5
- (struct __CFDictionary *)_handleCacheDeletePurgeable:(int)arg1 info:(struct __CFDictionary *)arg2;	// IMP=0x000000000036fba4
- (struct __CFDictionary *)_handleCacheDeletePurge:(int)arg1 info:(struct __CFDictionary *)arg2;	// IMP=0x000000000036f7d9
- (long long)_purgeableAmountWithBudget:(long long)arg1 debugString:(id)arg2;	// IMP=0x000000000036f736
- (long long)_totalPurgeableAmountForUrgency:(long long)arg1;	// IMP=0x000000000036f5fa
- (void)dealloc;	// IMP=0x000000000036f5b9
- (id)initWithCPLManager:(id)arg1 library:(id)arg2;	// IMP=0x000000000036f4ad
- (id)init;	// IMP=0x000000000036f478

@end

