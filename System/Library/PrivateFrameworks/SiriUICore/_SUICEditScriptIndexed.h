//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _SUICAtomIndexed;

@interface _SUICEditScriptIndexed
{
    _SUICAtomIndexed *_currentScriptAtom;	// 48 = 0x30
}

+ (id)editScriptFromArray:(id)arg1 toArray:(id)arg2 orderAtomsAscending:(_Bool)arg3 operationPrecedence:(long long)arg4;	// IMP=0x000000000001e772
+ (id)editScriptFromArray:(id)arg1 toArray:(id)arg2;	// IMP=0x000000000001e756
- (void).cxx_destruct;	// IMP=0x000000000001ee17
- (void)finalizeCurrentScriptAtom;	// IMP=0x000000000001eb92
- (void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;	// IMP=0x000000000001eaf6
- (void)initializeCurrentScriptAtom;	// IMP=0x000000000001ead5
- (id)applyToArray:(id)arg1;	// IMP=0x000000000001e82f
- (id)initWithOperationPrecedence:(long long)arg1 dataClass:(Class)arg2 fromArray:(id)arg3 toArray:(id)arg4 orderAtomsAscending:(_Bool)arg5;	// IMP=0x000000000001e65f

@end

