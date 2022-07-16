//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>

@class NSString, PXPhotoKitLivePhotoVideoContentProviderSpec;

@interface PXPhotoKitLivePhotoVideoContentProvider <PXSettingsKeyObserver>
{
    PXPhotoKitLivePhotoVideoContentProviderSpec *_spec;	// 16 = 0x10
}

+ (id)postProcessingOperationQueue;	// IMP=0x00000000008c159f
- (void).cxx_destruct;	// IMP=0x00000000008c158c
- (void)cancelLoading;	// IMP=0x00000000008c155d
- (void)dealloc;	// IMP=0x00000000008c152e
- (void)_handleStabilizeOperationFinishedWithProcessingCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000008c1528
- (void)postprocessPlayerItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000008c142a
- (_Bool)needsPostprocessing;	// IMP=0x00000000008c1422
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 deliveryStrategies:(id)arg3 audioSession:(id)arg4 requestURLOnly:(_Bool)arg5;	// IMP=0x00000000008c137b
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x00000000008c12c0
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 deliveryStrategies:(id)arg3 audioSession:(id)arg4 spec:(id)arg5;	// IMP=0x00000000008c11ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PXPhotoKitLivePhotoVideoContentProviderSpec *spec; // @dynamic spec;
@property(readonly) Class superclass;

@end
