//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, WBSSQLiteDatabase;
@protocol OS_dispatch_queue, WBSSQLiteStoreDelegate;

@interface WBSSQLiteStore : NSObject
{
    long long _databaseLockingPolicy;	// 8 = 0x8
    long long _protectionType;	// 16 = 0x10
    int _databaseCoordinationLockFileDescriptor;	// 24 = 0x18
    _Bool _fallBackToMemoryStoreIfError;	// 28 = 0x1c
    NSURL *_databaseURL;	// 32 = 0x20
    id <WBSSQLiteStoreDelegate> _delegate;	// 40 = 0x28
    WBSSQLiteDatabase *_database;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_databaseQueue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000048684
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property(readonly, nonatomic) WBSSQLiteDatabase *database; // @synthesize database=_database;
@property(nonatomic) __weak id <WBSSQLiteStoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
- (void)_releaseDatabaseCoordinationLock;	// IMP=0x00000000000484dd
- (_Bool)_acquireDatabaseCoordinationLockForDatabaseURL:(id)arg1;	// IMP=0x00000000000482a9
- (id)_databaseCoordinationLockURLForDatabaseURL:(id)arg1;	// IMP=0x00000000000481f7
- (_Bool)_isDatabaseLocked;	// IMP=0x00000000000481ea
- (int)_migrateToSchemaVersion:(int)arg1;	// IMP=0x00000000000481df
- (int)_createFreshDatabaseSchema;	// IMP=0x00000000000481d4
- (int)_setDatabaseSchemaVersion:(int)arg1;	// IMP=0x0000000000048093
- (int)_migrateToCurrentSchemaVersionIfNecessary;	// IMP=0x0000000000047f03
- (void)_databaseWillClose;	// IMP=0x0000000000047efd
- (int)_currentSchemaVersion;	// IMP=0x0000000000047ef2
- (_Bool)_confirmDatabaseIntegrityIsOK;	// IMP=0x0000000000047e08
- (void)_closeDatabase;	// IMP=0x0000000000047d8c
- (void)savePendingChangesBeforeTermination;	// IMP=0x0000000000047d1c
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000047c6a
- (void)_handleOpenFailureWithStatus:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000047b4e
- (void)_openDatabase:(id)arg1 createIfNeeded:(_Bool)arg2 checkIntegrity:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000047308
- (void)openAndCheckIntegrity:(_Bool)arg1 createIfNeeded:(_Bool)arg2 fallBackToMemoryStoreIfError:(_Bool)arg3 lockingPolicy:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000047169
@property(readonly, nonatomic) _Bool isOpen;
- (void)dealloc;	// IMP=0x00000000000470bd
- (id)initWithURL:(id)arg1 protectionType:(long long)arg2;	// IMP=0x0000000000046f1e
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000046f09
- (id)init;	// IMP=0x0000000000046f00

@end
