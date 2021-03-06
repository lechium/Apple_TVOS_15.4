//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, PHImageManager, PICompositionController, PLEditSource, PXPhotoKitEditSourceLoader;
@protocol OS_dispatch_queue, PXPhotoKitAdjustedDisplayAsset;

@interface _PXPhotoKitAdjustedUIMediaRequest : NSObject
{
    PXPhotoKitEditSourceLoader *_editSourceLoader;	// 8 = 0x8
    _Bool _delayRenders;	// 16 = 0x10
    _Bool _useCachedRenders;	// 17 = 0x11
    id <PXPhotoKitAdjustedDisplayAsset> _asset;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_renderQueue;	// 32 = 0x20
    PHImageManager *_imageManager;	// 40 = 0x28
    PLEditSource *_editSource;	// 48 = 0x30
    NSError *_loadError;	// 56 = 0x38
    PICompositionController *_baseCompositionController;	// 64 = 0x40
    double _progress;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000ca879
@property(nonatomic) _Bool useCachedRenders; // @synthesize useCachedRenders=_useCachedRenders;
@property(nonatomic) _Bool delayRenders; // @synthesize delayRenders=_delayRenders;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) PICompositionController *baseCompositionController; // @synthesize baseCompositionController=_baseCompositionController;
@property(retain, nonatomic) NSError *loadError; // @synthesize loadError=_loadError;
@property(retain, nonatomic) PLEditSource *editSource; // @synthesize editSource=_editSource;
@property(readonly, nonatomic) PHImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *renderQueue; // @synthesize renderQueue=_renderQueue;
@property(readonly, nonatomic) id <PXPhotoKitAdjustedDisplayAsset> asset; // @synthesize asset=_asset;
- (void)_handleEditSourceLoadingFinished;	// IMP=0x00000000000ca69e
- (void)editSourceDidChange;	// IMP=0x00000000000ca617
- (void)progressDidChange;	// IMP=0x00000000000ca611
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000ca4de
- (void)dealloc;	// IMP=0x00000000000ca416
- (void)cancel;	// IMP=0x00000000000ca337
- (void)beginLoadingEditSource;	// IMP=0x00000000000ca20b
- (void)start;	// IMP=0x00000000000ca164
- (id)initWithAsset:(id)arg1 renderQueue:(id)arg2 imageManager:(id)arg3;	// IMP=0x00000000000ca0ad

@end

