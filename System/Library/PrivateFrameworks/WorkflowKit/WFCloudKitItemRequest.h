//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKDatabase;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface WFCloudKitItemRequest : NSObject
{
    _Bool _performExpensiveFetchOperations;	// 8 = 0x8
    CKContainer *_container;	// 16 = 0x10
    CKDatabase *_database;	// 24 = 0x18
    NSObject<OS_xpc_object> *_xpcActivity;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_operationWaitingQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 48 = 0x30
}

+ (id)recordValueForItemValue:(id)arg1 item:(id)arg2 property:(id)arg3 recordKey:(id)arg4 zoneID:(id)arg5;	// IMP=0x000000000015da9c
+ (id)itemValueForRecordValue:(id)arg1 item:(id)arg2 property:(id)arg3 resolvedReferences:(id)arg4;	// IMP=0x000000000015d802
+ (id)createRecordFromItem:(id)arg1 zoneID:(id)arg2;	// IMP=0x000000000015d3fa
+ (id)createRecordIDWithName:(id)arg1 zoneID:(id)arg2;	// IMP=0x000000000015d370
+ (void)assignRecordValue:(id)arg1 toItem:(id)arg2 withProperty:(id)arg3 resolvedReferences:(id)arg4;	// IMP=0x000000000015d133
+ (void)hydrateItem:(id)arg1 withRecord:(id)arg2 resolvedReferences:(id)arg3 setNilValues:(_Bool)arg4;	// IMP=0x000000000015ce53
+ (id)desiredKeysFromProperties:(id)arg1 itemType:(Class)arg2;	// IMP=0x000000000015cd65
+ (void)hydrateItem:(id)arg1 withRecord:(id)arg2 setNilValues:(_Bool)arg3;	// IMP=0x000000000015cd4d
- (void).cxx_destruct;	// IMP=0x0000000000159f11
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *operationWaitingQueue; // @synthesize operationWaitingQueue=_operationWaitingQueue;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcActivity; // @synthesize xpcActivity=_xpcActivity;
@property(nonatomic) _Bool performExpensiveFetchOperations; // @synthesize performExpensiveFetchOperations=_performExpensiveFetchOperations;
@property(readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
- (id)fetchRecordIDs:(id)arg1 desiredKeys:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000159c00
- (id)createTaskCancelledError;	// IMP=0x0000000000159bdb
- (id)deleteItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001599ae
- (id)updateItems:(id)arg1 setNilValues:(_Bool)arg2 qualityOfService:(long long)arg3 timeoutIntervalForRequest:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001597e2
- (id)updateItems:(id)arg1 setNilValues:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001597c0
- (id)fetchItemWithID:(id)arg1 itemType:(Class)arg2 groupName:(id)arg3 properties:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000159313
- (id)fetchItemsWithPredicate:(id)arg1 itemType:(Class)arg2 groupName:(id)arg3 properties:(id)arg4 sortDescriptors:(id)arg5 resultsLimit:(unsigned long long)arg6 qualityOfService:(long long)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x0000000000158c1e
- (id)fetchItemsWithPredicate:(id)arg1 itemType:(Class)arg2 groupName:(id)arg3 properties:(id)arg4 sortDescriptors:(id)arg5 resultsLimit:(unsigned long long)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000158be9
- (id)fetchItemsWithPredicate:(id)arg1 itemType:(Class)arg2 groupName:(id)arg3 properties:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000158bbe
- (id)initWithContainer:(id)arg1 database:(id)arg2;	// IMP=0x0000000000158a9d
- (id)fetchConfigurationAssetWithType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002cf9e
- (id)fetchConfigurationAssetWithType:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ccb9

@end
