//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSProgress, PHResourceLocalAvailabilityRequest;
@protocol OS_dispatch_queue;

@interface PHInternalAssetExportRequest
{
    PHResourceLocalAvailabilityRequest *_resourceRetrievalRequest;	// 8 = 0x8
    NSProgress *_resourceRetrievalRequestProgressParent;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_resourceRetrievingQueue;	// 24 = 0x18
}

+ (id)exportRequestForAsset:(id)arg1 variants:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000347ae
+ (id)exportRequestForAsset:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000034797
+ (id)_variantsForAsset:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000033e05
- (void).cxx_destruct;	// IMP=0x0000000000033061
- (void)exportWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032cd8
- (void)preflightExportWithOptions:(id)arg1 assetAvailability:(long long *)arg2 isProcessingRequired:(_Bool *)arg3 fileURLs:(id *)arg4 info:(id *)arg5;	// IMP=0x0000000000032880
- (id)_initWithAsset:(id)arg1 variants:(id)arg2 resourceRetrievalRequest:(id)arg3 retrievalRequestProgressParent:(id)arg4;	// IMP=0x00000000000325e5

@end

