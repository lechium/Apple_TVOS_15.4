//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface CHSearchQuery
{
    NSArray *_foundItems;	// 8 = 0x8
    NSString *_queryString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a5e40
- (id)debugName;	// IMP=0x00000000000a5e10
@property(copy, nonatomic, setter=_setFoundItems:) NSArray *foundItems; // @synthesize foundItems=_foundItems;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (_Bool)_isMatchStringForToken:(id)arg1 queryString:(id)arg2 fromIndex:(long long)arg3 requirePrefixMatch:(_Bool)arg4 matchedLength:(long long *)arg5;	// IMP=0x00000000000a5600
- (_Bool)_isMatchSeparatorBeforeToken:(id)arg1 atLocation:(CDStruct_2ec95fd7)arg2 inResult:(id)arg3 queryString:(id)arg4 fromIndex:(long long)arg5 matchedLength:(long long *)arg6;	// IMP=0x00000000000a5490
- (_Bool)_findMatchingTokenPathInResult:(id)arg1 initialTokenLocation:(CDStruct_2ec95fd7)arg2 queryString:(id)arg3 fromIndex:(long long)arg4 coveredStrokeIndexes:(id)arg5 reverseMatchedTokens:(id *)arg6;	// IMP=0x00000000000a4ea0
- (void)_enumerateMatchesForStrokeGroupResult:(id)arg1 locales:(id)arg2 queryString:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a4800
- (id)q_foundItemsForSearchString:(id)arg1 sessionResult:(id)arg2;	// IMP=0x00000000000a3fb0
- (void)q_updateQueryResult;	// IMP=0x00000000000a3d30
- (void)stop;	// IMP=0x00000000000a3d10
- (id)initWithRecognitionSession:(id)arg1;	// IMP=0x00000000000a3c10

@end

