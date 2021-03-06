//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/SiriUIAceObjectViewController.h>

@class AFUserUtterance, NSArray, NSMutableArray, NSMutableDictionary, NSString, SAUIChangePrimaryUtterance, SREditableTextView, SRUserUtteranceContainerView, SRUserUtteranceView, SiriUICollectionViewFlowLayout, UICollectionView, UITapGestureRecognizer;

@interface SRUserUtteranceViewController : SiriUIAceObjectViewController
{
    SRUserUtteranceView *_utteranceView;	// 8 = 0x8
    _Bool _changeUtteranceShouldDisplay;	// 16 = 0x10
    UITapGestureRecognizer *_tapRecognizer;	// 24 = 0x18
    NSArray *_speechAlternativeDisplayList;	// 32 = 0x20
    NSMutableArray *_speechAlternativeList;	// 40 = 0x28
    NSMutableArray *_viewArray;	// 48 = 0x30
    SREditableTextView *_editableUtteranceView;	// 56 = 0x38
    UICollectionView *_speechAlternativeCollectionView;	// 64 = 0x40
    SiriUICollectionViewFlowLayout *_speechAlternativeCollectionViewLayout;	// 72 = 0x48
    _Bool _showSpeechAlternativeList;	// 80 = 0x50
    SRUserUtteranceContainerView *_containerView;	// 88 = 0x58
    _Bool _startEditWhenShown;	// 96 = 0x60
    NSString *_speechAlternativeListTitle;	// 104 = 0x68
    NSMutableDictionary *_alternativeInfoMap;	// 112 = 0x70
    _Bool _showOnDeviceResults;	// 120 = 0x78
    NSString *_sessionId;	// 128 = 0x80
    NSString *_originalUtteranceText;	// 136 = 0x88
    NSString *_preCorrectionText;	// 144 = 0x90
    struct CGSize _currentTextSize;	// 152 = 0x98
    _Bool _textChanged;	// 168 = 0xa8
    SAUIChangePrimaryUtterance *_changeUtteranceCommand;	// 176 = 0xb0
    _Bool _newRequestSent;	// 184 = 0xb8
    struct CGSize _oldUtteranceViewSize;	// 192 = 0xc0
    struct CGRect _previousBounds;	// 208 = 0xd0
    _Bool _needsToInvalidateCollectionViewLayoutOnViewWillLayoutSubviews;	// 240 = 0xf0
    double _latestGivenWidth;	// 248 = 0xf8
    _Bool _receivedFinalRecognitionResult;	// 256 = 0x100
    long long _speechAlternativesStartIndex;	// 264 = 0x108
    _Bool _forceBestTextInterpretation;	// 272 = 0x110
    AFUserUtterance *_userUtterance;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x002000000002968b
@property(retain, nonatomic, getter=_userUtterance, setter=_setUserUtterance:) AFUserUtterance *userUtterance; // @synthesize userUtterance=_userUtterance;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x001000000002950e
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000029496
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0010000000028f6a
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0010000000028f4d
- (id)userSelectionResults:(id)arg1;	// IMP=0x0010000000028c23
- (void)handleSelectRow:(long long)arg1;	// IMP=0x0010000000028927
- (id)_processUserUtterance:(id)arg1 isCombined:(_Bool)arg2 displayedText:(id)arg3 withScore:(_Bool)arg4;	// IMP=0x0010000000027dc9
- (id)speechAlternativeHighlightListWithScore:(_Bool)arg1;	// IMP=0x0010000000027883
- (void)_createSpeechAlternativeViewsIfNecessary;	// IMP=0x001000000002765c
- (void)createViewArray;	// IMP=0x0010000000027395
- (void)restoreOriginalEditTextContents:(id)arg1;	// IMP=0x00100000000272af
- (void)editableTextViewTextDidResignFirstResponder:(id)arg1;	// IMP=0x0010000000027212
- (void)editableTextViewTextDidReceiveReturnKey:(id)arg1;	// IMP=0x0010000000027200
- (void)editableTextViewTextDidFinishCorrecting:(id)arg1;	// IMP=0x0010000000026e27
- (void)editableTextViewTextDidChange:(id)arg1;	// IMP=0x0010000000026d01
- (void)_checkUpdatedSizingForEditableTextView:(id)arg1;	// IMP=0x0010000000026c06
- (void)editableTextViewTextWillBeginCorrecting:(id)arg1;	// IMP=0x00100000000269fe
- (void)editableTextViewRequestKeyboardForTapToEditWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002698c
- (_Bool)editableTextViewTextShouldPreventCorrection:(id)arg1;	// IMP=0x0010000000026939
- (void)createEditableUtteranceView;	// IMP=0x0010000000026848
- (void)_hideEditableUtteranceView;	// IMP=0x001000000002670a
- (void)_utteranceViewDidSelect:(id)arg1;	// IMP=0x00100000000265ee
- (double)_insertionAnimatedZPosition;	// IMP=0x00100000000265d5
- (long long)_replacementAnimation;	// IMP=0x00100000000265c2
- (long long)_insertionAnimation;	// IMP=0x00100000000265b2
- (long long)_pinAnimationType;	// IMP=0x00100000000265a7
- (void)siriDidDeactivate;	// IMP=0x0010000000026563
- (void)endEditingAndCorrectByTouchPoint:(struct CGPoint)arg1;	// IMP=0x001000000002630d
- (void)endEditingAndCorrect:(_Bool)arg1;	// IMP=0x001000000002624f
- (double)baselineOffsetFromBottom;	// IMP=0x0010000000026232
- (double)_scaledPaddingForPadding:(double)arg1;	// IMP=0x00100000000261b0
- (double)desiredPinnedTopPadding;	// IMP=0x001000000002616d
- (double)desiredTopPaddingBelowController:(id)arg1;	// IMP=0x001000000002612a
- (void)setAceObject:(id)arg1;	// IMP=0x0010000000025d35
- (void)handleChangeUtteranceCommand:(id)arg1;	// IMP=0x0010000000025a14
- (void)handleShowSpeechAlternativesCommand:(id)arg1;	// IMP=0x001000000002595f
- (void)handleAceCommand:(id)arg1;	// IMP=0x00100000000258c5
- (void)removeSpeechAlternativeViewAndUpdateUtteranceTextIfNecessary;	// IMP=0x0010000000025790
- (void)removeSpeechAlternatives;	// IMP=0x0010000000025704
- (double)desiredHeightForWidth:(double)arg1;	// IMP=0x00100000000256a8
- (id)_correctionIdentifier;	// IMP=0x0010000000025658
@property(readonly, copy) NSString *description;
- (void)setUtteranceUserInteractionEnabled:(_Bool)arg1;	// IMP=0x0010000000025498
- (void)_updateViewWithChangeUtteranceIfNeeded:(id)arg1;	// IMP=0x0010000000025388
- (void)_updateViewWithUserUtterance:(id)arg1;	// IMP=0x0010000000025203
- (void)viewDidLayoutSubviews;	// IMP=0x00100000000250de
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000024ef2
- (void)viewWillLayoutSubviews;	// IMP=0x0010000000024ddd
- (void)loadView;	// IMP=0x0010000000024c78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

