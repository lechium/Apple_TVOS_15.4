//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXTilingControllerCompositionInput-Protocol.h>
#import <PhotosUICore/PXTilingControllerCompositionObserver-Protocol.h>
#import <PhotosUICore/PXTilingControllerCompositionOutput-Protocol.h>
#import <PhotosUICore/PXTilingControllerObserver-Protocol.h>
#import <PhotosUICore/PXTilingScrollControllerUpdateDelegate-Protocol.h>

@class NSArray, NSHashTable, NSMutableArray, NSString, PXTilingControllerComposition, PXTilingControllerDefaultComposition;
@protocol PXTilingScrollController;

@interface PXTilingControllerCompositionEngine : NSObject <PXTilingScrollControllerUpdateDelegate, PXTilingControllerObserver, PXTilingControllerCompositionObserver, PXTilingControllerCompositionInput, PXTilingControllerCompositionOutput>
{
    _Bool _isPerformingChanges;	// 8 = 0x8
    _Bool _isUpdatingComposition;	// 9 = 0x9
    struct {
        _Bool scrollControllerMetrics;
        _Bool composition;
    } _needsUpdateFlags;	// 10 = 0xa
    id <PXTilingScrollController> __scrollController;	// 16 = 0x10
    NSHashTable *__tilingControllers;	// 24 = 0x18
    NSHashTable *__compositions;	// 32 = 0x20
    PXTilingControllerComposition *__composition;	// 40 = 0x28
    PXTilingControllerDefaultComposition *__defaultComposition;	// 48 = 0x30
    NSMutableArray *__invalidationContexts;	// 56 = 0x38
    NSMutableArray *__tilingControllersRequestingFocus;	// 64 = 0x40
    struct CGSize __referenceSize;	// 72 = 0x48
    struct UIEdgeInsets __contentInset;	// 88 = 0x58
}

+ (id)compositionEngineForScrollController:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x00000000008df937
- (void).cxx_destruct;	// IMP=0x00000000008df8c4
@property(readonly, nonatomic) NSMutableArray *_tilingControllersRequestingFocus; // @synthesize _tilingControllersRequestingFocus=__tilingControllersRequestingFocus;
@property(readonly, nonatomic) NSMutableArray *_invalidationContexts; // @synthesize _invalidationContexts=__invalidationContexts;
@property(nonatomic, setter=_setContentInset:) struct UIEdgeInsets _contentInset; // @synthesize _contentInset=__contentInset;
@property(nonatomic, setter=_setReferenceSize:) struct CGSize _referenceSize; // @synthesize _referenceSize=__referenceSize;
@property(readonly, nonatomic) PXTilingControllerDefaultComposition *_defaultComposition; // @synthesize _defaultComposition=__defaultComposition;
@property(retain, nonatomic, setter=_setComposition:) PXTilingControllerComposition *_composition; // @synthesize _composition=__composition;
@property(readonly, nonatomic) NSHashTable *_compositions; // @synthesize _compositions=__compositions;
@property(readonly, nonatomic) NSHashTable *_tilingControllers; // @synthesize _tilingControllers=__tilingControllers;
@property(readonly, nonatomic) __weak id <PXTilingScrollController> _scrollController; // @synthesize _scrollController=__scrollController;
- (void)setOrigin:(struct CGPoint)arg1 forTilingController:(id)arg2;	// IMP=0x00000000008df7d5
- (void)setContentBounds:(struct CGRect)arg1 scrollBounds:(struct CGRect)arg2 scrollInfo:(id)arg3;	// IMP=0x00000000008df72f
- (void)setReferenceSize:(struct CGSize)arg1 contentInset:(struct UIEdgeInsets)arg2 forTilingController:(id)arg3;	// IMP=0x00000000008df641
- (id)convertScrollInfo:(id)arg1 fromTilingController:(id)arg2;	// IMP=0x00000000008df62c
- (struct CGRect)convertRect:(struct CGRect)arg1 fromTilingController:(id)arg2;	// IMP=0x00000000008df5df
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromTilingController:(id)arg2;	// IMP=0x00000000008df5ca
- (id)scrollInfoForTilingController:(id)arg1;	// IMP=0x00000000008df5b5
- (struct CGPoint)originForTilingController:(id)arg1;	// IMP=0x00000000008df5a0
- (struct CGPoint)preferredOriginForTilingController:(id)arg1;	// IMP=0x00000000008df58b
- (struct CGRect)scrollBoundsForTilingController:(id)arg1;	// IMP=0x00000000008df555
- (struct CGRect)contentBoundsForTilingController:(id)arg1;	// IMP=0x00000000008df51f
@property(readonly, nonatomic) NSArray *invalidationContexts;
@property(readonly, nonatomic) NSArray *tilingControllersRequestingFocus;
@property(readonly, nonatomic) struct UIEdgeInsets contentInset;
@property(readonly, nonatomic) struct CGSize referenceSize;
- (void)setTilingControllerCompositionNeedsUpdate:(id)arg1 withContext:(id)arg2;	// IMP=0x00000000008df388
- (void)tilingController:(id)arg1 invalidatedWithContext:(long long)arg2;	// IMP=0x00000000008df306
- (void)setTilingControllerNeedsUpdate:(id)arg1;	// IMP=0x00000000008df2c9
- (void)tilingScrollControllerDidUpdate:(id)arg1;	// IMP=0x00000000008df27d
- (_Bool)_updateCompositionIfNeeded;	// IMP=0x00000000008ded03
- (void)_invalidateComposition;	// IMP=0x00000000008deced
- (void)_updateScrollControllerMetricsIfNeeded;	// IMP=0x00000000008dec2e
- (void)_invalidateScrollControllerMetrics;	// IMP=0x00000000008deae9
- (void)_setNeedsUpdate;	// IMP=0x00000000008deae3
- (_Bool)_needsUpdate;	// IMP=0x00000000008deace
- (void)_endUpdate;	// IMP=0x00000000008de89e
- (void)_beginUpdate;	// IMP=0x00000000008de771
- (void)_performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000008de6df
- (void)unregisterComposition:(id)arg1;	// IMP=0x00000000008de52f
- (void)registerComposition:(id)arg1;	// IMP=0x00000000008de416
- (void)unregisterTilingController:(id)arg1;	// IMP=0x00000000008de2fe
- (void)registerTilingController:(id)arg1;	// IMP=0x00000000008de1e5
- (id)_initWithScrollController:(id)arg1;	// IMP=0x00000000008de010
- (id)init;	// IMP=0x00000000008ddffc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
