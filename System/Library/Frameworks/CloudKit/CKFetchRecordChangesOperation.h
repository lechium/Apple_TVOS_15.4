//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKFetchRecordChangesOperationCallbacks-Protocol.h>

@class CKFetchRecordZoneChangesOperationInfo, CKRecordZoneID, CKServerChangeToken, NSArray, NSData, NSMutableDictionary;
@protocol CKFetchRecordChangesOperationCallbacks;

@interface CKFetchRecordChangesOperation <CKFetchRecordChangesOperationCallbacks>
{
    _Bool _shouldFetchAssetContents;	// 8 = 0x8
    _Bool _fetchAllChanges;	// 9 = 0x9
    CDUnknownBlockType _recordChangedBlock;	// 16 = 0x10
    CDUnknownBlockType _recordWithIDWasDeletedBlock;	// 24 = 0x18
    CDUnknownBlockType _fetchRecordChangesCompletionBlock;	// 32 = 0x20
    CDUnknownBlockType _serverChangeTokenFetchedBlock;	// 40 = 0x28
    CDUnknownBlockType _changeTokensUpdatedBlock;	// 48 = 0x30
    CKRecordZoneID *_recordZoneID;	// 56 = 0x38
    CKServerChangeToken *_previousServerChangeToken;	// 64 = 0x40
    unsigned long long _resultsLimit;	// 72 = 0x48
    NSArray *_desiredKeys;	// 80 = 0x50
    CKServerChangeToken *_resultServerChangeToken;	// 88 = 0x58
    NSData *_resultClientChangeTokenData;	// 96 = 0x60
    long long _status;	// 104 = 0x68
    NSMutableDictionary *_recordErrors;	// 112 = 0x70
}

+ (SEL)daemonCallbackCompletionSelector;	// IMP=0x00000000000efd63
+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;	// IMP=0x00000000000efc8f
+ (Class)operationInfoClass;	// IMP=0x00000000000ed649
- (void).cxx_destruct;	// IMP=0x00000000000efec9
@property(retain, nonatomic) NSMutableDictionary *recordErrors; // @synthesize recordErrors=_recordErrors;
@property(nonatomic) _Bool fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property(nonatomic) _Bool shouldFetchAssetContents; // @synthesize shouldFetchAssetContents=_shouldFetchAssetContents;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *resultClientChangeTokenData; // @synthesize resultClientChangeTokenData=_resultClientChangeTokenData;
@property(retain, nonatomic) CKServerChangeToken *resultServerChangeToken; // @synthesize resultServerChangeToken=_resultServerChangeToken;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(copy, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
@property(copy, nonatomic) CKRecordZoneID *recordZoneID; // @synthesize recordZoneID=_recordZoneID;
- (id)activityCreate;	// IMP=0x00000000000efc66
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000000ef37d
- (void)handleOperationDidCompleteWithServerChangeToken:(id)arg1 clientChangeTokenData:(id)arg2 recordChangesStatus:(long long)arg3 metrics:(id)arg4 error:(id)arg5;	// IMP=0x00000000000ef189
- (void)handleChangeSetCompletionWithServerChangeToken:(id)arg1 clientChangeTokenData:(id)arg2 recordChangesStatus:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000000eebab
- (void)handleDeleteForRecordID:(id)arg1;	// IMP=0x00000000000ee7e7
- (void)handleChangeForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3;	// IMP=0x00000000000ee216
- (void)performCKOperation;	// IMP=0x00000000000edd45
- (_Bool)CKOperationShouldRun:(id *)arg1;	// IMP=0x00000000000edc6c
- (_Bool)hasCKOperationCallbacksSet;	// IMP=0x00000000000edb41
- (long long)changeTypesFromSetCallbacks;	// IMP=0x00000000000edb36
- (void)fillFromOperationInfo:(id)arg1;	// IMP=0x00000000000ed92d
- (void)fillOutOperationInfo:(id)arg1;	// IMP=0x00000000000ed65a
- (id)relevantZoneIDs;	// IMP=0x00000000000ed5de
@property(readonly, nonatomic) _Bool moreComing;
@property(copy, nonatomic) CDUnknownBlockType changeTokensUpdatedBlock; // @synthesize changeTokensUpdatedBlock=_changeTokensUpdatedBlock;
@property(copy, nonatomic) CDUnknownBlockType serverChangeTokenFetchedBlock; // @synthesize serverChangeTokenFetchedBlock=_serverChangeTokenFetchedBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchRecordChangesCompletionBlock; // @synthesize fetchRecordChangesCompletionBlock=_fetchRecordChangesCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordWithIDWasDeletedBlock; // @synthesize recordWithIDWasDeletedBlock=_recordWithIDWasDeletedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordChangedBlock; // @synthesize recordChangedBlock=_recordChangedBlock;
- (id)initWithRecordZoneID:(id)arg1 previousServerChangeToken:(id)arg2;	// IMP=0x00000000000ec3bc
- (id)init;	// IMP=0x00000000000ec354

// Remaining properties
@property(readonly, nonatomic) id <CKFetchRecordChangesOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(readonly, nonatomic) CKFetchRecordZoneChangesOperationInfo *operationInfo; // @dynamic operationInfo;

@end
