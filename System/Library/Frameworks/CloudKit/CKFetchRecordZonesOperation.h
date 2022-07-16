//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKFetchRecordZonesOperationCallbacks-Protocol.h>

@class CKFetchRecordZonesOperationInfo, NSArray, NSMutableDictionary;
@protocol CKFetchRecordZonesOperationCallbacks;

@interface CKFetchRecordZonesOperation <CKFetchRecordZonesOperationCallbacks>
{
    _Bool _isFetchAllRecordZonesOperation;	// 8 = 0x8
    _Bool _ignorePCSFailures;	// 9 = 0x9
    CDUnknownBlockType _perRecordZoneCompletionBlock;	// 16 = 0x10
    CDUnknownBlockType _fetchRecordZonesCompletionBlock;	// 24 = 0x18
    NSArray *_recordZoneIDs;	// 32 = 0x20
    NSMutableDictionary *_recordZonesByZoneID;	// 40 = 0x28
    NSMutableDictionary *_recordZoneErrors;	// 48 = 0x30
}

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;	// IMP=0x0000000000047648
+ (id)fetchAllRecordZonesOperation;	// IMP=0x00000000000459f1
- (void).cxx_destruct;	// IMP=0x0000000000047786
@property(nonatomic) _Bool ignorePCSFailures; // @synthesize ignorePCSFailures=_ignorePCSFailures;
@property(nonatomic) _Bool isFetchAllRecordZonesOperation; // @synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation;
@property(retain, nonatomic) NSMutableDictionary *recordZoneErrors; // @synthesize recordZoneErrors=_recordZoneErrors;
@property(retain, nonatomic) NSMutableDictionary *recordZonesByZoneID; // @synthesize recordZonesByZoneID=_recordZonesByZoneID;
@property(copy, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x0000000000047088
- (void)handleFetchForRecordZoneID:(id)arg1 recordZone:(id)arg2 error:(id)arg3;	// IMP=0x0000000000046c1c
- (void)performCKOperation;	// IMP=0x000000000004684d
- (_Bool)CKOperationShouldRun:(id *)arg1;	// IMP=0x00000000000464d6
- (_Bool)hasCKOperationCallbacksSet;	// IMP=0x0000000000046443
- (void)fillFromOperationInfo:(id)arg1;	// IMP=0x000000000004636a
- (void)fillOutOperationInfo:(id)arg1;	// IMP=0x000000000004629b
- (id)activityCreate;	// IMP=0x0000000000046272
- (id)relevantZoneIDs;	// IMP=0x000000000004625d
@property(copy, nonatomic) CDUnknownBlockType fetchRecordZonesCompletionBlock; // @synthesize fetchRecordZonesCompletionBlock=_fetchRecordZonesCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perRecordZoneCompletionBlock; // @synthesize perRecordZoneCompletionBlock=_perRecordZoneCompletionBlock;
- (id)initWithRecordZoneIDs:(id)arg1;	// IMP=0x0000000000045a2a
- (id)init;	// IMP=0x000000000004596e

// Remaining properties
@property(readonly, nonatomic) id <CKFetchRecordZonesOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(readonly, nonatomic) CKFetchRecordZonesOperationInfo *operationInfo; // @dynamic operationInfo;

@end
