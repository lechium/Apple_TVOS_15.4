//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFileManager, NSString;

@interface PLPhotoLibraryPathManagerUBF
{
    NSString *_databaseDirectory;	// 8 = 0x8
    NSString *_searchDatabaseDirectory;	// 16 = 0x10
    NSString *_originalsDirectory;	// 24 = 0x18
    NSString *_privateDirectory;	// 32 = 0x20
    NSString *_privateCacheDirectory;	// 40 = 0x28
    NSString *_scopesBaseDirectory;	// 48 = 0x30
    NSString *_scopesPhotoCloudSharingDirectory;	// 56 = 0x38
    NSString *_scopesPhotoCloudSharingDataDirectory;	// 64 = 0x40
    NSString *_scopesPhotoCloudSharingMetadataDirectory;	// 72 = 0x48
    NSString *_scopesPhotoCloudSharingCacheDirectory;	// 80 = 0x50
    NSString *_scopesSyndicationDirectory;	// 88 = 0x58
    NSString *_scopesMomentSharedDirectory;	// 96 = 0x60
    NSString *_resourcesDirectory;	// 104 = 0x68
    NSString *_journalsDirectory;	// 112 = 0x70
    NSString *_rendersDirectory;	// 120 = 0x78
    NSString *_derivativesDirectory;	// 128 = 0x80
    NSString *_derivativesThumbsDirectory;	// 136 = 0x88
    NSString *_derivativesMasterThumbsDirectory;	// 144 = 0x90
    NSString *_resourcesCPLDataDirectory;	// 152 = 0x98
    NSString *_resourcesPhotoStreamsDataDirectory;	// 160 = 0xa0
    NSString *_resourcesProjectsDataDirectory;	// 168 = 0xa8
    NSString *_resourcesProjectsLegacyDirectory;	// 176 = 0xb0
    NSString *_resourcesAnalyticsDirectory;	// 184 = 0xb8
    NSString *_resourcesPartialVideoDirectory;	// 192 = 0xc0
    NSString *_externalDirectory;	// 200 = 0xc8
    NSString *_internalDirectory;	// 208 = 0xd0
    NSFileManager *_fm;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0000000000020835
- (_Bool)ensureFileProviderSyncExclusionAttributeIsSetWithError:(id *)arg1;	// IMP=0x000000000002082d
- (_Bool)updateTimeMachineExclusionAttributeForExcludePath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000206e8
- (id)_scopedInternalPathManagerWithBundleScope:(unsigned short)arg1;	// IMP=0x0000000000020580
- (id)assetMainFilePathWithDirectory:(id)arg1 filename:(id)arg2 bundleScope:(unsigned short)arg3;	// IMP=0x0000000000020282
- (id)assetAbbreviatedMetadataDirectoryForDirectory:(id)arg1 type:(unsigned char)arg2 bundleScope:(unsigned short)arg3;	// IMP=0x00000000000201d4
- (_Bool)isDeviceRestoreSupported;	// IMP=0x00000000000201cc
- (void)obtainAccessAndWaitWithFileWithIdentifier:(id)arg1 mode:(unsigned char)arg2 toURLWithHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001ff5d
- (void)setExtendedAttributesWithIdentifier:(id)arg1 andURL:(id)arg2;	// IMP=0x000000000001fbce
- (void)setExtendedAttributesWithIdentifier:(id)arg1;	// IMP=0x000000000001fb5f
- (id)readOnlyUrlWithIdentifier:(id)arg1;	// IMP=0x000000000001fb4d
- (id)urlWithIdentifier:(id)arg1;	// IMP=0x000000000001f8e3
- (_Bool)shouldUseFileIdentifierForBundleScope:(unsigned short)arg1;	// IMP=0x000000000001f8db
- (void)enumerateBundleScopesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f75d
- (unsigned char)photoLibraryPathTypeForBundleScope:(unsigned short)arg1;	// IMP=0x000000000001f73c
- (id)syncInfoPath;	// IMP=0x000000000001f718
- (id)pathToAssetsToAlbumsMapping;	// IMP=0x000000000001f6f4
- (id)internalDirectoryWithSubType:(unsigned char)arg1 additionalPathComponents:(id)arg2;	// IMP=0x000000000001f56d
- (id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;	// IMP=0x000000000001f414
- (id)privateCacheDirectoryWithSubType:(unsigned char)arg1;	// IMP=0x000000000001f337
- (id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;	// IMP=0x000000000001f1fb
- (id)extendedPathsWithError:(id *)arg1;	// IMP=0x000000000001eeba
- (id)corePathsWithError:(id *)arg1 directDatabaseAccess:(_Bool)arg2 limitedLibrary:(_Bool)arg3;	// IMP=0x000000000001ec49
- (_Bool)createPathsForNewLibrariesWithError:(id *)arg1;	// IMP=0x000000000001e5cb
- (id)pathsForExternalWriters;	// IMP=0x000000000001e4d5
- (id)pathsForPermissionCheck;	// IMP=0x000000000001e3db
- (id)pathsForClientAccess:(id)arg1;	// IMP=0x000000000001daff
- (id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;	// IMP=0x000000000001da70
- (id)photosDatabasePath;	// IMP=0x000000000001da4c
- (id)addToPath:(id)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;	// IMP=0x000000000001d8a8
- (id)convertPhotoLibraryPathType:(unsigned char)arg1;	// IMP=0x000000000001d66c
- (id)_externalDirectoryWithBundleIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x000000000001d4fa
- (id)basePrivateDirectoryPath;	// IMP=0x000000000001d430
- (id)initWithLibraryURL:(id)arg1 bundleScope:(unsigned short)arg2;	// IMP=0x000000000001cd07

@end

