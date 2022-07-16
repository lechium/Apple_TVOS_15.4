//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _EditScriptIndexedAtom;

__attribute__((visibility("hidden")))
@interface _EditScriptIndexed
{
    _EditScriptIndexedAtom *_currentScriptAtom;	// 48 = 0x30
}

+ (id)editScriptFromArray:(id)arg1 toArray:(id)arg2 orderAtomsAscending:(_Bool)arg3 operationPrecedence:(long long)arg4;	// IMP=0x0000000000912e7c
+ (id)editScriptFromArray:(id)arg1 toArray:(id)arg2;	// IMP=0x0000000000912e60
- (void)finalizeCurrentScriptAtom;	// IMP=0x00000000009132b2
- (void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;	// IMP=0x00000000009131e4
- (void)initializeCurrentScriptAtom;	// IMP=0x00000000009131cf
- (id)applyToArray:(id)arg1;	// IMP=0x0000000000912f0c
- (id)initWithOperationPrecedence:(long long)arg1 dataClass:(Class)arg2 fromArray:(id)arg3 toArray:(id)arg4 orderAtomsAscending:(_Bool)arg5;	// IMP=0x0000000000912dc3
- (void)dealloc;	// IMP=0x0000000000912d81

@end
