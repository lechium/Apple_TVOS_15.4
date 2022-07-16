//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object, TRIAssetExtracting, TRIAssetPatching, TRIPaths;

@interface TRIAssetStore : NSObject
{
    id <TRIPaths> _paths;	// 8 = 0x8
    id <TRIAssetExtracting> _extractor;	// 16 = 0x10
    id <TRIAssetPatching> _patcher;	// 24 = 0x18
    NSObject<OS_xpc_object> *_monitoredActivity;	// 32 = 0x20
}

+ (id)shortHashForAssetIdentifier:(id)arg1;	// IMP=0x000000000009eedc
+ (unsigned long long)_fileSizeInBytesForPath:(id)arg1;	// IMP=0x0000000000099de6
- (void).cxx_destruct;	// IMP=0x00000000000a0224
- (_Bool)_forceRemoveItemAtPath:(id)arg1;	// IMP=0x00000000000a014a
- (_Bool)_nonAtomicOverwriteWithSrc:(id)arg1 dest:(id)arg2 finalPermissionBits:(const unsigned short *)arg3;	// IMP=0x000000000009feb9
- (void)_fixupPermissionsOnPath:(id)arg1 permissionBits:(const unsigned short *)arg2;	// IMP=0x000000000009fe26
- (_Bool)_overwriteRenameAsAtomicallyAsPossibleWithSrc:(id)arg1 dest:(id)arg2;	// IMP=0x000000000009fb3d
- (void)_enumerateAssetDirsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000009f8ba
- (id)_createTempDir;	// IMP=0x000000000009f517
- (id)_requireAssetStoreTempDir;	// IMP=0x000000000009f408
- (id)_pathForRefsToAssetWithIdentifier:(id)arg1;	// IMP=0x000000000009f371
- (id)_pathForAssetContentWithIdentifier:(id)arg1;	// IMP=0x000000000009f2da
- (id)_pathForAssetDirWithIdentifier:(id)arg1;	// IMP=0x000000000009f1b1
- (_Bool)setCreationDate:(id)arg1 forAssetIdentifier:(id)arg2;	// IMP=0x000000000009f02f
- (_Bool)_acquireLockfileAndRunBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000009eb00
- (void)fixFileProtectionForAssetStoreFiles;	// IMP=0x000000000009e666
- (void)_fixFileProtectionForFileURL:(id)arg1;	// IMP=0x000000000009e36e
- (void)enumerateSavedAssetsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000009df1b
- (_Bool)hasAssetWithIdentifier:(id)arg1 type:(unsigned char *)arg2;	// IMP=0x000000000009ddba
- (_Bool)_isDirectoryAtPath:(id)arg1 matchingAssetContentAtPath:(id)arg2;	// IMP=0x000000000009d9c8
- (_Bool)_isFileAtPath:(id)arg1 matchingAssetContentAtPath:(id)arg2;	// IMP=0x000000000009d875
- (_Bool)_isValidTargetForSymlink:(id)arg1 assetIdentifier:(id)arg2;	// IMP=0x000000000009d720
- (_Bool)_removePaths:(id)arg1 numRemoved:(unsigned int *)arg2;	// IMP=0x000000000009d58f
- (_Bool)_removeUnreferencedAssetsWithFlockWitness:(const struct TRIFlockWitness_ *)arg1 olderThanAge:(unsigned int)arg2 numRemoved:(unsigned int *)arg3 deletedAssetsSize:(unsigned long long *)arg4 ignoreRecentlyCreatedAssets:(_Bool)arg5 dryRun:(_Bool)arg6 linkTargetsToIgnoreByAssetId:(id)arg7 deletedAssetIds:(id *)arg8;	// IMP=0x000000000009d258
- (id)_creationDateForAsset:(id)arg1;	// IMP=0x000000000009d11b
- (id)_collectUnreferencedAssetsIgnoringLinkTargetsByAssetId:(id)arg1 ignoreRecentlyCreatedAssets:(_Bool)arg2;	// IMP=0x000000000009c9be
- (_Bool)_removeDeadSymlinksWithFlockWitness:(const struct TRIFlockWitness_ *)arg1 numRemoved:(unsigned int *)arg2;	// IMP=0x000000000009c95c
- (unsigned short)_hardLinkCountForFileWithPath:(id)arg1;	// IMP=0x000000000009c891
- (unsigned short)_hardLinkCountForAssetWithIdentifier:(id)arg1;	// IMP=0x000000000009c702
- (id)_collectDeadSymlinks;	// IMP=0x000000000009c0a2
- (_Bool)_clearUnrefAgeForAssetWithIdentifier:(id)arg1;	// IMP=0x000000000009bfd8
- (_Bool)_incrementUnrefAgeForAssetWithIdentifier:(id)arg1 newValue:(unsigned int *)arg2 dryRun:(_Bool)arg3;	// IMP=0x000000000009bbd1
- (_Bool)_collectGarbageOlderThanNumScans:(unsigned int)arg1 deletedAssetSize:(unsigned long long *)arg2 ignoreRecentlyCreatedAssets:(_Bool)arg3 dryRun:(_Bool)arg4 linkTargetsToIgnoreByAssetId:(id)arg5 deletedAssetIds:(id *)arg6;	// IMP=0x000000000009b879
- (_Bool)collectGarbageOlderThanNumScans:(unsigned int)arg1 ignoreRecentlyCreatedAssets:(_Bool)arg2 deletedAssetSize:(unsigned long long *)arg3 deletedAssetIds:(id *)arg4;	// IMP=0x000000000009b850
- (_Bool)collectGarbageOlderThanNumScans:(unsigned int)arg1 deletedAssetSize:(unsigned long long *)arg2;	// IMP=0x000000000009b833
- (unsigned long long)removableAssetsSizeOlderThanNumScans:(unsigned int)arg1 linkTargetsToIgnoreByAssetId:(id)arg2;	// IMP=0x000000000009b816
- (unsigned long long)removableAssetsSizeOlderThanNumScans:(unsigned int)arg1 ignoreRecentlyCreatedAssets:(_Bool)arg2 linkTargetsToIgnoreByAssetId:(id)arg3 deleteableAssetIds:(id *)arg4;	// IMP=0x000000000009b6fc
- (_Bool)_linkDirectoryAssetWithIdentifier:(id)arg1 toCurrentPath:(id)arg2 futurePath:(id)arg3;	// IMP=0x000000000009ab3f
- (_Bool)_linkFileAssetWithIdentifier:(id)arg1 toCurrentPath:(id)arg2 futurePath:(id)arg3;	// IMP=0x000000000009a92a
- (_Bool)_addSymlinkFromAssetWithIdentifier:(id)arg1 toPath:(id)arg2;	// IMP=0x000000000009a6f8
- (_Bool)linkAssetWithIdentifier:(id)arg1 toCurrentPath:(id)arg2 futurePath:(id)arg3;	// IMP=0x000000000009a220
- (_Bool)linkAssetWithIdentifier:(id)arg1 toPath:(id)arg2;	// IMP=0x000000000009a20b
- (_Bool)_removeAssetWithIdentifier:(id)arg1 flockWitness:(const struct TRIFlockWitness_ *)arg2 deletedAssetSize:(unsigned long long *)arg3 dryRun:(_Bool)arg4;	// IMP=0x0000000000099fac
- (_Bool)removeAssetWithIdentifier:(id)arg1;	// IMP=0x0000000000099c40
- (_Bool)_moveDirectoryAssetFromDirectory:(id)arg1 toLocationForAssetIdentifier:(id)arg2;	// IMP=0x0000000000099674
- (CDStruct_6b48f683)_saveDirectoryAssetWithIdentifier:(id)arg1 assetFilename:(id)arg2 metadata:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000099474
- (_Bool)_saveFileAssetWithIdentifier:(id)arg1 assetFilename:(id)arg2 workingTempDirectory:(id)arg3;	// IMP=0x000000000009914b
- (_Bool)_saveFileAssetWithIdentifier:(id)arg1 assetFilename:(id)arg2;	// IMP=0x000000000009909d
- (_Bool)saveAssetWithIdentifier:(id)arg1 builtFromAssetWithIdentifier:(id)arg2 patchFilename:(id)arg3 metadata:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000098610
- (CDStruct_6b48f683)saveAssetWithIdentifier:(id)arg1 assetURL:(id)arg2 metadata:(id)arg3 error:(id *)arg4;	// IMP=0x000000000009784b
- (_Bool)saveAssetWithIdentifier:(id)arg1 assetData:(id)arg2 type:(unsigned char)arg3;	// IMP=0x0000000000097592
- (id)initWithPaths:(id)arg1 extractor:(id)arg2 patcher:(id)arg3 monitoredActivity:(id)arg4;	// IMP=0x000000000009741b
- (id)initWithPaths:(id)arg1 extractor:(id)arg2 patcher:(id)arg3;	// IMP=0x0000000000097406
- (id)initWithPaths:(id)arg1 monitoredActivity:(id)arg2;	// IMP=0x000000000009733b
- (id)initWithPaths:(id)arg1;	// IMP=0x0000000000097327
- (id)init;	// IMP=0x0000000000097321

@end
