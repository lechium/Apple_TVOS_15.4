//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccountsDaemon/ACDDatabaseConnectionDelegate-Protocol.h>
#import <AccountsDaemon/ACDDatabaseProtocol-Protocol.h>

@class NSDictionary, NSPersistentStoreCoordinator, NSString, NSURL;

@interface ACDDatabase : NSObject <ACDDatabaseConnectionDelegate, ACDDatabaseProtocol>
{
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 8 = 0x8
    NSDictionary *_storeOptions;	// 16 = 0x10
    NSURL *_databaseURL;	// 24 = 0x18
}

+ (id)new;	// IMP=0x0000000000021524
- (void).cxx_destruct;	// IMP=0x00000000000237ec
@property(readonly, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
- (id)createConnection;	// IMP=0x000000000002378c
- (void)databaseConnection:(id)arg1 encounteredUnrecoverableError:(id)arg2;	// IMP=0x000000000002330f
@property(readonly, copy) NSString *description;
- (_Bool)_persistentStoreCoodinator_resetPersistentStoreCoordinatorWithError:(id *)arg1;	// IMP=0x000000000002317e
- (_Bool)_performBackupToURL:(id)arg1 unverifiedBackupURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000022c04
- (_Bool)_shouldResetPersistentStoreAfterError:(id)arg1;	// IMP=0x000000000002296f
- (id)_addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000022671
- (_Bool)resetReturningError:(id *)arg1;	// IMP=0x00000000000224d7
- (_Bool)restoreFromBackupReturningError:(id *)arg1;	// IMP=0x00000000000220d2
- (_Bool)performBackupReturningError:(id *)arg1;	// IMP=0x0000000000021e7d
- (id)_unverifiedBackupURL;	// IMP=0x0000000000021d85
- (id)_backupURL;	// IMP=0x0000000000021c8d
- (id)initWithDatabaseURL:(id)arg1 storeOptions:(id)arg2;	// IMP=0x0000000000021670
- (id)initWithDatabaseURL:(id)arg1;	// IMP=0x0000000000021567
- (id)init;	// IMP=0x000000000002153c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

