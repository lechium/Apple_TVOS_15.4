//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/CKSQLiteDB-Protocol.h>
#import <CloudKit/CKSQLiteDBConveniences-Protocol.h>

@class NSError, NSString;
@protocol CKSQLiteDelegate;

@interface CKSQLite : NSObject <CKSQLiteDB, CKSQLiteDBConveniences>
{
    struct os_unfair_lock_s _operationLock;	// 8 = 0x8
    _Atomic unsigned long long _operationThread;	// 16 = 0x10
    CDUnknownBlockType _errorHandlerBlock;	// 24 = 0x18
    _Bool _cancelled;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    long long _errorResponse;	// 48 = 0x30
    NSError *_invalidationError;	// 56 = 0x38
    _Bool _needsMarkCorrupt;	// 64 = 0x40
    _Bool _needsRemove;	// 65 = 0x41
    _Bool _hasMigrated;	// 66 = 0x42
    _Bool _shouldVacuum;	// 67 = 0x43
    _Bool _traced;	// 68 = 0x44
    _Bool _invalid;	// 69 = 0x45
    int _userVersion;	// 72 = 0x48
    NSString *_path;	// 80 = 0x50
    NSString *_schema;	// 88 = 0x58
    NSString *_schemaVersion;	// 96 = 0x60
    NSString *_objectClassPrefix;	// 104 = 0x68
    long long _synchronousMode;	// 112 = 0x70
    CDUnknownBlockType _invalidationHandler;	// 120 = 0x78
    id <CKSQLiteDelegate> _delegate;	// 128 = 0x80
    struct sqlite3 *_db;	// 136 = 0x88
    unsigned long long _openCount;	// 144 = 0x90
}

+ (id)equalityClauseAndBindingsForDict:(id)arg1;	// IMP=0x000000000005bda3
- (void).cxx_destruct;	// IMP=0x000000000005f08b
@property(nonatomic) unsigned long long openCount; // @synthesize openCount=_openCount;
@property(nonatomic) struct sqlite3 *db; // @synthesize db=_db;
@property(retain, nonatomic) id <CKSQLiteDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property _Bool invalid; // @synthesize invalid=_invalid;
@property(nonatomic) _Bool traced; // @synthesize traced=_traced;
@property(nonatomic) _Bool shouldVacuum; // @synthesize shouldVacuum=_shouldVacuum;
@property(readonly, nonatomic) _Bool hasMigrated; // @synthesize hasMigrated=_hasMigrated;
@property(nonatomic) long long synchronousMode; // @synthesize synchronousMode=_synchronousMode;
@property(nonatomic) int userVersion; // @synthesize userVersion=_userVersion;
@property(retain, nonatomic) NSString *objectClassPrefix; // @synthesize objectClassPrefix=_objectClassPrefix;
@property(readonly, nonatomic) NSString *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(readonly, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void)willCreateDatabase;	// IMP=0x000000000005ef8c
- (int)dbUserVersion;	// IMP=0x000000000005ee3c
- (id)_boxedValue:(id)arg1 forObjcCProperty:(id)arg2;	// IMP=0x000000000005ea13
- (id)_boxedPropertyDictionary:(id)arg1 forObjCClass:(id)arg2;	// IMP=0x000000000005e8dc
- (void)updateAllObjectsOfClass:(Class)arg1 set:(id)arg2 where:(id)arg3 bindings:(id)arg4;	// IMP=0x000000000005e825
- (id)selectObjectOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3;	// IMP=0x000000000005e727
- (void)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3 orderBy:(id)arg4 limit:(id)arg5 block:(CDUnknownBlockType)arg6;	// IMP=0x000000000005e4d8
- (id)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3;	// IMP=0x000000000005e4c3
- (id)selectAllObjectsOfClass:(Class)arg1;	// IMP=0x000000000005e4a9
- (id)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4;	// IMP=0x000000000005df3c
- (int)deleteAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3;	// IMP=0x000000000005dc16
- (_Bool)deleteExactObject:(id)arg1;	// IMP=0x000000000005db51
- (long long)insertOrReplaceObject:(id)arg1;	// IMP=0x000000000005daae
- (id)_tableNameForClass:(Class)arg1;	// IMP=0x000000000005d9ff
- (void)deleteFrom:(id)arg1 matchingValues:(id)arg2;	// IMP=0x000000000005d732
- (void)deleteFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;	// IMP=0x000000000005d5eb
- (long long)upsertInto:(id)arg1 values:(id)arg2 onConflict:(id)arg3 doUpdate:(id)arg4 where:(id)arg5;	// IMP=0x000000000005d052
- (long long)insertOrReplaceInto:(id)arg1 values:(id)arg2;	// IMP=0x000000000005cc10
- (long long)selectCountFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;	// IMP=0x000000000005cb4e
- (void)update:(id)arg1 set:(id)arg2 where:(id)arg3 bindings:(id)arg4 limit:(id)arg5;	// IMP=0x000000000005c8c9
- (id)selectAllFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;	// IMP=0x000000000005c8b4
- (id)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4;	// IMP=0x000000000005c887
- (id)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 orderBy:(id)arg5;	// IMP=0x000000000005c86b
- (id)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4;	// IMP=0x000000000005c849
- (id)select:(id)arg1 from:(id)arg2;	// IMP=0x000000000005c821
- (id)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 orderBy:(id)arg5 limit:(id)arg6;	// IMP=0x000000000005c436
- (void)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 orderBy:(id)arg4 limit:(id)arg5 block:(CDUnknownBlockType)arg6;	// IMP=0x000000000005c408
- (void)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 orderBy:(id)arg5 limit:(id)arg6 block:(CDUnknownBlockType)arg7;	// IMP=0x000000000005c3d3
- (void)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 orderBy:(id)arg5 limit:(id)arg6 offset:(id)arg7 block:(CDUnknownBlockType)arg8;	// IMP=0x000000000005c060
- (id)columnNamesForTable:(id)arg1;	// IMP=0x000000000005ba9a
- (id)creationDate;	// IMP=0x000000000005ba15
- (void)removePropertyForKey:(id)arg1;	// IMP=0x000000000005b860
- (void)setDateProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000005b79a
- (id)datePropertyForKey:(id)arg1;	// IMP=0x000000000005b6fb
- (void)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000005b4ad
- (id)propertyForKey:(id)arg1;	// IMP=0x000000000005b299
- (void)_dropAllTables;	// IMP=0x000000000005b0d8
- (id)allTableNames;	// IMP=0x000000000005ae5f
- (void)usingStatementForSQL:(id)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000005ad20
- (void)executeSQL:(id)arg1 arguments:(struct __va_list_tag [1])arg2;	// IMP=0x000000000005ac1c
- (void)executeSQL:(id)arg1;	// IMP=0x000000000005ab7e
- (int)changes;	// IMP=0x000000000005ab45
- (long long)lastInsertRowID;	// IMP=0x000000000005ab2b
- (_Bool)remove;	// IMP=0x000000000005a627
- (void)close;	// IMP=0x000000000005a5d7
- (void)_forceClosed_unlocked;	// IMP=0x000000000005a5a5
- (void)_forceClosed_locked;	// IMP=0x000000000005a3b4
- (_Bool)openWithError:(id *)arg1;	// IMP=0x0000000000059aaa
- (id)_prepareDatabase;	// IMP=0x00000000000590ce
- (id)handleDatabaseError:(id)arg1;	// IMP=0x0000000000059021
- (id)handleDatabaseError:(id)arg1 args:(struct __va_list_tag [1])arg2;	// IMP=0x0000000000058f80
- (id)handleError:(id)arg1;	// IMP=0x0000000000058dd3
- (id)performDatabaseOperation:(CDUnknownBlockType)arg1;	// IMP=0x0000000000058dbf
- (id)performDatabaseOperation:(CDUnknownBlockType)arg1 withErrorHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005882f
- (void)_recursiveOperationLock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000587bc
- (id)_performDatabaseOperation_locked:(CDUnknownBlockType)arg1 withErrorHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000585ab
@property(readonly, nonatomic) _Bool isCorrupt;
- (void)markCorrupt;	// IMP=0x00000000000582ef
- (void)_periodicVacuum;	// IMP=0x00000000000581c5
- (void)vacuum;	// IMP=0x0000000000058013
@property(readonly, nonatomic) _Bool isOpen;
- (id)sqlErrorWithMessage:(id)arg1;	// IMP=0x0000000000057e7d
- (void)assertInOperation:(SEL)arg1;	// IMP=0x0000000000057d98
- (void)dealloc;	// IMP=0x0000000000057d43
- (id)initWithPath:(id)arg1 schema:(id)arg2;	// IMP=0x0000000000057aee

@end

