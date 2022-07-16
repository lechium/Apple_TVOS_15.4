//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionLayoutAuxillaryHosting-Protocol.h>
#import <UIKitCore/_UICollectionLayoutSectionSolver-Protocol.h>

@class NSCollectionLayoutSection, NSIndexSet, NSString, UITraitCollection, _UICollectionLayoutAuxillaryItemSolver, _UICollectionLayoutSolutionState, _UICollectionLayoutSupplementaryRegistrar;
@protocol NSCollectionLayoutContainer, _UICollectionPreferredSizes;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSectionEstimatedSolver : NSObject <_UICollectionLayoutSectionSolver, _UICollectionLayoutAuxillaryHosting>
{
    _Bool _layoutRTL;	// 8 = 0x8
    _Bool _shouldAdjustContentSizeForPartialLastGroupSolution;	// 9 = 0x9
    NSCollectionLayoutSection *_layoutSection;	// 16 = 0x10
    id <NSCollectionLayoutContainer> _container;	// 24 = 0x18
    UITraitCollection *_traitCollection;	// 32 = 0x20
    unsigned long long _layoutAxis;	// 40 = 0x28
    long long _frameCount;	// 48 = 0x30
    id <_UICollectionPreferredSizes> _preferredSizes;	// 56 = 0x38
    NSString *_errorDescription;	// 64 = 0x40
    _UICollectionLayoutAuxillaryItemSolver *_sectionSupplementarySolution;	// 72 = 0x48
    _UICollectionLayoutSupplementaryRegistrar *_sectionSupplementaryRegistrar;	// 80 = 0x50
    id <NSCollectionLayoutContainer> _memoizedSupplementaryHostContainer;	// 88 = 0x58
    _UICollectionLayoutSolutionState *_solutionState;	// 96 = 0x60
    unsigned long long _containerLayoutAxis;	// 104 = 0x68
    struct CGPoint _orthogonalOffset;	// 112 = 0x70
    struct CGVector _orthogonalScrollingPrefetchingUnitVector;	// 128 = 0x80
    struct CGRect _overrideContentRectForPinning;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000027c166
@property(readonly, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) _Bool shouldAdjustContentSizeForPartialLastGroupSolution; // @synthesize shouldAdjustContentSizeForPartialLastGroupSolution=_shouldAdjustContentSizeForPartialLastGroupSolution;
@property(nonatomic) struct CGVector orthogonalScrollingPrefetchingUnitVector; // @synthesize orthogonalScrollingPrefetchingUnitVector=_orthogonalScrollingPrefetchingUnitVector;
@property(nonatomic) struct CGPoint orthogonalOffset; // @synthesize orthogonalOffset=_orthogonalOffset;
@property(readonly, nonatomic) long long frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) unsigned long long layoutAxis; // @synthesize layoutAxis=_layoutAxis;
@property(readonly, nonatomic) _Bool layoutRTL; // @synthesize layoutRTL=_layoutRTL;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) id <NSCollectionLayoutContainer> container; // @synthesize container=_container;
@property(readonly, nonatomic) NSCollectionLayoutSection *layoutSection; // @synthesize layoutSection=_layoutSection;
- (double)auxillaryHostPaddingBeforeBoundarySupplementaries;	// IMP=0x000000000027c06f
- (id)auxillaryHostPreferredSizes;	// IMP=0x000000000027c055
- (id)auxillaryHostSupplementaryEnroller;	// IMP=0x000000000027c03c
- (long long)auxillaryHostAuxillaryKind;	// IMP=0x000000000027c031
- (unsigned long long)auxillaryHostLayoutAxis;	// IMP=0x000000000027c01f
- (_Bool)auxillaryHostShouldLayoutRTL;	// IMP=0x000000000027c00d
- (id)auxillaryHostAuxillaryItems;	// IMP=0x000000000027bfbd
- (id)auxillaryHostContainer;	// IMP=0x000000000027be62
- (_Bool)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;	// IMP=0x000000000027be36
- (struct CGRect)auxillaryHostPinningRect;	// IMP=0x000000000027bc5f
- (struct CGSize)auxillaryHostContentSize;	// IMP=0x000000000027bb25
- (struct CGRect)_rectWithContentInsetTrailingLayoutDimensionAddedToToRect:(struct CGRect)arg1 insets:(struct NSDirectionalEdgeInsets)arg2 layoutAxis:(unsigned long long)arg3;	// IMP=0x000000000027ba07
- (struct CGRect)_adjustContentFrameForLastPartialSolutionIfNeededForContentFrame:(struct CGRect)arg1 bookmarks:(id)arg2;	// IMP=0x000000000027b719
- (void)_updateSolutionAuxillaryRangeIndexerKindDict:(id)arg1 fromBookmark:(id)arg2;	// IMP=0x000000000027b465
- (id)_sectionContainer;	// IMP=0x000000000027b1a2
- (id)_indexesOfBookmarksAffectedByResolveItems:(id)arg1;	// IMP=0x000000000027ab37
- (id)_solveWithParameters:(id)arg1;	// IMP=0x00000000002771e4
- (double)_dimensionForRootGroupAlongAxis:(unsigned long long)arg1;	// IMP=0x0000000000277103
- (void)_configureInitialOrthogonalPrefetchingUnitVector;	// IMP=0x000000000027709e
- (void)_setOrthogonalOffset:(struct CGPoint)arg1;	// IMP=0x0000000000276fe0
@property(readonly, nonatomic) NSIndexSet *pinnedSupplementaryIndexes;
@property(readonly, nonatomic) struct CGRect effectiveContentFrame;
@property(readonly, nonatomic) struct CGSize contentSize;
- (id)visualDescription;	// IMP=0x0000000000276d2f
- (id)sectionSupplementaryFrameWithKind:(id)arg1 index:(long long)arg2;	// IMP=0x0000000000276bbf
- (long long)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)arg1;	// IMP=0x0000000000276af1
- (id)unpinnedSectionSupplementaryFrameForIndex:(long long)arg1;	// IMP=0x00000000002768fb
- (id)sectionSupplementaryFrameForIndex:(long long)arg1;	// IMP=0x000000000027672b
- (id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2;	// IMP=0x0000000000276361
- (id)frameForIndex:(long long)arg1;	// IMP=0x00000000002760a9
- (id)queryFramesIntersectingRect:(struct CGRect)arg1 frameOffset:(struct CGPoint)arg2;	// IMP=0x0000000000275c1f
- (id)queryFramesIntersectingRect:(struct CGRect)arg1;	// IMP=0x0000000000275bfd
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect)arg1 overrideContentRectForPinning:(struct CGRect)arg2;	// IMP=0x0000000000275b9a
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect)arg1;	// IMP=0x0000000000275b22
- (id)resolveWithParameters:(id)arg1 preferredSizes:(id)arg2;	// IMP=0x0000000000275a9f
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5 layoutRTL:(_Bool)arg6;	// IMP=0x0000000000275948
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5;	// IMP=0x000000000027592c
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4;	// IMP=0x0000000000275911

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
