//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFSQLiteConnectionConfiguration, MFSQLiteConnectionPool, NSString;

@interface MFSQLiteConnection : NSObject
{
    struct sqlite3 *_db;	// 8 = 0x8
    NSString *_databaseName;	// 16 = 0x10
    struct __CFDictionary *_statementCache;	// 24 = 0x18
    void *_ICUSearchContext;	// 32 = 0x20
    void *_CPSearchContext;	// 40 = 0x28
    long long _transactionType;	// 48 = 0x30
    unsigned long long _transactionCount;	// 56 = 0x38
    MFSQLiteConnectionPool *_pool;	// 64 = 0x40
    MFSQLiteConnectionConfiguration *_configuration;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000ba8a1
@property(copy, nonatomic) MFSQLiteConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) struct sqlite3 *db; // @synthesize db=_db;
@property(nonatomic) __weak MFSQLiteConnectionPool *pool; // @synthesize pool=_pool;
- (int)rollbackTransaction;	// IMP=0x00000000000ba81b
- (int)commitTransaction;	// IMP=0x00000000000ba7d7
- (int)beginTransactionWithType:(long long)arg1;	// IMP=0x00000000000ba768
- (int)beginTransaction;	// IMP=0x00000000000ba754
- (struct sqlite3_stmt *)preparedStatementForPattern:(id)arg1;	// IMP=0x00000000000ba670
- (void)flush;	// IMP=0x00000000000ba643
- (_Bool)isOpen;	// IMP=0x00000000000ba635
- (void)close;	// IMP=0x00000000000ba572
- (int)open;	// IMP=0x00000000000ba266
- (void)_fixFilePermission;	// IMP=0x00000000000ba225
- (void)_makeCompletePath;	// IMP=0x00000000000ba1c6
- (const char *)_vfsModuleName;	// IMP=0x00000000000ba1be
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000000ba167
- (void)dealloc;	// IMP=0x00000000000ba0e7

@end
