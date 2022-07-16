//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSMutableIndexSet
{
    void *_reserved;	// 32 = 0x20
}

- (void)shiftIndexesStartingAtIndex:(unsigned long long)arg1 by:(long long)arg2;	// IMP=0x0000000000088fee
- (void)_removeAndDecrementBy:(unsigned long long)arg1 startingAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000088e28
- (void)_incrementBy:(unsigned long long)arg1 startingAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000088bf8
- (void)removeAllIndexes;	// IMP=0x0000000000088bc7
- (void)removeIndex:(unsigned long long)arg1;	// IMP=0x0000000000088bb0
- (void)removeIndexesInRange:(struct _NSRange)arg1;	// IMP=0x0000000000088a26
- (void)addIndex:(unsigned long long)arg1;	// IMP=0x0000000000088a0f
- (void)addIndexesInRange:(struct _NSRange)arg1;	// IMP=0x00000000000887fe
- (void)_mergeOverlappingRangesStartingAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000088707
- (void)removeIndexesPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00000000000886f0
- (void)removeIndexesInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x00000000000885af
- (void)removeIndexesWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0000000000088479
- (void)removeIndexesFromIndexSet:(id)arg1;	// IMP=0x0000000000088467
- (void)removeIndexes:(id)arg1;	// IMP=0x0000000000088302
- (void)addIndexes:(const unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000881c8
- (void)addIndexesFromIndexSet:(id)arg1;	// IMP=0x00000000000881b6
- (void)addIndexes:(id)arg1;	// IMP=0x0000000000088038
- (void)_replaceRangeInArrayAtIndex:(unsigned long long)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000087f48
- (void)_removeRangeInArrayAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000087e1b
- (void)_insertRange:(struct _NSRange)arg1 inArrayAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000087bc3
- (void)_addRangeToArray:(struct _NSRange)arg1;	// IMP=0x0000000000087b7e
- (void)_ensureRangeCapacity:(unsigned long long)arg1;	// IMP=0x00000000000879b6
- (Class)classForCoder;	// IMP=0x00000000000879a9

@end
