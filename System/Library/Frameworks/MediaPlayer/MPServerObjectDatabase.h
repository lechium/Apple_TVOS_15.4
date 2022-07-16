//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPMediaKitEntityRelationshipPayloadProvider-Protocol.h>

@class MSVSQLDatabase, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface MPServerObjectDatabase : NSObject <MPMediaKitEntityRelationshipPayloadProvider>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    MSVSQLDatabase *_database;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    struct os_unfair_recursive_lock_s _observersLock;	// 32 = 0x20
}

+ (void)setPrefersInMemoryDatabase:(_Bool)arg1;	// IMP=0x00000000001bf916
+ (_Bool)prefersInMemoryDatabase;	// IMP=0x00000000001bf90a
+ (id)sharedServerObjectDatabase;	// IMP=0x00000000001bf8a7
- (void).cxx_destruct;	// IMP=0x00000000001b6b9a
- (id)_playbackAuthorizationTokenForIdentifier:(id)arg1 trustID:(id)arg2;	// IMP=0x00000000001b6981
- (id)_payloadForIdentifierSet:(id)arg1 outError:(id *)arg2;	// IMP=0x00000000001b65d1
- (id)payloadDataForIdentifierSet:(id)arg1 outError:(id *)arg2;	// IMP=0x00000000001b657a
- (_Bool)_createDatabaseSchema;	// IMP=0x00000000001b61e7
- (id)_assetsMatchingIdentifierSet:(id)arg1 query:(id)arg2;	// IMP=0x00000000001b6092
- (id)_initWithDatabaseCreationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b5f49
- (id)payloadForRelatedEntityWithIdentifierSet:(id)arg1;	// IMP=0x00000000001b5cc7
- (void)removeObserver:(id)arg1;	// IMP=0x00000000001b5c6e
- (void)addObserver:(id)arg1;	// IMP=0x00000000001b5c15
- (_Bool)importAssetsFromRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001b5b04
- (void)enumerateAssetsMissingSINFsForHashedPersonID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b5a4b
- (_Bool)shouldRenewPlaybackAuthorizationTokenForEntityMatchingIdentifierSet:(id)arg1 trustID:(id)arg2;	// IMP=0x00000000001b597d
- (id)playbackAuthorizationTokenForEntityMatchingIdentifierSet:(id)arg1 trustID:(id)arg2;	// IMP=0x00000000001b57db
- (id)assetsWithMiniSINFsMatchingIdentifierSet:(id)arg1;	// IMP=0x00000000001b57c2
- (id)assetsMatchingIdentifierSet:(id)arg1;	// IMP=0x00000000001b57a9
- (id)relatedIdentifierSetsForParentIdentifierSet:(id)arg1 parentVersionHash:(id)arg2 childKey:(id)arg3;	// IMP=0x00000000001b5428
- (id)relatedIdentifierSetsForParentIdentifierSet:(id)arg1 childKey:(id)arg2;	// IMP=0x00000000001b5139
- (id)modelGenericObjectFromObject:(id)arg1 playbackAuthorizationToken:(id)arg2;	// IMP=0x00000000001b502f
- (void)removePlaybackAuthorizationTokensForTrust:(id)arg1;	// IMP=0x00000000001b5029
- (void)purgeGlideSubscriptionDataForHashedAccoundID:(id)arg1;	// IMP=0x00000000001b4ea0
- (id)modelObjectMatchingIdentifierSet:(id)arg1 propertySet:(id)arg2;	// IMP=0x00000000001b44b1
- (id)importObjectsFromRequest:(id)arg1 options:(unsigned long long)arg2 trustID:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001b42a3
- (id)importObjectsFromRequest:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000001b428b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

