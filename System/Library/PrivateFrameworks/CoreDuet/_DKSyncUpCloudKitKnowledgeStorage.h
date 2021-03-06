//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKSyncRemoteKnowledgeStorage-Protocol.h>

@class _DKSyncCloudKitKnowledgeStorage;
@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate;

@interface _DKSyncUpCloudKitKnowledgeStorage : NSObject <_DKSyncRemoteKnowledgeStorage>
{
    _DKSyncCloudKitKnowledgeStorage *_common;	// 8 = 0x8
    id <_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000041968
- (void).cxx_destruct;	// IMP=0x0000000000041fa4
@property(retain) id <_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) _DKSyncCloudKitKnowledgeStorage *common; // @synthesize common=_common;
- (long long)transportType;	// IMP=0x0000000000041f53
- (id)name;	// IMP=0x0000000000041f46
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000041eac
- (void)setFetchDelegate:(id)arg1;	// IMP=0x0000000000041e9b
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000041e17
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000041d93
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000041cc7
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000041c43
- (void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000000041b68
- (void)clearPrewarmedFlag;	// IMP=0x0000000000041b52
- (void)setHasDeletionsFlag:(_Bool)arg1 forPeer:(id)arg2;	// IMP=0x0000000000041b3c
- (_Bool)hasDeletionsFlagForPeer:(id)arg1;	// IMP=0x0000000000041b26
- (void)setHasAdditionsFlag:(_Bool)arg1 forPeer:(id)arg2;	// IMP=0x0000000000041b10
- (_Bool)hasAdditionsFlagForPeer:(id)arg1;	// IMP=0x0000000000041afa
- (void)prewarmFetchWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000041aac
- (void)cancelOutstandingOperations;	// IMP=0x0000000000041a75
- (void)start;	// IMP=0x0000000000041a1c
@property(getter=isAvailable) _Bool available;
- (id)init;	// IMP=0x00000000000419bd

@end

