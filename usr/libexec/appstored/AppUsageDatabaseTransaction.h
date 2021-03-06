//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SQLiteConnection;

@interface AppUsageDatabaseTransaction
{
    SQLiteConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000023a7b8
@property(readonly) SQLiteConnection *connection; // @synthesize connection=_connection;
- (id)importAppUsageSessions:(id)arg1 error:(id *)arg2;	// IMP=0x001000000023a1b4
- (id)importAppMetadata:(id)arg1 class:(Class)arg2 error:(id *)arg3;	// IMP=0x0010000000239e85
- (id)importAppMetricsEvents:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000239b5d
- (id)importAppEvents:(id)arg1 class:(Class)arg2 error:(id *)arg3;	// IMP=0x001000000023982e
- (id)importAccountEvent:(id)arg1;	// IMP=0x00100000002396ba
- (id)importClusterMappings:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000238e14
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000238da6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

