//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SQLiteConnection;

@interface StoreKitMessagesDatabaseTransaction
{
}

- (_Bool)removeRevocationInfoForUser:(id)arg1 inApp:(id)arg2;	// IMP=0x00200000000e4798
- (_Bool)addRevocationInfo:(id)arg1;	// IMP=0x00100000000e4606
- (_Bool)removeMessageInfoForUser:(id)arg1 inApp:(id)arg2 withError:(id *)arg3;	// IMP=0x00100000000e44a3
- (_Bool)addMessageInfo:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000000e42df

// Remaining properties
@property(readonly) SQLiteConnection *connection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

