//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextInput-Protocol.h>
#import <UIKitCore/UITextInputTraits-Protocol.h>
#import <UIKitCore/UITextLinkInteraction-Protocol.h>
#import <UIKitCore/WebEditingDelegate-Protocol.h>
#import <UIKitCore/WebPolicyDelegate-Protocol.h>

@class DOMHTMLElement, NSAttributedString, NSDictionary, NSString, UIColor, UIFont, UITextInputPasswordRules, UITextInteractionAssistant, UITextPosition, UITextRange, UIView, UIWebDocumentView, WebFrame;
@protocol UITextContentViewDelegate, UITextInputDelegate, UITextInputTokenizer;

@interface UITextContentView <WebPolicyDelegate, WebEditingDelegate, UITextInput, UITextLinkInteraction, UITextInputTraits>
{
    id m_delegate;	// 112 = 0x70
    WebFrame *m_frame;	// 120 = 0x78
    DOMHTMLElement *m_body;	// 128 = 0x80
    int m_marginTop;	// 136 = 0x88
    struct UIEdgeInsets m_selectionInset;	// 144 = 0x90
    double m_bottomBufferHeight;	// 176 = 0xb0
    _Bool m_editable;	// 184 = 0xb8
    _Bool m_editing;	// 185 = 0xb9
    _Bool m_becomesEditableWithGestures;	// 186 = 0xba
    _Bool m_becomingFirstResponder;	// 187 = 0xbb
    _Bool m_reentrancyGuard;	// 188 = 0xbc
    _Bool m_scrollsSelectionOnWebDocumentChanges;	// 189 = 0xbd
    _Bool m_hasExplicitTextAlignment;	// 190 = 0xbe
    _Bool m_allowsEditingTextAttributes;	// 191 = 0xbf
    _Bool m_usesAttributedText;	// 192 = 0xc0
    UITextInteractionAssistant *m_interactionAssistant;	// 200 = 0xc8
    UIWebDocumentView *m_webView;	// 208 = 0xd0
    UIFont *m_font;	// 216 = 0xd8
    UIColor *m_textColor;	// 224 = 0xe0
    long long m_textAlignment;	// 232 = 0xe8
}

+ (id)excludedElementsForHTML;	// IMP=0x0000000000de549d
- (void).cxx_destruct;	// IMP=0x0000000000de7672
@property(nonatomic) __weak id <UITextContentViewDelegate> delegate; // @synthesize delegate=m_delegate;
@property(nonatomic) _Bool scrollsSelectionOnWebDocumentChanges; // @synthesize scrollsSelectionOnWebDocumentChanges=m_scrollsSelectionOnWebDocumentChanges;
@property(nonatomic) struct UIEdgeInsets selectionInset; // @synthesize selectionInset=m_selectionInset;
- (void)setSelectionGranularity:(long long)arg1;	// IMP=0x0000000000de75ca
- (long long)selectionGranularity;	// IMP=0x0000000000de75ad
@property(nonatomic) long long selectionAffinity;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000de752d
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;	// IMP=0x0000000000de749c
- (id)closestPositionToPoint:(struct CGPoint)arg1;	// IMP=0x0000000000de7456
- (struct CGRect)caretRectForPosition:(id)arg1;	// IMP=0x0000000000de73c1
- (struct CGRect)firstRectForRange:(id)arg1;	// IMP=0x0000000000de732c
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;	// IMP=0x0000000000de730f
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000de72f2
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000de72d5
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;	// IMP=0x0000000000de72b8
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000de7244
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000de7227
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;	// IMP=0x0000000000de720a
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;	// IMP=0x0000000000de71ed
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000de71d0
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;	// IMP=0x0000000000de7179
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000000de715c
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy) UITextRange *selectedTextRange;
- (void)replaceRange:(id)arg1 withText:(id)arg2;	// IMP=0x0000000000de7003
- (id)textInRange:(id)arg1;	// IMP=0x0000000000de6fe6
- (id)metadataDictionariesForDictationResults;	// IMP=0x0000000000de6fc9
- (void)removeTextPlaceholder:(id)arg1;	// IMP=0x0000000000de6f70
- (id)insertTextPlaceholderWithSize:(struct CGSize)arg1;	// IMP=0x0000000000de6f03
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;	// IMP=0x0000000000de6ec5
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;	// IMP=0x0000000000de6ea8
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;	// IMP=0x0000000000de6db6
- (void)insertText:(id)arg1;	// IMP=0x0000000000de6d99
- (void)deleteBackward;	// IMP=0x0000000000de6d7c
- (id)_proxyTextInput;	// IMP=0x0000000000de6ce8
- (struct CGPoint)offset;	// IMP=0x0000000000de6cd2
- (void)setOffset:(struct CGPoint)arg1;	// IMP=0x0000000000de6ccc
- (void)displayScrollerIndicators;	// IMP=0x0000000000de6cc6
- (double)bottomBufferHeight;	// IMP=0x0000000000de6cad
- (void)setBottomBufferHeight:(double)arg1;	// IMP=0x0000000000de6c95
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;	// IMP=0x0000000000de6af3
- (void)keyboardInputChangedSelection:(id)arg1;	// IMP=0x0000000000de6a84
- (_Bool)keyboardInputChanged:(id)arg1;	// IMP=0x0000000000de69e4
- (_Bool)keyboardInputShouldDelete:(id)arg1;	// IMP=0x0000000000de696b
- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;	// IMP=0x0000000000de68d7
- (_Bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x0000000000de6842
- (_Bool)willInteractWithLinkAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000de6825
- (_Bool)isInteractingWithLink;	// IMP=0x0000000000de6808
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000de67eb
- (void)cancelInteractionWithLink;	// IMP=0x0000000000de67ce
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000de67b1
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000de6794
- (void)startInteractionWithLinkAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000de6777
- (void)tapLinkAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000de675a
- (unsigned long long)_allowedLinkTypes;	// IMP=0x0000000000de6732
- (_Bool)mightHaveLinks;	// IMP=0x0000000000de6719
- (void)setDataDetectorTypes:(unsigned long long)arg1;	// IMP=0x0000000000de664f
- (unsigned long long)dataDetectorTypes;	// IMP=0x0000000000de6632
- (void)resetDataDetectorsResultsWithWebLock;	// IMP=0x0000000000de662c
- (void)startDataDetectorsWithWebLock;	// IMP=0x0000000000de6626
- (void)cancelDataDetectorsWithWebLock;	// IMP=0x0000000000de6620
- (_Bool)shouldStartDataDetectors;	// IMP=0x0000000000de65e8
- (void)scrollRangeToVisible:(struct _NSRange)arg1;	// IMP=0x0000000000de64f4
- (void)_didScroll;	// IMP=0x0000000000de64d7
- (id)webView;	// IMP=0x0000000000de64c2
- (struct CGRect)visibleTextRect;	// IMP=0x0000000000de640b
- (struct CGRect)visibleRect;	// IMP=0x0000000000de6248
- (void)setMarginTop:(int)arg1;	// IMP=0x0000000000de6225
- (int)marginTop;	// IMP=0x0000000000de6215
- (void)setBecomesEditableWithGestures:(_Bool)arg1;	// IMP=0x0000000000de6205
- (_Bool)becomesEditableWithGestures;	// IMP=0x0000000000de61f5
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=m_editing;
@property(nonatomic, getter=isEditable) _Bool editable;
@property(nonatomic) struct _NSRange selectedRange;
@property(nonatomic) long long textAlignment;
@property(copy, nonatomic) NSString *text;
@property(readonly, nonatomic) _Bool hasText;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (void)_removeTextViewPropertiesFromText:(id)arg1;	// IMP=0x0000000000de5397
- (void)_removeAttribute:(id)arg1 fromString:(id)arg2 andSetPropertyWith:(SEL)arg3 usingValueClass:(Class)arg4;	// IMP=0x0000000000de52c5
@property(nonatomic) _Bool allowsEditingTextAttributes;
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000de5029
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000de4f77
- (id)textInputTraits;	// IMP=0x0000000000de4f5a
- (id)contentAsAttributedString;	// IMP=0x0000000000de4e62
- (void)setContentToAttributedString:(id)arg1;	// IMP=0x0000000000de4d9c
- (id)contentAsHTMLString;	// IMP=0x0000000000de4d70
- (void)setContentToHTMLString:(id)arg1;	// IMP=0x0000000000de4b88
- (struct CGRect)rectForScrollToVisible;	// IMP=0x0000000000de4ac0
- (void)performScrollSelectionToVisible:(_Bool)arg1;	// IMP=0x0000000000de499f
- (void)scrollSelectionToVisible:(_Bool)arg1;	// IMP=0x0000000000de498d
- (struct CGRect)rectForSelection:(struct _NSRange)arg1;	// IMP=0x0000000000de48b4
- (void)setSelectionToEnd;	// IMP=0x0000000000de47be
- (void)setSelectionToStart;	// IMP=0x0000000000de46c3
- (void)setSelectionWithPoint:(struct CGPoint)arg1;	// IMP=0x0000000000de468d
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000de45f1
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000de4555
- (void)_sizeChanged;	// IMP=0x0000000000de43f3
- (void)performBecomeEditableTasks;	// IMP=0x0000000000de4337
- (void)webViewDidChange:(id)arg1;	// IMP=0x0000000000de4012
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000de3ee7
- (id)documentFragmentForPasteboardItemAtIndex:(long long)arg1;	// IMP=0x0000000000de3e73
- (id)supportedPasteboardTypesForCurrentSelection;	// IMP=0x0000000000de3d1f
- (void)selectAll;	// IMP=0x0000000000de3d02
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000de3c8b
- (void)_showTextStyleOptions:(id)arg1;	// IMP=0x0000000000de3c6e
- (void)toggleUnderline:(id)arg1;	// IMP=0x0000000000de3c51
- (void)toggleItalics:(id)arg1;	// IMP=0x0000000000de3c34
- (void)toggleBoldface:(id)arg1;	// IMP=0x0000000000de3c17
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000de3bfa
- (void)_addShortcut:(id)arg1;	// IMP=0x0000000000de3bdd
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;	// IMP=0x0000000000de3bc0
- (void)_share:(id)arg1;	// IMP=0x0000000000de3ba3
- (void)_translate:(id)arg1;	// IMP=0x0000000000de3b86
- (void)_define:(id)arg1;	// IMP=0x0000000000de3b69
- (void)_transliterateChinese:(id)arg1;	// IMP=0x0000000000de3b2c
- (void)_promptForReplace:(id)arg1;	// IMP=0x0000000000de3aef
- (void)replace:(id)arg1;	// IMP=0x0000000000de3ad2
- (void)decreaseSize:(id)arg1;	// IMP=0x0000000000de3ab2
- (void)increaseSize:(id)arg1;	// IMP=0x0000000000de3a92
- (void)selectAll:(id)arg1;	// IMP=0x0000000000de3a20
- (void)select:(id)arg1;	// IMP=0x0000000000de39e3
- (void)pasteAndMatchStyle:(id)arg1;	// IMP=0x0000000000de3907
- (void)paste:(id)arg1;	// IMP=0x0000000000de382b
- (void)copy:(id)arg1;	// IMP=0x0000000000de374f
- (void)cut:(id)arg1;	// IMP=0x0000000000de3673
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;	// IMP=0x0000000000de3656
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;	// IMP=0x0000000000de3639
- (void)makeTextWritingDirectionNatural:(id)arg1;	// IMP=0x0000000000de361c
- (id)undoManager;	// IMP=0x0000000000de35b2
- (id)undoManagerForWebView:(id)arg1;	// IMP=0x0000000000de35a0
- (void)_hideSelectionCommands;	// IMP=0x0000000000de3536
- (id)fontForCaretSelection;	// IMP=0x0000000000de3519
- (struct _NSRange)selectionRange;	// IMP=0x0000000000de34fc
- (_Bool)hasMarkedText;	// IMP=0x0000000000de34be
- (unsigned long long)offsetInMarkedTextForSelection:(id)arg1;	// IMP=0x0000000000de34a1
- (struct CGRect)closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint)arg1;	// IMP=0x0000000000de3442
- (id)selectedText;	// IMP=0x0000000000de33d8
- (id)selectionRectsForRange:(id)arg1;	// IMP=0x0000000000de308b
- (struct CGRect)caretRectForVisiblePosition:(id)arg1;	// IMP=0x0000000000de3001
- (struct CGRect)_selectionClipRect;	// IMP=0x0000000000de2f8a
- (_Bool)_restoreFirstResponder;	// IMP=0x0000000000de2f02
- (id)interactionAssistant;	// IMP=0x0000000000de2eed
- (id)selectionView;	// IMP=0x0000000000de2e9d
- (void)cancelAutoscroll;	// IMP=0x0000000000de2e80
- (void)startAutoscroll:(struct CGPoint)arg1;	// IMP=0x0000000000de2e63
- (_Bool)hasSelection;	// IMP=0x0000000000de2e46
- (void)endSelectionChange;	// IMP=0x0000000000de2e29
- (void)updateSelection;	// IMP=0x0000000000de2dbf
- (void)beginSelectionChange;	// IMP=0x0000000000de2da2
- (void)_scrollViewDidEndDecelerating;	// IMP=0x0000000000de2d9c
- (void)_scrollViewDidEndDraggingWithDeceleration:(_Bool)arg1;	// IMP=0x0000000000de2d96
- (void)_scrollViewWillBeginDragging;	// IMP=0x0000000000de2d90
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000de2d61
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000de2cf8
- (id)automaticallySelectedOverlay;	// IMP=0x0000000000de2cb3
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;	// IMP=0x0000000000de2be7
- (void)ensureSelection;	// IMP=0x0000000000de2b72
- (_Bool)isFirstResponder;	// IMP=0x0000000000de2b1e
- (_Bool)canResignFirstResponder;	// IMP=0x0000000000de2aae
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000000de2a3e
- (_Bool)resignFirstResponder;	// IMP=0x0000000000de28eb
- (_Bool)becomeFirstResponder;	// IMP=0x0000000000de2543
- (id)_keyboardResponder;	// IMP=0x0000000000de252e
- (void)setSelectionChangeCallbacksDisabled:(_Bool)arg1;	// IMP=0x0000000000de249a
- (void)didMoveToSuperview;	// IMP=0x0000000000de2413
- (void)recalculateStyle;	// IMP=0x0000000000de2397
- (id)styleString;	// IMP=0x0000000000de21e7
- (void)keyboardDidShow:(id)arg1;	// IMP=0x0000000000de213d
- (void)removeFromSuperview;	// IMP=0x0000000000de20bb
- (void)dealloc;	// IMP=0x0000000000de1fc4
- (void)commonInitWithWebDocumentView:(id)arg1 isDecoding:(_Bool)arg2;	// IMP=0x0000000000de1a15
- (void)updateContentEditableAttribute:(_Bool)arg1;	// IMP=0x0000000000de197f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000de178b
- (void)_populateArchivedSubviews:(id)arg1;	// IMP=0x0000000000de171e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000de14d1
- (id)initWithFrame:(struct CGRect)arg1 webView:(id)arg2;	// IMP=0x0000000000de1456
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000de13f5

// Remaining properties
@property(nonatomic) long long autocapitalizationType; // @dynamic autocapitalizationType;
@property(nonatomic) long long autocorrectionType; // @dynamic autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance; // @dynamic keyboardAppearance;
@property(nonatomic) long long keyboardType; // @dynamic keyboardType;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType; // @dynamic returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @dynamic secureTextEntry;
@property(nonatomic) long long smartDashesType; // @dynamic smartDashesType;
@property(nonatomic) long long smartInsertDeleteType; // @dynamic smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType; // @dynamic smartQuotesType;
@property(nonatomic) long long spellCheckingType; // @dynamic spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType; // @dynamic textContentType;
@property(readonly, nonatomic) UIView *textInputView;

@end

