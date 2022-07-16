//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCacheDelegate-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMapTable, NSString, PXLRUMemoryCache;
@protocol NSObject, OS_dispatch_queue;

@interface PXPeopleFaceTileImageManager : NSObject <NSCacheDelegate, PXPhotoLibraryUIChangeObserver>
{
    NSObject<OS_dispatch_queue> *_fetchQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_requestLookupIsolationQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_cropCacheQueue;	// 24 = 0x18
    NSMapTable *_faceTileRequestByRequestID;	// 32 = 0x20
    NSMapTable *_highPriorityCachedIdentifiers;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_highPriorityCachedIdentifiersQueue;	// 48 = 0x30
    PXLRUMemoryCache *_memoryCache;	// 56 = 0x38
    id <NSObject> _memoryWarningObserver;	// 64 = 0x40
    id <NSObject> _backgroundEntraceObserver;	// 72 = 0x48
}

+ (id)sharedManager;	// IMP=0x00000000001f50ef
+ (id)imageTransformQueue;	// IMP=0x00000000001f50bf
- (void).cxx_destruct;	// IMP=0x00000000001f2366
@property(retain, nonatomic) id <NSObject> backgroundEntraceObserver; // @synthesize backgroundEntraceObserver=_backgroundEntraceObserver;
@property(retain, nonatomic) id <NSObject> memoryWarningObserver; // @synthesize memoryWarningObserver=_memoryWarningObserver;
@property(readonly, nonatomic) PXLRUMemoryCache *memoryCache; // @synthesize memoryCache=_memoryCache;
- (_Bool)_doesChange:(id)arg1 containVisibleChangesToPHAssetWithOID:(id)arg2;	// IMP=0x00000000001f2299
- (id)prepareForPhotoLibraryChange:(id)arg1;	// IMP=0x00000000001f1c04
- (void)_stopListeningForChanges;	// IMP=0x00000000001f1bb1
- (void)_startListeningForChanges;	// IMP=0x00000000001f1b5e
- (void)clearMemoryCache;	// IMP=0x00000000001f1b06
- (void)removeHighPriorityCachedItemIdentifier:(id)arg1 forOwner:(id)arg2;	// IMP=0x00000000001f1a46
- (void)addHighPriorityCachedItemIdentifier:(id)arg1 forOwner:(id)arg2;	// IMP=0x00000000001f1986
- (void)invalidateCacheForPerson:(id)arg1;	// IMP=0x00000000001f17fd
- (_Bool)isActiveRequestWithRequestID:(int)arg1;	// IMP=0x00000000001f176c
- (void)cancelRequest:(int)arg1;	// IMP=0x00000000001f1645
- (id)_fetchKeyFaceFromPerson:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001f147a
- (id)_fetchAssetFromFace:(id)arg1;	// IMP=0x00000000001f12eb
- (void)_addRequestResult:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00000000001f10bf
- (id)_cachedResultForIdentifier:(id)arg1 params:(struct PXFaceTileImageParams)arg2 isLowResResult:(_Bool *)arg3;	// IMP=0x00000000001f0cde
- (_Bool)_deliverCachedResultIfPossibleForRequest:(id)arg1 allowDegradedDelivery:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001f0ad7
- (struct CGRect)_normalizedAspectCropRectForFaceRect:(struct CGRect)arg1 aspectRatio:(double)arg2 inImageRect:(struct CGRect)arg3;	// IMP=0x00000000001f0a39
- (void)_cropImage:(id)arg1 synchronous:(_Bool)arg2 cacheResult:(_Bool)arg3 isDegraded:(_Bool)arg4 forRequest:(id)arg5 cropInfo:(CDStruct_7898798c)arg6 didCallFastBlock:(_Bool)arg7 completionBlock:(CDUnknownBlockType)arg8;	// IMP=0x00000000001f068d
- (struct CGRect)_boundedCropRectForRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2 withTargetAspectRatio:(double)arg3;	// IMP=0x00000000001f03c4
- (void)_requestFaceTileImageRequest:(id)arg1 faceImageRequest:(id)arg2 cacheResult:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4 fastDisplayBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000001f004b
- (int)_requestFaceTileImageFromRequest:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 boundFaceRect:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7 fastDisplayBlock:(CDUnknownBlockType)arg8;	// IMP=0x00000000001ef9c3
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 boundFaceRect:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7 fastDisplayBlock:(CDUnknownBlockType)arg8;	// IMP=0x00000000001ef8da
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6 fastDisplayBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000001ef8af
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000001ef893
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000001ef86e
- (int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 boundFaceRect:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000001ef799
- (int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000001ef77d
- (int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000001ef758
- (int)requestFaceTileImageFromRequest:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5 fastDisplayBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000001ef72e
- (void)_handleMemoryClearRequest;	// IMP=0x00000000001ef437
- (void)dealloc;	// IMP=0x00000000001ef398
- (id)init;	// IMP=0x00000000001ef0ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
