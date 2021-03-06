//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@class NSArray, TIKeyboardCandidate;

@interface TIAutocorrectionList : NSObject <NSSecureCoding>
{
    _Bool _containsProactiveTriggers;	// 8 = 0x8
    _Bool _proactiveSuggestionsEmpty;	// 9 = 0x9
    TIKeyboardCandidate *_autocorrection;	// 16 = 0x10
    NSArray *_predictions;	// 24 = 0x18
    NSArray *_emojiList;	// 32 = 0x20
    NSArray *_proactiveTriggers;	// 40 = 0x28
}

+ (id)autocorrectionListWithCandidates:(id)arg1 shouldAcceptTopCandidate:(_Bool)arg2;	// IMP=0x0000000000011c53
+ (id)listWithPredictions:(id)arg1 emojiList:(id)arg2 proactiveTriggers:(id)arg3;	// IMP=0x0000000000011bc6
+ (id)listWithPredictions:(id)arg1 proactiveTriggers:(id)arg2;	// IMP=0x0000000000011b53
+ (id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4;	// IMP=0x0000000000011aa9
+ (id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3;	// IMP=0x0000000000011a1b
+ (id)listWithAutocorrection:(id)arg1 predictions:(id)arg2;	// IMP=0x00000000000119a7
+ (id)listWithAutocorrection:(id)arg1;	// IMP=0x0000000000011956
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001194e
- (void).cxx_destruct;	// IMP=0x00000000000118fb
@property(nonatomic) _Bool proactiveSuggestionsEmpty; // @synthesize proactiveSuggestionsEmpty=_proactiveSuggestionsEmpty;
@property(nonatomic) _Bool containsProactiveTriggers; // @synthesize containsProactiveTriggers=_containsProactiveTriggers;
@property(readonly, nonatomic) NSArray *proactiveTriggers; // @synthesize proactiveTriggers=_proactiveTriggers;
@property(readonly, nonatomic) NSArray *emojiList; // @synthesize emojiList=_emojiList;
@property(readonly, nonatomic) NSArray *predictions; // @synthesize predictions=_predictions;
@property(readonly, nonatomic) TIKeyboardCandidate *autocorrection; // @synthesize autocorrection=_autocorrection;
@property(readonly, nonatomic) NSArray *predictionsIfSupplemental;
@property(readonly, nonatomic) TIKeyboardCandidate *autocorrectionIfSupplemental;
@property(readonly, nonatomic) _Bool hasSupplementalCandidates;
- (_Bool)hasSupplementalItems;	// IMP=0x00000000000116a8
@property(readonly, nonatomic) _Bool shouldAcceptTopCandidate;
@property(readonly, nonatomic) NSArray *candidates;
@property(readonly, nonatomic) _Bool empty;
- (id)description;	// IMP=0x0000000000011473
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000113b2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000111a5
- (id)initWithCandidates:(id)arg1 shouldAcceptTopCandidate:(_Bool)arg2;	// IMP=0x00000000000110bf
- (id)initWithCandidates:(id)arg1;	// IMP=0x000000000001105e
- (id)initWithAutocorrectionAlternativeProactiveTrigger:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4;	// IMP=0x0000000000010f52
- (id)initWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4;	// IMP=0x0000000000010e46

@end

