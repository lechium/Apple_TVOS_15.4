//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface CXDatabase : NSObject
{
    NSURL *_url;	// 8 = 0x8
    struct sqlite3 *_database;	// 16 = 0x10
    NSMutableDictionary *_sqlQueryToStatements;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002c48f
@property(retain, nonatomic) NSMutableDictionary *sqlQueryToStatements; // @synthesize sqlQueryToStatements=_sqlQueryToStatements;
@property(nonatomic) struct sqlite3 *database; // @synthesize database=_database;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (_Bool)performTransactionWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x000000000002c308
- (id)namesOfColumnsInTableWithName:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002c168
- (_Bool)selectSQL:(id)arg1 withBindings:(id)arg2 expectedColumnCount:(long long)arg3 transient:(_Bool)arg4 resultRowHandler:(CDUnknownBlockType)arg5 error:(id *)arg6;	// IMP=0x000000000002c076
- (_Bool)selectSQL:(id)arg1 withBindings:(id)arg2 expectedColumnCount:(long long)arg3 resultRowHandler:(CDUnknownBlockType)arg4 error:(id *)arg5;	// IMP=0x000000000002c055
- (_Bool)executeSQL:(id)arg1 withStatementPreparationBlock:(CDUnknownBlockType)arg2 transient:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000002bfb5
- (_Bool)executeSQL:(id)arg1 withStatementPreparationBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x000000000002bf9d
- (_Bool)executeSQL:(id)arg1 withBindings:(id)arg2 transient:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000002beb4
- (_Bool)executeSQL:(id)arg1 withBindings:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002be9c
- (id)_statementForSQL:(id)arg1 transient:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000002bda5
- (_Bool)executeSQL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002bd89
- (_Bool)rollbackTransactionWithError:(id *)arg1;	// IMP=0x000000000002bd6d
- (_Bool)commitTransactionWithError:(id *)arg1;	// IMP=0x000000000002bd51
- (_Bool)beginTransactionWithError:(id *)arg1;	// IMP=0x000000000002bd35
@property(readonly, nonatomic) int countOfRecordsModifiedByLastQuery;
@property(readonly, nonatomic) long long lastInsertedRowID;
- (_Bool)setBusyTimeout:(double)arg1 error:(id *)arg2;	// IMP=0x000000000002bbbc
- (_Bool)vacuumWithError:(id *)arg1;	// IMP=0x000000000002bba0
- (_Bool)enableForeignKeysWithError:(id *)arg1;	// IMP=0x000000000002bb84
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x000000000002b8b7
- (id)description;	// IMP=0x000000000002b82f
- (void)dealloc;	// IMP=0x000000000002b785
- (id)init;	// IMP=0x000000000002b777
- (id)initWithURL:(id)arg1 readOnly:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000002b559

@end
