//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_transaction;

@interface FLSQLiteExecutor : NSObject
{
    struct sqlite3 *_database;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
    NSObject<OS_os_transaction> *_transaction;	// 24 = 0x18
    _Bool _shouldAutomaticallyMigrate;	// 32 = 0x20
}

+ (id)_databaseQueue;	// IMP=0x004000000000186d
+ (void)performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x001000000000177b
+ (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000163a
- (void).cxx_destruct;	// IMP=0x0020000000002fd2
@property(nonatomic) _Bool shouldAutomaticallyMigrate; // @synthesize shouldAutomaticallyMigrate=_shouldAutomaticallyMigrate;
- (void)_unsafe_closeDatabase;	// IMP=0x0010000000002e86
- (void)closeDatabase;	// IMP=0x0010000000002e1a
- (void)_unsafe_wipeDatabase;	// IMP=0x0010000000002ce1
- (void)wipeDatabase;	// IMP=0x0010000000002be5
- (int)_unsafe_createDataBase;	// IMP=0x0010000000002965
- (_Bool)_unsafe_openDatabase:(id *)arg1;	// IMP=0x0010000000002750
- (_Bool)openDatabase:(id *)arg1;	// IMP=0x0010000000002517
- (id)_currentDataBaseError;	// IMP=0x00100000000023af
- (_Bool)_handleDatabaseFailureError:(id *)arg1;	// IMP=0x00100000000021ca
- (_Bool)_finalizeStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;	// IMP=0x00100000000020fb
- (struct sqlite3_stmt *)_prepareStatementForQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000002061
- (void)_stepThroughRowsWithQuery:(id)arg1 statement:(struct sqlite3_stmt *)arg2;	// IMP=0x0010000000001fae
- (void)_printStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x0010000000001f0b
- (long long)performInsertQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000001dd0
- (_Bool)performQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000001c8c
- (_Bool)performQuery:(id)arg1 rowHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001b86
- (_Bool)performQuery:(id)arg1;	// IMP=0x0010000000001b72
- (long long)performInsertQuery:(id)arg1;	// IMP=0x0010000000001b16
- (int)_executeQuery:(id)arg1;	// IMP=0x00100000000019b5
- (void)rollbackTransaction;	// IMP=0x001000000000199c
- (void)commitTransaction;	// IMP=0x001000000000195e
- (void)openTransaction;	// IMP=0x0010000000001945
- (void)performTransactionBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x00100000000018ee
@property(readonly, nonatomic) NSString *databasePath;
@property(readonly, nonatomic) struct sqlite3 *database;
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x00100000000015c4

@end
