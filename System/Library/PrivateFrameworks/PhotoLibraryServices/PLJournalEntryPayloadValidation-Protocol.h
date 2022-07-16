//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSManagedObjectModel, NSMutableArray, NSSet, NSString;

@protocol PLJournalEntryPayloadValidation
+ (NSArray *)relationshipKeyPathsForPrefetching;
+ (NSArray *)snapshotSortDescriptors;
+ (_Bool)shouldPersistForChangedKeys:(NSSet *)arg1 entityName:(NSString *)arg2;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (NSSet *)additionalEntityNames;
+ (_Bool)isValidForPersistenceWithObjectDictionary:(NSDictionary *)arg1 additionalEntityName:(NSString *)arg2;
+ (void)validatePayloadPropertiesForManagedObjectModel:(NSManagedObjectModel *)arg1;
+ (NSDictionary *)persistedPropertyNamesForEntityNames;
+ (NSDictionary *)modelProperties;
- (_Bool)comparePayloadToObjectDictionary:(NSDictionary *)arg1 usingModelProperties:(NSDictionary *)arg2 errorDescriptions:(NSMutableArray *)arg3;
@end

