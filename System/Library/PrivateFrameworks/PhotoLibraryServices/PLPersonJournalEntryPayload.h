//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSNumber, NSString;

@interface PLPersonJournalEntryPayload
{
}

+ (_Bool)isValidForPersistenceWithObjectDictionary:(id)arg1 additionalEntityName:(id)arg2;	// IMP=0x000000000042a2c2
+ (unsigned int)minimumSnapshotPayloadVersion;	// IMP=0x000000000042a2b7
+ (unsigned int)payloadVersion;	// IMP=0x000000000042a2ac
+ (id)payloadClassID;	// IMP=0x000000000042a293
+ (id)persistedPropertyNamesForEntityNames;	// IMP=0x000000000042a230
+ (id)modelProperties;	// IMP=0x000000000042a1cd
+ (id)nonPersistedModelPropertiesDescription;	// IMP=0x0000000000429ba5
+ (id)modelPropertiesDescription;	// IMP=0x000000000042962f
+ (void)updateMergeTargetPersonWithPersonUUIDMapping:(id)arg1 fromDataInManagedObjectContext:(id)arg2;	// IMP=0x00000000004292f4
- (_Bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;	// IMP=0x00000000004290ce
- (void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3 payloadAttributesToUpdate:(id)arg4;	// IMP=0x0000000000428a60
- (void)appendAttributeKey:(id)arg1 value:(id)arg2 toDescriptionBuilder:(id)arg3;	// IMP=0x000000000042895b
- (_Bool)updatePayloadAttributes:(id)arg1 andNilAttributes:(id)arg2 withManagedObject:(id)arg3 forPayloadProperty:(id)arg4;	// IMP=0x00000000004287a2
@property(readonly, nonatomic) NSString *mergeTargetPersonUUID;
@property(readonly, nonatomic) NSDictionary *contactMatchingDictionary;
@property(readonly, nonatomic) short keyFacePickSource;
@property(readonly, nonatomic) int cloudVerifiedType;
@property(readonly, nonatomic) int verifiedType;
@property(readonly, nonatomic) int type;
@property(readonly, nonatomic) unsigned int manualOrder;
@property(readonly, nonatomic) NSString *personUri;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *fullName;
@property(readonly, nonatomic) NSNumber *detectionType;
- (id)initWithUserFeedback:(id)arg1 changedKeys:(id)arg2;	// IMP=0x00000000004282b1
- (id)insertPersonFromDataInManagedObjectContext:(id)arg1;	// IMP=0x00000000004281ad

@end

