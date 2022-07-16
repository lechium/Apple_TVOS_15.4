//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIResponderStandardEditActions-Protocol.h>
#import <UIKitCore/UITextInput-Protocol.h>
#import <UIKitCore/UITextInputAdditions-Protocol.h>
#import <UIKitCore/UITextInputPrivate-Protocol.h>
#import <UIKitCore/UITextInput_Internal-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSHashTable, NSIndexSet, NSLayoutManager, NSSet, NSString, RTIInputSystemSourceSession, UIColor, UIImage, UIInputContextHistory, UIKeyboardCameraSession, UIResponder, UITextChecker, UITextCheckingController, UITextInputPasswordRules, UITextInputTraits, UITextInteractionAssistant, UITextPlaceholder, UITextPosition, UITextRange, UIView, _UISupplementalLexicon, _UITextInputControllerTokenizer, _UITextLayoutController, _UITextServiceSession, _UITextUndoManager, _UITextUndoOperationTyping;
@protocol UITextInput, UITextInputControllerDelegate, UITextInputDelegate, UITextInputPrivate, UITextInputSuggestionDelegate, UITextInputTokenizer;

@interface UITextInputController : NSObject <UITextInput_Internal, UITextInput, UITextInputAdditions, UIResponderStandardEditActions, UITextInputPrivate>
{
    id <UITextInputDelegate> _inputDelegate;	// 8 = 0x8
    UITextRange *_selectedTextRange;	// 16 = 0x10
    _UITextInputControllerTokenizer *_tokenizer;	// 24 = 0x18
    NSLayoutManager *_layoutManager;	// 32 = 0x20
    NSHashTable *_observedScrollViews;	// 40 = 0x28
    _UITextServiceSession *_learnSession;	// 48 = 0x30
    _UITextServiceSession *_shareSession;	// 56 = 0x38
    _UITextServiceSession *_lookupSession;	// 64 = 0x40
    _UITextServiceSession *_translateSession;	// 72 = 0x48
    UIKeyboardCameraSession *_keyboardCameraSession;	// 80 = 0x50
    UITextInputTraits *_textInputTraits;	// 88 = 0x58
    struct _NSRange _markedTextRange;	// 96 = 0x60
    struct _NSRange _markedTextSelection;	// 112 = 0x70
    NSDictionary *_markedTextStyle;	// 128 = 0x80
    NSAttributedString *_markedText;	// 136 = 0x88
    struct {
        unsigned int delegateRespondsToTextInputShouldBeginEditing:1;
        unsigned int delegateRespondsToTextInputShouldChangeCharactersInRangeReplacementText:1;
        unsigned int delegateRespondsToTextInputDidChange:1;
        unsigned int delegateRespondsToTextInputDidChangeSelection:1;
        unsigned int delegateRespondsToTextInputWillChangeSelectionFromCharacterRangeToCharacterRange:1;
        unsigned int delegateRespondsToTextInputEditorDidChangeSelection:1;
        unsigned int delegateRespondsToTextInputPrepareAttributedTextForInsertion:1;
        unsigned int delegateRespondsToTextInputShouldExtendCaretHeight:1;
        unsigned int delegateRespondsToIsSingleLine:1;
        unsigned int textOrSelectionChangeOriginatesWithKeyboard:1;
        unsigned int showingTextStyleOptions:1;
        unsigned int undoRedoInProgress:1;
        unsigned int textOrSelectionChangeOriginatesWithMarkedText:1;
        unsigned int nextSelectionChangeMustUpdate:1;
        unsigned int hasTextAlternatives:1;
        unsigned int hasDictationResultMetadata:1;
        unsigned int suppressDelegateChangeNotifications:1;
    } _tiFlags;	// 144 = 0x90
    NSArray *_extraItemsBeforeTextStyleOptions;	// 152 = 0x98
    UIView<UITextInput> *_firstTextView;	// 160 = 0xa0
    _UITextUndoManager *_undoManager;	// 168 = 0xa8
    _UITextUndoOperationTyping *_undoOperationForCoalescing;	// 176 = 0xb0
    UITextChecker *_textChecker;	// 184 = 0xb8
    UITextCheckingController *_textCheckingController;	// 192 = 0xc0
    NSSet *_whitelistedTypingAttributes;	// 200 = 0xc8
    unsigned long long _dontRemoveAllActionsCount;	// 208 = 0xd0
    UITextPlaceholder *_textPlaceholder;	// 216 = 0xd8
    _Bool _allowsEditingTextAttributes;	// 224 = 0xe0
    _Bool _continuousSpellCheckingEnabled;	// 225 = 0xe1
    _Bool _shouldStartUndoGroup;	// 226 = 0xe2
    int _currentUndoGroupType;	// 228 = 0xe4
    NSDictionary *_emptyStringAttributes;	// 232 = 0xe8
    _UITextLayoutController *_textLayoutController;	// 240 = 0xf0
    NSDictionary *_typingAttributes;	// 248 = 0xf8
    id <UITextInputControllerDelegate> _delegate;	// 256 = 0x100
    UITextRange *_previousSelectedTextRange;	// 264 = 0x108
}

+ (_Bool)_shouldUseStandardTextScaling:(id)arg1;	// IMP=0x0000000000e9ffcf
- (void).cxx_destruct;	// IMP=0x0000000000ea49da
@property(nonatomic) _Bool shouldStartUndoGroup; // @synthesize shouldStartUndoGroup=_shouldStartUndoGroup;
@property(nonatomic) int currentUndoGroupType; // @synthesize currentUndoGroupType=_currentUndoGroupType;
@property(retain, nonatomic) UITextRange *previousSelectedTextRange; // @synthesize previousSelectedTextRange=_previousSelectedTextRange;
@property(nonatomic) _Bool continuousSpellCheckingEnabled; // @synthesize continuousSpellCheckingEnabled=_continuousSpellCheckingEnabled;
@property(nonatomic) __weak id <UITextInputControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *typingAttributes; // @synthesize typingAttributes=_typingAttributes;
@property(nonatomic) _Bool allowsEditingTextAttributes; // @synthesize allowsEditingTextAttributes=_allowsEditingTextAttributes;
@property(readonly, nonatomic) __weak _UITextLayoutController *textLayoutController; // @synthesize textLayoutController=_textLayoutController;
@property(copy, nonatomic, getter=_emptyStringAttributes, setter=_setEmptyStringAttributes:) NSDictionary *emptyStringAttributes; // @synthesize emptyStringAttributes=_emptyStringAttributes;
- (void)captureTextFromCamera:(id)arg1;	// IMP=0x0000000000ea479e
- (void)removeAnnotation:(id)arg1 forRange:(id)arg2;	// IMP=0x0000000000ea461c
- (void)replaceRange:(id)arg1 withAnnotatedString:(id)arg2 relativeReplacementRange:(struct _NSRange)arg3;	// IMP=0x0000000000ea3f1a
- (id)annotatedSubstringForRange:(id)arg1;	// IMP=0x0000000000ea3ead
- (id)validAnnotations;	// IMP=0x0000000000ea3e94
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000ea3e33
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000ea3dd8
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000ea3d33
- (id)_textInputTraits;	// IMP=0x0000000000ea3d25
- (void)_resetShowingTextStyle:(id)arg1;	// IMP=0x0000000000ea3c53
- (void)_showTextStyleOptions:(id)arg1;	// IMP=0x0000000000ea3968
- (void)validateCommand:(id)arg1;	// IMP=0x0000000000ea3427
- (void)_validateCommand:(id)arg1 forFont:(id)arg2 traits:(int)arg3;	// IMP=0x0000000000ea32b2
- (void)alignRight:(id)arg1;	// IMP=0x0000000000ea3232
- (void)alignJustified:(id)arg1;	// IMP=0x0000000000ea31b2
- (void)alignCenter:(id)arg1;	// IMP=0x0000000000ea3132
- (void)alignLeft:(id)arg1;	// IMP=0x0000000000ea30b5
- (void)_changeTextAlignment:(long long)arg1 undoString:(id)arg2;	// IMP=0x0000000000ea2ca5
- (void)toggleUnderline:(id)arg1;	// IMP=0x0000000000ea2a5b
- (void)toggleItalics:(id)arg1;	// IMP=0x0000000000ea2979
- (void)toggleBoldface:(id)arg1;	// IMP=0x0000000000ea2897
- (void)_toggleFontTrait:(unsigned int)arg1;	// IMP=0x0000000000ea24a6
- (void)_addShortcut:(id)arg1;	// IMP=0x0000000000ea2309
- (void)_clearSelectionUI;	// IMP=0x0000000000ea2275
- (_Bool)_isDisplayingShareViewController;	// IMP=0x0000000000ea225f
- (_Bool)_isDisplayingLookupViewController;	// IMP=0x0000000000ea2249
- (_Bool)_isDisplayingReferenceLibraryViewController;	// IMP=0x0000000000ea2233
- (_Bool)_isDisplayingShortcutViewController;	// IMP=0x0000000000ea221d
- (_Bool)_isDisplayingTextService;	// IMP=0x0000000000ea21bc
- (void)_translate:(id)arg1;	// IMP=0x0000000000ea1fd6
- (void)_define:(id)arg1;	// IMP=0x0000000000ea1df0
- (void)_removeShortcutController;	// IMP=0x0000000000ea1dd5
- (void)_share:(id)arg1;	// IMP=0x0000000000ea1cdd
- (void)_removeShareController;	// IMP=0x0000000000ea1cc2
- (void)_transliterateChinese:(id)arg1;	// IMP=0x0000000000ea1c85
- (void)_promptForReplace:(id)arg1;	// IMP=0x0000000000ea1c48
- (void)selectAll:(id)arg1;	// IMP=0x0000000000ea1bd6
- (void)select:(id)arg1;	// IMP=0x0000000000ea1b99
- (void)updateTextAttributesWithConversionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ea190d
- (void)decreaseSize:(id)arg1;	// IMP=0x0000000000ea1514
- (void)increaseSize:(id)arg1;	// IMP=0x0000000000ea112b
- (void)_pasteRawAttributedString:(id)arg1 asRichText:(_Bool)arg2;	// IMP=0x0000000000ea0f69
- (void)_pasteAttributedString:(id)arg1 toRange:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000ea0d50
- (void)_pasteAttributedString:(id)arg1 pasteAsRichText:(_Bool)arg2;	// IMP=0x0000000000ea0cff
- (id)_attributedStringForInsertionOfAttributedString:(id)arg1;	// IMP=0x0000000000ea0835
- (_Bool)_pasteFromPasteboard:(id)arg1 andMatchStyle:(_Bool)arg2;	// IMP=0x0000000000ea02e9
- (void)_pasteAndMatchStyle:(_Bool)arg1;	// IMP=0x0000000000ea01ea
- (void)pasteAndMatchStyle:(id)arg1;	// IMP=0x0000000000ea01d3
- (void)paste:(id)arg1;	// IMP=0x0000000000ea01bf
- (void)copy:(id)arg1;	// IMP=0x0000000000ea01ad
- (void)cut:(id)arg1;	// IMP=0x0000000000ea00d5
- (void)_copySelectionToClipboard:(id)arg1;	// IMP=0x0000000000ea00cf
- (void)_copySelectionToClipboard;	// IMP=0x0000000000ea007c
- (void)removeTextStylingFromString:(id)arg1;	// IMP=0x0000000000e9fee5
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;	// IMP=0x0000000000e9fe97
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;	// IMP=0x0000000000e9fe46
- (void)makeTextWritingDirectionNatural:(id)arg1;	// IMP=0x0000000000e9fdf3
- (long long)writingDirectionAtPosition:(id)arg1;	// IMP=0x0000000000e9fd92
- (_Bool)_isSecureTextEntry;	// IMP=0x0000000000e9fd5e
- (void)replace:(id)arg1;	// IMP=0x0000000000e9f845
- (void)selectAll;	// IMP=0x0000000000e9f78d
- (id)_selectedAttributedText;	// IMP=0x0000000000e9f71e
- (id)_selectedText;	// IMP=0x0000000000e9f68e
- (_Bool)_shouldHandleResponderAction:(SEL)arg1;	// IMP=0x0000000000e9e89d
- (_Bool)_canHandleResponderAction:(SEL)arg1;	// IMP=0x0000000000e9e764
- (id)metadataDictionariesForDictationResults;	// IMP=0x0000000000e9de25
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;	// IMP=0x0000000000e9da5f
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;	// IMP=0x0000000000e9da2e
- (void)removeTextPlaceholder:(id)arg1;	// IMP=0x0000000000e9da17
- (void)removeTextPlaceholder:(id)arg1 notifyInputDelegate:(_Bool)arg2;	// IMP=0x0000000000e9d3f5
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;	// IMP=0x0000000000e9d3d6
- (struct CGRect)frameForTextPlaceholder:(id)arg1;	// IMP=0x0000000000e9d0f6
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
- (id)insertTextPlaceholderWithSize:(struct CGSize)arg1;	// IMP=0x0000000000e9cdd1
- (void)_updateRectsForPlaceholder;	// IMP=0x0000000000e9c800
- (void)_layoutManagerDidCompleteLayout;	// IMP=0x0000000000e9c605
- (id)insertTextPlaceholderWithSize:(struct CGSize)arg1 embeddingType:(long long)arg2;	// IMP=0x0000000000e9bd64
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;	// IMP=0x0000000000e9baa0
- (void)_insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 replacingRange:(struct _NSRange)arg3 resultLength:(unsigned long long *)arg4;	// IMP=0x0000000000e9b88e
- (void)_setSelectedRangeToEndIfNecessary;	// IMP=0x0000000000e9b82f
- (_Bool)_isSystemAttachment:(id)arg1;	// IMP=0x0000000000e9b7e4
- (void)clearText;	// IMP=0x0000000000e9b70c
- (void)changeWillBeUndone:(id)arg1;	// IMP=0x0000000000e9b6cc
- (_Bool)dontRemoveAllActions;	// IMP=0x0000000000e9b6bb
- (void)stopCoalescing;	// IMP=0x0000000000e9b67e
- (_Bool)isCoalescing;	// IMP=0x0000000000e9b654
- (_Bool)_undoRedoInProgress;	// IMP=0x0000000000e9b643
- (void)_setUndoRedoInProgress:(_Bool)arg1;	// IMP=0x0000000000e9b627
- (void)undoDidChangeText;	// IMP=0x0000000000e9b60b
- (void)undoWillChangeText;	// IMP=0x0000000000e9b5ef
- (void)registerUndoOperationForType:(int)arg1 actionName:(id)arg2 affectedRange:(struct _NSRange)arg3 replacementText:(id)arg4;	// IMP=0x0000000000e9b304
- (void)scheduleUndoOperationForType:(int)arg1 actionName:(id)arg2 previousSelectedRange:(struct _NSRange)arg3 replacementText:(id)arg4;	// IMP=0x0000000000e9b144
- (_Bool)shouldStartNewUndoGroup:(id)arg1 textGranularity:(long long)arg2 operationType:(int)arg3;	// IMP=0x0000000000e9b042
- (void)appendUndoOperation:(id)arg1 newGroup:(_Bool)arg2;	// IMP=0x0000000000e9b03c
- (void)coalesceInTextView:(id)arg1 actionName:(id)arg2 affectedRange:(struct _NSRange)arg3 replacementRange:(struct _NSRange)arg4 replacementText:(id)arg5;	// IMP=0x0000000000e9adce
- (void)_undoManagerWillUndo:(id)arg1;	// IMP=0x0000000000e9ad8e
- (id)undoManager;	// IMP=0x0000000000e9acd3
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000e9aa75
- (id)characterRangeAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000e9a9ec
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;	// IMP=0x0000000000e9a8c6
- (id)closestPositionToPoint:(struct CGPoint)arg1;	// IMP=0x0000000000e9a8b4
- (struct CGRect)caretRectForPosition:(id)arg1;	// IMP=0x0000000000e9a5b4
@property(readonly, nonatomic, getter=_caretRect) struct CGRect caretRect;
- (struct CGRect)_caretRectForOffset:(unsigned long long)arg1;	// IMP=0x0000000000e9a4a3
- (struct CGRect)firstRectForRange:(id)arg1;	// IMP=0x0000000000e9a3e6
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;	// IMP=0x0000000000e99ffa
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000e99caa
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
- (void)_updateEmptyStringAttributes;	// IMP=0x0000000000e99b14
- (void)_invalidateEmptyStringAttributes;	// IMP=0x0000000000e99b00
- (void)_invalidateTypingAttributes;	// IMP=0x0000000000e99aec
- (void)_addToTypingAttributes:(id)arg1 value:(id)arg2;	// IMP=0x0000000000e99a31
- (id)_attributesForReplacementInRange:(struct _NSRange)arg1;	// IMP=0x0000000000e99571
- (id)_attributesForInsertionOfText:(struct _NSRange)arg1;	// IMP=0x0000000000e994fd
- (id)_newAttributedStringForInsertionOfAttributedText:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x0000000000e9930a
- (id)_newAttributedStringForInsertionOfText:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x0000000000e9922e
- (id)_fixupTypingAttributeForAttributes:(id)arg1;	// IMP=0x0000000000e99027
@property(copy, nonatomic, getter=_whitelistedTypingAttributes, setter=_setWhitelistedTypingAttributes:) NSSet *_whitelistedTypingAttributes;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000e98d91
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;	// IMP=0x0000000000e98d31
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000e98cae
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000e98c2b
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;	// IMP=0x0000000000e988ed
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;	// IMP=0x0000000000e9887a
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000e987eb
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;	// IMP=0x0000000000e98583
- (struct _NSRange)markedRange;	// IMP=0x0000000000e98575
- (void)_forceUnmarkTextDueToEditing;	// IMP=0x0000000000e98531
- (void)_clearMarkedText;	// IMP=0x0000000000e98506
- (void)setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000000e9845c
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000000e983b2
- (void)_setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 fromKeyboard:(_Bool)arg3 useTextStyle:(_Bool)arg4;	// IMP=0x0000000000e97dd6
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(nonatomic) long long selectionAffinity;
- (void)_performWhileSuppressingDelegateNotifications:(CDUnknownBlockType)arg1;	// IMP=0x0000000000e97ca2
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;	// IMP=0x0000000000e979ca
- (void)_replaceRange:(id)arg1 withAttributedTextFromKeyboard:(id)arg2 addingUnderlinesForAlternatives:(_Bool)arg3;	// IMP=0x0000000000e973c9
- (void)replaceRange:(id)arg1 withAttributedText:(id)arg2;	// IMP=0x0000000000e973b1
- (void)replaceRange:(id)arg1 withText:(id)arg2;	// IMP=0x0000000000e97316
- (id)attributedTextInRange:(id)arg1;	// IMP=0x0000000000e96f47
- (id)textInRange:(id)arg1;	// IMP=0x0000000000e96baf
- (void)_ensureSelectionVisible;	// IMP=0x0000000000e96b79
- (void)scrollRangeToVisible:(struct _NSRange)arg1;	// IMP=0x0000000000e96a8b
- (id)_parentScrollView;	// IMP=0x0000000000e969f1
- (unsigned long long)_validCaretPositionFromCharacterIndex:(unsigned long long)arg1 downstream:(_Bool)arg2;	// IMP=0x0000000000e966f7
- (id)_characterPositionForPoint:(struct CGPoint)arg1;	// IMP=0x0000000000e961da
- (id)_rectsForRange:(struct _NSRange)arg1;	// IMP=0x0000000000e9614a
- (id)selectionRectsForRange:(id)arg1;	// IMP=0x0000000000e95b8a
- (id)selectionView;	// IMP=0x0000000000e95b3a
- (void)updateSelection;	// IMP=0x0000000000e95b28
- (void)endSelectionChange;	// IMP=0x0000000000e959ed
- (void)beginSelectionChange;	// IMP=0x0000000000e95977
- (void)checkSpellingForSelectionChangeIfNecessary;	// IMP=0x0000000000e956af
- (void)notifyTextCheckingControllerForSelectionChange;	// IMP=0x0000000000e9565f
- (void)removeSpellingMarkersForCurrentWord;	// IMP=0x0000000000e95534
- (void)removeSpellingMarkersFromWordInRange:(id)arg1;	// IMP=0x0000000000e95370
- (id)textRangeForNSRange:(struct _NSRange)arg1;	// IMP=0x0000000000e952a6
- (struct _NSRange)nsRangeForTextRange:(id)arg1;	// IMP=0x0000000000e95199
- (void)checkSpellingForWordInRange:(id)arg1;	// IMP=0x0000000000e94d07
- (void)preheatTextChecker;	// IMP=0x0000000000e94cb2
- (id)textChecker;	// IMP=0x0000000000e94c31
- (void)checkSmartPunctuationForWordInRange:(id)arg1;	// IMP=0x0000000000e947ed
- (void)deleteBackward;	// IMP=0x0000000000e944ca
- (void)didEndEditing;	// IMP=0x0000000000e94279
- (void)_updateRangeForSmartDelete;	// IMP=0x0000000000e94113
- (struct _NSRange)_rangeForBackwardsDelete;	// IMP=0x0000000000e94078
- (void)_registerUndoOperationForReplacementWithActionName:(id)arg1 replacementText:(id)arg2;	// IMP=0x0000000000e93fc4
- (_Bool)_hasDictationPlaceholder;	// IMP=0x0000000000e93fb3
@property(readonly, nonatomic) NSAttributedString *filteredAttributedText;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;	// IMP=0x0000000000e93dfa
- (void)_insertAttributedText:(id)arg1 fromKeyboard:(_Bool)arg2;	// IMP=0x0000000000e93a4b
- (void)insertAttributedText:(id)arg1;	// IMP=0x0000000000e938b5
- (void)addTextAlternativesDisplayStyle:(long long)arg1 toRange:(struct _NSRange)arg2;	// IMP=0x0000000000e93761
- (void)insertText:(id)arg1;	// IMP=0x0000000000e934ea
- (void)removeAlternativesForCurrentWord;	// IMP=0x0000000000e932cd
@property(readonly, nonatomic) _Bool hasText;
- (_Bool)_mightHaveSelection;	// IMP=0x0000000000e93161
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
@property(readonly, nonatomic, getter=isEditable) _Bool editable;
- (id)attributedSubstringForMarkedRange;	// IMP=0x0000000000e92fb7
@property(copy, nonatomic) NSDictionary *markedTextStyle;
- (long long)_resolveNaturalDirection:(long long)arg1;	// IMP=0x0000000000e92e65
- (void)_insertText:(id)arg1 fromKeyboard:(_Bool)arg2;	// IMP=0x0000000000e92589
- (struct _NSRange)_rangeToReplaceWhenInsertingText;	// IMP=0x0000000000e924f7
- (void)_coordinateSelectionChange:(CDUnknownBlockType)arg1;	// IMP=0x0000000000e921f3
- (void)_ensureSelectionValid;	// IMP=0x0000000000e92128
@property(nonatomic) struct _NSRange selectedRange;
- (struct _NSRange)_selectedRange;	// IMP=0x0000000000e92032
- (void)_setSelectedRange:(struct _NSRange)arg1;	// IMP=0x0000000000e91fd0
@property(copy) UITextRange *selectedTextRange;
- (void)_selectionDidScroll:(id)arg1;	// IMP=0x0000000000e919d5
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (id)_firstTextView;	// IMP=0x0000000000e91901
- (void)_selectionGeometryChanged;	// IMP=0x0000000000e91875
- (void)_textStorageDidProcessEditing:(id)arg1;	// IMP=0x0000000000e91387
- (_Bool)supportLetterByLetterUndo;	// IMP=0x0000000000e9137f
- (void)_updateFirstTextView;	// IMP=0x0000000000e90aa7
- (_Bool)_shouldConsiderTextViewForGeometry:(id)arg1;	// IMP=0x0000000000e909ec
- (void)_textContainerDidChangeView:(id)arg1;	// IMP=0x0000000000e909da
- (void)_setInternalGestureRecognizers;	// IMP=0x0000000000e90998
- (id)_textStorage;	// IMP=0x0000000000e90952
- (_Bool)_delegateShouldChangeTextInRange:(struct _NSRange)arg1 replacementText:(id)arg2;	// IMP=0x0000000000e908b5
- (void)_sendDelegateChangeNotificationsForText:(_Bool)arg1 selection:(_Bool)arg2;	// IMP=0x0000000000e907ca
- (void)_sendDelegateWillChangeNotificationsForText:(_Bool)arg1 selection:(_Bool)arg2;	// IMP=0x0000000000e9074b
- (id)_senderForDelegateNotifications;	// IMP=0x0000000000e906bf
- (struct _NSRange)_rangeAfterCancelDictationIfNecessaryForChangeInRange:(struct _NSRange)arg1;	// IMP=0x0000000000e905e3
- (void)_detachFromLayoutManager;	// IMP=0x0000000000e903d4
- (void)dealloc;	// IMP=0x0000000000e902a4
- (id)initWithTextLayoutController:(id)arg1;	// IMP=0x0000000000e8ff93
- (id)_selectableText;	// IMP=0x0000000000a40278
- (_Bool)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(_Bool)arg3;	// IMP=0x0000000000a401c9
- (void)_unmarkText;	// IMP=0x0000000000a40163
- (void)_setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000000a3ff63
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000000a3fef8
- (_Bool)_hasMarkedText;	// IMP=0x0000000000a3fe9d
- (_Bool)_usesAsynchronousProtocol;	// IMP=0x0000000000a3fe6b
- (void)_setGestureRecognizers;	// IMP=0x0000000000a3fb86
- (long long)_selectionAffinity;	// IMP=0x0000000000a3fa8d
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(_Bool)arg2;	// IMP=0x0000000000a3fa1d
- (id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(_Bool)arg4;	// IMP=0x0000000000a3f9d8
- (id)_moveRight:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000a3f8a8
- (id)_moveLeft:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000a3f778
- (id)_moveDown:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000a3f560
- (id)_moveUp:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000a3f348
- (id)_moveToEndOfDocument:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000a3f21e
- (id)_moveToStartOfDocument:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000a3f13b
- (id)_moveToEndOfParagraph:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000a3efbc
- (id)_moveToStartOfParagraph:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000a3ee31
- (id)_moveToEndOfLine:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000a3ec63
- (id)_moveToStartOfLine:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000a3ea89
- (id)_moveToEndOfWord:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000a3e8ab
- (id)_moveToStartOfWord:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0000000000a3e554
- (id)_setHistory:(id)arg1 withExtending:(_Bool)arg2 withAnchor:(int)arg3 withAffinityDownstream:(_Bool)arg4;	// IMP=0x0000000000a3e383
- (id)_setSelectionRangeWithHistory:(id)arg1;	// IMP=0x0000000000a3e130
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(_Bool)arg2;	// IMP=0x0000000000a3e0f0
- (id)_fontForCaretSelection;	// IMP=0x0000000000a3e006
- (id)_textColorForCaretSelection;	// IMP=0x0000000000a3df1c
- (id)_rangeFromCurrentRangeWithDelta:(struct _NSRange)arg1;	// IMP=0x0000000000a3ddf7
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;	// IMP=0x0000000000a3dd61
- (id)_rangeOfSmartSelectionIncludingRange:(id)arg1;	// IMP=0x0000000000a3d884
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;	// IMP=0x0000000000a3d72f
- (_Bool)_range:(id)arg1 isEqualToRange:(id)arg2;	// IMP=0x0000000000a3d67b
- (id)_intersectionOfRange:(id)arg1 andRange:(id)arg2;	// IMP=0x0000000000a3d5a1
- (_Bool)_range:(id)arg1 intersectsRange:(id)arg2;	// IMP=0x0000000000a3d53f
- (_Bool)_range:(id)arg1 containsRange:(id)arg2;	// IMP=0x0000000000a3d4bc
- (id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2;	// IMP=0x0000000000a3d350
- (id)_fullRange;	// IMP=0x0000000000a3d2f6
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;	// IMP=0x0000000000a3d2dc
- (id)_rangeOfSentenceEnclosingPosition:(id)arg1;	// IMP=0x0000000000a3d2c2
- (id)_rangeOfLineEnclosingPosition:(id)arg1;	// IMP=0x0000000000a3d2a8
- (id)_rangeOfEnclosingWord:(id)arg1;	// IMP=0x0000000000a3d28e
- (id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2;	// IMP=0x0000000000a3d1ec
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;	// IMP=0x0000000000a3cf68
- (id)_normalizedStringForRangeComparison:(id)arg1;	// IMP=0x0000000000a3cf14
- (void)_scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000a3ce4d
- (void)_replaceDocumentWithText:(id)arg1;	// IMP=0x0000000000a3cdc1
- (void)_replaceCurrentWordWithText:(id)arg1;	// IMP=0x0000000000a3cd46
- (void)_transpose;	// IMP=0x0000000000a3cb59
- (void)_deleteForwardAndNotify:(_Bool)arg1;	// IMP=0x0000000000a3ca29
- (void)_deleteBackwardAndNotify:(_Bool)arg1;	// IMP=0x0000000000a3c9fe
- (void)_deleteTextRange:(id)arg1;	// IMP=0x0000000000a3c922
- (void)_deleteToEndOfParagraph;	// IMP=0x0000000000a3c7ef
- (void)_deleteToEndOfLine;	// IMP=0x0000000000a3c6bc
- (void)_deleteToStartOfLine;	// IMP=0x0000000000a3c586
- (void)_deleteForwardByWord;	// IMP=0x0000000000a3c3b9
- (void)_deleteByWord;	// IMP=0x0000000000a3c2c4
- (void)_setCaretSelectionAtEndOfSelection;	// IMP=0x0000000000a3c22b
- (id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2;	// IMP=0x0000000000a3c09a
- (id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x0000000000a3bf73
- (long long)_opposingDirectionFromDirection:(long long)arg1;	// IMP=0x0000000000a3bf59
- (id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;	// IMP=0x0000000000a3bef1
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;	// IMP=0x0000000000a3be34
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;	// IMP=0x0000000000a3be1d
- (void)_expandSelectionToBackwardDeletionCluster;	// IMP=0x0000000000a3bc47
- (void)_moveCurrentSelection:(int)arg1;	// IMP=0x0000000000a3bb53
- (void)_extendCurrentSelection:(int)arg1;	// IMP=0x0000000000a3ba64
- (_Bool)_hasMarkedTextOrRangedSelection;	// IMP=0x0000000000a3b9f0
- (_Bool)_isEmptySelection;	// IMP=0x0000000000a3b982
- (struct CGRect)_selectionClipRect;	// IMP=0x0000000000a3b964
- (_Bool)_selectionAtDocumentEnd;	// IMP=0x0000000000a3b8ef
- (_Bool)_selectionAtDocumentStart;	// IMP=0x0000000000a3b87a
- (_Bool)_selectionAtWordStart;	// IMP=0x0000000000a3b7d6
- (void)_setSelectionToPosition:(id)arg1;	// IMP=0x0000000000a3b770
- (id)_fullText;	// IMP=0x0000000000a3b706
- (id)_wordContainingCaretSelection;	// IMP=0x0000000000a3b664
- (unsigned int)_characterInRelationToPosition:(id)arg1 amount:(int)arg2;	// IMP=0x0000000000a3b541
- (unsigned int)_characterInRelationToRangedSelection:(int)arg1;	// IMP=0x0000000000a3b362
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;	// IMP=0x0000000000a3b2d9
- (unsigned int)_characterBeforeCaretSelection;	// IMP=0x0000000000a3b2c2
- (unsigned int)_characterAfterCaretSelection;	// IMP=0x0000000000a3b2ae
- (id)_textRangeFromNSRange:(struct _NSRange)arg1;	// IMP=0x0000000000a3b200
- (struct _NSRange)_nsrangeForTextRange:(id)arg1;	// IMP=0x0000000000a3b173
- (int)_indexForTextPosition:(id)arg1;	// IMP=0x0000000000a3b126
- (void)_selectAll;	// IMP=0x0000000000a3b0e8
- (struct _NSRange)_selectedRangeWithinMarkedText;	// IMP=0x0000000000a3aff7
- (struct _NSRange)_selectedNSRange;	// IMP=0x0000000000a3af9a
@property(nonatomic) long long _textInputSource;
@property(readonly, nonatomic) id <UITextInputSuggestionDelegate> textInputSuggestionDelegate;
- (id)_keyInput;	// IMP=0x0000000000a3ae56
@property(readonly, nonatomic, getter=_proxyTextInput) UIResponder<UITextInput> *__content;

// Remaining properties
@property(copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property(readonly, nonatomic) RTIInputSystemSourceSession *_rtiSourceSession;
@property(readonly, nonatomic) UIView<UITextInputPrivate> *_textSelectingContainer;
@property(nonatomic) _Bool acceptsDictationSearchResults;
@property(nonatomic) _Bool acceptsEmoji;
@property(nonatomic) _Bool acceptsFloatingKeyboard;
@property(nonatomic) _Bool acceptsInitialEmojiKeyboard;
@property(nonatomic) _Bool acceptsPayloads;
@property(nonatomic) _Bool acceptsSplitKeyboard;
@property(nonatomic) long long autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) long long autocorrectionType;
@property(nonatomic) _Bool contentsIsSingleValue;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool deferBecomingResponder;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isDevicePasscodeEntry) _Bool devicePasscodeEntry;
@property(nonatomic) _Bool disableHandwritingKeyboard;
@property(nonatomic) _Bool disableInputBars;
@property(nonatomic) _Bool disablePrediction;
@property(nonatomic) _Bool displaySecureEditsUsingPlainText;
@property(nonatomic) _Bool displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) struct UIEdgeInsets floatingKeyboardEdgeInsets;
@property(nonatomic) _Bool forceDefaultDictationInfo;
@property(nonatomic) long long forceDictationKeyboardType;
@property(nonatomic) _Bool forceDisableDictation;
@property(nonatomic) _Bool forceEnableDictation;
@property(nonatomic) _Bool forceFloatingKeyboard;
@property(nonatomic) _Bool hasDefaultContents;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hidePrediction;
@property(retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned long long insertionPointWidth;
@property(nonatomic) _Bool isCarPlayIdiom;
@property(nonatomic) _Bool isSingleLineDocument;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(nonatomic) _Bool learnsCorrections;
@property(nonatomic) _Bool loadKeyboardsForSiriLanguage;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) _Bool preferOnlineDictation;
@property(nonatomic) long long preferredKeyboardStyle;
@property(copy, nonatomic) NSString *recentInputIdentifier;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) _Bool returnKeyGoesToNextResponder;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIColor *selectionBorderColor;
@property(nonatomic) double selectionBorderWidth;
@property(nonatomic) double selectionCornerRadius;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(nonatomic) struct UIEdgeInsets selectionEdgeInsets;
@property(nonatomic) long long selectionGranularity;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) _Bool showDictationButton;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(retain, nonatomic) _UISupplementalLexicon *supplementalLexicon;
@property(retain, nonatomic) UIImage *supplementalLexiconAmbiguousItemIcon;
@property(readonly, nonatomic) _Bool supportsImagePaste;
@property(nonatomic) _Bool suppressReturnKeyStyling;
@property(copy, nonatomic) NSString *textContentType;
@property(readonly, nonatomic) UIView *textInputView;
@property(nonatomic) int textLoupeVisibility;
@property(readonly, nonatomic) UITextRange *textRangeForServicesInteraction;
@property(nonatomic) long long textScriptType;
@property(nonatomic) int textSelectionBehavior;
@property(nonatomic) id textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property(retain, nonatomic) UIColor *underlineColorForSpelling;
@property(retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property(nonatomic) _Bool useAutomaticEndpointing;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization;
@property(nonatomic) struct _NSRange validTextRange;

@end

