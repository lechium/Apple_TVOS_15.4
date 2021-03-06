//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKFetchRecordVersionsOperationCallbacks-Protocol.h>

@class CKFetchRecordVersionsOperationInfo, NSArray, NSMutableDictionary, NSString;
@protocol CKFetchRecordVersionsOperationCallbacks;

@interface CKFetchRecordVersionsOperation <CKFetchRecordVersionsOperationCallbacks>
{
    _Bool _isDeleted;	// 8 = 0x8
    _Bool _shouldFetchAssetContent;	// 9 = 0x9
    CDUnknownBlockType _fetchRecordVersionsProgressBlock;	// 16 = 0x10
    CDUnknownBlockType _fetchRecordVersionsCompletionBlock;	// 24 = 0x18
    NSArray *_recordIDs;	// 32 = 0x20
    NSArray *_desiredKeys;	// 40 = 0x28
    NSString *_minimumVersionETag;	// 48 = 0x30
    NSMutableDictionary *_recordErrors;	// 56 = 0x38
}

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;	// IMP=0x00000000000e1324
- (void).cxx_destruct;	// IMP=0x00000000000e14fb
@property(nonatomic) _Bool shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(retain, nonatomic) NSMutableDictionary *recordErrors; // @synthesize recordErrors=_recordErrors;
@property(copy, nonatomic) NSString *minimumVersionETag; // @synthesize minimumVersionETag=_minimumVersionETag;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(copy, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000000e0daa
- (void)performCKOperation;	// IMP=0x00000000000e09db
- (_Bool)CKOperationShouldRun:(id *)arg1;	// IMP=0x00000000000e0927
- (_Bool)hasCKOperationCallbacksSet;	// IMP=0x00000000000e0894
- (void)handleFetchForRecordID:(id)arg1 isDeleted:(_Bool)arg2 versions:(id)arg3 error:(id)arg4;	// IMP=0x00000000000e0520
- (void)fillFromOperationInfo:(id)arg1;	// IMP=0x00000000000e0408
- (void)fillOutOperationInfo:(id)arg1;	// IMP=0x00000000000e02fa
- (id)activityCreate;	// IMP=0x00000000000e02d1
@property(copy, nonatomic) CDUnknownBlockType fetchRecordVersionsCompletionBlock; // @synthesize fetchRecordVersionsCompletionBlock=_fetchRecordVersionsCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchRecordVersionsProgressBlock; // @synthesize fetchRecordVersionsProgressBlock=_fetchRecordVersionsProgressBlock;
- (id)initWithRecordIDs:(id)arg1;	// IMP=0x00000000000df9e9
- (id)init;	// IMP=0x00000000000df981

// Remaining properties
@property(readonly, nonatomic) id <CKFetchRecordVersionsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(readonly, nonatomic) CKFetchRecordVersionsOperationInfo *operationInfo; // @dynamic operationInfo;

@end

