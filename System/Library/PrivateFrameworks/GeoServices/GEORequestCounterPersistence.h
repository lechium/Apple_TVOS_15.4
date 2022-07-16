//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSQLiteDB;

@interface GEORequestCounterPersistence : NSObject
{
    GEOSQLiteDB *_db;	// 8 = 0x8
    double _maxAge;	// 16 = 0x10
    _Bool _enabled;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000112b9a6
- (void).cxx_destruct;	// IMP=0x0000000001130c4f
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)externalRequestsCount:(CDUnknownBlockType)arg1;	// IMP=0x00000000011307ec
- (void)incrementExternalForApp:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 xmitBytes:(long long)arg4 recvBytes:(long long)arg5 usedInterfaces:(unsigned long long)arg6 requestType:(id)arg7 requestSubtype:(id)arg8 source:(id)arg9;	// IMP=0x00000000011303a1
- (void)fetchRoutePreloadSessionsFrom:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;	// IMP=0x000000000112fd44
- (void)recordRoutePreloadSessionAt:(id)arg1 transportType:(long long)arg2 tilesPreloaded:(unsigned long long)arg3 tilesUsed:(unsigned long long)arg4 tilesMissed:(unsigned long long)arg5;	// IMP=0x000000000112f9cb
- (void)fetchAnalyticsHandlingDataFrom:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;	// IMP=0x000000000112f231
- (void)recordAnalyticsDBExpireCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;	// IMP=0x000000000112f0ce
- (void)recordAnalyticsUploadFailureCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;	// IMP=0x000000000112ef6b
- (void)recordAnalyticsUploadSuccessCount:(long long)arg1 bytes:(long long)arg2 logMsgType:(long long)arg3 usedCellular:(_Bool)arg4 at:(id)arg5;	// IMP=0x000000000112ecb5
- (void)recordAnalyticsPersistCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;	// IMP=0x000000000112eb52
- (void)_recordAnalylticsCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 withFxn:(CDUnknownFunctionPointerType)arg4;	// IMP=0x000000000112e9d9
- (void)readProactiveTileDownloadsSince:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000112e170
- (void)finishedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2 tilesConsidered:(unsigned int)arg3 tileDownloadAttempts:(unsigned int)arg4 successes:(unsigned int)arg5 failures:(unsigned int)arg6 bytesDownloaded:(unsigned long long)arg7;	// IMP=0x000000000112de8d
- (void)startedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2;	// IMP=0x000000000112db61
- (void)purgeAllCounts;	// IMP=0x000000000112da77
- (void)_purgeOlderThan:(id)arg1;	// IMP=0x000000000112d485
- (void)logsDuring:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000112cd99
- (void)countsDuring:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000112c516
- (void)incrementForApp:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 requestType:(int)arg4 result:(unsigned char)arg5 xmitBytes:(long long)arg6 recvBytes:(long long)arg7 usedInterfaces:(unsigned long long)arg8 withCompletion:(CDUnknownBlockType)arg9;	// IMP=0x000000000112c05c
- (void)_tearDown;	// IMP=0x000000000112bfef
- (void)dealloc;	// IMP=0x000000000112bfb1
- (id)initWithDBFilePath:(id)arg1 maxCountAge:(double)arg2;	// IMP=0x000000000112ba5d
- (id)init;	// IMP=0x000000000112b9fb

@end

