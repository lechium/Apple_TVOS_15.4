//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>
#import <Photos/PLLocalUUIDConverter-Protocol.h>

@class NSManagedObjectID, NSString, PHObjectReference, PHPhotoLibrary;

@interface PHObject : NSObject <PLLocalUUIDConverter, NSCopying>
{
    NSString *_uuid;	// 8 = 0x8
    _Bool _deleted;	// 16 = 0x10
    NSManagedObjectID *_objectID;	// 24 = 0x18
    unsigned long long _propertyHint;	// 32 = 0x20
    PHPhotoLibrary *_photoLibrary;	// 40 = 0x28
}

+ (id)authorizationAwareFetchResultWithOptions:(id)arg1 fetchBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000014fe13
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;	// IMP=0x000000000014f782
+ (id)localIdentifierExpressionForFetchRequests;	// IMP=0x000000000014f762
+ (void)assertAllObjects:(id)arg1 forSelector:(SEL)arg2 areOfType:(Class)arg3;	// IMP=0x000000000014f544
+ (id)identifierCodeFromLocalIdentifier:(id)arg1;	// IMP=0x000000000014f4e1
+ (id)uuidFromLocalIdentifier:(id)arg1;	// IMP=0x000000000014f46d
+ (id)localIdentifierWithUUID:(id)arg1;	// IMP=0x000000000014f3dc
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000014f3d4
+ (id)propertyKeyForEntityKey:(id)arg1;	// IMP=0x000000000014f351
+ (id)entityKeyForPropertyKey:(id)arg1;	// IMP=0x000000000014f2ce
+ (id)entityKeyMap;	// IMP=0x000000000014f229
+ (id)identifierCode;	// IMP=0x000000000014f184
+ (_Bool)managedObjectSupportsTorsoOnly;	// IMP=0x000000000014f17c
+ (_Bool)managedObjectSupportsBodyDetection;	// IMP=0x000000000014f174
+ (_Bool)managedObjectSupportsDetectionType;	// IMP=0x000000000014f16c
+ (_Bool)managedObjectSupportsContributor;	// IMP=0x000000000014f164
+ (_Bool)managedObjectSupportsAllowedForAnalysis;	// IMP=0x000000000014f15c
+ (_Bool)managedObjectSupportsMontage;	// IMP=0x000000000014f154
+ (_Bool)managedObjectSupportsSavedAssetType;	// IMP=0x000000000014f14c
+ (_Bool)managedObjectSupportsFaceState;	// IMP=0x000000000014f144
+ (_Bool)managedObjectSupportsBursts;	// IMP=0x000000000014f13c
+ (_Bool)managedObjectSupportsKeyFaces;	// IMP=0x000000000014f134
+ (_Bool)managedObjectSupportsPersonFilters;	// IMP=0x000000000014f12c
+ (_Bool)managedObjectSupportsRejectedState;	// IMP=0x000000000014f124
+ (_Bool)managedObjectSupportsPendingState;	// IMP=0x000000000014f11c
+ (_Bool)managedObjectSupportsVisibilityState;	// IMP=0x000000000014f114
+ (_Bool)managedObjectSupportsHiddenState;	// IMP=0x000000000014f10c
+ (_Bool)managedObjectSupportsShareExpiredState;	// IMP=0x000000000014f104
+ (_Bool)managedObjectSupportsShareTrashedState;	// IMP=0x000000000014f0fc
+ (_Bool)managedObjectSupportsTrashedState;	// IMP=0x000000000014f0f4
+ (id)fetchType;	// IMP=0x000000000014f0ec
+ (id)managedEntityName;	// IMP=0x000000000014f0e4
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;	// IMP=0x000000000014f0dc
+ (id)identifierPropertiesToFetch;	// IMP=0x000000000014f0b8
+ (void)extendPropertiesToFetch:(id)arg1 withPropertySetClass:(Class)arg2;	// IMP=0x000000000014eb96
+ (void)extendPropertiesToFetch:(id)arg1 withProperties:(id)arg2;	// IMP=0x000000000014ea12
+ (Class)propertySetClassForPropertySet:(id)arg1;	// IMP=0x000000000014ea0a
+ (id)propertySetAccessorsByPropertySet;	// IMP=0x000000000014ea02
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)arg1;	// IMP=0x000000000014e9fa
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)arg1;	// IMP=0x000000000014e9ef
- (void).cxx_destruct;	// IMP=0x000000000014e9bc
@property(readonly) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property unsigned long long propertyHint; // @synthesize propertyHint=_propertyHint;
@property(readonly, getter=isDeleted) _Bool deleted; // @synthesize deleted=_deleted;
@property(readonly) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy) NSString *description;
@property(readonly, getter=isTransient) _Bool transient;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014e79f
@property(readonly) id identifier;
- (Class)changeRequestClass;	// IMP=0x000000000014e6de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014e6d3
- (id)_shortObjectIDURI;	// IMP=0x000000000014e5ec
@property(readonly, copy, nonatomic) NSString *localIdentifier;
- (void)dealloc;	// IMP=0x000000000014e54c
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;	// IMP=0x000000000014e3ef
- (_Bool)hasLoadedPropertySet:(id)arg1;	// IMP=0x000000000014e377
@property(readonly, nonatomic) PHObjectReference *objectReference;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

