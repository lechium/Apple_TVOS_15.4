//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXUIImageProvider-Protocol.h>

@class NSCache, NSCountedSet, NSMutableDictionary, NSString;
@protocol OS_os_log;

@interface PXAudioAssetImageProvider : NSObject <PXUIImageProvider>
{
    long long _requestCounter;	// 8 = 0x8
    NSMutableDictionary *_requestByClientID;	// 16 = 0x10
    NSMutableDictionary *_requestIDByCacheSpec;	// 24 = 0x18
    NSCountedSet *_requestCountByCacheSpec;	// 32 = 0x20
    NSMutableDictionary *_requestsByImageLoaderIdentifier;	// 40 = 0x28
    NSMutableDictionary *_imageLoaderByIdentifier;	// 48 = 0x30
    NSCache *_imageCache;	// 56 = 0x38
    NSObject<OS_os_log> *_log;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001edfd8
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(readonly, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(readonly, nonatomic) NSMutableDictionary *imageLoaderByIdentifier; // @synthesize imageLoaderByIdentifier=_imageLoaderByIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *requestsByImageLoaderIdentifier; // @synthesize requestsByImageLoaderIdentifier=_requestsByImageLoaderIdentifier;
@property(readonly, nonatomic) NSCountedSet *requestCountByCacheSpec; // @synthesize requestCountByCacheSpec=_requestCountByCacheSpec;
@property(readonly, nonatomic) NSMutableDictionary *requestIDByCacheSpec; // @synthesize requestIDByCacheSpec=_requestIDByCacheSpec;
@property(readonly, nonatomic) NSMutableDictionary *requestByClientID; // @synthesize requestByClientID=_requestByClientID;
@property(nonatomic) long long requestCounter; // @synthesize requestCounter=_requestCounter;
- (void)_handleImageLoaderCompletionForIdentifier:(id)arg1;	// IMP=0x00000000001eddbc
- (id)resultForCompletedImageLoader:(id)arg1 request:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001edcff
- (id)createImageLoaderForRequest:(id)arg1;	// IMP=0x00000000001edc4f
- (id)imageLoaderCoalescingKeyForRequest:(id)arg1;	// IMP=0x00000000001edb9f
- (id)imageCacheKeyForRequest:(id)arg1;	// IMP=0x00000000001edaef
- (void)cancelImageRequest:(long long)arg1;	// IMP=0x00000000001ed885
- (void)stopCachingImagesForAllAssets;	// IMP=0x00000000001ed7a6
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;	// IMP=0x00000000001ed6e6
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;	// IMP=0x00000000001ed626
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001ed082
- (id)init;	// IMP=0x00000000001ecf4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

