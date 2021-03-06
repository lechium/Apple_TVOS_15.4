//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKDatabaseConnection, NSString;

@interface GKDelayedSetPlayerStatusCacheWriter : NSObject
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
}

+ (id)writerWithDatabaseConnection:(id)arg1;	// IMP=0x00200000000a909f
- (void).cxx_destruct;	// IMP=0x00200000000aa174
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a9710
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;	// IMP=0x00100000000a9383
- (void)bindParametersForGetOldStatusesStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;	// IMP=0x00100000000a936b
- (id)getOldStatusesSQL;	// IMP=0x00100000000a9342
- (void)bindParametersForDeleteOldStatusesStatement:(struct sqlite3_stmt *)arg1 requestsRowID:(long long)arg2;	// IMP=0x00100000000a932b
- (id)deleteOldStatusesSQL;	// IMP=0x00100000000a9302
- (void)bindParametersForStatusStatement:(struct sqlite3_stmt *)arg1 status:(id)arg2 requestsRowID:(long long)arg3;	// IMP=0x00100000000a929b
- (id)statusInsertSQL;	// IMP=0x00100000000a926b
- (void)bindParametersForRequestsStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;	// IMP=0x00100000000a91ce
- (id)requestsInsertSQL;	// IMP=0x00100000000a919e
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (id)initWithDatabaseConnection:(id)arg1;	// IMP=0x00100000000a90fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

