//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputChinese/TIKeyboardInputManagerChineseCompletion-Protocol.h>

@class TIKeyboardCandidate;

@interface TIKeyboardInputManagerWubixing <TIKeyboardInputManagerChineseCompletion>
{
    TIKeyboardCandidate *_autoConfirmationCandidate;	// 80 = 0x50
}

+ (Class)wordSearchClass;	// IMP=0x000000000001aded
- (void).cxx_destruct;	// IMP=0x000000000001ad27
@property(retain, nonatomic) TIKeyboardCandidate *autoConfirmationCandidate; // @synthesize autoConfirmationCandidate=_autoConfirmationCandidate;
- (_Bool)isValidWubiInput:(id)arg1;	// IMP=0x000000000001ac20
- (void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2;	// IMP=0x000000000001aa8f
- (unsigned int)inputIndex;	// IMP=0x000000000001aa4b
- (void)updateMarkedText;	// IMP=0x000000000001a9f2
- (void)addInput:(id)arg1 withContext:(id)arg2;	// IMP=0x000000000001a735
- (_Bool)acceptAutocorrectionCommitsInline;	// IMP=0x000000000001a72d
- (id)sortingMethods;	// IMP=0x000000000001a6dd
- (int)inputMethodType;	// IMP=0x000000000001a6d2
- (_Bool)supportsNumberKeySelection;	// IMP=0x000000000001a68a
- (unsigned long long)initialSelectedIndex;	// IMP=0x000000000001a5fa
- (id)keyboardBehaviors;	// IMP=0x000000000001a5e1
- (_Bool)usesPunctuationKeysForRowNavigation;	// IMP=0x000000000001a5d9

@end

