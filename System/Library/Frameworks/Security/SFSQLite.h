//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableDictionary, NSString;
@protocol SFSQLiteDelegate;

@interface SFSQLite : NSObject
{
    id <SFSQLiteDelegate> _delegate;	// 8 = 0x8
    NSString *_path;	// 16 = 0x10
    NSString *_schema;	// 24 = 0x18
    NSString *_schemaVersion;	// 32 = 0x20
    NSMutableDictionary *_statementsBySQL;	// 40 = 0x28
    NSString *_objectClassPrefix;	// 48 = 0x30
    long long _synchronousMode;	// 56 = 0x38
    int _userVersion;	// 64 = 0x40
    struct sqlite3 *_db;	// 72 = 0x48
    unsigned long long _openCount;	// 80 = 0x50
    NSDateFormatter *_dateFormatter;	// 88 = 0x58
    _Bool _hasMigrated;	// 96 = 0x60
    _Bool _corrupt;	// 97 = 0x61
    _Bool _traced;	// 98 = 0x62
    NSDateFormatter *_oldDateFormatter;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000000bed4
@property(retain, nonatomic) NSDateFormatter *oldDateFormatter; // @synthesize oldDateFormatter=_oldDateFormatter;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(readonly, nonatomic) NSMutableDictionary *statementsBySQL; // @synthesize statementsBySQL=_statementsBySQL;
@property(nonatomic) _Bool corrupt; // @synthesize corrupt=_corrupt;
@property(nonatomic) unsigned long long openCount; // @synthesize openCount=_openCount;
@property(nonatomic) struct sqlite3 *db; // @synthesize db=_db;
@property(nonatomic) _Bool traced; // @synthesize traced=_traced;
@property(readonly, nonatomic) _Bool hasMigrated; // @synthesize hasMigrated=_hasMigrated;
@property(nonatomic) long long synchronousMode; // @synthesize synchronousMode=_synchronousMode;
@property(nonatomic) int userVersion; // @synthesize userVersion=_userVersion;
@property(retain, nonatomic) NSString *objectClassPrefix; // @synthesize objectClassPrefix=_objectClassPrefix;
@property(readonly, nonatomic) NSString *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(readonly, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) id <SFSQLiteDelegate> delegate; // @synthesize delegate=_delegate;
- (int)autoVacuumSetting;	// IMP=0x000000000000bd52
- (int)dbUserVersion;	// IMP=0x000000000000bcc2
- (id)_tableNameForClass:(Class)arg1;	// IMP=0x000000000000bba9
- (void)deleteFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;	// IMP=0x000000000000bae1
- (void)deleteFrom:(id)arg1 matchingValues:(id)arg2;	// IMP=0x000000000000b815
- (long long)insertOrReplaceInto:(id)arg1 values:(id)arg2;	// IMP=0x000000000000b4e6
- (unsigned long long)selectCountFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;	// IMP=0x000000000000b438
- (id)selectAllFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;	// IMP=0x000000000000b423
- (void)update:(id)arg1 set:(id)arg2 where:(id)arg3 bindings:(id)arg4 limit:(id)arg5;	// IMP=0x000000000000b261
- (id)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4;	// IMP=0x000000000000b0a7
- (void)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 orderBy:(id)arg4 limit:(id)arg5 block:(CDUnknownBlockType)arg6;	// IMP=0x000000000000ae44
- (void)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 orderBy:(id)arg5 limit:(id)arg6 forEachRow:(CDUnknownBlockType)arg7;	// IMP=0x000000000000ab84
- (void)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 orderBy:(id)arg5 limit:(id)arg6 block:(CDUnknownBlockType)arg7;	// IMP=0x000000000000aace
- (id)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4;	// IMP=0x000000000000a8fe
- (id)select:(id)arg1 from:(id)arg2 mapEachRow:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a7ea
- (id)select:(id)arg1 from:(id)arg2;	// IMP=0x000000000000a7d2
- (id)columnNamesForTable:(id)arg1;	// IMP=0x000000000000a6d3
- (id)creationDate;	// IMP=0x000000000000a65b
- (void)removePropertyForKey:(id)arg1;	// IMP=0x000000000000a5c0
- (void)setDateProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000a505
- (id)datePropertyForKey:(id)arg1;	// IMP=0x000000000000a426
- (void)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000a240
- (id)propertyForKey:(id)arg1;	// IMP=0x000000000000a10f
- (void)dropAllTables;	// IMP=0x0000000000009fcc
- (id)allTableNames;	// IMP=0x0000000000009efd
- (void)removeAllStatements;	// IMP=0x0000000000009e99
- (id)statementForSQL:(id)arg1;	// IMP=0x0000000000009c2e
- (_Bool)executeSQL:(id)arg1 arguments:(struct __va_list_tag [1])arg2;	// IMP=0x0000000000009a98
- (_Bool)executeSQL:(id)arg1;	// IMP=0x00000000000099f0
- (int)changes;	// IMP=0x0000000000009974
- (long long)lastInsertRowID;	// IMP=0x00000000000098f6
- (void)vacuum;	// IMP=0x00000000000098db
- (void)analyze;	// IMP=0x00000000000098c0
- (void)rollback;	// IMP=0x00000000000098a5
- (void)end;	// IMP=0x000000000000988a
- (void)begin;	// IMP=0x000000000000986f
- (void)remove;	// IMP=0x0000000000009611
- (void)close;	// IMP=0x00000000000094e7
- (void)open;	// IMP=0x00000000000093c2
- (_Bool)openWithError:(id *)arg1;	// IMP=0x0000000000008995
- (void)attemptProperDatabasePermissions;	// IMP=0x000000000000872c
@property(readonly, nonatomic) _Bool isOpen;
- (id)_createSchemaHash;	// IMP=0x0000000000008603
- (id)_synchronousModeString;	// IMP=0x00000000000085b5
- (void)dealloc;	// IMP=0x00000000000084e3
- (id)initWithPath:(id)arg1 schema:(id)arg2;	// IMP=0x00000000000082d0

@end

