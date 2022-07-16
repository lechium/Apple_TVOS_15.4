//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject, PHCachingImageManager;
@protocol OS_dispatch_queue;

@interface PXPhotoKitAdjustedUIMediaProvider
{
    _Atomic int _nextRequestID;	// 8 = 0x8
    NSMutableDictionary *_requestsByIdentifier;	// 16 = 0x10
    NSMutableDictionary *_unadjustedRequestIdentifiersByIdentifier;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_ivarQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_renderQueue;	// 40 = 0x28
    PHCachingImageManager *_imageManager;	// 48 = 0x30
    _Bool _useCachedRenders;	// 56 = 0x38
    _Bool _delayRenders;	// 57 = 0x39
    _Bool _cachesUnadjustedImageForRequestedAssets;	// 58 = 0x3a
}

+ (void)clearCachedRenders;	// IMP=0x00000000000cd302
- (void).cxx_destruct;	// IMP=0x00000000000c6f12
@property(nonatomic) _Bool cachesUnadjustedImageForRequestedAssets; // @synthesize cachesUnadjustedImageForRequestedAssets=_cachesUnadjustedImageForRequestedAssets;
@property(nonatomic) _Bool delayRenders; // @synthesize delayRenders=_delayRenders;
@property(nonatomic) _Bool useCachedRenders; // @synthesize useCachedRenders=_useCachedRenders;
- (void)_removeRequestforID:(long long)arg1;	// IMP=0x00000000000c6e5c
- (void)cancelImageRequest:(long long)arg1;	// IMP=0x00000000000c6e4a
- (void)_handleRequestCompletedWithID:(long long)arg1 info:(id)arg2;	// IMP=0x00000000000c6d18
- (long long)_nextRequestID;	// IMP=0x00000000000c6cfe
- (void)stopCachingImagesForAllAssets;	// IMP=0x00000000000c6ce1
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;	// IMP=0x00000000000c6c49
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;	// IMP=0x00000000000c6bb1
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c6ba9
- (long long)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c6ba1
- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c6b99
- (long long)requestCGImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000c6b91
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000c68ff
- (long long)requestURLsForLivePhoto:(id)arg1 pairingIdentifier:(id)arg2 options:(id)arg3 reaultHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c667f
- (long long)requestURLForImage:(id)arg1 pairingIdentifier:(id)arg2 options:(id)arg3 reaultHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c63ff
- (long long)requestURLForVideo:(id)arg1 pairingIdentifier:(id)arg2 options:(id)arg3 reaultHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c617f
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c5f0f
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000c5b09
- (id)cachedImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2;	// IMP=0x00000000000c58b5
- (id)init;	// IMP=0x00000000000c57b1

@end

