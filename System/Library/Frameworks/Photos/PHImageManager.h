//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/PHMediaRequestContextDelegate-Protocol.h>

@class NSMapTable, NSString, PHPhotoLibrary;

@interface PHImageManager : NSObject <PHMediaRequestContextDelegate>
{
    NSMapTable *_requestContextsByID;	// 8 = 0x8
    _Atomic int _nextRequestID;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 20 = 0x14
    PHPhotoLibrary *_photoLibrary;	// 24 = 0x18
    unsigned long long _managerID;	// 32 = 0x20
}

+ (_Bool)_allowVideoAccessForAsset:(id)arg1 options:(id)arg2;	// IMP=0x00000000001c81a8
+ (unsigned long long)_nextManagerID;	// IMP=0x00000000001c8175
+ (id)defaultManager;	// IMP=0x00000000001c8112
+ (void)buildExportSessionFromVideoURL:(id)arg1 infoDictionary:(id)arg2 options:(id)arg3 exportPreset:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000131ef0
+ (void)buildAVAssetFromVideoURL:(id)arg1 infoDictionary:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000131d88
+ (void)buildAVPlayerItemFromVideoURL:(id)arg1 infoDictionary:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000131c1c
+ (id)_videoAVObjectBuilderFromVideoURL:(id)arg1 info:(id)arg2 options:(id)arg3 playbackOnly:(_Bool)arg4;	// IMP=0x0000000000131866
- (void).cxx_destruct;	// IMP=0x00000000001c40fe
@property(readonly, nonatomic) unsigned long long managerID; // @synthesize managerID=_managerID;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (void)mediaRequestContextDidFinish:(id)arg1;	// IMP=0x00000000001c3e2e
- (void)mediaRequestContext:(id)arg1 isQueryingCacheForRequest:(id)arg2 didWait:(_Bool *)arg3 didFindImage:(_Bool *)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001c3e16
- (int)requestAVProxyForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c3c28
- (int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c375e
- (int)requestContentEditingInputForAsset:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c333b
- (_Bool)_shouldUseRAWResourceAsUnadjustedBaseForAsset:(id)arg1 options:(id)arg2;	// IMP=0x00000000001c32fa
- (int)requestAVAssetForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c2c10
- (int)_requestLiveRenderAVAssetForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c27c0
- (int)requestURLForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c23c0
- (int)requestNewCGImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001c1e12
- (id)synchronousImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;	// IMP=0x00000000001c1c6e
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c15e1
- (int)requestExportSessionForVideo:(id)arg1 options:(id)arg2 exportPreset:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001c0f5d
- (int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c0ebc
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001c0488
- (void)_prepareLivePhotoResultWithImage:(struct CGImage *)arg1 uiOrientation:(long long)arg2 shouldIncludeVideo:(_Bool)arg3 videoURL:(id)arg4 info:(id)arg5 photoTime:(CDStruct_1b6d18a9)arg6 asset:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000001c02e4
- (int)requestImageDataAndOrientationForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001bfe5d
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001bfdb8
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001bfcfb
- (void)cancelImageRequest:(int)arg1;	// IMP=0x00000000001bf9d0
- (void)additionalWorkForImageRequestCompletedWithResult:(id)arg1 request:(id)arg2 context:(id)arg3;	// IMP=0x00000000001bf9ca
- (int)runRequestWithContext:(id)arg1;	// IMP=0x00000000001bf788
- (int)nextID;	// IMP=0x00000000001bf778
@property(readonly) unsigned long long hash;
- (_Bool)_canStreamVideoForAsset:(id)arg1;	// IMP=0x00000000001bf700
- (void)_runBlockOnAppropriateResultQueueOrSynchronouslyWithRequest:(id)arg1 options:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000001bf651
- (id)init;	// IMP=0x00000000001bf5bb
- (int)requestImagePropertiesForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000105378
- (int)_requestImagePropertiesFromFileForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001052ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

