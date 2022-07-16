//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLModelMigrator, PLPhotoLibraryPathManager;

@interface PLDeviceRestoreMigrationPostProcessingSupport : NSObject
{
    _Bool _tokenIsKnownToBeMissing;	// 8 = 0x8
    PLModelMigrator *_modelMigrator;	// 16 = 0x10
    PLPhotoLibraryPathManager *_pathManager;	// 24 = 0x18
    struct os_unfair_lock_s _tokenLock;	// 32 = 0x20
}

+ (_Bool)_writeTokenToPath:(id)arg1 withInfo:(id)arg2 allowOverwrite:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000285941
+ (id)_readTokenAtPath:(id)arg1 allowNotExists:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000002856d1
+ (_Bool)createForegroundRestoreFromCloudBackupCompleteTokenWithPathManager:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002852f9
- (void).cxx_destruct;	// IMP=0x00000000002840b4
- (_Bool)isModelMigrationRestorePostProcessingComplete;	// IMP=0x0000000000283fb5
- (_Bool)writeModelMigrationRestorePostProcessingCompleteToken;	// IMP=0x0000000000283e20
- (_Bool)writeBackgroundRestorePostProcessingCompleteAndArchiveTokens;	// IMP=0x0000000000283c2b
- (_Bool)writeBackgroundRestorePostProcessingInProgressToken;	// IMP=0x0000000000283a84
- (_Bool)isBackgroundRestorePostProcessingInProgressTokenValid;	// IMP=0x00000000002839e5
- (_Bool)needsToPrepareForBackgroundRestore;	// IMP=0x00000000002838ae
- (_Bool)foregroundRestoreFromCloudBackupCompleteTokenExists;	// IMP=0x00000000002837bd
- (id)initWithModelMigrator:(id)arg1;	// IMP=0x000000000028372c

@end

