//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKFetchRecordsOperationCallbacks-Protocol.h>
#import <CloudKit/CKOperationInMemoryAssets-Protocol.h>

@class CKFetchRecordsOperationInfo, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet;
@protocol CKFetchRecordsOperationCallbacks;

@interface CKFetchRecordsOperation <CKFetchRecordsOperationCallbacks, CKOperationInMemoryAssets>
{
    _Bool _isFetchCurrentUserOperation;	// 8 = 0x8
    _Bool _shouldFetchAssetContent;	// 9 = 0x9
    _Bool _shouldFetchAssetContentInMemory;	// 10 = 0xa
    _Bool _dropInMemoryAssetContentASAP;	// 11 = 0xb
    NSMutableDictionary *_assetInfoByArrayIndexByRecordKeyByRecordID;	// 16 = 0x10
    CDUnknownBlockType _perRecordProgressBlock;	// 24 = 0x18
    CDUnknownBlockType _perRecordCompletionBlock;	// 32 = 0x20
    CDUnknownBlockType _fetchRecordsCompletionBlock;	// 40 = 0x28
    NSArray *_recordIDs;	// 48 = 0x30
    NSArray *_desiredKeys;	// 56 = 0x38
    NSMutableSet *_packagesToDestroy;	// 64 = 0x40
    NSMutableDictionary *_recordErrors;	// 72 = 0x48
    NSDictionary *_webSharingIdentityDataByRecordID;	// 80 = 0x50
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;	// 88 = 0x58
    NSMutableDictionary *_recordIDsToRecords;	// 96 = 0x60
    NSDictionary *_desiredPackageFileIndices;	// 104 = 0x68
    NSDictionary *_recordIDsToETags;	// 112 = 0x70
    NSDictionary *_recordIDsToVersionETags;	// 120 = 0x78
}

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;	// IMP=0x00000000001343dd
+ (id)fetchCurrentUserRecordOperation;	// IMP=0x00000000001313cf
- (void).cxx_destruct;	// IMP=0x000000000013462a
@property(copy, nonatomic) NSDictionary *recordIDsToVersionETags; // @synthesize recordIDsToVersionETags=_recordIDsToVersionETags;
@property(copy, nonatomic) NSDictionary *recordIDsToETags; // @synthesize recordIDsToETags=_recordIDsToETags;
@property(copy, nonatomic) NSDictionary *desiredPackageFileIndices; // @synthesize desiredPackageFileIndices=_desiredPackageFileIndices;
@property(retain, nonatomic) NSMutableDictionary *recordIDsToRecords; // @synthesize recordIDsToRecords=_recordIDsToRecords;
@property(copy, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property(nonatomic) _Bool dropInMemoryAssetContentASAP; // @synthesize dropInMemoryAssetContentASAP=_dropInMemoryAssetContentASAP;
@property(nonatomic) _Bool shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property(nonatomic) _Bool shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID; // @synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID;
@property(nonatomic) _Bool isFetchCurrentUserOperation; // @synthesize isFetchCurrentUserOperation=_isFetchCurrentUserOperation;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(copy, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(retain, nonatomic) NSMutableDictionary *assetInfoByArrayIndexByRecordKeyByRecordID; // @synthesize assetInfoByArrayIndexByRecordKeyByRecordID=_assetInfoByArrayIndexByRecordKeyByRecordID;
- (id)activityCreate;	// IMP=0x00000000001343b4
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x0000000000133bb3
- (void)handleAssetDataForRecordID:(id)arg1 recordKey:(id)arg2 arrayIndex:(long long)arg3 data:(id)arg4 offset:(unsigned long long)arg5;	// IMP=0x0000000000133b1b
- (void)handleFetchForRecordID:(id)arg1 didProgress:(double)arg2;	// IMP=0x0000000000133939
- (void)handleFetchForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3;	// IMP=0x0000000000132c7d
- (_Bool)claimPackagesInRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000132a09
- (void)performCKOperation;	// IMP=0x000000000013263a
- (_Bool)CKOperationShouldRun:(id *)arg1;	// IMP=0x00000000001323a0
- (_Bool)hasCKOperationCallbacksSet;	// IMP=0x00000000001322de
- (void)fillFromOperationInfo:(id)arg1;	// IMP=0x000000000013209b
- (void)fillOutOperationInfo:(id)arg1;	// IMP=0x0000000000131e7e
@property(copy, nonatomic) CDUnknownBlockType fetchRecordsCompletionBlock; // @synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perRecordCompletionBlock; // @synthesize perRecordCompletionBlock=_perRecordCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perRecordProgressBlock; // @synthesize perRecordProgressBlock=_perRecordProgressBlock;
- (id)initWithRecordIDs:(id)arg1;	// IMP=0x00000000001311b2
- (id)init;	// IMP=0x00000000001310ce

// Remaining properties
@property(readonly, nonatomic) id <CKFetchRecordsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(readonly, nonatomic) CKFetchRecordsOperationInfo *operationInfo; // @dynamic operationInfo;

@end
