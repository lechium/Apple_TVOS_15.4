//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionLayoutAuxillaryHosting-Protocol.h>
#import <UIKitCore/_UIDynamicReferenceSystem-Protocol.h>

@class NSArray, NSIndexSet, NSMutableDictionary, NSString, UITraitCollection, _UICollectionCompositionalLayoutDynamicAnimator, _UICollectionCompositionalLayoutSolverOptions, _UICollectionLayoutAuxillaryItemSolver, _UICollectionLayoutContainer, _UICollectionLayoutDynamicsConfiguration, _UICollectionLayoutSectionGeometryTranslator, _UICollectionPreferredSizes, _UIDataSourceSnapshotter, _UIRTree;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutSolver : NSObject <_UICollectionLayoutAuxillaryHosting, _UIDynamicReferenceSystem>
{
    _Bool _estimatesSizes;	// 8 = 0x8
    _Bool _hasOrthogonalScrollingSections;	// 9 = 0x9
    _Bool _shouldPerformPhysicalRTLTransforms;	// 10 = 0xa
    _Bool _roundsToScreenScale;	// 11 = 0xb
    _Bool _layoutRTL;	// 12 = 0xc
    CDUnknownBlockType _cellLayoutAttributesTransformer;	// 16 = 0x10
    CDUnknownBlockType _sectionDecorationLayoutAttributesTransformer;	// 24 = 0x18
    CDUnknownBlockType _sectionSupplementaryLayoutAttributesTransformer;	// 32 = 0x20
    _UICollectionLayoutContainer *_container;	// 40 = 0x28
    UITraitCollection *_traitCollection;	// 48 = 0x30
    unsigned long long _layoutAxis;	// 56 = 0x38
    _UIDataSourceSnapshotter *_dataSourceSnapshot;	// 64 = 0x40
    double _interSectionSpacing;	// 72 = 0x48
    NSIndexSet *_orthogonalScrollingSectionIndexes;	// 80 = 0x50
    CDUnknownBlockType _dynamicsConfigurationHandler;	// 88 = 0x58
    _UICollectionCompositionalLayoutSolverOptions *_options;	// 96 = 0x60
    Class _layoutAttributeClass;	// 104 = 0x68
    Class _invalidationContextClass;	// 112 = 0x70
    CDUnknownBlockType _invalidationHandler;	// 120 = 0x78
    double _memoizedScreenScale;	// 128 = 0x80
    CDUnknownBlockType _sectionProvider;	// 136 = 0x88
    NSIndexSet *_solutionBookmarkIndexesWithPinnedSupplementaryItems;	// 144 = 0x90
    _UICollectionCompositionalLayoutDynamicAnimator *_dynamicAnimator;	// 152 = 0x98
    _UICollectionLayoutDynamicsConfiguration *_dynamicsConfiguration;	// 160 = 0xa0
    NSArray *_solutionBookmarks;	// 168 = 0xa8
    _UIRTree *_sectionIndexer;	// 176 = 0xb0
    _UICollectionLayoutSectionGeometryTranslator *_sectionGeometryTranslator;	// 184 = 0xb8
    NSMutableDictionary *_cachedItemAttributes;	// 192 = 0xc0
    NSMutableDictionary *_cachedSupplementaryAttributes;	// 200 = 0xc8
    NSMutableDictionary *_cachedDecorationAttributes;	// 208 = 0xd0
    NSArray *_globalSupplementaryItems;	// 216 = 0xd8
    _UICollectionLayoutAuxillaryItemSolver *_globalSupplementarySolver;	// 224 = 0xe0
    _UICollectionPreferredSizes *_globalSupplementaryPreferredSizes;	// 232 = 0xe8
    long long _numberOfSectionsWithTransformVisibleItemsHandler;	// 240 = 0xf0
    struct CGSize _actualContentSize;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x00000000002603c5
@property(readonly, nonatomic) struct CGRect bounds;
- (struct CGRect)_dynamicReferenceBounds;	// IMP=0x000000000026037b
- (_Bool)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;	// IMP=0x0000000000260373
- (id)auxillaryHostPreferredSizes;	// IMP=0x0000000000260356
- (id)auxillaryHostSupplementaryEnroller;	// IMP=0x000000000026033d
- (long long)auxillaryHostAuxillaryKind;	// IMP=0x0000000000260332
- (unsigned long long)auxillaryHostLayoutAxis;	// IMP=0x0000000000260320
- (_Bool)auxillaryHostShouldLayoutRTL;	// IMP=0x000000000026030b
- (id)auxillaryHostAuxillaryItems;	// IMP=0x00000000002602e8
- (id)auxillaryHostContainer;	// IMP=0x00000000002602c8
- (struct CGRect)auxillaryHostPinningRect;	// IMP=0x00000000002601b6
- (struct CGSize)auxillaryHostContentSize;	// IMP=0x00000000002600f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
