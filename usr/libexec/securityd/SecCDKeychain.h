//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectContext, NSMutableDictionary, NSPersistentStoreCoordinator, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SecCDKeychain : NSObject
{
    NSURL *_persistentStoreBaseURL;	// 8 = 0x8
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 16 = 0x10
    NSManagedObjectContext *_managedObjectContext;	// 24 = 0x18
    NSMutableDictionary *_managedItemTypeDict;	// 32 = 0x20
    NSMutableDictionary *_itemTypeDict;	// 40 = 0x28
    _Bool _encryptDatabase;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSArray *_classAPersistentStores;	// 64 = 0x40
}

+ (id)lookupValueTypeForObject:(id)arg1;	// IMP=0x00400000000421bb
- (void).cxx_destruct;	// IMP=0x002000000003bc1b
- (id)managedItemWithItem:(id)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000003b828
- (id)itemTypeForItemTypeName:(id)arg1;	// IMP=0x001000000003b812
- (void)_registerItemTypeForTesting:(id)arg1;	// IMP=0x001000000003b780
- (void)registerItemType:(id)arg1 withManagedObjectContext:(id)arg2;	// IMP=0x001000000003b452
- (void)deleteItemWithPersistentID:(id)arg1 withConnection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003b30a
- (void)fetchItemsWithValue:(id)arg1 forLookupKey:(id)arg2 ofType:(id)arg3 withConnection:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000003b170
- (void)fetchItemForPersistentID:(id)arg1 withConnection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003b028
- (id)fetchManagedItemForPersistentID:(id)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000003aeea
- (void)insertItems:(id)arg1 withConnection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003ada2
- (_Bool)validateItemOwner:(id)arg1 withConnection:(id)arg2 withError:(id *)arg3;	// IMP=0x001000000003aaa5
- (id)primaryKeyNameForItemTypeName:(id)arg1;	// IMP=0x001000000003aa80
- (void)performOnManagedObjectQueueAndWait:(CDUnknownBlockType)arg1;	// IMP=0x001000000003a9f3
- (void)performOnManagedObjectQueue:(CDUnknownBlockType)arg1;	// IMP=0x001000000003a927
- (id)_queue;	// IMP=0x001000000003a919
- (void)_onQueueDropClassAPersistentStore;	// IMP=0x001000000003a700
- (id)_onQueueGetManagedObjectContextWithError:(id *)arg1;	// IMP=0x001000000003a35d
- (id)_onQueueGetDatabaseKeyDataWithError:(id *)arg1;	// IMP=0x0010000000039c74
- (id)initWithStorageURL:(id)arg1 modelURL:(id)arg2 encryptDatabase:(_Bool)arg3;	// IMP=0x0010000000039a77

@end
