//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/TIKeyboardCandidate.h>

@class UITextSuggestion;

@interface TIKeyboardCandidateSuggestion : TIKeyboardCandidate
{
    unsigned long long _customInfoType;	// 8 = 0x8
    UITextSuggestion *_textSuggestion;	// 16 = 0x10
}

+ (id)candidateWithSuggestion:(id)arg1 customInfoType:(unsigned long long)arg2;	// IMP=0x0000000000a433f3
+ (id)candidateWithSuggestion:(id)arg1;	// IMP=0x0000000000a433a8
- (void).cxx_destruct;	// IMP=0x0000000000a435f8
@property(readonly, nonatomic) UITextSuggestion *textSuggestion; // @synthesize textSuggestion=_textSuggestion;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a4353f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a434cb
- (id)initWithSuggestion:(id)arg1 customInfoType:(unsigned long long)arg2;	// IMP=0x0000000000a4344b
- (unsigned long long)customInfoType;	// IMP=0x0000000000a43397
- (id)label;	// IMP=0x0000000000a4337a
- (id)input;	// IMP=0x0000000000a4335d
- (id)candidate;	// IMP=0x0000000000a43340

@end

