//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/TIAutocorrectionList.h>

@interface TIAutocorrectionList (UIKitSupplementalItemExtras)
- (id)ui_allSupplementalCandidates;	// IMP=0x00000000000feaee
@property(readonly, nonatomic) _Bool notEmpty;
@property(readonly, nonatomic) _Bool containsContinuousPathConversions;
@property(readonly, nonatomic) _Bool containsAutofillCandidates;
@property(readonly, nonatomic) _Bool isShowingSuggestionForKeyboardCamera;
- (long long)sourceForAutocorrection;	// IMP=0x00000000007ca0c0
- (void)updateLabelsWithSmartPunctuation:(id)arg1;	// IMP=0x00000000007c9dfa
@end
