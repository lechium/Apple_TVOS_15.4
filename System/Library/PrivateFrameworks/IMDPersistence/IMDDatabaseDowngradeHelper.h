//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IMDDatabaseDowngradeHelper : NSObject
{
    _Bool _inTransaction;	// 8 = 0x8
    struct sqlite3 *_database;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
    long long _downgradesToVersion;	// 32 = 0x20
    NSArray *_tableNames;	// 40 = 0x28
    NSArray *_createIndexesSQL;	// 48 = 0x30
    NSArray *_createTablesSQL;	// 56 = 0x38
    NSArray *_createTriggersSQL;	// 64 = 0x40
}

@property(retain, nonatomic) NSArray *createTriggersSQL; // @synthesize createTriggersSQL=_createTriggersSQL;
@property(retain, nonatomic) NSArray *createTablesSQL; // @synthesize createTablesSQL=_createTablesSQL;
@property(retain, nonatomic) NSArray *createIndexesSQL; // @synthesize createIndexesSQL=_createIndexesSQL;
@property(retain, nonatomic) NSArray *tableNames; // @synthesize tableNames=_tableNames;
@property(readonly, nonatomic) long long downgradesToVersion; // @synthesize downgradesToVersion=_downgradesToVersion;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) struct sqlite3 *database; // @synthesize database=_database;
- (_Bool)close:(CDUnknownBlockType)arg1;	// IMP=0x00000000000038da
- (_Bool)open:(CDUnknownBlockType)arg1;	// IMP=0x000000000000354d
- (id)errorFromResult:(int)arg1 query:(id)arg2;	// IMP=0x000000000000330c
- (_Bool)importDataFromWhitetailDatabaseWithSqlOperation:(struct IMDSqlOperation *)arg1 resultBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002b6e
- (_Bool)cloneTableContents:(id)arg1 withOperation:(struct IMDSqlOperation *)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000027d6
- (_Bool)writeDatabaseVersion:(long long)arg1 resultBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002783
- (_Bool)revertTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002677
- (_Bool)commitTransaction:(CDUnknownBlockType)arg1;	// IMP=0x000000000000256b
- (_Bool)beginTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002541
@property(readonly, nonatomic) _Bool isOpen;
- (_Bool)createTriggers:(CDUnknownBlockType)arg1;	// IMP=0x00000000000024f3
- (_Bool)createIndexes:(CDUnknownBlockType)arg1;	// IMP=0x00000000000024b3
- (_Bool)createTables:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002473
- (_Bool)runArrayOfQueries:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002342
- (_Bool)runSimpleQuery:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000226b
- (void)dealloc;	// IMP=0x000000000000220c
- (id)initWithPath:(id)arg1 tableNames:(id)arg2 createTablesSQL:(id)arg3 createIndexesSQL:(id)arg4 createTriggersSQL:(id)arg5 downgradesToVersion:(long long)arg6;	// IMP=0x0000000000002152
- (_Bool)readRowCountForTable:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003c11
- (_Bool)readDatabaseVersion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003bc1
- (_Bool)_readIntegerFromQuery:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003ab3

@end

