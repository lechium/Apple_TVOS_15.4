//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICSQLiteConnection, NSString;

__attribute__((visibility("hidden")))
@interface ICPlayActivityTable : NSObject
{
    ICSQLiteConnection *_databaseConnection;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
}

+ (_Bool)_setupDatabase:(id)arg1;	// IMP=0x000000000010bd9d
+ (id)_propertiesDatabaseTableName;	// IMP=0x000000000010bd90
+ (id)_eventsDatabaseTableName;	// IMP=0x000000000010bd83
+ (id)_defaultDatabasePath;	// IMP=0x000000000010bcf3
+ (void)_migrateDatabaseFiles;	// IMP=0x000000000010bac1
- (void).cxx_destruct;	// IMP=0x000000000010b1b8
- (id)_valueForDatabasePropertyKey:(id)arg1;	// IMP=0x000000000010afbc
- (_Bool)_setValue:(id)arg1 forDatabasePropertyKey:(id)arg2;	// IMP=0x000000000010acc8
- (id)_revisionsIndexSetUsingPersisentIDGenerationBlock:(CDUnknownBlockType)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000010aacc
- (_Bool)_getPlayActivityEvents:(id *)arg1 relevantRevisionsIndexSet:(id *)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 shouldFilterStoreAccountID:(_Bool)arg6 additionalRevisionsIndexSet:(id)arg7 ignoredRevisionsIndexSet:(id)arg8 error:(id *)arg9;	// IMP=0x000000000010a502
- (id)revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg1;	// IMP=0x000000000010a44a
- (id)revisionsIndexSetForPlayActivityEvents:(id)arg1;	// IMP=0x000000000010a392
- (_Bool)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 returningError:(id *)arg2;	// IMP=0x000000000010a248
- (_Bool)getPlayActivityEvents:(id *)arg1 relevantRevisionsIndexSet:(id *)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 storeAccountID:(unsigned long long)arg5 additionalRevisionsIndexSet:(id)arg6 ignoredRevisionsIndexSet:(id)arg7 error:(id *)arg8;	// IMP=0x000000000010a20b
- (_Bool)getPlayActivityEvents:(id *)arg1 relevantRevisionsIndexSet:(id *)arg2 withStartRevision:(unsigned long long)arg3 endRevision:(unsigned long long)arg4 additionalRevisionsIndexSet:(id)arg5 ignoredRevisionsIndexSet:(id)arg6 error:(id *)arg7;	// IMP=0x000000000010a1ce
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000010a13f
- (_Bool)insertPlayActivityEvent:(id)arg1 withRevision:(unsigned long long)arg2 returningError:(id *)arg3;	// IMP=0x000000000010a01a
@property(readonly, copy, nonatomic) NSString *eventsRevisionVersionToken;
@property(nonatomic) unsigned long long currentEventsRevision;
- (_Bool)_removeDatabaseReturningError:(id *)arg1;	// IMP=0x0000000000109bd3
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x0000000000109683
- (id)init;	// IMP=0x000000000010966f

@end

