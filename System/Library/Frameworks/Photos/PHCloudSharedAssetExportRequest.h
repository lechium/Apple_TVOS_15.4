//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface PHCloudSharedAssetExportRequest
{
    int _imageManagerImageRequestId;	// 8 = 0x8
    int _imageManagerVideoRequestId;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_resourceRetrievingQueue;	// 16 = 0x10
}

+ (id)exportRequestForAsset:(id)arg1 error:(id *)arg2;	// IMP=0x000000000017960a
- (void).cxx_destruct;	// IMP=0x00000000001786b9
- (void)_handleImageManagerResultForAsset:(id)arg1 networkAccessAllowed:(_Bool)arg2 progress:(id)arg3 processingUnitCount:(unsigned long long)arg4 options:(id)arg5 withFileUrls:(id)arg6 info:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x00000000001783c6
- (void)_requestLivePhotoURLsForAsset:(id)arg1 networkAccessAllowed:(_Bool)arg2 progressHandler:(CDUnknownBlockType)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000177dce
- (int)_requestVideoURLForAsset:(id)arg1 networkAccessAllowed:(_Bool)arg2 progressHandler:(CDUnknownBlockType)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000177c1d
- (int)_requestImageURLForAsset:(id)arg1 networkAccessAllowed:(_Bool)arg2 progressHandler:(CDUnknownBlockType)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000177a59
- (void)_requestFileURLsForAsset:(id)arg1 withOptions:(id)arg2 networkAccessAllowed:(_Bool)arg3 progressHandler:(CDUnknownBlockType)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000017791f
- (void)exportWithOptions:(id)arg1 networkAccessAllowed:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000017758d
- (void)exportWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000177573
- (void)preflightExportWithOptions:(id)arg1 assetAvailability:(long long *)arg2 isProcessingRequired:(_Bool *)arg3 fileURLs:(id *)arg4 info:(id *)arg5;	// IMP=0x0000000000177105
- (id)initWithAsset:(id)arg1 variants:(id)arg2;	// IMP=0x0000000000177075

@end
