//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLSyncableObject-Protocol.h>

@class CPLScopedIdentifier, NSDate, NSSet, NSString, PLCloudMasterMediaMetadata, PLMomentShare;

@interface PLCloudMaster <PLSyncableObject>
{
}

+ (id)entityName;	// IMP=0x000000000047226d
+ (unsigned long long)fullSizeJPEGSourceForUTI:(id)arg1 andImageDimensions:(struct CGSize)arg2;	// IMP=0x00000000004721d1
+ (id)listOfSyncedProperties;	// IMP=0x000000000047217b
+ (id)_originalTypes;	// IMP=0x000000000047214b
+ (void)deleteOrphanedMastersWithManagedObjectContext:(id)arg1;	// IMP=0x0000000000471ecb
+ (void)resetCloudMastersStateInManagedObjectContext:(id)arg1;	// IMP=0x0000000000471c0c
+ (void)deleteAllCloudMastersInManagedObjectContext:(id)arg1;	// IMP=0x0000000000471967
+ (id)cloudMastersWithScopedIdentifiers:(id)arg1 relationshipKeyPathsForPrefetching:(id)arg2 inLibrary:(id)arg3;	// IMP=0x0000000000471898
+ (id)cloudMasterWithScopedIdentifier:(id)arg1 prefetchResources:(_Bool)arg2 inManagedObjectContext:(id)arg3;	// IMP=0x000000000047170b
+ (id)cloudMastersByScopedIdentifiers:(id)arg1 relationshipKeyPathsForPrefetching:(id)arg2 inLibrary:(id)arg3;	// IMP=0x00000000004716b4
+ (id)cloudMasterWithGUID:(id)arg1 inMomentShare:(id)arg2 prefetchResources:(_Bool)arg3 inManagedObjectContext:(id)arg4;	// IMP=0x000000000047146b
+ (id)insertIntoPhotoLibrary:(id)arg1 withCloudMasterGUID:(id)arg2 inMomentShare:(id)arg3;	// IMP=0x0000000000471274
@property(retain, nonatomic) CPLScopedIdentifier *sourceMasterForDuplicationCPLScopedIdentifier; // @dynamic sourceMasterForDuplicationCPLScopedIdentifier;
- (_Bool)isSyncableChange;	// IMP=0x0000000000470f8b
- (id)originalFilenameForResourceType:(unsigned long long)arg1 filePath:(id)arg2;	// IMP=0x0000000000470dc4
- (void)_promptForNilScopeIdentifierRadar;	// IMP=0x0000000000470c73
- (id)scopedIdentifier;	// IMP=0x0000000000470b8f
- (id)cplMasterPropertyChangeForAsset:(id)arg1;	// IMP=0x00000000004703f5
- (id)cplPropertyRecord;	// IMP=0x00000000004702b8
- (id)cplFullRecord;	// IMP=0x0000000000470155
@property(readonly, retain, nonatomic) id localID;
- (_Bool)allOriginalsAreLocallyAvailableForAssetUuid:(id)arg1 useOriginalAltInsteadOfOriginal:(_Bool)arg2;	// IMP=0x000000000046fed8
- (_Bool)allOriginalsAreUploaded;	// IMP=0x000000000046fca9
- (unsigned long long)sizeOfOriginal;	// IMP=0x000000000046f9a7
@property(readonly, copy) NSString *description;
- (void)updateImportedByDisplayName:(id)arg1;	// IMP=0x000000000046f6ff
- (void)updateImportedByBundleIdentifier:(id)arg1;	// IMP=0x000000000046f52f
- (void)applyPropertiesFromCPLMasterChange:(id)arg1;	// IMP=0x000000000046ecea
- (void)awakeFromInsert;	// IMP=0x000000000046ec4c
- (_Bool)supportsCloudUpload;	// IMP=0x000000000046ec44
- (void)rm_applyExpungeableResourceStatesFromCPLMasterChange:(id)arg1 inPhotoLibrary:(id)arg2;	// IMP=0x000000000016c634
- (id)rm_applyResourcesFromCPLMasterChange:(id)arg1 inPhotoLibrary:(id)arg2;	// IMP=0x000000000016ad1d
- (_Bool)hasResourcesOtherThanForAssetUuid:(id)arg1;	// IMP=0x000000000016ab18
- (id)allMasterResources;	// IMP=0x000000000016a948
- (id)rm_assetUUIDToCloudResources;	// IMP=0x000000000016a5fa
- (id)rm_cloudResourceForResourceType:(unsigned long long)arg1 forAssetUuid:(id)arg2;	// IMP=0x000000000016a407
- (id)rm_cloudResourcesForResourceType:(unsigned long long)arg1;	// IMP=0x000000000016a120
- (id)payloadsForChangedKeys:(id)arg1;	// IMP=0x000000000044d7dd
- (id)payloadID;	// IMP=0x000000000044d77a

// Remaining properties
@property(retain, nonatomic) NSSet *assets; // @dynamic assets;
@property(nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property(retain, nonatomic) NSString *cloudMasterGUID; // @dynamic cloudMasterGUID;
@property(nonatomic) NSString *codecName; // @dynamic codecName;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) short fullSizeJPEGSource; // @dynamic fullSizeJPEGSource;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSDate *importDate; // @dynamic importDate;
@property(retain, nonatomic) NSString *importSessionID; // @dynamic importSessionID;
@property(nonatomic) short importedBy; // @dynamic importedBy;
@property(retain, nonatomic) NSString *importedByBundleIdentifier; // @dynamic importedByBundleIdentifier;
@property(retain, nonatomic) NSString *importedByDisplayName; // @dynamic importedByDisplayName;
@property(retain, nonatomic) PLCloudMasterMediaMetadata *mediaMetadata; // @dynamic mediaMetadata;
@property(retain, nonatomic) NSString *mediaMetadataType; // @dynamic mediaMetadataType;
@property(retain, nonatomic) PLMomentShare *momentShare; // @dynamic momentShare;
@property(retain, nonatomic) NSString *originalFilename; // @dynamic originalFilename;
@property(nonatomic) short originalOrientation; // @dynamic originalOrientation;
@property(copy, nonatomic) NSString *originatingAssetIdentifier; // @dynamic originatingAssetIdentifier;
@property(nonatomic) short placeholderState; // @dynamic placeholderState;
@property(retain, nonatomic) NSSet *resources; // @dynamic resources;
@property(retain, nonatomic) NSString *sourceMasterForDuplicationIdentifier; // @dynamic sourceMasterForDuplicationIdentifier;
@property(retain, nonatomic) NSString *sourceMasterForDuplicationScopeIdentifier; // @dynamic sourceMasterForDuplicationScopeIdentifier;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSSet *transientModernResources; // @dynamic transientModernResources;
@property(retain, nonatomic) NSString *uniformTypeIdentifier; // @dynamic uniformTypeIdentifier;
@property(nonatomic) short videoFrameRate; // @dynamic videoFrameRate;

@end

