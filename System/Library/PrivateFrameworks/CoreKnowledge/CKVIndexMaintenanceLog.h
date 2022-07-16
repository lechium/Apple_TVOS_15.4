//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKVConcurrentDictionary, CKVFilesystemBase, NSDate, NSNumber, NSString;

@interface CKVIndexMaintenanceLog : NSObject
{
    CKVFilesystemBase *_filesystemBase;	// 8 = 0x8
    CKVConcurrentDictionary *_log;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000bd660
- (void)recordMigrationAttempt;	// IMP=0x00000000000bd52c
@property(readonly, nonatomic) NSNumber *migrationAttempts;
- (void)recordDatabaseCleanup;	// IMP=0x00000000000bd449
@property(readonly, nonatomic) NSDate *lastDatabaseCleanup;
- (void)recordDatabaseRowsModified:(unsigned long long)arg1;	// IMP=0x00000000000bd2f2
@property(readonly, nonatomic) NSNumber *modifiedDatabaseRowsSinceCleanup;
- (void)recordDatabaseSchemaVersion:(id)arg1;	// IMP=0x00000000000bd1f6
@property(readonly, nonatomic) NSString *databaseSchemaVersion;
- (void)recordMigrationWithBuildVersion:(id)arg1 projectVersion:(id)arg2;	// IMP=0x00000000000bd06e
@property(readonly, nonatomic) NSString *migratedProjectVersion;
@property(readonly, nonatomic) NSString *migratedBuildVersion;
@property(readonly, nonatomic) NSDate *lastMigration;
- (void)recordSkitRebuild;	// IMP=0x00000000000bcf7b
@property(readonly, nonatomic) NSDate *lastSkitRebuild;
- (void)recordMaintenance;	// IMP=0x00000000000bcec2
@property(readonly, nonatomic) NSDate *lastMaintenance;
- (_Bool)_setCurrentDateForKey:(id)arg1;	// IMP=0x00000000000bce18
- (_Bool)_flushLog;	// IMP=0x00000000000bcd66
- (void)_initalizeLog;	// IMP=0x00000000000bccc4
- (id)init;	// IMP=0x00000000000bcc7c
- (id)initWithFilesystemBase:(id)arg1;	// IMP=0x00000000000bcbdb

@end

