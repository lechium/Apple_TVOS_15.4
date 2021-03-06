//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXUIImageProvider-Protocol.h>

@class NSString;
@protocol PXUIImageProvider;

@interface PXCMMPreviewUIImageProvider : NSObject <PXUIImageProvider>
{
    id <PXUIImageProvider> _underlyingAssetImageProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000063a143
@property(readonly, nonatomic) id <PXUIImageProvider> underlyingAssetImageProvider; // @synthesize underlyingAssetImageProvider=_underlyingAssetImageProvider;
- (id)_underlyingAssetsFromPreviewAssets:(id)arg1;	// IMP=0x000000000063a051
- (void)stopCachingImagesForAllAssets;	// IMP=0x000000000063a01a
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;	// IMP=0x0000000000639f59
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;	// IMP=0x0000000000639e97
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000006398a8
- (void)cancelImageRequest:(long long)arg1;	// IMP=0x000000000063985c
- (id)init;	// IMP=0x0000000000639848
- (id)initWithUnderlyingAssetImageProvider:(id)arg1;	// IMP=0x00000000006397dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

