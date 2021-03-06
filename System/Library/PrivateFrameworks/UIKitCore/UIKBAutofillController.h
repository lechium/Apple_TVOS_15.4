//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UIColor;

__attribute__((visibility("hidden")))
@interface UIKBAutofillController : NSObject
{
    long long _delegateNeedsAutofillMode;	// 8 = 0x8
    _Bool _shouldSaveAutofill;	// 16 = 0x10
    NSMutableDictionary *_autofillGroup;	// 24 = 0x18
    NSMutableDictionary *_fallbackAutofillGroup;	// 32 = 0x20
    _Bool _didOptOutOfAutofillSignup;	// 40 = 0x28
    UIColor *_textFieldOrigColor;	// 48 = 0x30
}

+ (unsigned long long)translateToTextInputAutofillMode:(long long)arg1;	// IMP=0x0000000000a445ce
- (void).cxx_destruct;	// IMP=0x0000000000a4ab77
@property(nonatomic) _Bool shouldSaveAutofill; // @synthesize shouldSaveAutofill=_shouldSaveAutofill;
@property(copy, nonatomic) UIColor *textFieldOrigColor; // @synthesize textFieldOrigColor=_textFieldOrigColor;
@property(copy, nonatomic) NSMutableDictionary *fallbackAutofillGroup; // @synthesize fallbackAutofillGroup=_fallbackAutofillGroup;
@property(readonly, retain, nonatomic) NSMutableDictionary *autofillGroup; // @synthesize autofillGroup=_autofillGroup;
@property(nonatomic) long long delegateNeedsAutofillMode; // @synthesize delegateNeedsAutofillMode=_delegateNeedsAutofillMode;
- (void)removeTemporaryTextColorFromTextField:(id)arg1;	// IMP=0x0000000000a4aa0a
- (void)addTemporaryTextColorToTextField:(id)arg1;	// IMP=0x0000000000a4a8a0
- (void)enumeratePasswordFieldsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a4a77f
- (void)optOutASPInTextField;	// IMP=0x0000000000a4a6f5
- (void)clearASPInPasswordFields;	// IMP=0x0000000000a4a5e3
- (void)_clearASPInTextField:(id)arg1;	// IMP=0x0000000000a4a539
- (void)clearASPVisualEffectsInTextField:(id)arg1;	// IMP=0x0000000000a4a4a9
- (void)showASPInTextField:(id)arg1 isRightToLeft:(_Bool)arg2;	// IMP=0x0000000000a4a092
- (void)didOptOutOfAutofillSignup;	// IMP=0x0000000000a4a088
- (_Bool)shouldLoadASPForResponder:(id)arg1;	// IMP=0x0000000000a49f42
- (void)trackResponderForAutofillIfNeeded:(id)arg1;	// IMP=0x0000000000a49cfe
- (void)handleWebviewCredentialsSaveForResponder:(id)arg1 WebsiteURL:(id)arg2 user:(id)arg3 password:(id)arg4 passwordIsAutoGenerated:(_Bool)arg5;	// IMP=0x0000000000a49cf8
- (void)handleAutofillCredentialSaveIfNeeded:(id)arg1 fromASP:(_Bool)arg2;	// IMP=0x0000000000a49cf2
- (_Bool)preferFallbackAutofillGroup;	// IMP=0x0000000000a49bee
- (_Bool)containsUsernamePasswordPairsInAutofillGroup:(id)arg1;	// IMP=0x0000000000a49b19
- (void)clearFallbackAutofillGroup;	// IMP=0x0000000000a49af6
- (void)clearAutofillGroup;	// IMP=0x0000000000a49aa7
- (long long)_needAutofillCandidate:(id)arg1 delegateAsResponder:(id)arg2;	// IMP=0x0000000000a477fc
- (_Bool)signupHintForUsername:(id)arg1 password:(id)arg2 responder:(id)arg3;	// IMP=0x0000000000a470a4
- (long long)contactAutofillModeWithAutofillGroup:(id)arg1 responders:(id)arg2;	// IMP=0x0000000000a46a45
- (long long)signUpSignalFromNavBarItem:(id)arg1;	// IMP=0x0000000000a4679f
- (long long)signUpSignalFromViewControllerHierarchy:(id)arg1;	// IMP=0x0000000000a46511
- (long long)signUpSignalFromButton:(id)arg1;	// IMP=0x0000000000a460c4
- (long long)containsIndicationInText:(id)arg1 withAccessibilityHints:(_Bool)arg2;	// IMP=0x0000000000a45da6
- (id)textSignalsForResponder:(id)arg1;	// IMP=0x0000000000a45ad5
- (id)processLocalizedString:(id)arg1;	// IMP=0x0000000000a4584b
- (id)emailKeywordSet;	// IMP=0x0000000000a45738
- (id)phoneKeywordSet;	// IMP=0x0000000000a45625
- (id)addressKeywordSet;	// IMP=0x0000000000a45512
- (id)searchKeywordSet;	// IMP=0x0000000000a453ff
- (id)contactAutoFillKeywordsForKey:(id)arg1 value:(id)arg2 localizedKeywords:(id)arg3;	// IMP=0x0000000000a4529f
- (id)accessibilityLoginKeywordList;	// IMP=0x0000000000a4524f
- (id)accessibilitySignupKeywordList;	// IMP=0x0000000000a451ff
- (id)loginKeywordList;	// IMP=0x0000000000a451af
- (id)signupKeywordList;	// IMP=0x0000000000a4515f
- (_Bool)_prohibitAutofill:(id)arg1 needASPKeyboard:(_Bool)arg2;	// IMP=0x0000000000a44f52
- (long long)needAutofillCandidate:(id)arg1 delegateAsResponder:(id)arg2 keyboardState:(id)arg3;	// IMP=0x0000000000a44b6d
- (void)updateAutofillContextForInputDelegate:(id)arg1;	// IMP=0x0000000000a44a42
- (id)autofillContextForInputDelegate:(id)arg1;	// IMP=0x0000000000a449c3
- (long long)doTraits:(id)arg1 matchTextContentType:(id)arg2;	// IMP=0x0000000000a445ed
- (id)init;	// IMP=0x0000000000a44546
- (void)_setAutofillGroup:(id)arg1;	// IMP=0x0000000000a4abaa

@end

