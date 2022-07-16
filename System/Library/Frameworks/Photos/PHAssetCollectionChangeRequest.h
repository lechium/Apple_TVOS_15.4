//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSManagedObjectID, NSString, PHAssetCollection, PHObjectPlaceholder, PHRelationshipChangeRequestHelper;

@interface PHAssetCollectionChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    PHAssetCollection *_originalAssetCollection;	// 16 = 0x10
    PHRelationshipChangeRequestHelper *_assetsHelper;	// 24 = 0x18
    PHRelationshipChangeRequestHelper *_customKeyAssetHelper;	// 32 = 0x20
}

+ (void)_deleteAssetCollections:(id)arg1 withOperation:(long long)arg2 topLevelSelector:(SEL)arg3;	// IMP=0x000000000011a2ec
+ (void)undeleteAssetCollections:(id)arg1;	// IMP=0x000000000011a2d2
+ (void)expungeAssetCollections:(id)arg1;	// IMP=0x000000000011a2b8
+ (void)deleteAssetCollections:(id)arg1;	// IMP=0x000000000011a2a1
+ (id)creationRequestForAssetCollectionCopyFromAssetCollection:(id)arg1;	// IMP=0x0000000000119e06
+ (id)validateAssetCollectionTitle:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000119d09
+ (id)creationRequestForAssetCollectionWithTitle:(id)arg1;	// IMP=0x0000000000119ca2
+ (id)changeRequestForAssetCollection:(id)arg1 assets:(id)arg2;	// IMP=0x0000000000119c90
+ (id)changeRequestForAssetCollection:(id)arg1;	// IMP=0x0000000000119c7c
+ (id)_changeRequestForAssetCollection:(id)arg1 optionalAssets:(id)arg2;	// IMP=0x0000000000119b75
- (void).cxx_destruct;	// IMP=0x0000000000119b1b
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *customKeyAssetHelper; // @synthesize customKeyAssetHelper=_customKeyAssetHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *assetsHelper; // @synthesize assetsHelper=_assetsHelper;
@property(retain, nonatomic) PHAssetCollection *originalAssetCollection; // @synthesize originalAssetCollection=_originalAssetCollection;
@property(readonly, copy) NSString *description;
- (_Bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000119104
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000118db6
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000118be1
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000118b2a
- (void)removeAssets:(id)arg1;	// IMP=0x000000000011891c
- (void)addAssets:(id)arg1;	// IMP=0x000000000011870e
- (void)removeAsset:(id)arg1;	// IMP=0x000000000011865f
- (void)addAsset:(id)arg1;	// IMP=0x00000000001185b0
- (void)moveAssetsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x00000000001184ae
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;	// IMP=0x0000000000118277
- (void)replaceAssetInAssetsAtIndex:(unsigned long long)arg1 withAsset:(id)arg2;	// IMP=0x000000000011819c
- (void)removeAssetsAtIndexes:(id)arg1;	// IMP=0x0000000000118117
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;	// IMP=0x0000000000117edd
- (void)removeAssetFromAssetsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000117e70
- (void)insertAsset:(id)arg1 inAssetsAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000117d90
- (id)_mutableAssetsObjectIDsAndUUIDs;	// IMP=0x0000000000117d5a
- (void)_prepareAssetIDsIfNeeded;	// IMP=0x0000000000117bbb
- (void)_prepareWithFetchResult:(id)arg1;	// IMP=0x0000000000117b0c
- (void)_setOriginalAssetCollection:(id)arg1;	// IMP=0x0000000000117af8
- (void)setCustomKeyAsset:(id)arg1;	// IMP=0x00000000001179c0
- (id)_mutableKeyAssetObjectIDsAndUUIDs;	// IMP=0x000000000011798a
- (void)_prepareKeyAssetIDIfNeeded;	// IMP=0x0000000000117884
- (void)setIsPinned:(_Bool)arg1;	// IMP=0x00000000001177ad
- (_Bool)isPinned;	// IMP=0x00000000001176fc
@property(retain, nonatomic) NSString *title;
@property(nonatomic) _Bool customSortAscending;
@property(nonatomic) unsigned int customSortKey;
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedAssetCollection;
@property(readonly, nonatomic) NSString *managedEntityName;
- (void)encodeToXPCDict:(id)arg1;	// IMP=0x000000000011708b
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;	// IMP=0x0000000000116f3b
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;	// IMP=0x0000000000116e15
- (id)initForNewObject;	// IMP=0x0000000000116d29

// Remaining properties
@property(readonly, nonatomic) long long accessScopeOptionsRequirement;
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled;
@property(readonly, nonatomic) NSString *clientName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) _Bool isNewRequest;
@property(readonly, getter=isMutated) _Bool mutated;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(nonatomic) _Bool shouldPerformConcurrentWork;
@property(readonly) Class superclass;

@end

