//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CPLPrequeliteRemappedDeletes
{
}

- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x0020000000061f1f
- (id)realScopedIdentifierForRemappedScopedIdentifier:(id)arg1;	// IMP=0x0010000000061db7
- (_Bool)discardDeleteForRemappedRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000061c2d
- (_Bool)scheduleDeleteForRemappedRecordWithScopedIdentifier:(id)arg1 realScopedIdentifier:(id)arg2 asap:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000000619f5
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x00100000000618b6
- (_Bool)initializeStorage;	// IMP=0x0010000000061802

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

