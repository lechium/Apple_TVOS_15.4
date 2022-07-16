//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSMutableSet, NSString;

@interface CPLPrequeliteIDMapping
{
    NSMutableDictionary *_localToCloudScopedIdentifiersCache;	// 8 = 0x8
    NSMutableDictionary *_cloudToLocalScopedIdentifiersCache;	// 16 = 0x10
    NSMutableSet *_nonFinalLocalScopedIdentifiers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000049a5f
- (void)transactionDidFinish;	// IMP=0x0010000000049a1e
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x0010000000049909
- (id)scopeIndexColumnName;	// IMP=0x00100000000498fc
- (id)status;	// IMP=0x00100000000497a6
- (_Bool)resetAllFinalCloudIdentifiersForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000049610
- (_Bool)removeMappingForLocalScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000493a2
- (_Bool)addAddEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000490b9
- (_Bool)addDeleteEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000048ec7
- (_Bool)removeMappingForCloudScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000048c58
- (_Bool)hasPendingIdentifiers;	// IMP=0x0010000000048b84
- (_Bool)markAllPendingIdentifiersForScopeWithIdentifier:(id)arg1 asFinalWithError:(id *)arg2;	// IMP=0x00100000000489e3
- (_Bool)setFinalCloudScopedIdentifier:(id)arg1 forPendingCloudScopedIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000048742
- (_Bool)addCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(_Bool)arg3 direction:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0010000000048113
- (id)localScopedIdentifierForCloudScopedIdentifier:(id)arg1 isFinal:(_Bool *)arg2;	// IMP=0x0010000000047e0e
- (id)cloudScopedIdentifierForLocalScopedIdentifier:(id)arg1 isFinal:(_Bool *)arg2;	// IMP=0x0010000000047b07
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x00100000000478bc
- (_Bool)initializeStorage;	// IMP=0x00100000000477e2
- (void)_cacheLocalScopedIdentifier:(id)arg1 cloudScopedIdentifier:(id)arg2 isFinal:(_Bool)arg3;	// IMP=0x0010000000047724
- (void)_clearScopedIdentifiersCache;	// IMP=0x00100000000476ca
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0010000000047629

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end
