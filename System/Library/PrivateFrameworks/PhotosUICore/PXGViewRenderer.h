//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGRenderer-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>

@class NSMutableDictionary, NSString, PXGEntityManager, PXGSpriteDataStore, PXScrollViewController;
@protocol PXGRendererDelegate, PXGTextureConverter;

@interface PXGViewRenderer : NSObject <PXScrollViewControllerObserver, PXGRenderer>
{
    NSMutableDictionary *_reusableViewsByClass;	// 8 = 0x8
    NSMutableDictionary *_reusableViewInfoBySpriteIndex;	// 16 = 0x10
    NSMutableDictionary *_trackingContainerViewInfoBySpriteIndex;	// 24 = 0x18
    long long _spriteBufferCapacity;	// 32 = 0x20
    unsigned int *_spriteIndexes;	// 40 = 0x28
    CDStruct_183601bc *_textureInfos;	// 48 = 0x30
    struct CGPoint _renderedVisibleOrigin;	// 56 = 0x38
    struct UIEdgeInsets _loadInsets;	// 72 = 0x48
    PXGCameraConfiguration_f6f8b209 _cameraConfiguration;	// 112 = 0x70
    PXGSpriteDataStore *_lastPresentationDataStore;	// 320 = 0x140
    PXGEntityManager *_entityManager;	// 328 = 0x148
    CDUnknownBlockType _test_renderSnapshotHandler;	// 336 = 0x150
    id <PXGRendererDelegate> _delegate;	// 344 = 0x158
    id <PXGTextureConverter> _textureConverter;	// 352 = 0x160
    PXScrollViewController *_scrollViewController;	// 360 = 0x168
    struct CGRect _visibleRect;	// 368 = 0x170
    CDStruct_da8e67cd _interactionState;	// 400 = 0x190
}

- (void).cxx_destruct;	// IMP=0x0000000000072c7a
@property(nonatomic) PXGCameraConfiguration_474424ad cameraConfiguration; // @synthesize cameraConfiguration=_cameraConfiguration;
@property(retain, nonatomic) PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(nonatomic) CDStruct_da8e67cd interactionState; // @synthesize interactionState=_interactionState;
@property(readonly, nonatomic) id <PXGTextureConverter> textureConverter; // @synthesize textureConverter=_textureConverter;
@property(nonatomic) __weak id <PXGRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType test_renderSnapshotHandler; // @synthesize test_renderSnapshotHandler=_test_renderSnapshotHandler;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(retain, nonatomic) PXGEntityManager *entityManager; // @synthesize entityManager=_entityManager;
- (void)releaseResources;	// IMP=0x0000000000072a4a
- (void)renderImmediately;	// IMP=0x0000000000072a44
@property(readonly, nonatomic) _Bool wantsToDriveRender;
- (void)setNeedsRender;	// IMP=0x0000000000072a36
- (void)_configureTrackingContainerView:(id)arg1 spriteIndex:(unsigned int)arg2 sprites:(CDStruct_d5f63e8f)arg3 screenScale:(double)arg4;	// IMP=0x00000000000727bd
- (id)trackingContainerViewForSpriteIndex:(unsigned int)arg1;	// IMP=0x0000000000072444
- (id)viewForSpriteIndex:(unsigned int)arg1;	// IMP=0x00000000000723bc
- (void)renderSpritesWithTextures:(id)arg1 dataStore:(id)arg2 presentationDataStore:(id)arg3 presentationMetadataStore:(id)arg4 layout:(id)arg5;	// IMP=0x0000000000070fa3
- (void)updateWithChangeDetails:(id)arg1;	// IMP=0x0000000000070ec6
@property(readonly, nonatomic) int presentationType;
- (id)_dequeueViewWithClass:(Class)arg1;	// IMP=0x0000000000070e20
- (void)_makeViewInfoReusable:(id)arg1;	// IMP=0x0000000000070b45
- (void)_resizeBuffersForSpriteCount:(long long)arg1;	// IMP=0x0000000000070aff
- (double)_screenScale;	// IMP=0x0000000000070a43
- (void)scrollViewControllerDidScroll:(id)arg1;	// IMP=0x0000000000070a31
- (void)_shiftViewsToCompensateForDeferredVisibleOrigin;	// IMP=0x00000000000705c1
- (void)dealloc;	// IMP=0x000000000007057e
- (id)init;	// IMP=0x0000000000070482

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

