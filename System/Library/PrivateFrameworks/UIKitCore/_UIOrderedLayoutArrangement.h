//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIOLAPropertySource-Protocol.h>

@class NSMapTable, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIOrderedLayoutArrangement <_UIOLAPropertySource>
{
    NSMapTable *_spacingOrCenteringGuides;	// 8 = 0x8
    NSMapTable *_edgeToEdgeConstraintsForVisibleItems;	// 16 = 0x10
    NSMapTable *_edgeToEdgeConstraintsForHiddenItems;	// 24 = 0x18
    NSMapTable *_relatedDimensionConstraints;	// 32 = 0x20
    NSMapTable *_hidingDimensionConstraints;	// 40 = 0x28
    NSMapTable *_multilineTextWidthDisambiguationConstraints;	// 48 = 0x30
    NSMapTable *_customSpacings;	// 56 = 0x38
    double _proportionalFillDenominator;	// 64 = 0x40
    _Bool _itemOrderingChanged;	// 72 = 0x48
    _Bool _itemFittingSizeChanged;	// 73 = 0x49
    _Bool _baselineRelativeArrangement;	// 74 = 0x4a
    double _spacing;	// 80 = 0x50
    long long _distribution;	// 88 = 0x58
}

+ (Class)_configurationHistoryClass;	// IMP=0x0000000000f59dbb
- (void).cxx_destruct;	// IMP=0x0000000000f622e8
@property(nonatomic) long long distribution; // @synthesize distribution=_distribution;
@property(nonatomic, getter=isBaselineRelativeArrangement) _Bool baselineRelativeArrangement; // @synthesize baselineRelativeArrangement=_baselineRelativeArrangement;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(readonly, nonatomic) NSMapTable *customSpacings; // @synthesize customSpacings=_customSpacings;
@property(nonatomic, setter=_setItemFittingSizeChanged:) _Bool _itemFittingSizeChanged; // @synthesize _itemFittingSizeChanged;
@property(nonatomic, setter=_setItemOrderingChanged:) _Bool _itemOrderingChanged; // @synthesize _itemOrderingChanged;
- (id)_baselineViewVendTallest:(_Bool)arg1 forFirstBaseline:(_Bool)arg2;	// IMP=0x0000000000f62225
- (id)_lastVisibleItem;	// IMP=0x0000000000f6220e
- (id)_firstVisibleItem;	// IMP=0x0000000000f621fa
- (id)_visibleItemAtEndWithEnumerationOptions:(unsigned long long)arg1;	// IMP=0x0000000000f62114
- (id)_tallestItem;	// IMP=0x0000000000f61f28
- (double)_calculatedIntrinsicHeight;	// IMP=0x0000000000f61cbb
- (void)_cleanUpGuides;	// IMP=0x0000000000f61b80
- (void)_clearAllConstraintsArrays;	// IMP=0x0000000000f61b3f
- (void)_cleanUpWithoutResettingKeepAliveWorkaround;	// IMP=0x0000000000f61ad0
- (void)_updateArrangementConstraints;	// IMP=0x0000000000f612a8
- (_Bool)_configurationRequiresCanvasConnectionFittingConstraint;	// IMP=0x0000000000f6125b
- (_Bool)_itemCountChanged;	// IMP=0x0000000000f61124
- (_Bool)_wantsProportionalDistribution;	// IMP=0x0000000000f6103c
- (void)_insertIndividualGuidesAndConstraintsAsNecessary;	// IMP=0x0000000000f5fa67
- (void)_setUpMultilineTextWidthDisambiguationConstraintForItem:(id)arg1 numberOfVisibleMultilineItems:(unsigned long long)arg2;	// IMP=0x0000000000f5f8b4
- (id)_preparedImprovedMultilineTextWidthDisambiguationConstraintForItem:(id)arg1 numberOfVisibleMultilineItems:(unsigned long long)arg2;	// IMP=0x0000000000f5f6e7
- (id)_preparedFaultyCompatibleMultilineTextWidthDisambiguationConstraintForItem:(id)arg1;	// IMP=0x0000000000f5f3db
- (double)_constantForMultilineTextWidthDisambiguationConstraintWithNumberOfRelevantItems:(unsigned long long)arg1;	// IMP=0x0000000000f5f344
- (void)_setUpHidingDimensionConstraintForItem:(id)arg1;	// IMP=0x0000000000f5f26c
- (void)_setUpDimensionConstraintForItem:(id)arg1 referenceItem:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000f5ec66
- (id)_setUpSpacingOrCenteringGuideForGapIndex:(unsigned long long)arg1;	// IMP=0x0000000000f5e912
- (void)_activateAndInsertEdgeToEdgeConstraintForGapBetweenSpanningLayoutGuide:(id)arg1 hiddenItem:(id)arg2;	// IMP=0x0000000000f5e80c
- (void)_activateAndInsertEdgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg1 followingItem:(id)arg2 isPrecededByVisibleItem:(_Bool)arg3 isFollowedByVisibleItem:(_Bool)arg4 isHidden:(_Bool)arg5;	// IMP=0x0000000000f5e6c4
- (id)_edgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg1 followingItem:(id)arg2 isPrecededByVisibleItem:(_Bool)arg3 isFollowedByVisibleItem:(_Bool)arg4;	// IMP=0x0000000000f5e2e5
- (double)_expectedEdgeToEdgeSpacingForPrecedingItem:(id)arg1 followingItem:(id)arg2 isPrecededByVisibleItem:(_Bool)arg3 isFollowedByVisibleItem:(_Bool)arg4;	// IMP=0x0000000000f5e157
- (long long)_precedingLocationAttributeForGuideConstraint;	// IMP=0x0000000000f5e0a7
- (long long)_minAttributeForGapConstraint;	// IMP=0x0000000000f5e090
- (long long)_maxAttributeForGapConstraintRespectingBaselineRelative:(_Bool)arg1;	// IMP=0x0000000000f5e011
- (long long)_minAttributeForGapConstraintRespectingBaselineRelative:(_Bool)arg1;	// IMP=0x0000000000f5df97
- (void)_adjustConstraintConstantsIfPossible;	// IMP=0x0000000000f5d223
- (void)_removeIndividualGuidesAndConstraintsAsNecessary;	// IMP=0x0000000000f5c2fd
- (void)_cleanUpEdgeToEdgeConstraintsForVisibleItemsForItem:(id)arg1 atIndex:(unsigned long long)arg2 processPrecedingVisibleItem:(_Bool)arg3;	// IMP=0x0000000000f5c1a4
- (void)_cleanUpEdgeToEdgeConstraintsForHiddenItemsForItem:(id)arg1 atIndex:(unsigned long long)arg2 processAdjacentHiddenItems:(_Bool)arg3;	// IMP=0x0000000000f5bd80
- (void)_cleanUpGuideAtGapFollowingItem:(id)arg1;	// IMP=0x0000000000f5bbfd
- (void)_removeGuideAndConstraintGroupsAsNecessary;	// IMP=0x0000000000f5b79a
- (id)_dimensionRefItemFromConstraint:(id)arg1;	// IMP=0x0000000000f5b72f
- (id)_orderedPropertySource;	// IMP=0x0000000000f5b71d
- (id)_orderedConfigurationHistory;	// IMP=0x0000000000f5b70b
- (double)customSpacingAfterItem:(id)arg1;	// IMP=0x0000000000f5b548
- (void)setCustomSpacing:(double)arg1 afterItem:(id)arg2;	// IMP=0x0000000000f5b37a
- (_Bool)_canvasConnectionConstraintsNeedUpdatePass;	// IMP=0x0000000000f5b24f
- (void)_didEvaluateMultilineHeightForView:(id)arg1;	// IMP=0x0000000000f5b17e
- (void)_notifyCanvasesBaselineParametersDidChange;	// IMP=0x0000000000f5b0c4
- (void)_visibilityParameterChangedForItem:(id)arg1;	// IMP=0x0000000000f5add8
- (void)_systemLayoutFittingSizeDidChangeForItem:(id)arg1;	// IMP=0x0000000000f5acc0
- (_Bool)_monitorsSystemLayoutFittingSizeForItem:(id)arg1;	// IMP=0x0000000000f5ac40
- (void)_intrinsicContentSizeInvalidatedForItem:(id)arg1;	// IMP=0x0000000000f5abe4
- (id)_identifierForSpanningLayoutGuide;	// IMP=0x0000000000f5abd7
- (_Bool)_hasStaleConfiguration;	// IMP=0x0000000000f5aaba
- (_Bool)_hasStaleSpacing;	// IMP=0x0000000000f5a991
- (_Bool)_customSpacingChanged;	// IMP=0x0000000000f5a873
- (void)_updateConfigurationHistory;	// IMP=0x0000000000f5a50f
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1;	// IMP=0x0000000000f5a33a
- (void)removeItem:(id)arg1;	// IMP=0x0000000000f5a1c4
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000f59f80
- (void)_trackChangesAffectingExternalBaselineConstraints:(CDUnknownBlockType)arg1;	// IMP=0x0000000000f59e11
@property(nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling;
@property(nonatomic) _Bool layoutFillsCanvas;
@property(nonatomic) long long axis;

// Remaining properties
@property(readonly, nonatomic) NSSet *_newlyHiddenItems;
@property(readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSSet *invalidBaselineConstraints;
@property(readonly) Class superclass;

@end

