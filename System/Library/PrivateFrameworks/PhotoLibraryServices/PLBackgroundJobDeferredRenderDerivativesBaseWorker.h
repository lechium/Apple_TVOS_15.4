//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobDeferredRenderDerivativesBaseWorker
{
    NSProgress *_progressForCurrentAsset;	// 8 = 0x8
    PAImageConversionServiceClient *_imageConversionClient;	// 16 = 0x10
    PAVideoConversionServiceClient *_videoConversionClient;	// 24 = 0x18
}

+ (_Bool)supportsWellKnownPhotoLibraryIdentifier:(long long)arg1;	// IMP=0x00000000000cd5fd
+ (id)workerWithLibraryBundle:(id)arg1;	// IMP=0x00000000000cd5b7
- (void).cxx_destruct;	// IMP=0x00000000000cda42
- (void)stopWorkingOnItem:(id)arg1;	// IMP=0x00000000000cda25
- (_Bool)isInterruptible;	// IMP=0x00000000000cda1d
- (void)performWorkOnItem:(id)arg1 inLibrary:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cd827
- (id)workItemsNeedingProcessingInLibrary:(id)arg1;	// IMP=0x00000000000cd70c
- (id)videoConversionClient;	// IMP=0x00000000000cd6cb
- (id)imageConversionClient;	// IMP=0x00000000000cd68a
- (id)_predicateToFetchDeferredAssets;	// IMP=0x00000000000cd658

@end

