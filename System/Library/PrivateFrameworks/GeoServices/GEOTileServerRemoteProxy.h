//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface GEOTileServerRemoteProxy
{
    NSObject<OS_dispatch_queue> *_connectionIncomingQueue;	// 48 = 0x30
    NSObject<OS_xpc_object> *_connection;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_connectionSendIsolation;	// 64 = 0x40
    int _diskCacheDeletedExternalDataNotifyToken;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000009b5758
- (void)generateRequestedFromTileLoaderEndSignpost:(unsigned long long)arg1;	// IMP=0x00000000009b56dd
- (void)generateRequestedFromTileLoaderBeginSignpost:(unsigned long long)arg1 tileKey:(const struct _GEOTileKey *)arg2 options:(unsigned long long)arg3;	// IMP=0x00000000009b5624
- (void)endPreloadSession;	// IMP=0x00000000009b5520
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;	// IMP=0x00000000009b5407
- (unsigned long long)shrinkDiskCacheToSizeSync:(unsigned long long)arg1;	// IMP=0x00000000009b52c8
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000009b4fc2
- (unsigned long long)calculateFreeableSizeSync;	// IMP=0x00000000009b4e1b
- (void)calculateFreeableSize;	// IMP=0x00000000009b4bc5
- (void)flushPendingWrites;	// IMP=0x00000000009b4bbf
- (void)open;	// IMP=0x00000000009b4bb9
- (void)close;	// IMP=0x00000000009b4bb3
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000009b4a95
- (void)cancel:(const struct _GEOTileKey *)arg1 batchID:(int)arg2;	// IMP=0x00000000009b4962
- (void)reprioritizeKey:(const struct _GEOTileKey *)arg1 newPriority:(unsigned int)arg2 batchID:(int)arg3;	// IMP=0x00000000009b48af
- (void)loadTiles:(id)arg1 batchID:(int)arg2 priorities:(const unsigned int *)arg3 hasAdditionalInfos:(const _Bool *)arg4 additionalInfos:(const struct GEOTileLoaderAdditionalInfo *)arg5 signpostIDs:(const unsigned long long *)arg6 createTimes:(const double *)arg7 reason:(unsigned char)arg8 options:(unsigned long long)arg9 client:(id)arg10;	// IMP=0x00000000009b4287
- (void)_handleEditionUpgrade:(id)arg1;	// IMP=0x00000000009b40cf
- (void)_handleNetworkBegan:(id)arg1;	// IMP=0x00000000009b3fd0
- (void)_handleError:(id)arg1;	// IMP=0x00000000009b3d21
- (void)_handleTile:(id)arg1;	// IMP=0x00000000009b3660
- (void)_handleEvent:(id)arg1;	// IMP=0x00000000009b2dab
- (void)dealloc;	// IMP=0x00000000009b2c52
- (id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 delegateQueue:(id)arg4 delegate:(id)arg5;	// IMP=0x00000000009b2853

@end

