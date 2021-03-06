//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, NSURL;

@interface CLSDBCache : NSObject
{
    _Bool _supportsVersioning;	// 8 = 0x8
    NSURL *_diskCacheURL;	// 16 = 0x10
    NSString *_dataModelName;	// 24 = 0x18
    NSManagedObjectModel *_managedObjectModel;	// 32 = 0x20
    NSManagedObjectContext *_managedObjectContext;	// 40 = 0x28
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 48 = 0x30
}

+ (_Bool)locationIsValidForDatabaseAtURL:(id)arg1;	// IMP=0x0000000000035af5
+ (id)urlForGraphApplicationData;	// IMP=0x0000000000035886
+ (id)diskCacheWithName:(id)arg1;	// IMP=0x0000000000035835
+ (id)defaultCache;	// IMP=0x0000000000035669
+ (id)defaultCacheName;	// IMP=0x0000000000035660
+ (id)currentApplicationDataUrlQueue;	// IMP=0x0000000000035601
+ (id)applicationDataUrlQueueWithURL:(id)arg1;	// IMP=0x000000000003559f
+ (void)initialize;	// IMP=0x00000000000354ea
- (void).cxx_destruct;	// IMP=0x0000000000034df2
@property(nonatomic) _Bool supportsVersioning; // @synthesize supportsVersioning=_supportsVersioning;
@property(readonly, copy, nonatomic) NSURL *diskCacheURL; // @synthesize diskCacheURL=_diskCacheURL;
@property(readonly, copy, nonatomic) NSString *dataModelName; // @synthesize dataModelName=_dataModelName;
- (void)invalidateMemoryCaches;	// IMP=0x0000000000034d4a
- (void)invalidateDiskCaches;	// IMP=0x0000000000034ccc
- (void)_resetCoreDataStack;	// IMP=0x0000000000034c77
- (void)_saveAsync;	// IMP=0x0000000000034bf9
- (_Bool)save;	// IMP=0x0000000000034b26
- (_Bool)_save;	// IMP=0x00000000000349d8
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(readonly, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (id)formatVersion;	// IMP=0x0000000000033da6
- (id)initAtURL:(id)arg1;	// IMP=0x0000000000033d08
- (id)initWithDiskCacheName:(id)arg1;	// IMP=0x0000000000033a78
- (id)initWithDiskCacheName:(id)arg1 dataModelName:(id)arg2;	// IMP=0x0000000000033a19

@end

