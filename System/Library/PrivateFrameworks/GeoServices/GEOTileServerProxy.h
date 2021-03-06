//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOResourceManifestConfiguration, NSLocale;
@protocol GEOTileServerProxyDelegate, OS_dispatch_queue;

@interface GEOTileServerProxy : NSObject
{
    id <GEOTileServerProxyDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 16 = 0x10
    GEOResourceManifestConfiguration *_manifestConfiguration;	// 24 = 0x18
    NSLocale *_locale;	// 32 = 0x20
    int _resourceNotificationToken;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000010d29e5
@property(readonly, nonatomic) __weak id <GEOTileServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)generateRequestedFromTileLoaderEndSignpost:(unsigned long long)arg1;	// IMP=0x00000000010d29ba
- (void)generateRequestedFromTileLoaderBeginSignpost:(unsigned long long)arg1 tileKey:(const struct _GEOTileKey *)arg2 options:(unsigned long long)arg3;	// IMP=0x00000000010d29a5
- (void)endPreloadSession;	// IMP=0x00000000010d2990
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;	// IMP=0x00000000010d297b
- (unsigned long long)shrinkDiskCacheToSizeSync:(unsigned long long)arg1;	// IMP=0x00000000010d2963
- (unsigned long long)calculateFreeableSizeSync;	// IMP=0x00000000010d294b
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000010d2936
- (void)calculateFreeableSize;	// IMP=0x00000000010d2921
- (void)flushPendingWrites;	// IMP=0x00000000010d290c
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000010d28f7
- (void)reprioritizeKey:(const struct _GEOTileKey *)arg1 newPriority:(unsigned int)arg2 batchID:(int)arg3;	// IMP=0x00000000010d28e2
- (void)cancel:(const struct _GEOTileKey *)arg1 batchID:(int)arg2;	// IMP=0x00000000010d28cd
- (void)loadTiles:(id)arg1 batchID:(int)arg2 priorities:(const unsigned int *)arg3 hasAdditionalInfos:(const _Bool *)arg4 additionalInfos:(const struct GEOTileLoaderAdditionalInfo *)arg5 signpostIDs:(const unsigned long long *)arg6 createTimes:(const double *)arg7 reason:(unsigned char)arg8 options:(unsigned long long)arg9 client:(id)arg10;	// IMP=0x00000000010d28b8
- (void)close;	// IMP=0x00000000010d28a3
- (void)open;	// IMP=0x00000000010d288e
- (void)dealloc;	// IMP=0x00000000010d284a
- (id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 delegateQueue:(id)arg4 delegate:(id)arg5;	// IMP=0x00000000010d25b1

@end

