//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSMutableDictionary, NSPersistentStore;

__attribute__((visibility("hidden")))
@interface PFCloudKitStoreComparisonCache : NSObject
{
    NSMutableDictionary *_storeUUIDToStoreCache;	// 8 = 0x8
    _Bool _checkCloudKitMetadata;	// 16 = 0x10
    NSPersistentStore *_store;	// 24 = 0x18
    NSPersistentStore *_otherStore;	// 32 = 0x20
    NSManagedObjectContext *_storeMoc;	// 40 = 0x28
    NSManagedObjectContext *_otherStoreMoc;	// 48 = 0x30
}

@property(readonly, nonatomic) _Bool checkCloudKitMetadata; // @synthesize checkCloudKitMetadata=_checkCloudKitMetadata;
@property(readonly, nonatomic) NSManagedObjectContext *otherStoreMoc; // @synthesize otherStoreMoc=_otherStoreMoc;
@property(readonly, nonatomic) NSManagedObjectContext *storeMoc; // @synthesize storeMoc=_storeMoc;
@property(readonly, nonatomic) NSPersistentStore *otherStore; // @synthesize otherStore=_otherStore;
@property(readonly, nonatomic) NSPersistentStore *store; // @synthesize store=_store;
- (void)_setCheckCloudKitMetadata:(_Bool)arg1;	// IMP=0x00000000000ef70b
- (id)deriveIdentifierForNonCloudObjectID:(id)arg1;	// IMP=0x00000000000ef689
- (id)identifiersForStore:(id)arg1;	// IMP=0x00000000000ef639
- (id)objectIDForIdentifier:(id)arg1 inStore:(id)arg2;	// IMP=0x00000000000ef5df
- (id)mtmKeysForRecordZone:(id)arg1 inStore:(id)arg2;	// IMP=0x00000000000ef575
- (id)sharedZoneIDsForStore:(id)arg1;	// IMP=0x00000000000ef534
- (long long)databaseScopeForStoreWithIdentifier:(id)arg1;	// IMP=0x00000000000ef501
- (id)identityRecordNameForStoreWithIdentifier:(id)arg1;	// IMP=0x00000000000ef4da
- (id)recordIDForObjectID:(id)arg1;	// IMP=0x00000000000ef473
- (id)objectIDForRecordID:(id)arg1 inStore:(id)arg2;	// IMP=0x00000000000ef419
- (id)recordIdsForStore:(id)arg1;	// IMP=0x00000000000ef3c9
- (id)metadataForObjectWithID:(id)arg1;	// IMP=0x00000000000ef362
- (id)recordIDsRelatedToRecordID:(id)arg1 byRelationshipNamed:(id)arg2 inStore:(id)arg3;	// IMP=0x00000000000ef2e3
- (id)mtmKeysForStore:(id)arg1;	// IMP=0x00000000000ef293
- (id)mirroredRelationshipForObject:(id)arg1 relatedToObject:(id)arg2 byRelationship:(id)arg3;	// IMP=0x00000000000ef17a
- (_Bool)populate:(id *)arg1;	// IMP=0x00000000000ed332
- (void)dealloc;	// IMP=0x00000000000ed2cb
- (id)initWithStore:(id)arg1 otherStore:(id)arg2;	// IMP=0x00000000000ed109

@end

