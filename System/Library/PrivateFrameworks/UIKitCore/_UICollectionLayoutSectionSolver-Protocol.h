//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>
#import <UIKitCore/_UICollectionLayoutAuxillaryHosting-Protocol.h>

@class NSArray, NSCollectionLayoutSection, NSIndexSet, NSString, NSUUID, UITraitCollection, _UICollectionLayoutFramesQueryResult, _UICollectionLayoutSolveParameters;
@protocol NSCollectionLayoutContainer, _UICollectionLayoutSolveResult, _UICollectionPreferredSizes;

@protocol _UICollectionLayoutSectionSolver <NSObject, _UICollectionLayoutAuxillaryHosting>
@property(readonly, nonatomic) struct CGVector orthogonalScrollingPrefetchingUnitVector;
@property(nonatomic) struct CGPoint orthogonalOffset;
@property(nonatomic) _Bool shouldAdjustContentSizeForPartialLastGroupSolution;
@property(readonly, nonatomic) NSString *errorDescription;
@property(readonly, nonatomic) NSIndexSet *pinnedSupplementaryIndexes;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(readonly, nonatomic) struct CGRect effectiveContentFrame;
@property(readonly, nonatomic) long long frameCount;
@property(readonly, nonatomic) unsigned long long layoutAxis;
@property(readonly, nonatomic) _Bool layoutRTL;
@property(readonly, nonatomic) UITraitCollection *traitCollection;
@property(readonly, nonatomic) id <NSCollectionLayoutContainer> container;
@property(readonly, nonatomic) NSCollectionLayoutSection *layoutSection;
- (double)_dimensionForRootGroupAlongAxis:(unsigned long long)arg1;
- (void)_setOrthogonalOffset:(struct CGPoint)arg1;
- (NSString *)visualDescription;
- (long long)sectionSupplementaryKindIndexForEnrollmentIdentifier:(NSUUID *)arg1;
- (_UICollectionLayoutFramesQueryResult *)unpinnedSectionSupplementaryFrameForIndex:(long long)arg1;
- (_UICollectionLayoutFramesQueryResult *)sectionSupplementaryFrameForIndex:(long long)arg1;
- (_UICollectionLayoutFramesQueryResult *)sectionSupplementaryFrameWithKind:(NSString *)arg1 index:(long long)arg2;
- (_UICollectionLayoutFramesQueryResult *)supplementaryFrameWithKind:(NSString *)arg1 index:(long long)arg2;
- (_UICollectionLayoutFramesQueryResult *)frameForIndex:(long long)arg1;
- (NSArray *)queryFramesIntersectingRect:(struct CGRect)arg1 frameOffset:(struct CGPoint)arg2;
- (NSArray *)queryFramesIntersectingRect:(struct CGRect)arg1;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect)arg1 overrideContentRectForPinning:(struct CGRect)arg2;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect)arg1;
- (id <_UICollectionLayoutSolveResult>)resolveWithParameters:(_UICollectionLayoutSolveParameters *)arg1 preferredSizes:(id <_UICollectionPreferredSizes>)arg2;
- (void)solveForContainer:(id <NSCollectionLayoutContainer>)arg1 traitCollection:(UITraitCollection *)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id <_UICollectionPreferredSizes>)arg5 layoutRTL:(_Bool)arg6;
- (void)solveForContainer:(id <NSCollectionLayoutContainer>)arg1 traitCollection:(UITraitCollection *)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id <_UICollectionPreferredSizes>)arg5;
- (void)solveForContainer:(id <NSCollectionLayoutContainer>)arg1 traitCollection:(UITraitCollection *)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4;
@end

