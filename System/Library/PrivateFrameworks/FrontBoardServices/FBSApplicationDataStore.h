//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FBSApplicationDataStoreRepositoryClient;

@interface FBSApplicationDataStore : NSObject
{
    NSString *_bundleId;	// 8 = 0x8
    id <FBSApplicationDataStoreRepositoryClient> _client;	// 16 = 0x10
    _Bool _clientNeedsCheckin;	// 24 = 0x18
}

+ (void)_setClassClient:(id)arg1;	// IMP=0x000000000002b60f
+ (_Bool)isServerProcess;	// IMP=0x000000000002b5f6
+ (void)setPrefetchedKeys:(id)arg1;	// IMP=0x000000000002ac9a
+ (void)synchronizeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ab67
+ (void)synchronize;	// IMP=0x000000000002ab53
+ (id)applicationsWithAvailableStores;	// IMP=0x000000000002aa14
+ (void)_doWithClassClient:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a939
+ (id)storeForApplication:(id)arg1;	// IMP=0x000000000002a8ec
- (void).cxx_destruct;	// IMP=0x000000000002b65e
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleId;
- (id)_makeSafe:(id)arg1 forType:(Class)arg2;	// IMP=0x000000000002b5a5
- (void)removeAllObjects;	// IMP=0x000000000002b589
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000002b56c
- (void)setArchivedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002b4eb
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002b42f
- (void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b32a
- (id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2;	// IMP=0x000000000002b2c6
- (void)archivedObjectForKey:(id)arg1 withResult:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b19c
- (id)archivedObjectForKey:(id)arg1;	// IMP=0x000000000002b103
- (void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(CDUnknownBlockType)arg3;	// IMP=0x000000000002affe
- (id)safeObjectForKey:(id)arg1 ofType:(Class)arg2;	// IMP=0x000000000002af9a
- (void)objectForKey:(id)arg1 withResult:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ae6b
- (id)objectForKey:(id)arg1;	// IMP=0x000000000002ae51
- (void)dealloc;	// IMP=0x000000000002a874
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x000000000002a860
- (id)_initWithBundleId:(id)arg1 client:(id)arg2;	// IMP=0x000000000002a70c
- (id)init;	// IMP=0x000000000002a6cd

@end

