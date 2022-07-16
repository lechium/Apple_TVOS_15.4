//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSManagedObjectContext, NSNumber, NSPersistentStoreCoordinator;
@protocol ACDDatabaseConnectionDelegate, NSObject;

__attribute__((visibility("hidden")))
@interface ACDDatabaseConnection : NSObject
{
    id <NSObject> _managedObjectContextDidSaveObserver;	// 8 = 0x8
    NSCache *_cache;	// 16 = 0x10
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 24 = 0x18
    NSManagedObjectContext *_managedObjectContext;	// 32 = 0x20
    id <ACDDatabaseConnectionDelegate> _delegate;	// 40 = 0x28
}

+ (id)new;	// IMP=0x000000000005d098
- (void).cxx_destruct;	// IMP=0x000000000005fc40
@property(nonatomic) __weak id <ACDDatabaseConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
- (void)_delegate_databaseConnectionEncounteredUnrecoverableError:(id)arg1;	// IMP=0x000000000005fb11
- (void)_endObservingManagedObjectContextDidSaveNotifications;	// IMP=0x000000000005fa4f
- (void)_managedObjectContextDidSave:(id)arg1;	// IMP=0x000000000005f6c3
- (void)_beginObservingManagedObjectContextDidSaveNotifications;	// IMP=0x000000000005f4ff
- (id)_managedObjectModificationDescription:(id)arg1;	// IMP=0x000000000005f356
- (id)_managedObjectContextModificationDescription;	// IMP=0x000000000005ef0a
- (void)_traceDatabaseEvents;	// IMP=0x000000000005eba1
- (void)_handleManagedObjectContextError:(id)arg1;	// IMP=0x000000000005eaf9
- (void)_setupManagedObjectContextWithPersistentStoreCoodinator:(id)arg1;	// IMP=0x000000000005e972
- (void)rollback;	// IMP=0x000000000005e919
- (_Bool)saveWithError:(id *)arg1 rollbackOnFailure:(_Bool)arg2;	// IMP=0x000000000005e6c8
- (_Bool)saveWithError:(id *)arg1;	// IMP=0x000000000005e6b4
- (id)managedObjectIDForURI:(id)arg1;	// IMP=0x000000000005e613
- (void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3;	// IMP=0x000000000005e4d5
- (void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2;	// IMP=0x000000000005e44e
- (void)deleteObject:(id)arg1;	// IMP=0x000000000005e3ce
- (id)insertNewObjectForEntityForName:(id)arg1;	// IMP=0x000000000005e32f
- (id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2;	// IMP=0x000000000005e0fa
- (unsigned long long)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2;	// IMP=0x000000000005df85
- (id)existingObjectWithURI:(id)arg1;	// IMP=0x000000000005dcb8
- (id)objectForObjectURI:(id)arg1;	// IMP=0x000000000005dbbc
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3 prefetchKeypaths:(id)arg4;	// IMP=0x000000000005d693
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3;	// IMP=0x000000000005d67e
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;	// IMP=0x000000000005d666
- (id)fetchObjectsForEntityNamed:(id)arg1;	// IMP=0x000000000005d64c
@property(retain, nonatomic) NSNumber *keychainVersion;
@property(retain, nonatomic) NSNumber *version;
- (id)_persistentStore;	// IMP=0x000000000005d2ef
- (id)_managedObjectModel;	// IMP=0x000000000005d2d9
- (void)dealloc;	// IMP=0x000000000005d199
- (id)initWithPersistentStoreCoordinator:(id)arg1;	// IMP=0x000000000005d0db
- (id)init;	// IMP=0x000000000005d0b0

@end

