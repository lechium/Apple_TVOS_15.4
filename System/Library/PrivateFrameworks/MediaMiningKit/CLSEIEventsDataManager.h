//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSMutableDictionary, NSPersistentStoreCoordinator, NSURL;
@protocol OS_dispatch_queue;

@interface CLSEIEventsDataManager : NSObject
{
    NSManagedObjectContext *_managedObjectContext;	// 8 = 0x8
    NSManagedObjectModel *_managedObjectModel;	// 16 = 0x10
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 24 = 0x18
    NSURL *_diskCacheURL;	// 32 = 0x20
    NSMutableDictionary *_venueCache;	// 40 = 0x28
    NSMutableDictionary *_artistCache;	// 48 = 0x30
    NSMutableDictionary *_categoryCache;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_cacheQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000090a9
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(readonly, nonatomic) NSMutableDictionary *categoryCache; // @synthesize categoryCache=_categoryCache;
@property(readonly, nonatomic) NSMutableDictionary *artistCache; // @synthesize artistCache=_artistCache;
@property(readonly, nonatomic) NSMutableDictionary *venueCache; // @synthesize venueCache=_venueCache;
@property(readonly, nonatomic) NSURL *diskCacheURL; // @synthesize diskCacheURL=_diskCacheURL;
- (id)_fetchManagedObjectWithEntityName:(id)arg1 name:(id)arg2;	// IMP=0x0000000000008f53
- (id)_fetchManagedObjectWithEntityName:(id)arg1 uuid:(long long)arg2;	// IMP=0x0000000000008e41
- (id)fetchCategoryForName:(id)arg1;	// IMP=0x0000000000008c3f
- (id)fetchArtistForUUID:(long long)arg1;	// IMP=0x0000000000008a1e
- (id)fetchVenueForUUID:(long long)arg1;	// IMP=0x00000000000087fd
- (id)fetchEventForUUID:(long long)arg1;	// IMP=0x00000000000087e1
- (id)insertArtistWithUUID:(long long)arg1 name:(id)arg2;	// IMP=0x00000000000085c6
- (id)insertCategoryWithName:(id)arg1;	// IMP=0x0000000000008393
- (id)insertEventWithUUID:(long long)arg1 name:(id)arg2;	// IMP=0x000000000000823d
- (id)insertVenueWithUUID:(long long)arg1 name:(id)arg2 coordinate:(struct CLLocationCoordinate2D)arg3;	// IMP=0x0000000000007ff8
- (void)_resetCoreDataStack;	// IMP=0x0000000000007fa3
- (void)clearFastAccessCache;	// IMP=0x0000000000007ee7
- (void)clear;	// IMP=0x0000000000007b20
- (_Bool)save;	// IMP=0x0000000000007a4d
- (_Bool)_save;	// IMP=0x00000000000078ff
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(readonly, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
- (id)managedObjectContext;	// IMP=0x000000000000721e
- (id)initWithDiskCacheURL:(id)arg1;	// IMP=0x0000000000007119

@end

