//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UICollectionLayoutSectionCallback-Protocol.h>

@class NSString, _UICollectionViewListLayoutSectionConfiguration;
@protocol NSCollectionLayoutEnvironment_Private;

@interface _UICollectionViewListLayoutSection <_UICollectionLayoutSectionCallback>
{
    _UICollectionViewListLayoutSectionConfiguration *_configuration;	// 8 = 0x8
    id <NSCollectionLayoutEnvironment_Private> _layoutEnvironment;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000f2d62f
@property(readonly, nonatomic, getter=_layoutEnvironment) id <NSCollectionLayoutEnvironment_Private> layoutEnvironment; // @synthesize layoutEnvironment=_layoutEnvironment;
- (void)_configureLayoutAttributesForBackgroundDecoration:(id)arg1;	// IMP=0x0000000000f2d3ff
- (unsigned long long)_maskedCornersForBackgroundOfItemWithSelectionGrouping:(unsigned long long)arg1;	// IMP=0x0000000000f2d3b5
- (void)_configureLayoutAttributesWithInsetGroupedMasking:(id)arg1 stylesFirstItemAsHeader:(_Bool)arg2;	// IMP=0x0000000000f2d1b0
- (void)_configureLayoutAttributesWithDefaultMasking:(id)arg1;	// IMP=0x0000000000f2d14c
- (double)_effectiveCornerRadius;	// IMP=0x0000000000f2d0e7
- (void)_configureLayoutAttributesForPlainCell:(id)arg1;	// IMP=0x0000000000f2cf31
- (void)_configureLayoutAttributesForSidebarPlainCell:(id)arg1;	// IMP=0x0000000000f2ce3b
- (id)_generateListSectionDataForLayoutAttributes:(id)arg1 interactionState:(id)arg2;	// IMP=0x0000000000f2cdb2
- (_Bool)_shouldInvalidateForScrollViewLayoutAdjustmentsChange;	// IMP=0x0000000000f2cdaa
- (id)_preferredContainerBackgroundColor;	// IMP=0x0000000000f2cd98
- (void)_enrichLayoutAttributes:(id)arg1 interactionState:(id)arg2;	// IMP=0x0000000000f2c983
- (void)_transformPreferredLayoutAttributes:(id)arg1 interactionState:(id)arg2;	// IMP=0x0000000000f2c79a
- (void)_transformFittingLayoutAttributes:(id)arg1 interactionState:(id)arg2;	// IMP=0x0000000000f2c700
- (id)_invalidationContextForBackgroundChangeAtIndexPath:(id)arg1 interactionState:(id)arg2;	// IMP=0x0000000000f2c5d9
- (id)_callback;	// IMP=0x0000000000f2c5d0
- (_Bool)__isLastSection:(long long)arg1;	// IMP=0x0000000000f2c56e
- (_Bool)__isLastItemInSection:(id)arg1;	// IMP=0x0000000000f2c4c8
- (long long)_separatorInsetBehaviorAtBottom:(_Bool)arg1 ofSection:(long long)arg2 interactionState:(id)arg3;	// IMP=0x0000000000f2c3f7
- (_Bool)_shouldDrawSeparatorAtBottom:(_Bool)arg1 ofSection:(long long)arg2 interactionState:(id)arg3;	// IMP=0x0000000000f2c29e
- (_Bool)_hasHeaderFooterBelowLastItemInSection:(long long)arg1 interactionState:(id)arg2;	// IMP=0x0000000000f2bf4b
- (_Bool)_adjustsLayoutToDrawTopSeparatorInSection:(long long)arg1 interactionState:(id)arg2;	// IMP=0x0000000000f2becf
- (id)_effectiveBackgroundColor;	// IMP=0x0000000000f2bdf4
- (struct NSDirectionalEdgeInsets)_effectiveSectionHorizontalInsets;	// IMP=0x0000000000f2bbc2
- (_Bool)_hasHorizontalInsets;	// IMP=0x0000000000f2bb7e
- (struct UIEdgeInsets)_defaultLayoutMarginsForSupplementaryViews;	// IMP=0x0000000000f2b91b
- (struct NSDirectionalEdgeInsets)_defaultDirectionalLayoutMarginsInsideSection;	// IMP=0x0000000000f2b89e
- (struct UIEdgeInsets)_defaultLayoutMarginsInsideSection;	// IMP=0x0000000000f2b6c6
- (struct NSDirectionalEdgeInsets)_defaultSectionContentInsetsForAppearanceStyle:(long long)arg1;	// IMP=0x0000000000f2b601
- (struct UIEdgeInsets)_effectiveCollectionViewLayoutMarginsForAppearanceStyle:(long long)arg1 forUseAsContentInsets:(_Bool)arg2;	// IMP=0x0000000000f2b238
- (double)_alignedContentMarginGivenMargin:(double)arg1;	// IMP=0x0000000000f2b16a
- (_Bool)_supportsBandSelection;	// IMP=0x0000000000f2b162
- (_Bool)_useChromelessSectionHeaderFooterBehaviors;	// IMP=0x0000000000f2b0c8
- (_Bool)_pinnedSupplementariesShouldOverlap;	// IMP=0x0000000000f2b084
- (double)_paddingToBoundarySupplementaries;	// IMP=0x0000000000f2afd1
- (_Bool)prefersListSolver;	// IMP=0x0000000000f2afc9
- (_Bool)shouldRestrictOrthogonalAxisDuringInteractiveMovement;	// IMP=0x0000000000f2afc1
- (_Bool)_isRTL;	// IMP=0x0000000000f2af6d
- (id)_constants;	// IMP=0x0000000000f2af1b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f2ae9b
- (id)initWithConfiguration:(id)arg1 layoutEnvironment:(id)arg2;	// IMP=0x0000000000f2aa45
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000f2aa31

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
