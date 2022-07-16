//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@interface GKCacheObject : NSManagedObject
{
}

+ (id)attributesDescriptionsForAttributesWithKeys:(id)arg1;	// IMP=0x004000000004b12b
+ (id)uniqueObjectIDLookupWithContext:(id)arg1;	// IMP=0x001000000004af9a
+ (const void *)uniqueObjectIDLookupKey;	// IMP=0x001000000004ae79
+ (id)uniqueAttributeName;	// IMP=0x001000000004ad58
+ (void)deleteObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x001000000004a965
+ (id)firstObjectMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x001000000004a580
+ (unsigned long long)countObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x001000000004a204
+ (id)objectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0010000000049e7c
+ (id)allObjectsInContext:(id)arg1;	// IMP=0x0010000000049e65
+ (id)fetchSortDescriptors;	// IMP=0x0010000000049e5d
+ (id)relationshipKeyPathsForPrefetch;	// IMP=0x0010000000049e55
+ (id)fetchRequestForContext:(id)arg1;	// IMP=0x0010000000049c39
+ (id)entityInManagedObjectContext:(id)arg1;	// IMP=0x00100000000495b4
+ (id)entityName;	// IMP=0x001000000004949b
- (void)invalidate;	// IMP=0x002000000004ad52
- (_Bool)isValid;	// IMP=0x001000000004ad4a
- (id)initWithManagedObjectContext:(id)arg1;	// IMP=0x0010000000049925
- (id)internalRepresentation;	// IMP=0x0010000000049493
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0010000000049318
- (_Bool)hasImages;	// IMP=0x001000000004c70b
- (void)clearImages;	// IMP=0x001000000004c375
- (void)deleteCachedImage:(id)arg1;	// IMP=0x001000000004bec3
- (id)imageURLDictionary;	// IMP=0x001000000004b9ed
- (id)updateImagesWithImageURLs:(id)arg1;	// IMP=0x001000000004b461
- (id)imageCacheKeyPathsByKey;	// IMP=0x001000000004b29b

@end
