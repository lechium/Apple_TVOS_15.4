//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface PLProjectAlbum
{
}

+ (id)validKindsForPersistence;	// IMP=0x000000000058f008
+ (id)albumSupportsAssetOrderKeysPredicate;	// IMP=0x000000000058efe1
+ (_Bool)cleanupOrphanedProjectPreviewImagesInLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000058e512
+ (id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 documentType:(id)arg3 projectExtensionIdentifier:(id)arg4;	// IMP=0x000000000058e423
+ (id)entityName;	// IMP=0x000000000058e416
- (_Bool)supportsAssetOrderKeys;	// IMP=0x000000000058e3fb
- (id)_previewImageFilename;	// IMP=0x000000000058e3a4
- (_Bool)setProjectPreviewImageData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000058de1a
- (id)duplicateProjectPreviewImageData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000058db49
- (id)projectPreviewImageData;	// IMP=0x000000000058da19
- (void)prepareForDeletion;	// IMP=0x000000000058d8f4
- (void)willSave;	// IMP=0x000000000058d7bc
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;	// IMP=0x000000000058d7b0
- (void)awakeFromInsert;	// IMP=0x000000000058d76a
- (id)payloadForChangedKeys:(id)arg1;	// IMP=0x0000000000272af4

// Remaining properties
@property(copy, nonatomic) NSData *projectData; // @dynamic projectData;
@property(copy, nonatomic) NSString *projectDocumentType; // @dynamic projectDocumentType;
@property(copy, nonatomic) NSString *projectExtensionIdentifier; // @dynamic projectExtensionIdentifier;
@property(copy, nonatomic) NSString *projectRenderUuid; // @dynamic projectRenderUuid;

@end

