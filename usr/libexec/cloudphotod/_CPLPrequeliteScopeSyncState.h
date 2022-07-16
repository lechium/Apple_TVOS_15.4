//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLPrequeliteVariable;

@interface _CPLPrequeliteScopeSyncState
{
    CPLPrequeliteVariable *_featureVersionVar;	// 8 = 0x8
    CPLPrequeliteVariable *_droppedSomeRecordsVar;	// 16 = 0x10
    CPLPrequeliteVariable *_transientSyncAnchorVar;	// 24 = 0x18
    CPLPrequeliteVariable *_syncAnchorVar;	// 32 = 0x20
    CPLPrequeliteVariable *_stagedSyncAnchorVar;	// 40 = 0x28
    CPLPrequeliteVariable *_hasFetchedInitialSyncAnchorVar;	// 48 = 0x30
    CPLPrequeliteVariable *_initialSyncAnchorVar;	// 56 = 0x38
    CPLPrequeliteVariable *_classForInitialQueryVar;	// 64 = 0x40
    CPLPrequeliteVariable *_uploadTransportGroupVar;	// 72 = 0x48
    CPLPrequeliteVariable *_downloadTransportGroupVar;	// 80 = 0x50
    CPLPrequeliteVariable *_lastClearedPushVar;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000028910
@property(readonly, nonatomic) CPLPrequeliteVariable *lastClearedPushVar; // @synthesize lastClearedPushVar=_lastClearedPushVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *downloadTransportGroupVar; // @synthesize downloadTransportGroupVar=_downloadTransportGroupVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *uploadTransportGroupVar; // @synthesize uploadTransportGroupVar=_uploadTransportGroupVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *classForInitialQueryVar; // @synthesize classForInitialQueryVar=_classForInitialQueryVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *initialSyncAnchorVar; // @synthesize initialSyncAnchorVar=_initialSyncAnchorVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *hasFetchedInitialSyncAnchorVar; // @synthesize hasFetchedInitialSyncAnchorVar=_hasFetchedInitialSyncAnchorVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *stagedSyncAnchorVar; // @synthesize stagedSyncAnchorVar=_stagedSyncAnchorVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *syncAnchorVar; // @synthesize syncAnchorVar=_syncAnchorVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *transientSyncAnchorVar; // @synthesize transientSyncAnchorVar=_transientSyncAnchorVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *droppedSomeRecordsVar; // @synthesize droppedSomeRecordsVar=_droppedSomeRecordsVar;
@property(readonly, nonatomic) CPLPrequeliteVariable *featureVersionVar; // @synthesize featureVersionVar=_featureVersionVar;
- (id)init;	// IMP=0x0010000000028247

@end
