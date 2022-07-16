//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/NSISVariableDelegate-Protocol.h>
#import <UIKitCore/UILayoutItem_Internal-Protocol.h>
#import <UIKitCore/_UILayoutItem-Protocol.h>

@class NSArray, NSISVariable, NSLayoutDimension, NSLayoutRect, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSMapTable, NSMutableArray, NSString, UITraitCollection, UIView;

@interface UILayoutGuide : NSObject <UILayoutItem_Internal, _UILayoutItem, NSISVariableDelegate, NSCoding>
{
    NSLayoutRect *_layoutRect;	// 8 = 0x8
    struct CGRect _layoutFrame;	// 16 = 0x10
    _Bool _isLayoutFrameValid;	// 48 = 0x30
    NSMutableArray *_constraintsToBeProcessedAfterDecoding;	// 56 = 0x38
    UIView *_unsafeUnretainedOwningView;	// 64 = 0x40
    _Bool _allowOwningViewSetting;	// 72 = 0x48
    _Bool _isLockedToOwningView;	// 73 = 0x49
    _Bool _useManualLayoutFrame;	// 74 = 0x4a
    _Bool __allowsNegativeDimensions;	// 75 = 0x4b
    _Bool __shouldBeArchived;	// 76 = 0x4c
    UIView *_owningView;	// 80 = 0x50
    NSString *_identifier;	// 88 = 0x58
    NSISVariable *_minXVariable;	// 96 = 0x60
    NSISVariable *_minYVariable;	// 104 = 0x68
    NSISVariable *_boundsWidthVariable;	// 112 = 0x70
    NSISVariable *_boundsHeightVariable;	// 120 = 0x78
    NSArray *_systemConstraints;	// 128 = 0x80
    NSMapTable *_stashedLayoutVariableObservations;	// 136 = 0x88
    NSLayoutXAxisAnchor *_leadingAnchor;	// 144 = 0x90
    NSLayoutXAxisAnchor *_trailingAnchor;	// 152 = 0x98
    NSLayoutXAxisAnchor *_leftAnchor;	// 160 = 0xa0
    NSLayoutXAxisAnchor *_rightAnchor;	// 168 = 0xa8
    NSLayoutYAxisAnchor *_topAnchor;	// 176 = 0xb0
    NSLayoutYAxisAnchor *_bottomAnchor;	// 184 = 0xb8
    NSLayoutDimension *_widthAnchor;	// 192 = 0xc0
    NSLayoutDimension *_heightAnchor;	// 200 = 0xc8
    NSLayoutXAxisAnchor *_centerXAnchor;	// 208 = 0xd0
    NSLayoutYAxisAnchor *_centerYAnchor;	// 216 = 0xd8
}

+ (double)_defaultSpacingBetweenGuidesForResolvingSymbolicConstant;	// IMP=0x0000000000f86ded
- (void).cxx_destruct;	// IMP=0x0000000000f8b3db
@property(nonatomic, setter=_setShouldBeArchived:) _Bool _shouldBeArchived; // @synthesize _shouldBeArchived=__shouldBeArchived;
@property(nonatomic, setter=_setAllowsNegativeDimensions:) _Bool _allowsNegativeDimensions; // @synthesize _allowsNegativeDimensions=__allowsNegativeDimensions;
@property(readonly, retain, nonatomic) NSMapTable *_stashedLayoutVariableObservations; // @synthesize _stashedLayoutVariableObservations;
@property(readonly, nonatomic) _Bool _useManualLayoutFrame; // @synthesize _useManualLayoutFrame;
@property(retain, nonatomic, setter=_setSystemConstraints:) NSArray *_systemConstraints; // @synthesize _systemConstraints;
@property(nonatomic, getter=_isLockedToOwningView, setter=_setLockedToOwningView:) _Bool _lockedToOwningView; // @synthesize _lockedToOwningView=_isLockedToOwningView;
@property(readonly, retain, nonatomic) NSISVariable *_boundsHeightVariable; // @synthesize _boundsHeightVariable;
@property(readonly, retain, nonatomic) NSISVariable *_boundsWidthVariable; // @synthesize _boundsWidthVariable;
@property(readonly, retain, nonatomic) NSISVariable *_minYVariable; // @synthesize _minYVariable;
@property(readonly, retain, nonatomic) NSISVariable *_minXVariable; // @synthesize _minXVariable;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak UIView *owningView; // @synthesize owningView=_owningView;
@property(nonatomic, setter=_setAllowOwningViewSetting:) _Bool _allowOwningViewSetting; // @synthesize _allowOwningViewSetting;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *centerYAnchor; // @synthesize centerYAnchor=_centerYAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *centerXAnchor; // @synthesize centerXAnchor=_centerXAnchor;
@property(readonly, nonatomic) NSLayoutDimension *heightAnchor; // @synthesize heightAnchor=_heightAnchor;
@property(readonly, nonatomic) NSLayoutDimension *widthAnchor; // @synthesize widthAnchor=_widthAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *bottomAnchor; // @synthesize bottomAnchor=_bottomAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *topAnchor; // @synthesize topAnchor=_topAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *rightAnchor; // @synthesize rightAnchor=_rightAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leftAnchor; // @synthesize leftAnchor=_leftAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *trailingAnchor; // @synthesize trailingAnchor=_trailingAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leadingAnchor; // @synthesize leadingAnchor=_leadingAnchor;
- (id)_createAnchorWithClass:(Class)arg1 attribute:(long long)arg2;	// IMP=0x0000000000f8aee5
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000f8ae07
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000f8acae
- (int)nsis_orientationHintForVariable:(id)arg1;	// IMP=0x0000000000f8aab3
- (id)nsis_descriptionOfVariable:(id)arg1;	// IMP=0x0000000000f8a9a4
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;	// IMP=0x0000000000f8a933
- (_Bool)nsis_valueOfVariableIsUserObservable:(id)arg1;	// IMP=0x0000000000f8a92b
- (_Bool)nsis_shouldIntegralizeVariable:(id)arg1;	// IMP=0x0000000000f8a923
- (id)_uili_observableLayoutEngineForBaseFrameVariables:(_Bool)arg1;	// IMP=0x0000000000f8a911
- (_Bool)_uili_isFocusGuide;	// IMP=0x0000000000f8a909
- (_Bool)_uili_requiresObservationForVariable:(id)arg1;	// IMP=0x0000000000f8a901
- (void)_uili_removeLayoutVariableObservationsOnlyToSupportTAMICChange:(_Bool)arg1;	// IMP=0x0000000000f8a8e8
- (void)_uili_stashLayoutVariableObservation:(id)arg1 forVariable:(id)arg2;	// IMP=0x0000000000f8a83b
- (id)_uili_existingObservationEligibleLayoutVariables;	// IMP=0x0000000000f8a829
- (id)_uili_existingBaseFrameVariables;	// IMP=0x0000000000f8a76b
- (void *)_referenceView;	// IMP=0x0000000000f8a746
- (struct CGSize)nsli_engineToUserScalingCoefficients;	// IMP=0x0000000000f8a5a7
- (_Bool)nsli_isRTL;	// IMP=0x0000000000f8a570
- (_Bool)nsli_isLegalConstraintItem;	// IMP=0x0000000000f8a568
- (_Bool)nsli_isCollectingConstraintChangesForLaterCoordinatedFlush:(id)arg1;	// IMP=0x0000000000f8a560
- (id)nsli_contentHeightVariable;	// IMP=0x0000000000f8a558
- (id)nsli_contentWidthVariable;	// IMP=0x0000000000f8a550
- (id)nsli_heightVariable;	// IMP=0x0000000000f8a53e
- (id)nsli_boundsHeightVariable;	// IMP=0x0000000000f8a4e5
- (id)nsli_widthVariable;	// IMP=0x0000000000f8a4d3
- (id)nsli_boundsWidthVariable;	// IMP=0x0000000000f8a47a
- (id)nsli_minYVariable;	// IMP=0x0000000000f8a434
- (id)nsli_minXVariable;	// IMP=0x0000000000f8a3ee
- (_Bool)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 container:(id)arg4;	// IMP=0x0000000000f8a34e
- (_Bool)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 forConstraint:(id)arg4;	// IMP=0x0000000000f8a112
- (id)nsli_layoutMarginsItem;	// IMP=0x0000000000f8a109
- (double)nsli_marginOffsetForAttribute:(long long)arg1;	// IMP=0x0000000000f8a100
- (id)nsli_installedConstraints;	// IMP=0x0000000000f8a0f3
- (_Bool)nsli_removeConstraint:(id)arg1;	// IMP=0x0000000000f8a095
- (void)nsli_addConstraint:(id)arg1;	// IMP=0x0000000000f8a03b
- (_Bool)nsli_isFlipped;	// IMP=0x0000000000f8a033
- (unsigned long long)nsli_autoresizingMask;	// IMP=0x0000000000f8a02b
- (_Bool)nsli_descriptionIncludesPointer;	// IMP=0x0000000000f8a023
- (id)nsli_constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 withSystemSpacingMultipliedBy:(double)arg4;	// IMP=0x0000000000f89f54
- (id)nsli_description;	// IMP=0x0000000000f89eb2
- (_Bool)nsli_defaultResolvedValue:(double *)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000f89e15
- (_Bool)nsli_resolvedValue:(double *)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000f89e06
- (id)nsli_superitem;	// IMP=0x0000000000f89df0
- (struct CGSize)nsli_convertSizeFromEngineSpace:(struct CGSize)arg1;	// IMP=0x0000000000f89d93
- (struct CGSize)nsli_convertSizeToEngineSpace:(struct CGSize)arg1;	// IMP=0x0000000000f89d36
- (id)nsli_layoutEngine;	// IMP=0x0000000000f89cf3
- (void)_addConstraintToBeProcessedAfterDecoding:(id)arg1;	// IMP=0x0000000000f89c94
- (void)_snipReferencingConstraints;	// IMP=0x0000000000f899f4
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000f8980a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000f89506
- (id)init;	// IMP=0x0000000000f894b5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000f893d4
- (id)_layoutRect;	// IMP=0x0000000000f892d3
@property(readonly, nonatomic) struct CGRect layoutFrame;
- (void)_invalidateLayoutFrame;	// IMP=0x0000000000f89126
- (void)_updateLayoutFrameInOwningView:(id)arg1 fromEngine:(id)arg2;	// IMP=0x0000000000f890bc
- (void)_setManualLayoutFrame:(struct CGRect)arg1;	// IMP=0x0000000000f8909e
- (void)_setOwningView:(id)arg1;	// IMP=0x0000000000f88f00
- (void)_owningViewIsDeallocating;	// IMP=0x0000000000f88ed1
@property(readonly, nonatomic) NSLayoutYAxisAnchor *lastBaselineAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *firstBaselineAnchor;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000c4cfdc
@property(readonly, nonatomic) UITraitCollection *traitCollection;
- (void)_ui_removeFromParentLayoutItem;	// IMP=0x0000000000c4cf40
- (void)_ui_insertSubLayoutItem:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000c4cec8
- (void)_ui_addSubLayoutItem:(id)arg1;	// IMP=0x0000000000c4ce4f
- (void)_ui_addToView:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000c4ce34
@property(nonatomic) _Bool _ui_usesManualLayout;
@property(readonly, nonatomic) UIView *_ui_view;
@property(readonly, nonatomic) UIView *_ui_superview;
@property(nonatomic) struct CGRect _ui_frame;
@property(readonly, nonatomic) struct CGRect _ui_bounds;
- (id)_autolayoutTraceAtLevel:(long long)arg1 recursively:(_Bool)arg2;	// IMP=0x0000000000f86e90
- (id)_descriptionForLayoutTrace;	// IMP=0x0000000000f86e7e
@property(readonly, nonatomic) _Bool hasAmbiguousLayout;
- (id)constraintsAffectingLayoutForAxis:(long long)arg1;	// IMP=0x0000000000f86dfb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(setter=nsli_setPiercingToken:) unsigned long long nsli_piercingToken;
@property(readonly) Class superclass;

@end
