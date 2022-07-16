//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServicesCore/PLThumbPersistenceManager-Protocol.h>

@class NSString, PLImageFormat, PLPhotoLibraryPathManager;

@interface PLThumbFileManagerCore : NSObject <PLThumbPersistenceManager>
{
    unsigned int _recipeId;	// 8 = 0x8
    PLImageFormat *_format;	// 16 = 0x10
    _Bool _readOnly;	// 24 = 0x18
    PLPhotoLibraryPathManager *_pathManager;	// 32 = 0x20
    NSString *_path;	// 40 = 0x28
}

+ (CDStruct_1ef3fb1f)maxMasterSizeFromSourceImageSize:(CDStruct_1ef3fb1f)arg1 format:(id)arg2;	// IMP=0x00000000000134cd
+ (id)thumbnailPathForThumbIdentifier:(id)arg1 withPathManager:(id)arg2 recipeID:(unsigned int)arg3 forDelete:(_Bool)arg4;	// IMP=0x00000000000130d5
+ (id)_fileIdentifierForThumbnailIdentifierComponents:(id)arg1 recipeID:(unsigned int)arg2;	// IMP=0x0000000000012e68
+ (id)thumbnailIdentifierURLComponentsForUBFWithAssetUUID:(id)arg1 bundleScope:(unsigned short)arg2;	// IMP=0x0000000000012dba
- (void).cxx_destruct;	// IMP=0x0000000000012d87
@property(readonly) PLImageFormat *format; // @synthesize format=_format;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (id)_debugDescription;	// IMP=0x0000000000012d57
- (_Bool)validateData:(id)arg1 withToken:(id)arg2;	// IMP=0x0000000000012d4f
- (struct CGImage *)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2;	// IMP=0x0000000000012d37
- (void)preheatDataForThumbnailIndexes:(id)arg1;	// IMP=0x0000000000012d31
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 dataOffset:(int *)arg8;	// IMP=0x0000000000012c8e
- (_Bool)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5;	// IMP=0x0000000000012c76
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2;	// IMP=0x00000000000129e3
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1;	// IMP=0x00000000000129d6
- (void)deleteEntryWithIdentifier:(id)arg1;	// IMP=0x000000000001282c
- (void)obtainAccessAndWaitWithFileWithAssetUUID:(id)arg1 urlHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012760
- (id)thumbnailPathForThumbIdentifier:(id)arg1;	// IMP=0x0000000000012704
- (_Bool)usesThumbIdentifiers;	// IMP=0x00000000000126fc
@property(readonly, nonatomic) _Bool isReadOnly;
@property(readonly, copy) NSString *description;
- (id)initWithImageFormat:(id)arg1 pathManager:(id)arg2;	// IMP=0x00000000000124e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
