//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AKSQLiteMigration;

@interface AKSQLiteExecutor : NSObject
{
    struct sqlite3 *_database;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
    _Bool _shouldAutomaticallyMigrate;	// 24 = 0x18
    id <AKSQLiteMigration> _migrator;	// 32 = 0x20
}

+ (id)_databaseQueue;	// IMP=0x004000000006afb2
+ (void)performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x001000000006aec8
+ (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006addf
- (void).cxx_destruct;	// IMP=0x002000000006c4c5
@property(retain, nonatomic) id <AKSQLiteMigration> migrator; // @synthesize migrator=_migrator;
- (void)setShouldAutomaticallyMigrate:(_Bool)arg1;	// IMP=0x001000000006c4a1
- (_Bool)shouldAutomaticallyMigrate;	// IMP=0x001000000006c498
- (void)_unsafe_closeDatabase;	// IMP=0x001000000006c3c6
- (void)closeDatabase;	// IMP=0x001000000006c35a
- (void)_unsafe_wipeDatabase:(id *)arg1;	// IMP=0x001000000006c24c
- (void)wipeDatabase:(id *)arg1;	// IMP=0x001000000006c0d0
- (int)_unsafe_createDataBase;	// IMP=0x001000000006bec8
- (_Bool)_unsafe_openDatabase:(id *)arg1;	// IMP=0x001000000006bcd8
- (_Bool)openDatabase:(id *)arg1;	// IMP=0x001000000006bb16
- (id)_currentDataBaseError;	// IMP=0x001000000006b9ae
- (_Bool)_handleDatabaseFailureError:(id *)arg1;	// IMP=0x001000000006b81d
- (_Bool)_finalizeStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;	// IMP=0x001000000006b796
- (struct sqlite3_stmt *)_prepareStatementForQuery:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006b6fc
- (void)_stepThroughRowsWithQuery:(id)arg1 statement:(struct sqlite3_stmt *)arg2;	// IMP=0x001000000006b649
- (void)_printStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x001000000006b5ee
- (long long)performInsertQuery:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006b4ae
- (_Bool)performQuery:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006b359
- (_Bool)performQuery:(id)arg1 rowHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000006b26a
- (_Bool)performQuery:(id)arg1;	// IMP=0x001000000006b256
- (long long)performInsertQuery:(id)arg1;	// IMP=0x001000000006b1fa
- (int)_executeQuery:(id)arg1;	// IMP=0x001000000006b0fa
- (void)rollbackTransaction;	// IMP=0x001000000006b0e1
- (void)commitTransaction;	// IMP=0x001000000006b0a3
- (void)openTransaction;	// IMP=0x001000000006b08a
- (void)performTransactionBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x001000000006b033
@property(readonly, nonatomic) NSString *databasePath;
@property(readonly, nonatomic) struct sqlite3 *database;
- (id)initWithDatabasePath:(id)arg1 migrationController:(id)arg2;	// IMP=0x001000000006ad3b

@end

