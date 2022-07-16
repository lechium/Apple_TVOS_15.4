//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface PXSyntheticUIMediaProvider
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSCache *_imageCache;	// 16 = 0x10
    NSCache *_urlCache;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000eb553
@property(readonly, nonatomic) NSCache *urlCache; // @synthesize urlCache=_urlCache;
@property(readonly, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)cancelImageRequest:(long long)arg1;	// IMP=0x00000000000eb51a
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000eb2f9
- (long long)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000eb2f1
- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000eb274
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(struct CGSize)arg2 onlyFromCache:(_Bool)arg3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg4;	// IMP=0x00000000000eb26c
- (id)_imageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 outInfo:(out id *)arg5;	// IMP=0x00000000000eadf0
- (id)init;	// IMP=0x00000000000eac9b

@end
