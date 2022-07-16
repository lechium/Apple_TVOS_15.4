//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLEngineScopeStorage, CPLEngineStore, NSError, NSString;
@protocol CPLEngineTransportFetchScopeListChangesTask;

@interface CPLPullScopesTask
{
    _Bool _ignoreNewChanges;	// 8 = 0x8
    CPLEngineStore *_store;	// 16 = 0x10
    CPLEngineScopeStorage *_scopes;	// 24 = 0x18
    NSString *_clientCacheIdentifier;	// 32 = 0x20
    id <CPLEngineTransportFetchScopeListChangesTask> _fetchChangesTask;	// 40 = 0x28
    NSError *_badError;	// 48 = 0x30
    unsigned long long _deletedScopeCount;	// 56 = 0x38
    unsigned long long _newScopeCount;	// 64 = 0x40
    unsigned long long _modifiedScopeCount;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000045925
- (void)cancel;	// IMP=0x00000000000458a3
- (void)launch;	// IMP=0x0000000000045821
- (void)_handleFinalScopeListSyncAnchor:(id)arg1 error:(id)arg2;	// IMP=0x0000000000045749
- (void)_handleChangedOrNewScopes:(id)arg1 deletedScopeIdentifiers:(id)arg2 newScopeListSyncAnchor:(id)arg3;	// IMP=0x0000000000045644
- (_Bool)_checkShouldHandleBatchInTransaction:(id)arg1;	// IMP=0x000000000004555a
- (id)taskIdentifier;	// IMP=0x000000000004554d
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2;	// IMP=0x0000000000045486

@end

