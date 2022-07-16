//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKVDatabaseConnection, CKVFilesystemBase, CKVIndexMaintenanceLog, CKVSettings, CKVSkitWriter, NSDate, NSURL;
@protocol CKVDatabaseReadOnlyAccess, CKVSkitReadAccess, OS_dispatch_queue;

@interface CKVIndexManager : NSObject
{
    CKVFilesystemBase *_filesystemBase;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CKVSettings *_settings;	// 24 = 0x18
    CKVDatabaseConnection *_readWriteDatabase;	// 32 = 0x20
    CKVSkitWriter *_writeOnlySkit;	// 40 = 0x28
    CKVIndexMaintenanceLog *_maintenanceLog;	// 48 = 0x30
    NSDate *_migrationStartTime;	// 56 = 0x38
    NSObject<CKVDatabaseReadOnlyAccess> *_readOnlyDatabase;	// 64 = 0x40
    NSObject<CKVSkitReadAccess> *_readOnlySkit;	// 72 = 0x48
    NSURL *_databaseFileURL;	// 80 = 0x50
    NSURL *_skitDirectoryURL;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x00000000000e54fa
- (void).cxx_destruct;	// IMP=0x00000000000e4697
@property(readonly, nonatomic) NSURL *skitDirectoryURL; // @synthesize skitDirectoryURL=_skitDirectoryURL;
@property(readonly, nonatomic) NSURL *databaseFileURL; // @synthesize databaseFileURL=_databaseFileURL;
@property(retain) NSObject<CKVSkitReadAccess> *readOnlySkit; // @synthesize readOnlySkit=_readOnlySkit;
@property(retain) NSObject<CKVDatabaseReadOnlyAccess> *readOnlyDatabase; // @synthesize readOnlyDatabase=_readOnlyDatabase;
- (_Bool)_shouldCleanupDatabase:(id)arg1;	// IMP=0x00000000000e44b4
- (unsigned long long)performMaintenance;	// IMP=0x00000000000e43ad
- (void)recordMigrationCompleted;	// IMP=0x00000000000e4362
- (_Bool)_initiateMigration;	// IMP=0x00000000000e3f2c
- (_Bool)initiateMigration;	// IMP=0x00000000000e3e9e
- (_Bool)_isDatabaseSchemaIncompatible;	// IMP=0x00000000000e3d92
- (id)_maintenanceLog;	// IMP=0x00000000000e3d43
- (unsigned long long)_executeDatabaseAndSkitTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e3448
- (unsigned long long)submitDatabaseAndSkitTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e3379
- (_Bool)destroyAllState;	// IMP=0x00000000000e32eb
- (_Bool)_destroyAllState;	// IMP=0x00000000000e31e2
- (_Bool)destroySkit;	// IMP=0x00000000000e3154
- (_Bool)_executeSkitTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e2e3a
- (_Bool)submitSkitTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e2d6c
- (id)accessReadOnlySkit;	// IMP=0x00000000000e2c62
- (_Bool)_executeDatabaseTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e26cb
- (_Bool)submitDatabaseTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e25fd
- (id)accessReadOnlyDatabase;	// IMP=0x00000000000e24f3
- (void)closeAllConnections;	// IMP=0x00000000000e24a8
- (void)resetWithFilesystemBase:(id)arg1;	// IMP=0x00000000000e241b
- (_Bool)_isReadOnlySkitARealConnection;	// IMP=0x00000000000e23c8
- (_Bool)_isReadOnlyDatabaseARealConnection;	// IMP=0x00000000000e2375
- (_Bool)_isSkitDirectoryCreated;	// IMP=0x00000000000e22f9
- (_Bool)_isDatabaseCreated;	// IMP=0x00000000000e227d
- (void)_closeAllConnections;	// IMP=0x00000000000e21b3
- (void)_ensureSkitWriteAccessWithFlushThreshold:(unsigned long long)arg1;	// IMP=0x00000000000e2144
- (_Bool)_setWriteOnlySkitAccessWithFlushThreshold:(unsigned long long)arg1;	// IMP=0x00000000000e1ffa
- (void)_setReadOnlySkitAccess;	// IMP=0x00000000000e1f2e
- (void)_ensureDatabaseReadWriteAccess;	// IMP=0x00000000000e1eed
- (_Bool)_setReadWriteDatabaseAccess:(_Bool *)arg1;	// IMP=0x00000000000e1b94
- (_Bool)_setReadWriteDatabaseAccess;	// IMP=0x00000000000e1b80
- (void)_setReadOnlyDatabaseAccess;	// IMP=0x00000000000e1ab4
- (id)initWithFilesystemBase:(id)arg1 settings:(id)arg2;	// IMP=0x00000000000e17d7
- (id)init;	// IMP=0x00000000000e178f

@end
