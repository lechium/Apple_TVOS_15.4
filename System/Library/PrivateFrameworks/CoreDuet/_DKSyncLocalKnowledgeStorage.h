//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKSyncLocalKnowledgeStorage-Protocol.h>

@class _DKKnowledgeStorage;

@interface _DKSyncLocalKnowledgeStorage : NSObject <_DKSyncLocalKnowledgeStorage>
{
    _DKKnowledgeStorage *_storage;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000009f9c3
- (_Bool)deleteEventsWithEventIDs:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009f70f
- (_Bool)saveEvents:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009f40b
- (id)deletionsSyncHistoryForPeer:(id)arg1 transportName:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009f33a
- (id)additionsSyncHistoryForPeer:(id)arg1 transportName:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009f269
- (void)setLastSyncDownDeletionDate:(id)arg1 previousDate:(id)arg2 forPeer:(id)arg3 transportName:(id)arg4 error:(id *)arg5;	// IMP=0x000000000009d1ef
- (id)lastSyncDownDeletionDateForPeer:(id)arg1 transportName:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009c636
- (_Bool)saveSyncedDownWindows:(id)arg1 peer:(id)arg2 transportName:(id)arg3 error:(id *)arg4;	// IMP=0x000000000009be26
- (id)sortedSyncDownWindowsOverlappingBetweenDate:(id)arg1 andDate:(id)arg2 peer:(id)arg3 error:(id *)arg4;	// IMP=0x000000000009b4f4
- (id)tombstonesSinceDate:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 endDate:(id *)arg4 error:(id *)arg5;	// IMP=0x000000000009a5cf
- (id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 compatibility:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id *)arg6;	// IMP=0x0000000000098f36
- (id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 fetchOrder:(long long)arg4 error:(id *)arg5;	// IMP=0x0000000000098e70

@end
