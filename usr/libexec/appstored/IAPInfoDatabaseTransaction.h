//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SQLiteConnection;

@interface IAPInfoDatabaseTransaction
{
}

- (_Bool)_setValue:(id)arg1 forDatabaseProperty:(id)arg2 withError:(id *)arg3;	// IMP=0x002000000000a01c
- (_Bool)setLastUpdatedTimestamp:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x0010000000009f59
- (_Bool)setRevision:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x0010000000009e8b
- (_Bool)removeAllIAPsForAccountID:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000009da0
- (_Bool)removeAllIAPsWithError:(id *)arg1;	// IMP=0x0010000000009d46
- (_Bool)insertIAPs:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x0010000000009689
- (_Bool)deleteIAPs:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x0010000000009224

// Remaining properties
@property(readonly) SQLiteConnection *connection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
