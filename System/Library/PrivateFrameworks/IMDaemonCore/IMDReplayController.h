//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMDReplayStorageController, IMDReplayStorageIterationContext, NSDictionary;

@interface IMDReplayController : NSObject
{
    IMDReplayStorageController *_suspendedStorageController;	// 8 = 0x8
    _Bool _isRecordingReplayDB;	// 16 = 0x10
    NSDictionary *_syncTaskByServiceName;	// 24 = 0x18
    IMDReplayStorageIterationContext *_heldDeletionContext;	// 32 = 0x20
    CDUnknownBlockType _automationCompletionBlock;	// 40 = 0x28
    IMDReplayStorageController *_storageController;	// 48 = 0x30
}

+ (long long)batchSize;	// IMP=0x000000000008ca87
+ (id)sharedInstance;	// IMP=0x000000000008bbef
@property(retain, nonatomic) IMDReplayStorageController *storageController; // @synthesize storageController=_storageController;
@property(copy, nonatomic) CDUnknownBlockType automationCompletionBlock; // @synthesize automationCompletionBlock=_automationCompletionBlock;
@property(retain, nonatomic) IMDReplayStorageIterationContext *heldDeletionContext; // @synthesize heldDeletionContext=_heldDeletionContext;
@property(retain, nonatomic) NSDictionary *syncTaskByServiceName; // @synthesize syncTaskByServiceName=_syncTaskByServiceName;
@property(readonly, nonatomic) _Bool isRecordingReplayDB; // @synthesize isRecordingReplayDB=_isRecordingReplayDB;
- (void)replayMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008ca53
- (void)endRecordingReplayDatabase;	// IMP=0x000000000008ca12
- (void)startRecordingReplayDatabase;	// IMP=0x000000000008c9d1
- (void)restoreDefaultStoreControllerInstance;	// IMP=0x000000000008c941
- (void)overrideStorageControllerWithDatabaseFromPath:(id)arg1;	// IMP=0x000000000008c863
- (void)deleteReplayDBIfNotUnderFirstUnlock;	// IMP=0x000000000008c795
- (void)_fetchNexBatchOfMessagesAndReplay;	// IMP=0x000000000008c4de
- (void)scheduleSyncTaskForServices:(id)arg1;	// IMP=0x000000000008c492
- (void)replayMessages;	// IMP=0x000000000008c42d
- (void)_processBatch:(id)arg1;	// IMP=0x000000000008bf7e
- (_Bool)storeMessage:(id)arg1 type:(unsigned char)arg2 error:(id *)arg3;	// IMP=0x000000000008bd3f
- (void)dealloc;	// IMP=0x000000000008bce7
- (id)initWithStorageController:(id)arg1;	// IMP=0x000000000008bc97
- (id)init;	// IMP=0x000000000008bc34

@end
