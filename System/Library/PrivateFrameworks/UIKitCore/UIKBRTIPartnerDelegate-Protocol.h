//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIKeyboardImplStateProtocol-Protocol.h>

@class NSAttributedString, NSDictionary, NSString, RTIInputSystemSourceSession, TIDocumentState, TIKeyboardIntermediateText, TIKeyboardOutput, UIResponder, UITextInputTraits;
@protocol UITextInput, UIWKInteractionViewProtocol;

@protocol UIKBRTIPartnerDelegate <UIKeyboardImplStateProtocol>
@property(readonly, nonatomic) _Bool needAutofillLogin;
- (void)provideAutoFillTypingUpdatesIfNecessary;
- (void)performTextOperationActionSelector:(SEL)arg1;
- (void)performKeyboardOutput:(TIKeyboardOutput *)arg1 checkingDelegate:(_Bool)arg2 forwardToRemoteInputSource:(_Bool)arg3;
- (void)setAttributedMarkedText:(NSAttributedString *)arg1 selectedRange:(struct _NSRange)arg2 inputString:(NSString *)arg3 searchString:(NSString *)arg4;
- (void)insertAttributedText:(NSAttributedString *)arg1;
- (void)assertTextForRemoteDocument:(NSString *)arg1 withSelectionRange:(struct _NSRange)arg2 updatingSelection:(_Bool)arg3;
- (void)assertIntermediateText:(TIKeyboardIntermediateText *)arg1;
- (void)updateInputDelegateForRemoteDocumentStateChange:(TIDocumentState *)arg1 selectedTextRange:(struct _NSRange)arg2 forceSync:(_Bool)arg3;
- (void)updateInputDelegateForRemoteTraitChange:(UITextInputTraits *)arg1 forceSync:(_Bool)arg2;
- (UITextInputTraits *)textInputTraits;
- (RTIInputSystemSourceSession *)inputSystemSourceSession;
- (void)textDidChange:(id <UITextInput>)arg1;
- (void)textWillChange:(id <UITextInput>)arg1;
- (void)setCaretVisible:(_Bool)arg1;
- (struct CGRect)correctionRect;
- (void)resetInputDelegate;
- (UIResponder<UIWKInteractionViewProtocol> *)asynchronousInputDelegate;
- (UIResponder<UITextInput> *)inputDelegate;
- (NSDictionary *)remoteTextEditingMetadata;
@end

