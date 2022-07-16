//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOSimpleTileRequesterOperationDelegate-Protocol.h>
#import <GeoServices/GEOSimpleTileRequesterSubclass-Protocol.h>

@class GEODataSession, GEOTileKeyMap, GEOTileRequestBalancer, NSMutableArray, NSObject, NSString, geo_isolater;
@protocol OS_dispatch_queue, OS_os_activity, OS_voucher;

@interface GEOSimpleTileRequester <GEOSimpleTileRequesterSubclass, GEOSimpleTileRequesterOperationDelegate>
{
    GEOTileRequestBalancer *_balancer;	// 64 = 0x40
    NSMutableArray *_running;	// 72 = 0x48
    NSMutableArray *_errors;	// 80 = 0x50
    NSObject<OS_os_activity> *_activity;	// 88 = 0x58
    GEODataSession *_dataSession;	// 96 = 0x60
    unsigned int _qos;	// 104 = 0x68
    struct GEOOnce_s _didStart;	// 108 = 0x6c
    struct GEOOnce_s _didCallDelegate;	// 116 = 0x74
    _Bool _cancelled;	// 124 = 0x7c
    _Bool _hasRemainingTileKeys;	// 125 = 0x7d
    GEOTileKeyMap *_signpostIDs;	// 128 = 0x80
    GEOTileKeyMap *_tileLoaderCreateTimes;	// 136 = 0x88
    unsigned int _highestRunningOperationPriority;	// 144 = 0x90
    geo_isolater *_highestRunningOperationPriorityIsolation;	// 152 = 0x98
    GEOTileKeyMap *_priorities;	// 160 = 0xa0
    _Bool _includeReasonHeader;	// 168 = 0xa8
    _Bool _allowTLSSessionTicketUse;	// 169 = 0xa9
    NSObject<OS_voucher> *_voucher;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000000002aeaaa
@property(readonly, nonatomic) GEOTileRequestBalancer *balancer; // @synthesize balancer=_balancer;
@property(readonly, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
- (void)dealloc;	// IMP=0x00000000002ae8e2
- (void)reprioritizeKey:(const struct _GEOTileKey *)arg1 newPriority:(unsigned int)arg2;	// IMP=0x00000000002ae42b
- (void)cancelKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002ade7e
- (void)failedLoadingTileForKey:(struct _GEOTileKey)arg1 baseOperation:(id)arg2 error:(id)arg3;	// IMP=0x00000000002ade78
- (void)finishedLoadingTileForKey:(struct _GEOTileKey)arg1 baseOperation:(id)arg2;	// IMP=0x00000000002ade72
- (void)cancel;	// IMP=0x00000000002ada51
- (void)_cleanup;	// IMP=0x00000000002ad7fe
- (void)_updateRunningCountAndCheckIfDone;	// IMP=0x00000000002ab7d2
- (void)start;	// IMP=0x00000000002aac7e
@property(readonly, nonatomic) unsigned int highestRunningOperationPriority;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
- (id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 dataSession:(id)arg4;	// IMP=0x00000000002aa9c5
- (id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000002aa9b0
- (_Bool)shouldParticipateInBalancerScheduling;	// IMP=0x00000000002af55d
- (void)didStartOperationsForAllTileKeys;	// IMP=0x00000000002af451
- (unsigned long long)estimatedNumberOfOperationsForTileKey:(struct _GEOTileKey)arg1;	// IMP=0x00000000002af434
- (void)createAndStartOperationsForTileKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002aeb63
- (CDUnion_23a7df3d)tileSetForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002af914
- (unsigned int)tileEditionForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002af8d0
- (id)mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2;	// IMP=0x00000000002af8c0
- (id)mergeBaseTileEtag:(id)arg1 withLocalizationTileEtag:(id)arg2;	// IMP=0x00000000002af753
- (_Bool)needsLocalizationForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002af720
- (id)localizationURLForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002af718
- (id)newXPCDataRequestForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002af710
- (CDStruct_d1a7ebee)kindForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002af6c4
- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002af6ac
- (id)additionalAnalyticsStatesForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002af6a4
- (_Bool)shouldReportAnalyticsOnSuccessForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002af692
- (_Bool)shouldReportAnalyticsOnErrorWithRetryForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002af68a
- (_Bool)shouldReportAnalyticsOnErrorForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002af678
- (_Bool)_shouldReportAnalyticsForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002af5b7
- (_Bool)downloadsDataToDisk;	// IMP=0x00000000002af5af
- (id)additionalNetworkEventAnalyticsStatesForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002b0f53
- (_Bool)shouldReportSuccessNetworkEventForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002b0f41
- (_Bool)shouldReportErrorNetworkEventWithRertryForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002b0f2f
- (_Bool)shouldReportErrorNetworkEventForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002b0f1d
- (_Bool)shouldDownloadToDiskForTileKey:(const struct _GEOTileKey *)arg1 estimatedDataSize:(unsigned long long)arg2;	// IMP=0x00000000002b0f15
- (_Bool)tileDataIsCacheableForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002b0f08
- (_Bool)shouldAllowEmptyDataForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000002b0f00
- (int)checksumMethodForIncomingTileDataWithKey:(struct _GEOTileKey *)arg1;	// IMP=0x00000000002b0ef8
- (id)verifyDataIntegrity:(id)arg1 checksumMethod:(int)arg2;	// IMP=0x00000000002b0c60
- (void)_operationFailed:(id)arg1 error:(id)arg2;	// IMP=0x00000000002b0692
- (void)operationFailed:(id)arg1 error:(id)arg2;	// IMP=0x00000000002b05d3
- (void)_operationFinished:(id)arg1;	// IMP=0x00000000002afa91
- (void)operationFinished:(id)arg1;	// IMP=0x00000000002af9f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

