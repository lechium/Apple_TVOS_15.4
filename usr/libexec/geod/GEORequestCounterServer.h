//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@interface GEORequestCounterServer : GEOServer
{
}

+ (id)identifier;	// IMP=0x00200000000170f4
- (void)externalCountWithRequest:(id)arg1;	// IMP=0x0010000000005830
- (void)externalIncrementWithRequest:(id)arg1;	// IMP=0x0010000000005699
- (void)fetchRoutePreloadSessionsWithMessage:(id)arg1;	// IMP=0x001000000000530c
- (void)recordRoutePreloadSessionWithMessage:(id)arg1;	// IMP=0x0010000000004f69
- (void)analyticsHandlingFetchWithMessage:(id)arg1;	// IMP=0x0010000000004c2d
- (void)readProactiveTileDownloadsWithMessage:(id)arg1;	// IMP=0x00100000000048af
- (void)clearWithMessage:(id)arg1;	// IMP=0x001000000000464c
- (void)readRequestLogsWithMessage:(id)arg1;	// IMP=0x00100000000040a3
- (void)readRequestsWithMessage:(id)arg1;	// IMP=0x0010000000003afa
- (void)incrementWithMessage:(id)arg1;	// IMP=0x0010000000003769
- (void)setCountersEnabledWithMessage:(id)arg1;	// IMP=0x00100000000033fe
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0010000000017101

@end

