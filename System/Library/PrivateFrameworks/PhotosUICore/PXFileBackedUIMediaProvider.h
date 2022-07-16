//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCache, NSOperationQueue;

@interface PXFileBackedUIMediaProvider
{
    NSOperationQueue *_queue;	// 8 = 0x8
    NSCache *_cache;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000037f290
- (void)_handleImageCreated:(id)arg1 imageKey:(id)arg2;	// IMP=0x000000000037f26c
- (id)_resizeImageAtURL:(id)arg1 imageUTI:(id)arg2 targetSize:(struct CGSize)arg3 bakeInOrientation:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000037eff0
- (id)_createImageForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000037eec7
- (void)cancelImageRequest:(long long)arg1;	// IMP=0x000000000037eec1
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000037ebaf
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000037eb03
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(struct CGSize)arg2 onlyFromCache:(_Bool)arg3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg4;	// IMP=0x000000000037eafb
- (id)init;	// IMP=0x000000000037ea43

@end

