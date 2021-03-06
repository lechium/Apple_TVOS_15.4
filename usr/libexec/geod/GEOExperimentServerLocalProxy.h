//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOABAssignmentRequest, GEOABAssignmentResponse, GEOXPCActivity, NSString, geo_isolater;
@protocol GEOExperimentServerProxyDelegate;

@interface GEOExperimentServerLocalProxy : NSObject
{
    unsigned long long _stateCaptureHandle;	// 8 = 0x8
    id <GEOExperimentServerProxyDelegate> _delegate;	// 16 = 0x10
    GEOABAssignmentResponse *_experimentsInfo;	// 24 = 0x18
    struct os_unfair_lock_s _experimentsInfoLock;	// 32 = 0x20
    GEOABAssignmentRequest *_currentRequest;	// 40 = 0x28
    struct os_unfair_lock_s _currentRequestLock;	// 48 = 0x30
    GEOXPCActivity *_repeatingActivity;	// 56 = 0x38
    GEOXPCActivity *_refreshActivity;	// 64 = 0x40
    geo_isolater *_activityIsolater;	// 72 = 0x48
}

+ (void)_deleteExperimentInfoFromDisk;	// IMP=0x002000000000905e
+ (void)cancelOldActivities;	// IMP=0x0010000000005968
- (void).cxx_destruct;	// IMP=0x00200000000091d3
@property(nonatomic) __weak id <GEOExperimentServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;	// IMP=0x00100000000090cc
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;	// IMP=0x0010000000008fff
- (void)_debug_setBucketIdDictionaryRepresentation:(id)arg1;	// IMP=0x0010000000008dbd
- (void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)arg1;	// IMP=0x0010000000008d38
- (void)_debug_fetchAllAvailableExperiments:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008b74
- (void)_loadExperimentsConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x001000000000876e
- (void)forceUpdate:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007f4d
- (void)forceUpdate;	// IMP=0x0010000000007f39
- (void)_writeExperimentInfoToDisk:(id)arg1;	// IMP=0x0010000000007c9e
- (void)_updateIfNecessary;	// IMP=0x0010000000007ba0
- (void)_notifyExperimentsInfoChanged:(id)arg1 current:(id)arg2;	// IMP=0x0010000000007612
- (_Bool)_removeOldExperimentsInfoIfNecessary:(_Bool)arg1;	// IMP=0x00100000000071c7
- (void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;	// IMP=0x001000000000712c
@property(readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;
- (void)_executeRefreshWithinTime:(double)arg1;	// IMP=0x0010000000006ca8
- (void)_setupRefreshActivity;	// IMP=0x0010000000006787
- (void)abAssignUUIDWithSyncCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000066f3
- (void)abAssignUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000066e1
- (void)refreshDatasetABStatus:(id)arg1;	// IMP=0x0010000000005f8a
- (void)dealloc;	// IMP=0x0010000000005ec2
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000000059aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

