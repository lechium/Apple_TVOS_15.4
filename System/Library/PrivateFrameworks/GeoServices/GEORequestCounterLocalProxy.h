//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEORequestCounterProtocol-Protocol.h>

@class GEORequestCounterPersistence, NSString;

@interface GEORequestCounterLocalProxy : NSObject <GEORequestCounterProtocol>
{
    GEORequestCounterPersistence *_persistence;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000f017ef
- (void)externalRequestsCount:(CDUnknownBlockType)arg1;	// IMP=0x0000000000f01750
- (id)externalRequestCounterTicketForType:(id)arg1 subtype:(id)arg2 source:(id)arg3 appId:(id)arg4;	// IMP=0x0000000000f01723
- (void)fetchRoutePreloadSessionsFrom:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;	// IMP=0x0000000000f0170d
- (void)recordRoutePreloadSessionAt:(id)arg1 transportType:(long long)arg2 tilesPreloaded:(unsigned long long)arg3 tilesUsed:(unsigned long long)arg4 tilesMissed:(unsigned long long)arg5;	// IMP=0x0000000000f016f7
- (void)fetchAnalyticsHandlingDataFrom:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;	// IMP=0x0000000000f016e1
- (void)recordAnalyticsDBExpireCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;	// IMP=0x0000000000f016cb
- (void)recordAnalyticsUploadFailureCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;	// IMP=0x0000000000f016b5
- (void)recordAnalyticsUploadSuccessCount:(long long)arg1 bytes:(long long)arg2 logMsgType:(long long)arg3 usedCellular:(_Bool)arg4 at:(id)arg5;	// IMP=0x0000000000f0169f
- (void)recordAnalyticsPersistCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;	// IMP=0x0000000000f01689
- (void)readProactiveTileDownloadsSince:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000f01673
- (void)finishedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2 tilesConsidered:(unsigned int)arg3 tileDownloadAttempts:(unsigned int)arg4 successes:(unsigned int)arg5 failures:(unsigned int)arg6 bytesDownloaded:(unsigned long long)arg7;	// IMP=0x0000000000f0165d
- (void)startedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2;	// IMP=0x0000000000f01647
- (void)clearCounters;	// IMP=0x0000000000f01631
- (void)readRequestLogsDuring:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000f0123c
- (void)readRequestsPerAppDuring:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000f00e47
- (id)requestCounterTicketForType:(CDStruct_d1a7ebee)arg1 appId:(id)arg2;	// IMP=0x0000000000f00dc0
@property(nonatomic) _Bool countersEnabled;
- (id)initWithPersistence:(id)arg1;	// IMP=0x0000000000f00ce6
- (id)init;	// IMP=0x0000000000f00c8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

