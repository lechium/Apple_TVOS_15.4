//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOrderedSet;

@interface PLFolderJournalEntryPayload
{
}

+ (_Bool)isValidForPersistenceWithObjectDictionary:(id)arg1 additionalEntityName:(id)arg2;	// IMP=0x000000000037ab36
+ (void)updateChildrenOrderingInFolder:(id)arg1 usingChildCollectionUUIDs:(id)arg2 includePendingChanges:(_Bool)arg3;	// IMP=0x000000000037a887
+ (unsigned int)minimumSnapshotPayloadVersion;	// IMP=0x000000000037a87c
+ (unsigned int)payloadVersion;	// IMP=0x000000000037a871
+ (id)payloadClassID;	// IMP=0x000000000037a858
+ (id)persistedPropertyNamesForEntityNames;	// IMP=0x000000000037a7f5
+ (id)modelProperties;	// IMP=0x000000000037a792
+ (id)modelPropertiesDescription;	// IMP=0x000000000037a5f4
- (_Bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;	// IMP=0x000000000037b8bd
- (void)updateAlbum:(id)arg1 includePendingChanges:(_Bool)arg2;	// IMP=0x000000000037b80e
- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;	// IMP=0x000000000037b502
@property(readonly, nonatomic) _Bool isProjectAlbumRootFolder;
@property(readonly, nonatomic) _Bool isRootFolder;
@property(readonly, nonatomic) NSOrderedSet *childCollectionUUIDs;
- (void)appendAttributeKey:(id)arg1 value:(id)arg2 toDescriptionBuilder:(id)arg3;	// IMP=0x000000000037b2ff
- (_Bool)updatePayloadAttributes:(id)arg1 andNilAttributes:(id)arg2 withManagedObject:(id)arg3 forPayloadProperty:(id)arg4;	// IMP=0x000000000037ad91

@end
