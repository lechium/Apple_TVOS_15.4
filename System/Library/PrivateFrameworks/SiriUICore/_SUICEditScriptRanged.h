//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _SUICAtomRanged;

@interface _SUICEditScriptRanged
{
    long long _options;	// 48 = 0x30
    _SUICAtomRanged *_currentScriptAtom;	// 56 = 0x38
}

+ (id)editScriptForSmallestSingleEditFromString:(id)arg1 toString:(id)arg2 chunkSize:(long long)arg3;	// IMP=0x000000000001c53e
+ (id)editScriptForSmallestSingleEditFromString:(id)arg1 toString:(id)arg2;	// IMP=0x000000000001c529
+ (id)editScriptFromString:(id)arg1 toString:(id)arg2 chunkSize:(long long)arg3 orderAtomsAscending:(_Bool)arg4 operationPrecedence:(long long)arg5 options:(long long)arg6;	// IMP=0x000000000001ba40
+ (id)editScriptFromString:(id)arg1 toString:(id)arg2;	// IMP=0x000000000001ba1f
- (void).cxx_destruct;	// IMP=0x000000000001c5f4
- (void)computeSmallestSingleEdit;	// IMP=0x000000000001c333
- (void)removeAnyOverlapBetweenIndexOfFirstDifference:(long long *)arg1 andReverseIndexOfLastDifference:(long long *)arg2 shouldShortenFirstDifference:(_Bool)arg3;	// IMP=0x000000000001c2a0
- (void)finalizeCurrentScriptAtom;	// IMP=0x000000000001c007
- (void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;	// IMP=0x000000000001be2a
- (void)initializeCurrentScriptAtom;	// IMP=0x000000000001be09
- (id)applyToString:(id)arg1;	// IMP=0x000000000001bbed
@property(readonly, nonatomic) __weak NSString *stringB;
@property(readonly, nonatomic) __weak NSString *stringA;
- (id)initWithOperationPrecedence:(long long)arg1 dataClass:(Class)arg2 chunkSize:(long long)arg3 stringA:(id)arg4 stringB:(id)arg5 orderAtomsAscending:(_Bool)arg6 options:(long long)arg7;	// IMP=0x000000000001b8c5

@end
