//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPersistentContainer, NSURL;

@interface CNContactMetadataPersistentStoreManager : NSObject
{
    NSURL *_storeLocation;	// 8 = 0x8
    NSPersistentContainer *_container;	// 16 = 0x10
}

+ (id)defaultStoreLocation;	// IMP=0x00000000000ca12f
+ (id)createPersistentContainer;	// IMP=0x00000000000ca0d1
+ (id)createModel;	// IMP=0x00000000000c9fe6
+ (id)currentManagedObjectModel;	// IMP=0x00000000000c9f51
+ (id)os_log;	// IMP=0x00000000000c9ef5
- (void).cxx_destruct;	// IMP=0x00000000000caa0b
@property(readonly, nonatomic) NSPersistentContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) NSURL *storeLocation; // @synthesize storeLocation=_storeLocation;
- (_Bool)createStoreDirectoryIfNeeded:(id *)arg1;	// IMP=0x00000000000ca895
- (id)storeDescription;	// IMP=0x00000000000ca81b
- (id)persistentStoreCoordinator;	// IMP=0x00000000000ca7cb
- (_Bool)setupIfNeeded:(id *)arg1;	// IMP=0x00000000000ca4db
- (id)createManagedObjectContext;	// IMP=0x00000000000ca493
- (_Bool)performWorkWithManagedObjectContext:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x00000000000ca33b
- (id)initWithStoreLocation:(id)arg1;	// IMP=0x00000000000ca28f
- (id)init;	// IMP=0x00000000000ca234

@end

