//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIALAPropertySource-Protocol.h>

@class NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIAlignedLayoutArrangement <_UIALAPropertySource>
{
    NSMutableDictionary *_alignmentConstraints;	// 8 = 0x8
    unsigned long long _alignment;	// 16 = 0x10
}

+ (Class)_configurationHistoryClass;	// IMP=0x0000000000f50b80
- (void).cxx_destruct;	// IMP=0x0000000000f5496d
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
- (void)_clearAllConstraintsArrays;	// IMP=0x0000000000f54813
- (void)_updateArrangementConstraints;	// IMP=0x0000000000f5473c
- (void)_addConstraintGroupsAsNecessary;	// IMP=0x0000000000f5413c
- (void)_addIndividualConstraintsIfPossible;	// IMP=0x0000000000f5373c
- (void)_setUpConstraintForItem:(id)arg1 referenceItem:(id)arg2 attribute:(long long)arg3 inConstraintsTable:(id)arg4;	// IMP=0x0000000000f53599
- (long long)_attributeForConstraintGroupName:(id)arg1;	// IMP=0x0000000000f533b5
- (void)_removeIndividualConstraintsAsNecessary;	// IMP=0x0000000000f52d90
- (void)_removeConstraintGroupsAsNecessary;	// IMP=0x0000000000f51b18
- (_Bool)_wantsConstraintsForAttribute:(long long)arg1;	// IMP=0x0000000000f519e2
- (_Bool)_wantsAmbiguitySuppressionConstraints;	// IMP=0x0000000000f51996
- (_Bool)_wantsConstraintsUsingAttributesForAxis:(long long)arg1;	// IMP=0x0000000000f51942
- (id)_baselineDependentConstraints;	// IMP=0x0000000000f515eb
- (_Bool)_requiresNotificationForHasBaselinePropertyChanges;	// IMP=0x0000000000f51594
- (void)_updateConfigurationHistory;	// IMP=0x0000000000f514d1
- (_Bool)_hasStaleConfiguration;	// IMP=0x0000000000f51407
- (id)_alignmentPropertySource;	// IMP=0x0000000000f513f5
- (id)_alignmentConfigurationHistory;	// IMP=0x0000000000f513e3
- (_Bool)_canvasConnectionConstraintsNeedUpdatePass;	// IMP=0x0000000000f51146
- (_Bool)_usesCenteringConnectionConstraint;	// IMP=0x0000000000f510fb
- (long long)_layoutRelationForCanvasConnectionForAttribute:(long long)arg1;	// IMP=0x0000000000f51045
- (_Bool)_spanningGuideConstraintsNeedUpdate;	// IMP=0x0000000000f50f94
- (_Bool)_usesInequalitySpanningConstraintForAttribute:(long long)arg1;	// IMP=0x0000000000f50ed4
- (long long)_axisForSpanningLayoutGuide;	// IMP=0x0000000000f50e8d
- (id)_identifierForSpanningLayoutGuide;	// IMP=0x0000000000f50e80
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1;	// IMP=0x0000000000f50c3f
@property(nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling;
@property(nonatomic) _Bool layoutFillsCanvas;
@property(nonatomic) long long axis;
- (id)initWithItems:(id)arg1;	// IMP=0x0000000000f50b91

// Remaining properties
@property(readonly, nonatomic) NSSet *_newlyHiddenItems;
@property(readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSSet *invalidBaselineConstraints;
@property(readonly) Class superclass;

@end

