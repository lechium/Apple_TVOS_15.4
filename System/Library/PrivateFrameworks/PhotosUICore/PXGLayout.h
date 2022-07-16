//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGAXGroupSource-Protocol.h>
#import <PhotosUICore/PXGAXInfoSource-Protocol.h>
#import <PhotosUICore/PXGAXResponder-Protocol.h>
#import <PhotosUICore/PXGDataSourceDrivenLayout-Protocol.h>
#import <PhotosUICore/PXGDiagnosticsProvider-Protocol.h>
#import <PhotosUICore/PXGSpriteIndexReferencing-Protocol.h>

@class NSArray, NSIndexSet, NSMutableArray, NSMutableSet, NSString, PXGAnchor, PXGBasicAXGroup, PXGDataSourceChange, PXGDecoratingLayout, PXGEntityManager, PXGItemsLayout, PXGSpriteDataStore, PXGSpriteMetadataStore, PXGSublayoutDataStore, PXGViewEnvironment, PXMediaProvider;
@protocol OS_dispatch_queue, PXGAXResponder, PXGDisplayAssetSource, PXGLayoutContentSource, PXGLayoutScrollDelegate, PXGLayoutUpdateDelegate, PXGLayoutViewDelegate, PXGLayoutVisibleRectDelegate, UICoordinateSpace;

@interface PXGLayout : NSObject <PXGDataSourceDrivenLayout, PXGAXGroupSource, PXGAXInfoSource, PXGAXResponder, PXGSpriteIndexReferencing, PXGDiagnosticsProvider>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    NSMutableArray *_changeDetails;	// 32 = 0x20
    NSMutableArray *_animations;	// 40 = 0x28
    NSMutableArray *_transitions;	// 48 = 0x30
    NSMutableArray *_fences;	// 56 = 0x38
    NSMutableArray *_spriteReferencesForHiddenSprites;	// 64 = 0x40
    NSIndexSet *_localHiddenSpriteIndexes;	// 72 = 0x48
    NSIndexSet *_spriteIndexesWithInvalidatedStyle;	// 80 = 0x50
    _Bool _isRequestingVisibleRect;	// 88 = 0x58
    _Bool _isUpdating;	// 89 = 0x59
    _Bool _isUpdatingSpriteStyling;	// 90 = 0x5a
    _Bool _isUpdatingAnchoring;	// 91 = 0x5b
    _Bool _isPropagatingAdjustedReferencedHiddenSpriteIndexes;	// 92 = 0x5c
    _Bool _isLastVisibleAreaAnchoringInformationInvalidated;	// 93 = 0x5d
    _Bool _isPerformingWithLocalUpdate;	// 94 = 0x5e
    PXGBasicAXGroup *_reusableAXGroup;	// 96 = 0x60
    long long _nestedAnchorVisibleRectChanges;	// 104 = 0x68
    NSMutableSet *_sublayoutsExpectedToBeUpdatedInUpdatePass;	// 112 = 0x70
    long long _numberOfRepeatedSublayoutUpdatesInUpdatePass;	// 120 = 0x78
    unsigned long long _childrenTotalUpdateDuration;	// 128 = 0x80
    _Bool _needsUpdate;	// 136 = 0x88
    _Bool _floating;	// 137 = 0x89
    _Bool _appliesAlphaToSublayouts;	// 138 = 0x8a
    unsigned short _referenceOptions;	// 140 = 0x8c
    unsigned int _numberOfSprites;	// 144 = 0x90
    struct {
        _Bool stringDrawingOptionsForSpriteAtIndexInLayout;
        _Bool paddingForSpriteAtIndexInLayout;
        _Bool drawingContextForSpriteAtIndexInLayout;
        _Bool attributedStringBoundingSizeForSpriteAtIndexInLayout;
    } _stringSourceRespondsTo;	// 148 = 0x94
    unsigned int _viewHostingSpriteIndex;	// 152 = 0x98
    struct {
        _Bool supportedDisplayAssetPresentationStylesInLayout;
        _Bool minSpriteSizeForPresentationStyle;
        _Bool displayAssetRequestObserverForSpritesInRangeInLayout;
        _Bool videoPresentationControllerForDisplayAssetSpriteIndexInLayout;
        _Bool adjustmentForDisplayAssetSpriteIndexInLayout;
        _Bool presentationIntentForSpritesInRangeInLayout;
    } _displayAssetSourceRespondsTo;	// 156 = 0x9c
    PXGSpriteDataStore *_spriteDataStore;	// 168 = 0xa8
    PXGSublayoutDataStore *_sublayoutDataStore;	// 176 = 0xb0
    NSArray *_interactions;	// 184 = 0xb8
    PXGLayout *_superlayout;	// 192 = 0xc0
    PXGEntityManager *_entityManager;	// 200 = 0xc8
    NSObject<OS_dispatch_queue> *_layoutQueue;	// 208 = 0xd0
    PXGViewEnvironment *_viewEnvironment;	// 216 = 0xd8
    unsigned long long _appearState;	// 224 = 0xe0
    double _referenceDepth;	// 232 = 0xe8
    double _screenScale;	// 240 = 0xf0
    long long _scrollSpeedRegime;	// 248 = 0xf8
    double _alpha;	// 256 = 0x100
    unsigned long long _userInterfaceDirection;	// 264 = 0x108
    long long _version;	// 272 = 0x110
    double _lastBaseline;	// 280 = 0x118
    double _floatingOffset;	// 288 = 0x120
    id <PXGLayoutContentSource> _contentSource;	// 296 = 0x128
    id _userData;	// 304 = 0x130
    PXMediaProvider *_mediaProvider;	// 312 = 0x138
    PXGSpriteMetadataStore *_spriteMetadataStore;	// 320 = 0x140
    id <PXGLayoutUpdateDelegate> _updateDelegate;	// 328 = 0x148
    id <PXGLayoutVisibleRectDelegate> _visibleRectDelegate;	// 336 = 0x150
    id <PXGLayoutScrollDelegate> _scrollDelegate;	// 344 = 0x158
    id <PXGLayoutViewDelegate> _viewDelegate;	// 352 = 0x160
    long long _updateCount;	// 360 = 0x168
    id <PXGDisplayAssetSource> _displayAssetSource;	// 368 = 0x170
    long long _intrinsicScrollRegime;	// 376 = 0x178
    PXGDataSourceChange *_internalCurrentDataSourceChange;	// 384 = 0x180
    PXGAnchor *_activeAnchor;	// 392 = 0x188
    PXGAnchor *_lastVisibleAreaAnchor;	// 400 = 0x190
    long long _numberOfDescendantAnchors;	// 408 = 0x198
    id <PXGAXResponder> _axNextResponder;	// 416 = 0x1a0
    PXGLayout *_nextViewHostingLayout;	// 424 = 0x1a8
    struct CGSize _referenceSize;	// 432 = 0x1b0
    struct CGPoint _lastScrollDirection;	// 448 = 0x1c0
    struct CGSize _contentSize;	// 464 = 0x1d0
    struct CGSize _estimatedContentSize;	// 480 = 0x1e0
    struct CGRect _visibleRect;	// 496 = 0x1f0
    struct UIEdgeInsets _safeAreaInsets;	// 528 = 0x210
    PXGCameraConfiguration_f6f8b209 _cameraConfiguration;	// 560 = 0x230
}

- (void).cxx_destruct;	// IMP=0x000000000009c8d1
@property(nonatomic) PXGCameraConfiguration_474424ad cameraConfiguration; // @synthesize cameraConfiguration=_cameraConfiguration;
@property(nonatomic) __weak PXGLayout *nextViewHostingLayout; // @synthesize nextViewHostingLayout=_nextViewHostingLayout;
@property(readonly, nonatomic) unsigned int viewHostingSpriteIndex; // @synthesize viewHostingSpriteIndex=_viewHostingSpriteIndex;
@property(nonatomic) __weak id <PXGAXResponder> axNextResponder; // @synthesize axNextResponder=_axNextResponder;
@property(readonly, nonatomic) long long numberOfDescendantAnchors; // @synthesize numberOfDescendantAnchors=_numberOfDescendantAnchors;
@property(readonly, nonatomic) _Bool appliesAlphaToSublayouts; // @synthesize appliesAlphaToSublayouts=_appliesAlphaToSublayouts;
@property(retain, nonatomic) PXGAnchor *lastVisibleAreaAnchor; // @synthesize lastVisibleAreaAnchor=_lastVisibleAreaAnchor;
@property(nonatomic) struct CGSize estimatedContentSize; // @synthesize estimatedContentSize=_estimatedContentSize;
@property(readonly, nonatomic) PXGAnchor *activeAnchor; // @synthesize activeAnchor=_activeAnchor;
@property(retain, nonatomic) PXGDataSourceChange *internalCurrentDataSourceChange; // @synthesize internalCurrentDataSourceChange=_internalCurrentDataSourceChange;
@property(readonly, nonatomic) long long intrinsicScrollRegime; // @synthesize intrinsicScrollRegime=_intrinsicScrollRegime;
@property(readonly, nonatomic) CDStruct_8024420c stringSourceRespondsTo; // @synthesize stringSourceRespondsTo=_stringSourceRespondsTo;
@property(readonly, nonatomic) CDStruct_157d85a6 displayAssetSourceRespondsTo; // @synthesize displayAssetSourceRespondsTo=_displayAssetSourceRespondsTo;
@property(readonly, nonatomic) __weak id <PXGDisplayAssetSource> displayAssetSource; // @synthesize displayAssetSource=_displayAssetSource;
@property(readonly, nonatomic) long long updateCount; // @synthesize updateCount=_updateCount;
@property(nonatomic) __weak id <PXGLayoutViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(nonatomic) __weak id <PXGLayoutScrollDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) __weak id <PXGLayoutVisibleRectDelegate> visibleRectDelegate; // @synthesize visibleRectDelegate=_visibleRectDelegate;
@property(nonatomic) __weak id <PXGLayoutUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(readonly, nonatomic) PXGSpriteMetadataStore *spriteMetadataStore; // @synthesize spriteMetadataStore=_spriteMetadataStore;
@property(retain, nonatomic) PXMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(nonatomic) __weak id <PXGLayoutContentSource> contentSource; // @synthesize contentSource=_contentSource;
@property(nonatomic) double floatingOffset; // @synthesize floatingOffset=_floatingOffset;
@property(nonatomic, getter=isFloating) _Bool floating; // @synthesize floating=_floating;
@property(nonatomic) double lastBaseline; // @synthesize lastBaseline=_lastBaseline;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) unsigned int numberOfSprites; // @synthesize numberOfSprites=_numberOfSprites;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(nonatomic) unsigned long long userInterfaceDirection; // @synthesize userInterfaceDirection=_userInterfaceDirection;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) long long scrollSpeedRegime; // @synthesize scrollSpeedRegime=_scrollSpeedRegime;
@property(nonatomic) struct CGPoint lastScrollDirection; // @synthesize lastScrollDirection=_lastScrollDirection;
@property(nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property(nonatomic) struct UIEdgeInsets safeAreaInsets; // @synthesize safeAreaInsets=_safeAreaInsets;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(nonatomic) unsigned short referenceOptions; // @synthesize referenceOptions=_referenceOptions;
@property(nonatomic) double referenceDepth; // @synthesize referenceDepth=_referenceDepth;
@property(nonatomic) struct CGSize referenceSize; // @synthesize referenceSize=_referenceSize;
@property(nonatomic) unsigned long long appearState; // @synthesize appearState=_appearState;
@property(retain, nonatomic) PXGViewEnvironment *viewEnvironment; // @synthesize viewEnvironment=_viewEnvironment;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue; // @synthesize layoutQueue=_layoutQueue;
@property(retain, nonatomic) PXGEntityManager *entityManager; // @synthesize entityManager=_entityManager;
@property(nonatomic) __weak PXGLayout *superlayout; // @synthesize superlayout=_superlayout;
@property(copy, nonatomic) NSArray *interactions; // @synthesize interactions=_interactions;
@property(readonly, nonatomic) PXGSublayoutDataStore *sublayoutDataStore; // @synthesize sublayoutDataStore=_sublayoutDataStore;
@property(readonly, nonatomic) PXGSpriteDataStore *spriteDataStore; // @synthesize spriteDataStore=_spriteDataStore;
@property(readonly, nonatomic) NSIndexSet *preferredFocusSpriteIndexes;
@property(readonly, nonatomic) NSArray *preferredFocusLayouts;
- (void)enumerateDescendantsLayoutsBreadthFirstReverseUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000009bfda
- (void)enumerateDescendantsLayoutsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000009be3b
- (id)diagnosticsItemProvidersInRect:(struct CGRect)arg1;	// IMP=0x000000000009bd44
@property(readonly, nonatomic) PXGBasicAXGroup *axGroup;
- (void)mediaProviderDidChange;	// IMP=0x000000000009bd30
- (void)_appendDescription:(id)arg1 atLevel:(long long)arg2;	// IMP=0x000000000009baf8
- (id)_paddingForLevel:(long long)arg1;	// IMP=0x000000000009ba7b
@property(readonly, nonatomic) NSString *recursiveDescription;
@property(readonly, copy, nonatomic) NSString *diagnosticDescription;
@property(readonly, nonatomic) CDStruct_c1f6e9bb orientedContentTransform;
@property(readonly, nonatomic) unsigned long long fullyVisibleEdgesWithDefaultTolerance;
- (unsigned long long)fullyVisibleEdgesWithEdgeTolerances:(struct UIEdgeInsets)arg1;	// IMP=0x000000000009b346
- (struct _PXGSpriteIndexRange)spriteIndexRangeCoveringRect:(struct CGRect)arg1;	// IMP=0x000000000009b32f
- (void)_enumerateSpritesInRect:(struct CGRect)arg1 transform:(CDStruct_c1f6e9bb)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000009b04c
- (void)enumerateLocalSpritesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000009af46
- (void)enumerateSpritesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000009aeea
- (id)leafSublayoutForSpriteIndex:(unsigned int)arg1;	// IMP=0x000000000009adfe
- (id)sublayoutForSpriteIndex:(unsigned int)arg1;	// IMP=0x000000000009ad7a
- (long long)sublayoutIndexForSpriteIndex:(unsigned int)arg1;	// IMP=0x000000000009acb9
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;	// IMP=0x000000000009ab48
- (void)_enumerateSpritesInRange:(struct _PXGSpriteIndexRange)arg1 transform:(CDStruct_c1f6e9bb)arg2 spriteOffset:(unsigned int)arg3 stop:(_Bool *)arg4 usingBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000009a8a4
- (void)enumerateSpritesInRange:(struct _PXGSpriteIndexRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000009a7b8
- (void)enumerateSpritesInRange:(struct _PXGSpriteIndexRange)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000009a7a1
- (void)copyLayoutForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 applySpriteTransforms:(_Bool)arg2 parentTransform:(CDStruct_c1f6e9bb)arg3 parentAlpha:(float)arg4 parentSublayoutOrigin:(CDStruct_39925896)arg5 entities:(CDStruct_6238c8e0 *)arg6 geometries:(CDStruct_4f725fed *)arg7 styles:(CDStruct_76b550e2 *)arg8 infos:(CDStruct_9d1ebe49 *)arg9;	// IMP=0x000000000009a58c
- (void)copyLayoutForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 applySpriteTransforms:(_Bool)arg2 entities:(CDStruct_6238c8e0 *)arg3 geometries:(CDStruct_4f725fed *)arg4 styles:(CDStruct_76b550e2 *)arg5 infos:(CDStruct_9d1ebe49 *)arg6;	// IMP=0x000000000009a520
- (void)copyLayoutForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 entities:(CDStruct_6238c8e0 *)arg2 geometries:(CDStruct_4f725fed *)arg3 styles:(CDStruct_76b550e2 *)arg4 infos:(CDStruct_9d1ebe49 *)arg5;	// IMP=0x000000000009a4f7
- (void)copyLayoutForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 toSpriteDataStore:(id)arg2;	// IMP=0x000000000009a40d
- (void)copySpritesToDataStore:(id)arg1;	// IMP=0x000000000009a3b4
- (CDStruct_76b550e2)styleForSpriteAtIndex:(unsigned int)arg1;	// IMP=0x000000000009a321
- (CDStruct_4f725fed)geometryForSpriteAtIndex:(unsigned int)arg1;	// IMP=0x000000000009a2ab
- (CDStruct_6238c8e0)entityForSpriteAtIndex:(unsigned int)arg1;	// IMP=0x000000000009a24f
- (void)contentSizeDidChange;	// IMP=0x000000000009a191
- (void)setNeedsUpdateOfScrollableAxis;	// IMP=0x000000000009a06e
@property(readonly, nonatomic) long long scrollableAxis;
@property(readonly, copy, nonatomic) NSArray *fences;
- (void)removeAllFences;	// IMP=0x000000000009a02f
- (void)_addFences:(id)arg1;	// IMP=0x0000000000099fa4
- (void)addFence:(id)arg1;	// IMP=0x0000000000099f2e
@property(readonly, copy, nonatomic) NSArray *transitions;
- (void)removeAllTransitions;	// IMP=0x0000000000099efa
- (void)addTransition:(id)arg1;	// IMP=0x0000000000099e84
@property(readonly, copy, nonatomic) NSArray *animations;
- (void)removeAllAnimations;	// IMP=0x0000000000099e50
- (void)_addAnimations:(id)arg1;	// IMP=0x0000000000099dc5
- (void)removeAnimation:(id)arg1;	// IMP=0x0000000000099d91
- (void)addAnimation:(id)arg1;	// IMP=0x0000000000099d1b
- (id)dropTargetObjectReferenceForLocation:(struct CGPoint)arg1;	// IMP=0x0000000000099b86
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;	// IMP=0x0000000000099985
- (unsigned int)spriteIndexForObjectReference:(id)arg1;	// IMP=0x000000000009995d
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;	// IMP=0x000000000009994d
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;	// IMP=0x000000000009986d
@property(readonly, nonatomic) _Bool allowsObjectReferenceSpriteIndexLookup;
@property(readonly, nonatomic) long long anchoredSublayoutIndex;
@property(readonly, nonatomic) _Bool shouldFaultInContentAtAnchoredContentEdges;
@property(readonly, nonatomic) unsigned long long anchoredContentEdges;
- (void)sublayout:(id)arg1 didRemoveAnchor:(id)arg2;	// IMP=0x000000000009962d
- (void)sublayout:(id)arg1 didAddAnchor:(id)arg2;	// IMP=0x0000000000099573
- (void)markLastVisibleAreaAnchoringInformationForInvalidation;	// IMP=0x0000000000099569
- (void)_updateAnchoring;	// IMP=0x0000000000099256
- (void)_updateVersion;	// IMP=0x00000000000991d0
- (void)invalidateVersion;	// IMP=0x0000000000099136
- (void)removeAnchor:(id)arg1;	// IMP=0x00000000000990e0
- (void)addAnchor:(id)arg1;	// IMP=0x0000000000099036
@property(readonly, nonatomic) _Bool canHandleVisibleRectRejection;
- (_Bool)changeVisibleRectToProposedVisibleRect:(struct CGRect)arg1;	// IMP=0x0000000000098d1f
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000098aea
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000098a56
- (void)adjustReferencedSpriteIndexesWithChangeDetails:(id)arg1 appliedToLayout:(id)arg2;	// IMP=0x000000000009872c
- (void)_incrementNumberOfSprites:(long long)arg1;	// IMP=0x0000000000098720
- (id)convertChangeDetails:(id)arg1 fromSublayout:(id)arg2;	// IMP=0x0000000000098595
- (struct _PXGSpriteIndexRange)convertRange:(struct _PXGSpriteIndexRange)arg1 fromSublayout:(id)arg2;	// IMP=0x00000000000984bf
- (void)sublayout:(id)arg1 didApplySpriteChangeDetails:(id)arg2 fromDescendentSublayout:(id)arg3;	// IMP=0x0000000000098186
- (void)didApplySpriteChangeDetails:(id)arg1;	// IMP=0x0000000000098114
- (unsigned short)addResizableCapInsets:(CDStruct_0054b44d)arg1;	// IMP=0x00000000000980b7
- (void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned int)arg2 initialState:(CDUnknownBlockType)arg3 modifyFullState:(CDUnknownBlockType)arg4;	// IMP=0x0000000000097bb5
- (void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned int)arg2 initialState:(CDUnknownBlockType)arg3 modifyState:(CDUnknownBlockType)arg4;	// IMP=0x0000000000097b10
- (void)modifySpritesAtIndexes:(id)arg1 fullState:(CDUnknownBlockType)arg2;	// IMP=0x0000000000097a5e
- (void)modifySpritesAtIndexes:(id)arg1 state:(CDUnknownBlockType)arg2;	// IMP=0x00000000000979c4
- (void)modifySpritesInRange:(struct _PXGSpriteIndexRange)arg1 fullState:(CDUnknownBlockType)arg2;	// IMP=0x0000000000097919
- (void)modifySpritesInRange:(struct _PXGSpriteIndexRange)arg1 state:(CDUnknownBlockType)arg2;	// IMP=0x000000000009787b
- (void)modifySpritesInRect:(struct CGRect)arg1 state:(CDUnknownBlockType)arg2;	// IMP=0x0000000000097789
- (void)moveSpritesInRange:(struct _PXGSpriteIndexRange)arg1 toRange:(struct _PXGSpriteIndexRange)arg2;	// IMP=0x00000000000976fe
- (void)removeSpritesAtIndexes:(id)arg1;	// IMP=0x0000000000097648
- (void)removeSpritesInRange:(struct _PXGSpriteIndexRange)arg1;	// IMP=0x00000000000975c8
- (void)addSpritesAtIndexes:(id)arg1 initialState:(CDUnknownBlockType)arg2;	// IMP=0x00000000000974f1
- (void)addSpritesInRange:(struct _PXGSpriteIndexRange)arg1 initialState:(CDUnknownBlockType)arg2;	// IMP=0x000000000009743b
- (struct _PXGSpriteIndexRange)addSpriteCount:(unsigned int)arg1 withInitialState:(CDUnknownBlockType)arg2;	// IMP=0x00000000000973cd
- (unsigned int)addSpriteWithInitialState:(CDUnknownBlockType)arg1;	// IMP=0x00000000000973b3
- (void)performRepeatedSublayoutsUpdate:(CDUnknownBlockType)arg1;	// IMP=0x00000000000973a4
@property(readonly, nonatomic) _Bool hasSublayoutsRemainingToBeUpdated;
@property(readonly, nonatomic) _Bool allowsSublayoutUpdateCycleAssertions;
- (void)didUpdateSublayout:(id)arg1;	// IMP=0x0000000000097326
- (void)assumeWillUpdateSublayoutInUpdatePass:(id)arg1;	// IMP=0x0000000000097310
- (struct CGRect)sublayout:(id)arg1 visibleRectForRequestedVisibleRect:(struct CGRect)arg2;	// IMP=0x00000000000972f8
- (void)didChangeSublayoutOrigins;	// IMP=0x00000000000972bb
- (void)sublayoutDidChangeLastBaseline:(id)arg1;	// IMP=0x00000000000972b5
- (void)sublayoutDidChangeContentSize:(id)arg1;	// IMP=0x00000000000972af
- (void)sublayoutNeedsUpdate:(id)arg1;	// IMP=0x00000000000972a9
- (id)sublayoutAtIndex:(long long)arg1 loadIfNeeded:(_Bool)arg2;	// IMP=0x0000000000097186
- (void)insertSublayoutProvider:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000000970ef
- (void)insertSublayoutProvider:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000009705a
- (void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;	// IMP=0x0000000000096d5a
- (void)didAddSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;	// IMP=0x0000000000096bc1
- (void)_willAddSublayout:(id)arg1;	// IMP=0x0000000000096ad3
- (void)willFaultOutSublayout:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000096a25
- (void)didFaultInSublayout:(id)arg1 atIndex:(long long)arg2 fromEstimatedContentSize:(struct CGSize)arg3;	// IMP=0x0000000000096943
- (void)didApplySublayoutChangeDetails:(id)arg1 axAdjustedSubgroupChangeDetails:(id)arg2 countAfterChanges:(long long)arg3;	// IMP=0x00000000000968d1
- (void)applySublayoutChangeDetails:(id)arg1 countAfterChanges:(long long)arg2 sublayoutProvider:(id)arg3;	// IMP=0x0000000000096549
- (void)removeSublayoutsAtIndexes:(id)arg1;	// IMP=0x00000000000964f2
- (void)removeSublayoutsInRange:(struct _NSRange)arg1;	// IMP=0x000000000009643b
- (void)removeSublayoutAtIndex:(long long)arg1;	// IMP=0x0000000000096424
- (long long)indexOfSublayout:(id)arg1;	// IMP=0x00000000000963ad
- (void)insertSublayout:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000962b3
- (void)removeFromSuperlayout;	// IMP=0x0000000000096215
- (long long)addSublayout:(id)arg1;	// IMP=0x00000000000961b0
@property(readonly, nonatomic) long long numberOfSublayouts;
- (void)_ensureSublayoutDataStore;	// IMP=0x000000000009612c
- (void)_invalidateStyleOfSpritesWithIndexes:(id)arg1;	// IMP=0x0000000000095f19
- (void)_addHiddenSpriteIndexes:(id)arg1;	// IMP=0x0000000000095e52
- (void)_recursivelyResetHiddenSpriteIndexes;	// IMP=0x0000000000095e39
- (void)_resetHiddenSpriteIndexes;	// IMP=0x0000000000095dee
- (void)_propagateHiddenSpriteIndexes:(id)arg1;	// IMP=0x0000000000095cb2
- (void)hideSpritesForObjectReferences:(id)arg1;	// IMP=0x000000000009596a
@property(copy, nonatomic) NSIndexSet *hiddenSpriteIndexes;
- (void)floatingOffsetDidChange;	// IMP=0x0000000000095722
- (void)floatingDidChange;	// IMP=0x00000000000956f0
- (void)userInterfaceDirectionDidChange;	// IMP=0x00000000000956c8
- (void)alphaDidChange;	// IMP=0x000000000009569e
- (void)scrollSpeedRegimeDidChange;	// IMP=0x0000000000095639
- (void)lastScrollDirectionDidChange;	// IMP=0x000000000009560f
- (void)screenScaleDidChange;	// IMP=0x00000000000955c5
- (void)safeAreaInsetsDidChange;	// IMP=0x0000000000095593
- (void)containingScrollViewDidScroll:(struct CGPoint)arg1;	// IMP=0x0000000000095497
- (void)visibleRectDidChange;	// IMP=0x0000000000095421
- (void)referenceOptionsDidChange;	// IMP=0x0000000000095322
- (void)referenceDepthDidChange;	// IMP=0x00000000000952f8
- (void)referenceSizeDidChange;	// IMP=0x00000000000952c6
- (void)layoutQueueDidChange;	// IMP=0x000000000009527c
- (void)appearStateDidChange;	// IMP=0x0000000000095189
- (void)viewEnvironmentDidChange;	// IMP=0x00000000000950ee
- (id)viewForSpriteIndex:(unsigned int)arg1;	// IMP=0x0000000000094ef0
- (void)updateAsRootIfNeeded;	// IMP=0x0000000000094cdc
- (void)installLayoutCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000094b56
- (void)performChangesWithLocalUpdate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000094b15
- (void)performSpriteStylingUpdate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000094af4
@property(readonly, nonatomic) _Bool isUpdatingSpriteStyling;
- (void)updateStylingForSpritesAtIndexes:(id)arg1;	// IMP=0x0000000000094a1d
- (void)didUpdate;	// IMP=0x000000000009487e
- (void)update;	// IMP=0x0000000000094695
- (void)willUpdate;	// IMP=0x00000000000945e0
- (void)updateIfNeeded;	// IMP=0x000000000009437c
- (void)_childDidUpdateWithDuration:(unsigned long long)arg1;	// IMP=0x000000000009436f
@property(readonly, nonatomic) _Bool allowsDanglingUpdatesAssertions;
- (void)_setNeedsUpdateExternally:(_Bool)arg1;	// IMP=0x0000000000094178
- (void)setNeedsUpdate;	// IMP=0x0000000000094161
@property(readonly, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace;
- (unsigned int)convertSpriteIndex:(unsigned int)arg1 fromLayout:(id)arg2;	// IMP=0x0000000000094063
- (id)commonAncestorWithLayout:(id)arg1;	// IMP=0x0000000000093f80
- (_Bool)isDescendantOfLayout:(id)arg1;	// IMP=0x0000000000093ee9
- (struct CGPoint)_offsetToDescendantLayout:(id)arg1;	// IMP=0x0000000000093c7b
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromLayout:(id)arg2;	// IMP=0x0000000000093bf9
- (struct CGRect)convertRect:(struct CGRect)arg1 fromLayout:(id)arg2;	// IMP=0x0000000000093af9
- (struct CGRect)convertRect:(struct CGRect)arg1 fromDescendantLayout:(id)arg2;	// IMP=0x0000000000093a25
- (struct CGRect)convertRect:(struct CGRect)arg1 toDescendantLayout:(id)arg2;	// IMP=0x0000000000093961
- (id)convertSpriteIndexes:(id)arg1 fromDescendantLayout:(id)arg2;	// IMP=0x0000000000093702
- (struct _PXGSpriteIndexRange)convertSpriteIndexRange:(struct _PXGSpriteIndexRange)arg1 fromDescendantLayout:(id)arg2;	// IMP=0x0000000000093581
- (unsigned int)convertSpriteIndex:(unsigned int)arg1 fromDescendantLayout:(id)arg2;	// IMP=0x0000000000093568
- (unsigned int)convertSpriteIndex:(unsigned int)arg1 toDescendantLayout:(id)arg2;	// IMP=0x00000000000933b8
- (void)enumerateLayoutsForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000093207
@property(readonly, nonatomic) PXGLayout *rootLayout;
- (void)superlayoutDidChange;	// IMP=0x00000000000930f6
- (void)entityManagerDidChange;	// IMP=0x000000000009308a
- (void)didRender;	// IMP=0x0000000000092e29
@property(readonly, nonatomic) unsigned long long contentChangeTrend;
@property(readonly, nonatomic) _Bool isAnimating;
@property(readonly, nonatomic) NSMutableArray *changeDetails;
@property(readonly, nonatomic) struct UIEdgeInsets flexibleRegionInsets;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) unsigned int childrenNumberOfSprites;
@property(readonly, nonatomic) unsigned int localNumberOfSprites;
- (void)_recycleSpriteDataStore;	// IMP=0x00000000000929d4
- (void)_ensureSpriteDataStore;	// IMP=0x000000000009298c
- (void)dealloc;	// IMP=0x0000000000092931
- (unsigned int)viewHostingSpriteIndexForSublayout:(id)arg1;	// IMP=0x00000000000928be
- (id)init;	// IMP=0x0000000000092768
@property(readonly, nonatomic) NSArray *pendingFences;
- (id)createFenceWithType:(unsigned long long)arg1;	// IMP=0x0000000000064cd4
@property(readonly, nonatomic) PXGItemsLayout *itemsLayout;
- (struct CGRect)anchoringRectForSpriteAtIndex:(unsigned int)arg1;	// IMP=0x00000000003578fd
- (void)invalidateLastVisibleAreaAnchoringInformation;	// IMP=0x00000000003578eb
- (void)clearLastVisibleAreaAnchoringInformation;	// IMP=0x0000000000357895
- (id)_createAnchorWithAnchor:(id)arg1 resetPriority:(_Bool)arg2;	// IMP=0x00000000003577ec
- (id)createAnchorWithAnchor:(id)arg1;	// IMP=0x00000000003577d5
- (id)createAnchorFromSuperlayoutWithSublayoutIndex:(long long)arg1 sublayoutPositionEdges:(unsigned long long)arg2 ignoringScrollingAnimationAnchors:(_Bool)arg3;	// IMP=0x00000000003575ce
- (id)createAnchorForScrollingAnimationTowardsContentEdges:(unsigned long long)arg1;	// IMP=0x00000000003574bf
- (id)createAnchorForScrollingToContentEdges:(unsigned long long)arg1 padding:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000357387
- (id)_createAnchorForContentEdges:(unsigned long long)arg1 priority:(long long)arg2;	// IMP=0x0000000000357210
- (id)createAnchorForContentEdges:(unsigned long long)arg1;	// IMP=0x00000000003571f9
- (id)createAnchorForScrollingSpriteForSpriteReference:(id)arg1 normalizedAnchorPoint:(struct CGPoint)arg2 toVisibleLocation:(struct CGPoint)arg3;	// IMP=0x00000000003570c3
- (id)createAnchorForScrollingSpriteForSpriteReference:(id)arg1 toScrollPosition:(unsigned long long)arg2 padding:(struct UIEdgeInsets)arg3 customOffset:(CDUnknownBlockType)arg4;	// IMP=0x0000000000356ee3
- (id)createAnchorForScrollingSpriteForSpriteReference:(id)arg1 toScrollPosition:(unsigned long long)arg2 padding:(struct UIEdgeInsets)arg3;	// IMP=0x0000000000356ece
- (id)createAnchorForScrollingSpriteAtIndex:(unsigned int)arg1 toScrollPosition:(unsigned long long)arg2 padding:(struct UIEdgeInsets)arg3;	// IMP=0x0000000000356dcc
- (id)createAnchorForScrollingSpriteForObjectReference:(id)arg1 toScrollPosition:(unsigned long long)arg2 padding:(struct UIEdgeInsets)arg3;	// IMP=0x0000000000356d4f
- (id)_createAnchorWithPriority:(long long)arg1 constraints:(CDUnknownBlockType)arg2;	// IMP=0x0000000000356bb1
- (id)createAnchorWithConstraints:(CDUnknownBlockType)arg1;	// IMP=0x0000000000356b97
- (id)createAnchorForSpriteReferences:(id)arg1;	// IMP=0x0000000000356af7
- (id)createAnchorForSpriteAtIndex:(unsigned int)arg1;	// IMP=0x0000000000356a3a
- (id)createAnchorForVisibleAreaIgnoringEdges:(unsigned long long)arg1;	// IMP=0x000000000035683b
- (id)createAnchorForVisibleArea;	// IMP=0x0000000000356827
@property(readonly, nonatomic) PXGDataSourceChange *currentDataSourceChange;
@property(readonly, nonatomic) PXGItemsLayout *layoutForItemChanges;
- (void)applySectionedChangeDetailsForSingleSection:(id)arg1 dataSourceBeforeChanges:(id)arg2 dataSourceAfterChanges:(id)arg3 changeMediaVersionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000003b3603
- (void)applySectionedChangeDetails:(id)arg1 dataSourceBeforeChanges:(id)arg2 dataSourceAfterChanges:(id)arg3 sublayoutProvider:(id)arg4 outChangedSections:(id *)arg5 outSectionsWithItemChanges:(id *)arg6 changeMediaVersionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000003b2b93
- (void)enumerateSublayoutsForDetailedPlacement:(id)arg1 ofItemWithReference:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000003f83d2
- (void)setDetailedPlacementOverride:(id)arg1 forItemReference:(id)arg2;	// IMP=0x00000000003f8335
- (void)getDetailedPresentedPlacement:(id)arg1 forItemReference:(id)arg2;	// IMP=0x00000000003f8298
- (void)animationDidComplete:(id)arg1;	// IMP=0x0000000000416419
@property(readonly, nonatomic) NSArray *pendingAnimations;
- (id)createDefaultAnimationForCurrentContext;	// IMP=0x0000000000416329
- (id)createAnimation;	// IMP=0x00000000004162b3
- (struct CGSize)minPlayableSizeForSpriteAtIndex:(unsigned int)arg1;	// IMP=0x000000000053c783
- (id)createCuratedLibraryLayoutTransitionIfNeededWithContext:(long long)arg1;	// IMP=0x0000000000594ce8
- (id)createCuratedLibraryLayoutAnimationIfNeededWithContext:(long long)arg1;	// IMP=0x0000000000594cd4
- (id)createCuratedLibraryLayoutSkimmingSlideshowAnimationFromSectionIndexPath:(struct PXSimpleIndexPath)arg1 toSectionIndexPath:(struct PXSimpleIndexPath)arg2;	// IMP=0x0000000000594b68
- (id)createCuratedLibraryLayoutZoomLevelChangeAnimationFromZoomLevel:(long long)arg1 toZoomLevel:(long long)arg2 withContext:(long long)arg3;	// IMP=0x0000000000594a48
- (id)createCuratedLibraryLayoutAnimationIfNeededWithContext:(long long)arg1 userData:(id)arg2;	// IMP=0x000000000059493e
- (void)removeInteraction:(id)arg1;	// IMP=0x00000000005d515c
- (void)addInteraction:(id)arg1;	// IMP=0x00000000005d5082
- (id)createTransitionWithAnimations:(id)arg1;	// IMP=0x00000000005d78ce
@property(readonly, nonatomic) PXGDecoratingLayout *decoratingLayout;
@property(readonly, nonatomic) _Bool shouldDecorateUndefinedMediaKind;
@property(readonly, nonatomic) _Bool shouldUpdateDecorationMediaTargetSizes;
@property(readonly, nonatomic) _Bool shouldInvalidateDecorationForModifiedSprites;
- (_Bool)isSpriteIndex:(unsigned int)arg1 decoratingSpriteWithIndex:(out unsigned int *)arg2;	// IMP=0x0000000000626ff8
- (void)_invalidateDecorationForSpriteRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2 invalidateSprites:(_Bool)arg3;	// IMP=0x0000000000626f7b
- (void)invalidateDecorationForSpritesInRange:(struct _PXGSpriteIndexRange)arg1;	// IMP=0x0000000000626f63
- (void)invalidateDecorationAndSprites;	// IMP=0x0000000000626f25
- (void)invalidateDecoration;	// IMP=0x0000000000626ef0
- (_Bool)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3;	// IMP=0x000000000077dbb2
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;	// IMP=0x000000000077db24
- (id)axContainingViewForAXGroup:(id)arg1;	// IMP=0x000000000077da2b
- (id)axContainingScrollViewForAXGroup:(id)arg1;	// IMP=0x000000000077d9a8
- (id)axLeafForObjectReference:(id)arg1;	// IMP=0x000000000077d8ac
- (void)axDidReceiveFocusMovementHint:(id)arg1 forSpriteAtIndex:(unsigned int)arg2;	// IMP=0x000000000077d8a6
- (void)axDidUpdateFocusInContext:(id)arg1;	// IMP=0x000000000077d8a0
- (void)axDidUpdateFocusFromSpriteAtIndex:(unsigned int)arg1 toSpriteAtIndex:(unsigned int)arg2;	// IMP=0x000000000077d89a
- (unsigned long long)axFocusabilityForSpriteAtIndex:(unsigned int)arg1;	// IMP=0x000000000077d812
- (unsigned int)axSpriteIndexClosestToSpriteIndexDefaultImplementation:(unsigned int)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x000000000077d755
- (id)axSpriteIndexesInRectDefaultImplementation:(struct CGRect)arg1;	// IMP=0x000000000077d678
- (id)axSpriteIndexesInRect:(struct CGRect)arg1;	// IMP=0x000000000077d666
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x000000000077d65b
- (id)axContentInfoAtSpriteIndex:(unsigned int)arg1;	// IMP=0x000000000077d29c
@property(readonly, nonatomic) NSIndexSet *axSelectedSpriteIndexes;
@property(readonly, nonatomic) NSIndexSet *axVisibleSpriteIndexes;
@property(readonly, nonatomic) NSIndexSet *axSpriteIndexes;
@property(readonly, nonatomic) _Bool axShouldBeConsideredAsSubgroup;
@property(readonly, nonatomic) _Bool axShouldSearchLeafsInSubgroups;
- (struct CGPoint)axConvertPoint:(struct CGPoint)arg1 toDescendantGroup:(id)arg2;	// IMP=0x000000000077cda8
- (struct CGPoint)axConvertPoint:(struct CGPoint)arg1 fromDescendantGroup:(id)arg2;	// IMP=0x000000000077cb19
- (struct CGRect)axConvertRect:(struct CGRect)arg1 toDescendantGroup:(id)arg2;	// IMP=0x000000000077c8a0
- (struct CGRect)axConvertRect:(struct CGRect)arg1 fromDescendantGroup:(id)arg2;	// IMP=0x000000000077c627
@property(readonly, nonatomic) struct CGRect axVisibleRect;
@property(readonly, nonatomic) struct CGRect axFrame;
@property(readonly, nonatomic) NSString *axLocalizedLabel;
- (void)axRemoveSubgroupForSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;	// IMP=0x000000000077c542
- (void)axAddSubgroupForSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;	// IMP=0x000000000077c456
- (long long)sublayoutIndexForSpriteReference:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000083c4a9
- (unsigned int)spriteIndexForSpriteReference:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000083c122
- (id)spriteReferenceForSpriteReference:(id)arg1;	// IMP=0x000000000083bff9
- (id)dynamicSpriteReferenceForObjectReference:(id)arg1;	// IMP=0x000000000083bf6e
- (id)spriteReferenceForObjectReference:(id)arg1;	// IMP=0x000000000083bf54
- (id)spriteReferenceForSpriteIndex:(unsigned int)arg1 objectReference:(id)arg2;	// IMP=0x000000000083be63
- (unsigned int)spriteIndexForSpriteReference:(id)arg1;	// IMP=0x000000000083be4f
- (id)spriteReferenceForSpriteIndex:(unsigned int)arg1;	// IMP=0x000000000083be3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

