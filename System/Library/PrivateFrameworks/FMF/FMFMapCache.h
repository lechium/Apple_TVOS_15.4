//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FMFMapCache : NSObject
{
    _Bool _fileProtectionDeactivated;	// 8 = 0x8
    NSMutableDictionary *_cacheMetaData;	// 16 = 0x10
    NSMutableDictionary *_gridImageMetaData;	// 24 = 0x18
    NSMutableDictionary *_noLocationImageMetaData;	// 32 = 0x20
    NSMutableDictionary *_mapImageMetaData;	// 40 = 0x28
    NSMutableDictionary *_pendingMapImageMetaData;	// 48 = 0x30
    NSString *_cachePath;	// 56 = 0x38
    NSString *_imageCachePath;	// 64 = 0x40
    NSDate *_lastPruneDate;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_cacheMetaQueue;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_gridImageQueue;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_noLocationImageQueue;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_mapImageQueue;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_pendingImageQueue;	// 112 = 0x70
    double _mapLocationDistanceThreshold;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000001a834
@property(nonatomic) _Bool fileProtectionDeactivated; // @synthesize fileProtectionDeactivated=_fileProtectionDeactivated;
@property(nonatomic) double mapLocationDistanceThreshold; // @synthesize mapLocationDistanceThreshold=_mapLocationDistanceThreshold;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pendingImageQueue; // @synthesize pendingImageQueue=_pendingImageQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mapImageQueue; // @synthesize mapImageQueue=_mapImageQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *noLocationImageQueue; // @synthesize noLocationImageQueue=_noLocationImageQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *gridImageQueue; // @synthesize gridImageQueue=_gridImageQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheMetaQueue; // @synthesize cacheMetaQueue=_cacheMetaQueue;
@property(retain, nonatomic) NSDate *lastPruneDate; // @synthesize lastPruneDate=_lastPruneDate;
@property(retain, nonatomic) NSString *imageCachePath; // @synthesize imageCachePath=_imageCachePath;
@property(retain, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(retain, nonatomic) NSMutableDictionary *pendingMapImageMetaData; // @synthesize pendingMapImageMetaData=_pendingMapImageMetaData;
@property(retain, nonatomic) NSMutableDictionary *mapImageMetaData; // @synthesize mapImageMetaData=_mapImageMetaData;
@property(retain, nonatomic) NSMutableDictionary *noLocationImageMetaData; // @synthesize noLocationImageMetaData=_noLocationImageMetaData;
@property(retain, nonatomic) NSMutableDictionary *gridImageMetaData; // @synthesize gridImageMetaData=_gridImageMetaData;
@property(retain, nonatomic) NSMutableDictionary *cacheMetaData; // @synthesize cacheMetaData=_cacheMetaData;
- (double)pruneIntervalInSeconds;	// IMP=0x000000000001a5b9
- (double)cacheExpiryInSeconds;	// IMP=0x000000000001a4c5
- (id)noLocationKeyForWidth:(double)arg1 andHeight:(double)arg2;	// IMP=0x000000000001a3cf
- (id)gridKeyForWidth:(double)arg1 andHeight:(double)arg2;	// IMP=0x000000000001a2d9
- (void)pruneCacheIfNeeded;	// IMP=0x0000000000019c41
- (void)flushCache;	// IMP=0x00000000000199d7
- (void)saveMetaData;	// IMP=0x00000000000193dc
- (void)readMetaData;	// IMP=0x0000000000018e64
- (_Bool)pendingMapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 andHeight:(double)arg5;	// IMP=0x0000000000018db6
- (_Bool)pendingMapImageForRequest:(id)arg1;	// IMP=0x0000000000018a7c
- (void)cacheMapImage:(id)arg1 forLocation:(id)arg2 altitude:(double)arg3 pitch:(double)arg4 width:(double)arg5 andHeight:(double)arg6;	// IMP=0x00000000000189bb
- (void)cacheMapImage:(id)arg1 forRequest:(id)arg2;	// IMP=0x0000000000018349
- (id)cachedMapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 andHeight:(double)arg5;	// IMP=0x000000000001828f
- (id)cachedMapImageForRequest:(id)arg1;	// IMP=0x0000000000018117
- (void)cacheNoLocationImage:(id)arg1 forWidth:(double)arg2 andHeight:(double)arg3;	// IMP=0x0000000000017cb8
- (id)cachedNoLocationImageForWidth:(double)arg1 andHeight:(double)arg2;	// IMP=0x0000000000017b5d
- (void)cacheGridImage:(id)arg1 forWidth:(double)arg2 andHeight:(double)arg3;	// IMP=0x00000000000176fe
- (id)cachedGridImageForWidth:(double)arg1 andHeight:(double)arg2;	// IMP=0x00000000000175a3
- (id)init;	// IMP=0x000000000001709c

@end

