//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/TIKeyboardCandidateSingle.h>

@class UITextReplacement;

__attribute__((visibility("hidden")))
@interface UITextReplacementCandidate : TIKeyboardCandidateSingle
{
    UITextReplacement *_replacement;	// 8 = 0x8
}

+ (id)textReplacementCandidateForTextReplacement:(id)arg1;	// IMP=0x0000000000387804
- (void).cxx_destruct;	// IMP=0x00000000003878ed
@property(readonly, nonatomic) UITextReplacement *replacement; // @synthesize replacement=_replacement;
- (id)label;	// IMP=0x00000000003878bf
- (id)_initWithTextReplacement:(id)arg1;	// IMP=0x0000000000387851

@end

