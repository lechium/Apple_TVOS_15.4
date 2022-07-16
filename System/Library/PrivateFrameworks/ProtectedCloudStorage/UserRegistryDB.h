//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log;

@interface UserRegistryDB : NSObject
{
    struct sqlite3 *_sqliteHandle;	// 8 = 0x8
    struct sqlite3_stmt *_recordIDStatment;	// 16 = 0x10
    struct sqlite3_stmt *_replaceStatment;	// 24 = 0x18
    struct sqlite3_stmt *_deleteStatment;	// 32 = 0x20
    struct sqlite3_stmt *_insertWatch;	// 40 = 0x28
    struct sqlite3_stmt *_updateWatch;	// 48 = 0x30
    struct sqlite3_stmt *_insertMirrorKey;	// 56 = 0x38
    struct sqlite3_stmt *_updateMirrorKey;	// 64 = 0x40
    struct sqlite3_stmt *_markMirrorKey;	// 72 = 0x48
    struct sqlite3_stmt *_deleteMirrorKeys;	// 80 = 0x50
    struct sqlite3_stmt *_resetCurrentMirrorKey;	// 88 = 0x58
    struct sqlite3_stmt *_insertEscrowKey;	// 96 = 0x60
    struct sqlite3_stmt *_updateEscrowKey;	// 104 = 0x68
    struct sqlite3_stmt *_deleteEscrowKey;	// 112 = 0x70
    struct sqlite3_stmt *_queryEscrowKey;	// 120 = 0x78
    struct sqlite3_stmt *_queryEscrowKeysAll;	// 128 = 0x80
    struct sqlite3_stmt *_insertWatchKey;	// 136 = 0x88
    struct sqlite3_stmt *_queryMissingKeys;	// 144 = 0x90
    struct sqlite3_stmt *_queryWatches;	// 152 = 0x98
    NSObject<OS_os_log> *_oslog;	// 160 = 0xa0
    NSString *_dsid;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000003e64a
@property(retain) NSString *dsid; // @synthesize dsid=_dsid;
@property(retain) NSObject<OS_os_log> *oslog; // @synthesize oslog=_oslog;
@property struct sqlite3_stmt *queryWatches; // @synthesize queryWatches=_queryWatches;
@property struct sqlite3_stmt *queryMissingKeys; // @synthesize queryMissingKeys=_queryMissingKeys;
@property struct sqlite3_stmt *insertWatchKey; // @synthesize insertWatchKey=_insertWatchKey;
@property struct sqlite3_stmt *queryEscrowKeysAll; // @synthesize queryEscrowKeysAll=_queryEscrowKeysAll;
@property struct sqlite3_stmt *queryEscrowKey; // @synthesize queryEscrowKey=_queryEscrowKey;
@property struct sqlite3_stmt *deleteEscrowKey; // @synthesize deleteEscrowKey=_deleteEscrowKey;
@property struct sqlite3_stmt *updateEscrowKey; // @synthesize updateEscrowKey=_updateEscrowKey;
@property struct sqlite3_stmt *insertEscrowKey; // @synthesize insertEscrowKey=_insertEscrowKey;
@property struct sqlite3_stmt *resetCurrentMirrorKey; // @synthesize resetCurrentMirrorKey=_resetCurrentMirrorKey;
@property struct sqlite3_stmt *deleteMirrorKeys; // @synthesize deleteMirrorKeys=_deleteMirrorKeys;
@property struct sqlite3_stmt *markMirrorKey; // @synthesize markMirrorKey=_markMirrorKey;
@property struct sqlite3_stmt *updateMirrorKey; // @synthesize updateMirrorKey=_updateMirrorKey;
@property struct sqlite3_stmt *insertMirrorKey; // @synthesize insertMirrorKey=_insertMirrorKey;
@property struct sqlite3_stmt *updateWatch; // @synthesize updateWatch=_updateWatch;
@property struct sqlite3_stmt *insertWatch; // @synthesize insertWatch=_insertWatch;
@property struct sqlite3_stmt *deleteStatment; // @synthesize deleteStatment=_deleteStatment;
@property struct sqlite3_stmt *replaceStatment; // @synthesize replaceStatment=_replaceStatment;
@property struct sqlite3_stmt *recordIDStatment; // @synthesize recordIDStatment=_recordIDStatment;
@property struct sqlite3 *sqliteHandle; // @synthesize sqliteHandle=_sqliteHandle;
- (id)missingKeysFromDevice:(id)arg1 type:(int)arg2;	// IMP=0x000000000003e2c0
- (id)syncDevices;	// IMP=0x000000000003e1d3
- (_Bool)syncedKeyToDevice:(id)arg1 type:(int)arg2 device:(id)arg3;	// IMP=0x000000000003e054
- (_Bool)updateSyncDevice:(id)arg1 seen:(id)arg2 version:(id)arg3;	// IMP=0x000000000003de6c
- (id)queryEscrowKeys;	// IMP=0x000000000003dd0d
- (id)queryEscrowKey:(id)arg1;	// IMP=0x000000000003dbab
- (_Bool)deleteEscrowKey:(id)arg1;	// IMP=0x000000000003dab6
- (_Bool)updateEscrowKey:(id)arg1 escrowBlob:(id)arg2;	// IMP=0x000000000003d95a
- (_Bool)setEscrowKey:(id)arg1 escrowBlob:(id)arg2;	// IMP=0x000000000003d758
- (_Bool)deleteMirrorKeys:(int)arg1;	// IMP=0x000000000003d6de
- (_Bool)updateMirrorKey:(id)arg1 service:(int)arg2 type:(int)arg3 newType:(int)arg4 current:(_Bool)arg5;	// IMP=0x000000000003d510
- (_Bool)markMirrorKey:(int)arg1 type:(int)arg2;	// IMP=0x000000000003d43a
- (_Bool)setMirrorKey:(id)arg1 service:(int)arg2 type:(int)arg3 publicIdentity:(id)arg4;	// IMP=0x000000000003d299
- (_Bool)deleteRecordID:(id)arg1;	// IMP=0x000000000003d1d7
- (_Bool)replaceRecordID:(id)arg1 data:(id)arg2 publicKey:(id)arg3;	// IMP=0x000000000003d1ba
- (id)getRecordIDData:(id)arg1;	// IMP=0x000000000003d1a3
- (_Bool)replaceConfigRecord:(id)arg1 data:(id)arg2;	// IMP=0x000000000003d185
- (id)getConfigData:(id)arg1;	// IMP=0x000000000003d171
- (_Bool)replaceRecord:(id)arg1 type:(int)arg2 data:(id)arg3 publicKey:(id)arg4;	// IMP=0x000000000003cfca
- (id)getData:(id)arg1 type:(int)arg2;	// IMP=0x000000000003ce8f
- (_Bool)endTransaction:(_Bool)arg1;	// IMP=0x000000000003ce63
- (_Bool)beginExclusiveTransaction;	// IMP=0x000000000003ce19
- (_Bool)deleteRecordAll;	// IMP=0x000000000003ccfe
- (_Bool)setupDatabase;	// IMP=0x000000000003c428
- (_Bool)prepare:(const char *)arg1 statement:(struct sqlite3_stmt **)arg2;	// IMP=0x000000000003c353
- (void)dealloc;	// IMP=0x000000000003c260
- (id)initWithDSID:(id)arg1;	// IMP=0x000000000003c191

@end
