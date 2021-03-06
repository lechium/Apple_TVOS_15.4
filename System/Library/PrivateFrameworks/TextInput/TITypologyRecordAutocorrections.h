//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TIAutocorrectionList, TICandidateRequestToken, TIKeyboardState;

@interface TITypologyRecordAutocorrections
{
    _Bool _listUIDisplayed;	// 24 = 0x18
    TIKeyboardState *_keyboardState;	// 32 = 0x20
    TICandidateRequestToken *_requestToken;	// 40 = 0x28
    TIAutocorrectionList *_autocorrections;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000005821
- (void).cxx_destruct;	// IMP=0x00000000000057df
@property(nonatomic) _Bool listUIDisplayed; // @synthesize listUIDisplayed=_listUIDisplayed;
@property(retain, nonatomic) TIAutocorrectionList *autocorrections; // @synthesize autocorrections=_autocorrections;
@property(retain, nonatomic) TICandidateRequestToken *requestToken; // @synthesize requestToken=_requestToken;
@property(retain, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
- (void)replaceDocumentState:(id)arg1;	// IMP=0x00000000000056de
- (id)shortDescription;	// IMP=0x0000000000005220
- (void)removeContextFromKeyboardState;	// IMP=0x00000000000051a1
- (id)currentKeyboardState;	// IMP=0x000000000000518f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000050d5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004fad
- (void)applyToStatistic:(id)arg1;	// IMP=0x000000000003b1c8

@end

