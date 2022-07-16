//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface WebAccessibilityObjectWrapper
{
    int m_isAccessibilityElement;	// 24 = 0x18
    unsigned long long m_accessibilityTraitsFromAncestor;	// 32 = 0x20
}

- (id)description;	// IMP=0x00000000001f3af0
- (struct CGPoint)accessibilityClickPoint;	// IMP=0x00000000001f3ac0
- (id)accessibilityMathType;	// IMP=0x00000000001f37c0
- (long long)accessibilityMathLineThickness;	// IMP=0x00000000001f3770
- (_Bool)accessibilityIsMathTopObject;	// IMP=0x00000000001f3720
- (id)accessibilityMathFencedCloseString;	// IMP=0x00000000001f3660
- (id)accessibilityMathFencedOpenString;	// IMP=0x00000000001f35a0
- (id)accessibilityMathPrescripts;	// IMP=0x00000000001f3560
- (id)accessibilityMathPostscripts;	// IMP=0x00000000001f3520
- (id)accessibilityPlatformMathSuperscriptKey;	// IMP=0x00000000001f3510
- (id)accessibilityPlatformMathSubscriptKey;	// IMP=0x00000000001f3500
- (id)accessibilityMathOverObject;	// IMP=0x00000000001f3490
- (id)accessibilityMathUnderObject;	// IMP=0x00000000001f3420
- (id)accessibilityMathSuperscriptObject;	// IMP=0x00000000001f33b0
- (id)accessibilityMathSubscriptObject;	// IMP=0x00000000001f3340
- (id)accessibilityMathBaseObject;	// IMP=0x00000000001f32d0
- (id)accessibilityMathDenominatorObject;	// IMP=0x00000000001f3260
- (id)accessibilityMathNumeratorObject;	// IMP=0x00000000001f31f0
- (id)accessibilityMathRadicand;	// IMP=0x00000000001f3080
- (id)accessibilityMathRootIndexObject;	// IMP=0x00000000001f3010
- (id)accessibilitySortDirection;	// IMP=0x00000000001f2f90
- (id)accessibilityCurrentState;	// IMP=0x00000000001f2ed0
- (id)accessibilityInvalidStatus;	// IMP=0x00000000001f2e10
- (_Bool)accessibilityIsShowingValidationMessage;	// IMP=0x00000000001f2dc0
- (_Bool)accessibilityIsExpanded;	// IMP=0x00000000001f2d20
- (_Bool)accessibilitySupportsARIAExpanded;	// IMP=0x00000000001f2c80
- (_Bool)accessibilityIsPressed;	// IMP=0x00000000001f2c30
- (_Bool)accessibilitySupportsARIAPressed;	// IMP=0x00000000001f2be0
- (_Bool)accessibilityARIALiveRegionIsAtomic;	// IMP=0x00000000001f2b90
- (id)accessibilityARIARelevantStatus;	// IMP=0x00000000001f2ad0
- (id)accessibilityARIALiveRegionStatus;	// IMP=0x00000000001f2a10
- (_Bool)accessibilityARIAIsBusy;	// IMP=0x00000000001f29c0
- (id)accessibilitySpeechHint;	// IMP=0x00000000001f2980
- (id)accessibilityIdentifier;	// IMP=0x00000000001f28c0
- (id)accessibilityExpandedTextValue;	// IMP=0x00000000001f2800
- (id)textMarkersForRange:(const void *)arg1;	// IMP=0x00000000001f26f0
- (id)textMarkerRangeForMarkers:(id)arg1;	// IMP=0x00000000001f24d0
- (id)startOrEndTextMarkerForTextMarkers:(id)arg1 isStart:(_Bool)arg2;	// IMP=0x00000000001f22b0
- (long long)lengthForTextMarkers:(id)arg1;	// IMP=0x00000000001f20a0
- (optional_8a7f6590)rangeForTextMarkers:(id)arg1;	// IMP=0x00000000001f1f50
- (id)previousMarkerForCharacterOffset:(struct CharacterOffset *)arg1;	// IMP=0x00000000001f1ea0
- (id)nextMarkerForCharacterOffset:(struct CharacterOffset *)arg1;	// IMP=0x00000000001f1df0
- (id)textMarkerForPoint:(struct CGPoint)arg1;	// IMP=0x00000000001f1d30
- (id)textRectsFromMarkers:(id)arg1 withText:(id)arg2;	// IMP=0x00000000001f1980
- (id)lineRectsForTextMarkerRange:(id)arg1;	// IMP=0x00000000001f1470
- (id)textMarkerRangeFromMarkers:(id)arg1 withText:(id)arg2;	// IMP=0x00000000001f1270
- (optional_8a7f6590)rangeFromMarkers:(id)arg1 withText:(id)arg2;	// IMP=0x00000000001f0fd0
- (struct CGRect)frameForTextMarkers:(id)arg1;	// IMP=0x00000000001f0d40
- (struct CGRect)frameForRange:(struct _NSRange)arg1;	// IMP=0x00000000001f0a90
- (id)previousMarkerForMarker:(id)arg1;	// IMP=0x00000000001f0a20
- (id)nextMarkerForMarker:(id)arg1;	// IMP=0x00000000001f09b0
- (id)misspellingTextMarkerRange:(id)arg1 forward:(_Bool)arg2;	// IMP=0x00000000001f0620
- (id)lineStartMarkerForMarker:(id)arg1;	// IMP=0x00000000001f03e0
- (id)lineMarkersForMarker:(id)arg1;	// IMP=0x00000000001f0030
- (id)lineEndMarkerForMarker:(id)arg1;	// IMP=0x00000000001efdf0
- (id)selectedTextMarker;	// IMP=0x00000000001efb70
- (id)selectionRangeString;	// IMP=0x00000000001efb30
- (id)elementsForRange:(struct _NSRange)arg1;	// IMP=0x00000000001ef910
- (_Bool)accessibilityInsertText:(id)arg1;	// IMP=0x00000000001ef850
- (_Bool)accessibilityReplaceRange:(struct _NSRange)arg1 withText:(id)arg2;	// IMP=0x00000000001ef770
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;	// IMP=0x00000000001ef710
- (struct _NSRange)_accessibilitySelectedTextRange;	// IMP=0x00000000001ef680
- (id)attributedStringForElement;	// IMP=0x00000000001ef5e0
- (id)attributedStringForRange:(struct _NSRange)arg1;	// IMP=0x00000000001ef5c0
- (id)stringForRange:(struct _NSRange)arg1;	// IMP=0x00000000001ef340
- (id)_stringForRange:(struct _NSRange)arg1 attributed:(_Bool)arg2;	// IMP=0x00000000001ef220
- (id)_stringFromStartMarker:(id)arg1 toEndMarker:(id)arg2 attributed:(_Bool)arg3;	// IMP=0x00000000001eef00
- (id)textMarkerForPosition:(long long)arg1;	// IMP=0x00000000001eecb0
- (id)textMarkerRangeForSelection;	// IMP=0x00000000001ee990
- (id)accessibilityObjectForTextMarker:(id)arg1;	// IMP=0x00000000001ee880
- (struct _NSRange)elementTextRange;	// IMP=0x00000000001ee7c0
- (id)textMarkerRange;	// IMP=0x00000000001ee5b0
- (long long)positionForTextMarker:(id)arg1;	// IMP=0x00000000001ee200
- (id)arrayOfTextForTextMarkers:(id)arg1 attributed:(_Bool)arg2;	// IMP=0x00000000001edcb0
- (id)stringForTextMarkers:(id)arg1;	// IMP=0x00000000001eda40
- (void)_accessibilitySetValue:(id)arg1;	// IMP=0x00000000001ed990
- (void)accessibilityDecrement;	// IMP=0x00000000001ed940
- (void)accessibilityIncrement;	// IMP=0x00000000001ed8f0
- (void)accessibilityMoveSelectionToMarker:(id)arg1;	// IMP=0x00000000001ed790
- (void)accessibilityDecreaseSelection:(unsigned char)arg1;	// IMP=0x00000000001ed770
- (void)_accessibilitySetFocus:(_Bool)arg1;	// IMP=0x00000000001ed730
- (void)accessibilityIncreaseSelection:(unsigned char)arg1;	// IMP=0x00000000001ed710
- (void)accessibilityModifySelection:(unsigned char)arg1 increase:(_Bool)arg2;	// IMP=0x00000000001ed320
- (id)accessibilityFindMatchingObjects:(id)arg1;	// IMP=0x00000000001ed140
- (void *)treeItemParentForObject:(void *)arg1;	// IMP=0x00000000001ed0f0
- (void *)detailParentForObject:(void *)arg1;	// IMP=0x00000000001ed090
- (void *)detailParentForSummaryObject:(void *)arg1;	// IMP=0x00000000001ed030
- (struct CGRect)_accessibilityScrollVisibleRect;	// IMP=0x00000000001ecfa0
- (struct CGSize)_accessibilityScrollSize;	// IMP=0x00000000001ecf40
- (struct CGPoint)_accessibilityScrollPosition;	// IMP=0x00000000001ecee0
- (void)postNotification:(id)arg1;	// IMP=0x00000000001eced0
- (id)_accessibilityParentForSubview:(id)arg1;	// IMP=0x00000000001ece00
- (id)attachmentView;	// IMP=0x00000000001ecdb0
- (_Bool)_accessibilityActivate;	// IMP=0x00000000001ecd60
- (_Bool)accessibilityPerformEscape;	// IMP=0x00000000001ecd10
- (id)accessibilityTextualContext;	// IMP=0x00000000001ecc80
- (_Bool)isAttachment;	// IMP=0x00000000001ecc30
- (id)accessibilityLinkedElement;	// IMP=0x00000000001ec9f0
- (id)accessibilityErrorMessageElements;	// IMP=0x00000000001ec880
- (id)accessibilityDetailsElements;	// IMP=0x00000000001ec710
- (id)accessibilityFlowToElements;	// IMP=0x00000000001ec4e0
- (_Bool)accessibilityRequired;	// IMP=0x00000000001ec490
- (id)accessibilityLinkRelationshipType;	// IMP=0x00000000001ec3d0
- (id)accessibilityImageOverlayElements;	// IMP=0x00000000001ec0f0
- (id)_accessibilityPhotoDescription;	// IMP=0x00000000001ec030
- (_Bool)accessibilityCanSetValue;	// IMP=0x00000000001ebfe0
- (id)_accessibilityResolvedEditingStyles;	// IMP=0x00000000001ebfa0
- (id)_accessibilityPreviousElementsWithCount:(unsigned int)arg1;	// IMP=0x00000000001ebf40
- (id)_accessibilityNextElementsWithCount:(unsigned int)arg1;	// IMP=0x00000000001ebee0
- (id)_accessibilityWebDocumentView;	// IMP=0x00000000001ebe00
- (id)accessibilityFocusedUIElement;	// IMP=0x00000000001ebdb0
- (id)accessibilityContainer;	// IMP=0x00000000001ebb50
- (_Bool)containsUnnaturallySegmentedChildren;	// IMP=0x00000000001eba40
- (struct CGRect)accessibilityFrame;	// IMP=0x00000000001eb7e0
- (struct CGPoint)accessibilityActivationPoint;	// IMP=0x00000000001eb770
- (struct CGRect)accessibilityVisibleContentRect;	// IMP=0x00000000001eb6d0
- (struct CGRect)accessibilityElementRect;	// IMP=0x00000000001eb640
- (struct CGRect)_accessibilityRelativeFrame;	// IMP=0x00000000001eb400
- (_Bool)accessibilityScroll:(long long)arg1;	// IMP=0x00000000001eb220
- (_Bool)_accessibilityScrollToVisible;	// IMP=0x00000000001eb1e0
- (struct CGPoint)_accessibilityConvertPointToViewSpace:(struct CGPoint)arg1;	// IMP=0x00000000001eb140
- (id)accessibilityURL;	// IMP=0x00000000001eb080
- (id)accessibilityHint;	// IMP=0x00000000001eaed0
- (_Bool)accessibilityIsComboBox;	// IMP=0x00000000001eae80
- (_Bool)accessibilityIsAttachmentElement;	// IMP=0x00000000001eae30
- (_Bool)accessibilityIsIndeterminate;	// IMP=0x00000000001eade0
- (id)accessibilityValue;	// IMP=0x00000000001ea970
- (id)accessibilityColorStringValue;	// IMP=0x00000000001ea870
- (id)accessibilityPlaceholderValue;	// IMP=0x00000000001ea7b0
- (id)accessibilityDatetimeValue;	// IMP=0x00000000001ea6b0
- (unsigned long long)accessibilityBlockquoteLevel;	// IMP=0x00000000001ea660
- (struct _NSRange)accessibilityColumnRange;	// IMP=0x00000000001ea600
- (struct _NSRange)accessibilityRowRange;	// IMP=0x00000000001ea3d0
- (unsigned long long)accessibilityARIAColumnIndex;	// IMP=0x00000000001ea370
- (unsigned long long)accessibilityARIARowIndex;	// IMP=0x00000000001ea310
- (unsigned long long)accessibilityARIAColumnCount;	// IMP=0x00000000001ea2b0
- (unsigned long long)accessibilityARIARowCount;	// IMP=0x00000000001ea250
- (unsigned long long)accessibilityColumnCount;	// IMP=0x00000000001ea200
- (unsigned long long)accessibilityRowCount;	// IMP=0x00000000001ea1b0
- (id)accessibilityElementForRow:(long long)arg1 andColumn:(long long)arg2;	// IMP=0x00000000001ea140
- (id)accessibilityHeaderElements;	// IMP=0x00000000001e9d70
- (id)accessibilityTitleElement;	// IMP=0x00000000001e9d20
- (void *)tableParent;	// IMP=0x00000000001e9cc0
- (void *)tableCellParent;	// IMP=0x00000000001e9c70
- (id)accessibilityLabel;	// IMP=0x00000000001e9600
- (id)accessibilityBrailleRoleDescription;	// IMP=0x00000000001e9540
- (id)accessibilityBrailleLabel;	// IMP=0x00000000001e9480
- (id)accessibilityRoleDescription;	// IMP=0x00000000001e9350
- (double)_accessibilityMaxValue;	// IMP=0x00000000001e9300
- (double)_accessibilityMinValue;	// IMP=0x00000000001e92b0
- (_Bool)_accessibilityIsStrongPasswordField;	// IMP=0x00000000001e9240
- (_Bool)_accessibilityValueIsAutofilled;	// IMP=0x00000000001e91f0
- (_Bool)_accessibilityHasTouchEventListener;	// IMP=0x00000000001e91a0
- (_Bool)stringValueShouldBeUsedInLabel;	// IMP=0x00000000001e9110
- (_Bool)isAccessibilityElement;	// IMP=0x00000000001e90b0
- (_Bool)determineIsAccessibilityElement;	// IMP=0x00000000001e8b30
- (_Bool)isSVGGroupElement;	// IMP=0x00000000001e8ab0
- (unsigned long long)accessibilityTraits;	// IMP=0x00000000001e8610
- (unsigned long long)_accessibilityTextEntryTraits;	// IMP=0x00000000001e8530
- (void)accessibilityVideoEnterFullscreen;	// IMP=0x00000000001e8450
- (void)accessibilityToggleMuteForMedia;	// IMP=0x00000000001e8390
- (_Bool)accessibilityIsMediaMuted;	// IMP=0x00000000001e82f0
- (_Bool)accessibilityIsMediaPlaying;	// IMP=0x00000000001e8250
- (id)interactiveVideoDescription;	// IMP=0x00000000001e8130
- (_Bool)accessibilityIsWebInteractiveVideo;	// IMP=0x00000000001e7ff0
- (unsigned long long)_accessibilityTraitsFromAncestors;	// IMP=0x00000000001e7e60
- (id)_accessibilityFrameAncestor;	// IMP=0x00000000001e7dc0
- (id)_accessibilityFieldsetAncestor;	// IMP=0x00000000001e7d30
- (id)_accessibilityTableAncestor;	// IMP=0x00000000001e7c30
- (id)_accessibilityLandmarkAncestor;	// IMP=0x00000000001e7aa0
- (id)_accessibilityArticleAncestor;	// IMP=0x00000000001e7a00
- (id)_accessibilityListAncestor;	// IMP=0x00000000001e7920
- (id)_accessibilityDescriptionListAncestor;	// IMP=0x00000000001e7880
- (id)_accessibilityTreeAncestor;	// IMP=0x00000000001e76d0
- (_Bool)_accessibilityIsLandmarkRole:(int)arg1;	// IMP=0x00000000001e76a0
- (_Bool)accessibilityIsDialog;	// IMP=0x00000000001e7650
- (id)accessibilityLanguage;	// IMP=0x00000000001e7590
- (_Bool)_accessibilityIsInTableCell;	// IMP=0x00000000001e7540
- (_Bool)accessibilityIsInDescriptionListTerm;	// IMP=0x00000000001e74f0
- (_Bool)accessibilityIsInDescriptionListDefinition;	// IMP=0x00000000001e74a0
- (_Bool)accessibilityHasWebApplicationAncestor;	// IMP=0x00000000001e7450
- (_Bool)accessibilityHasDocumentRoleAncestor;	// IMP=0x00000000001e7400
- (id)accessibilityPopupValue;	// IMP=0x00000000001e7340
- (_Bool)accessibilityHasPopup;	// IMP=0x00000000001e72f0
- (id)_accessibilityWebRoleAsString;	// IMP=0x00000000001e7210
- (struct CGPath *)_accessibilityPath;	// IMP=0x00000000001e7120
- (long long)indexOfAccessibilityElement:(id)arg1;	// IMP=0x00000000001e6ff0
- (id)accessibilityElementAtIndex:(long long)arg1;	// IMP=0x00000000001e6f20
- (long long)accessibilityElementCount;	// IMP=0x00000000001e6e90
- (id)accessibilityElements;	// IMP=0x00000000001e6b90
- (void)disableAttributeCaching;	// IMP=0x00000000001e6b30
- (void)enableAttributeCaching;	// IMP=0x00000000001e6ac0
- (id)accessibilityHitTest:(struct CGPoint)arg1;	// IMP=0x00000000001e6720
- (id)accessibilityPostProcessHitTest:(struct CGPoint)arg1;	// IMP=0x00000000001e6710
- (_Bool)accessibilityCanFuzzyHitTest;	// IMP=0x00000000001e6490
- (id)accessibilityDOMIdentifier;	// IMP=0x00000000001e63d0
- (unsigned long long)_axUpdatesFrequentlyTrait;	// IMP=0x00000000001e63c0
- (unsigned long long)_axTextAreaTrait;	// IMP=0x00000000001e63b0
- (unsigned long long)_axSearchFieldTrait;	// IMP=0x00000000001e63a0
- (unsigned long long)_axContainedByFieldsetTrait;	// IMP=0x00000000001e6390
- (unsigned long long)_axRadioButtonTrait;	// IMP=0x00000000001e6380
- (unsigned long long)_axNotEnabledTrait;	// IMP=0x00000000001e6370
- (unsigned long long)_axSelectedTrait;	// IMP=0x00000000001e6360
- (unsigned long long)_axMenuItemTrait;	// IMP=0x00000000001e6350
- (unsigned long long)_axAdjustableTrait;	// IMP=0x00000000001e6340
- (unsigned long long)_axStaticTextTrait;	// IMP=0x00000000001e6330
- (unsigned long long)_axPopupButtonTrait;	// IMP=0x00000000001e6320
- (unsigned long long)_axToggleTrait;	// IMP=0x00000000001e6310
- (unsigned long long)_axButtonTrait;	// IMP=0x00000000001e6300
- (unsigned long long)_axTabButtonTrait;	// IMP=0x00000000001e62f0
- (unsigned long long)_axImageTrait;	// IMP=0x00000000001e62e0
- (unsigned long long)_axTextOperationsAvailableTrait;	// IMP=0x00000000001e62d0
- (unsigned long long)_axHasTextCursorTrait;	// IMP=0x00000000001e62c0
- (unsigned long long)_axTextEntryTrait;	// IMP=0x00000000001e62b0
- (unsigned long long)_axSecureTextFieldTrait;	// IMP=0x00000000001e62a0
- (unsigned long long)_axWebContentTrait;	// IMP=0x00000000001e6290
- (unsigned long long)_axContainedByLandmarkTrait;	// IMP=0x00000000001e6280
- (unsigned long long)_axContainedByTableTrait;	// IMP=0x00000000001e6270
- (unsigned long long)_axContainedByListTrait;	// IMP=0x00000000001e6260
- (unsigned long long)_axHeaderTrait;	// IMP=0x00000000001e6250
- (unsigned long long)_axVisitedTrait;	// IMP=0x00000000001e6240
- (unsigned long long)_axLinkTrait;	// IMP=0x00000000001e6230
- (void)dealloc;	// IMP=0x00000000001e6200
- (void)detach;	// IMP=0x00000000001e61a0
- (id)initWithAccessibilityObject:(void *)arg1;	// IMP=0x00000000001e6150

@end
