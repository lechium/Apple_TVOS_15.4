//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PHAServiceOperationHandling-Protocol.h>

@class MARootProgressReporter, NSMutableArray, NSString, PGManager, PGProgressCallChecker, PHPhotoLibrary;
@protocol OS_dispatch_queue, OS_os_log, PHAJobTimeHandlerProtocol, PHAStorytellingOnDemandTaskHandlerDelegate;

@interface PHAStorytellingOnDemandTaskHandler : NSObject <PHAServiceOperationHandling>
{
    PGManager *_graphManager;	// 8 = 0x8
    PHPhotoLibrary *_photoLibrary;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_executionQueue;	// 24 = 0x18
    NSMutableArray *_operationsToRun;	// 32 = 0x20
    MARootProgressReporter *_onDemandTaskProgressReporter;	// 40 = 0x28
    PGProgressCallChecker *_progressCallChecker;	// 48 = 0x30
    _Bool _isShutdown;	// 56 = 0x38
    struct os_unfair_lock_s _lock;	// 60 = 0x3c
    NSObject<OS_os_log> *_loggingConnection;	// 64 = 0x40
    id <PHAJobTimeHandlerProtocol> _jobTimeHandler;	// 72 = 0x48
    id <PHAStorytellingOnDemandTaskHandlerDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000066947
@property(nonatomic) __weak id <PHAStorytellingOnDemandTaskHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak id <PHAJobTimeHandlerProtocol> jobTimeHandler; // @synthesize jobTimeHandler=_jobTimeHandler;
@property(readonly, nonatomic) MARootProgressReporter *onDemandTaskProgressReporter; // @synthesize onDemandTaskProgressReporter=_onDemandTaskProgressReporter;
- (void)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000066756
- (void)requestAssetRevGeocodingWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000066601
- (void)requestHighlightCollectionEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000006648a
- (void)requestHighlightEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000065f26
- (void)requestEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000065769
- (void)cacheCPAnalyticsPropertiesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000065607
- (void)requestSyndicationProcessingWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000652a4
- (void)requestGenerateQuestionsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000064e4a
- (void)reportMetricsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000064c95
- (void)generateSuggestionsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000064ad3
- (void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000064458
- (void)requestOnDemandTasksWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000064020
- (void)rebuildGraphWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000063925
- (void)shutdown;	// IMP=0x0000000000063895
- (void)forceCancellationIfShutdown;	// IMP=0x0000000000063877
@property(readonly, nonatomic) _Bool isQuiescent;
- (void)dequeueOperationsIfNeeded;	// IMP=0x00000000000637e5
- (id)stringForQoS:(unsigned int)arg1;	// IMP=0x0000000000063780
- (_Bool)hasRemainingOperations;	// IMP=0x0000000000063744
- (id)nextOperation;	// IMP=0x00000000000636dd
- (void)handleOperation:(id)arg1;	// IMP=0x0000000000063639
- (id)initWithGraphManager:(id)arg1 jobTimeHandler:(id)arg2;	// IMP=0x00000000000634c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
