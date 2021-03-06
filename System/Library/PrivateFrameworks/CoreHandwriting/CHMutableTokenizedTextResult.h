//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CHMutableTokenizedTextResult
{
}

+ (id)refineAlternativeTokens:(id)arg1 historyTokenIDs:(id)arg2 languageModel:(void *)arg3;	// IMP=0x00000000000c3940
@property(nonatomic) long long changeableTokenColumnCount; // @dynamic changeableTokenColumnCount;
@property(nonatomic) long long precedingLineBreaks; // @dynamic precedingLineBreaks;
- (void)filterCandidatesWithOutOfPattern:(_Bool)arg1 duplicateTokenIDs:(_Bool)arg2 keepOutOfLexiconAlternatives:(_Bool)arg3 keepAlternativeLengths:(_Bool)arg4 keepSubstrings:(_Bool)arg5 shouldKeepOriginalSpelling:(_Bool)arg6;	// IMP=0x00000000000c2720
- (void)trimTokensToTranscriptionPathCount:(long long)arg1;	// IMP=0x00000000000c05e0
- (void)adjustColumns;	// IMP=0x00000000000bed90
- (id)_columnStrokeSetsFromTokenRows:(id)arg1;	// IMP=0x00000000000bea40
- (id)commonStrokeSetsFromSets:(id)arg1 tokenRow:(id)arg2;	// IMP=0x00000000000be540
- (void)appendTokenColumns:(id)arg1;	// IMP=0x00000000000be480
- (void)setTranscriptionPaths:(id)arg1 scores:(id)arg2;	// IMP=0x00000000000be2f0
@property(copy, nonatomic) NSArray *tokenColumns; // @dynamic tokenColumns;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000be120

@end

