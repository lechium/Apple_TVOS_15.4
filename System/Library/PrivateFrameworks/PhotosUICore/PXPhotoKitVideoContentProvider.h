//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSString, PHAsset, PHFetchResult, PXPhotoKitUIMediaProvider;

@interface PXPhotoKitVideoContentProvider <PXPhotoLibraryUIChangeObserver>
{
    PHFetchResult *_fetchResult;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000008c11db
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;	// IMP=0x00000000008c10e2
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 deliveryStrategies:(id)arg3 audioSession:(id)arg4 requestURLOnly:(_Bool)arg5;	// IMP=0x00000000008c1012

// Remaining properties
@property(readonly, nonatomic) PHAsset *asset; // @dynamic asset;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider; // @dynamic mediaProvider;
@property(readonly) Class superclass;

@end

