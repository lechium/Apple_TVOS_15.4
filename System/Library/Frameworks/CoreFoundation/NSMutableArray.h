//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSMutableArray
{
}

+ (id)arrayWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000001218d2
- (id)arrayByAddingObjectsFromArray:(id)arg1;	// IMP=0x00000000001216d3
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000121648
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000197752
- (void)sortUsingSelector:(SEL)arg1;	// IMP=0x000000000012156d
- (void)sortUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000000012139e
- (void)sortUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;	// IMP=0x0000000000121273
- (void)sortUsingComparator:(CDUnknownBlockType)arg1;	// IMP=0x00000000001211f1
- (void)sortWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x000000000012115d
- (void)sortRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;	// IMP=0x0000000000120e13
- (void)setSet:(id)arg1;	// IMP=0x0000000000120c5f
- (void)setOrderedSet:(id)arg1;	// IMP=0x0000000000120aa9
- (id)sortedArrayFromRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;	// IMP=0x0000000000120a3f
- (void)setArray:(id)arg1;	// IMP=0x0000000000120875
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;	// IMP=0x0000000000120811
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000012071f
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromSet:(id)arg2;	// IMP=0x00000000001204f3
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromOrderedSet:(id)arg2;	// IMP=0x00000000001202c5
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromOrderedSet:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000000012001d
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromArray:(id)arg2;	// IMP=0x000000000011fdef
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromArray:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000000011fb47
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x000000000011f841
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjects:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000011f645
- (void)replaceObject:(id)arg1;	// IMP=0x000000000011f551
- (void)replaceObject:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000011f3d8
- (void)removeObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000011f3b7
- (void)removeObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000011f2b1
- (void)removeObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x000000000011f17c
- (void)removeObjectsInSet:(id)arg1;	// IMP=0x000000000011f0f0
- (void)removeObjectsInRange:(struct _NSRange)arg1 inSet:(id)arg2;	// IMP=0x000000000011ef93
- (void)removeObjectsInOrderedSet:(id)arg1;	// IMP=0x000000000011eeac
- (void)removeObjectsInOrderedSet:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000011ed65
- (void)removeObjectsInRange:(struct _NSRange)arg1 inOrderedSet:(id)arg2;	// IMP=0x000000000011ec0c
- (void)removeObjectsInRange:(struct _NSRange)arg1 inOrderedSet:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000000011ea1f
- (void)removeObjectsInArray:(id)arg1;	// IMP=0x000000000011e938
- (void)removeObjectsInArray:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000011e7f1
- (void)removeObjectsInRange:(struct _NSRange)arg1 inArray:(id)arg2;	// IMP=0x000000000011e698
- (void)removeObjectsInRange:(struct _NSRange)arg1 inArray:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000000011e48b
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x000000000011e310
- (void)removeObjectIdenticalTo:(id)arg1;	// IMP=0x000000000011e250
- (void)removeObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000011e105
- (void)removeObject:(id)arg1;	// IMP=0x000000000011e022
- (void)removeObject:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000011deb4
- (void)removeObjectsInRange:(struct _NSRange)arg1;	// IMP=0x000000000011ddcb
- (void)removeLastObject;	// IMP=0x000000000011dd30
- (void)removeFirstObject;	// IMP=0x000000000011dcc2
- (void)removeAllObjects;	// IMP=0x000000000011dc3f
- (void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x000000000011d950
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x000000000011d64d
- (void)insertObjectsFromSet:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000011d43c
- (void)insertObjectsFromOrderedSet:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000011d229
- (void)insertObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000011cf96
- (void)insertObjectsFromArray:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000011cd83
- (void)insertObjectsFromArray:(id)arg1 range:(struct _NSRange)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000011caf0
- (void)insertObjects:(const id *)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000011c9b7
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;	// IMP=0x000000000011c80b
- (void)addObjectsFromSet:(id)arg1;	// IMP=0x000000000011c781
- (void)addObjectsFromOrderedSet:(id)arg1;	// IMP=0x000000000011c6db
- (void)addObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000011c5c8
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x000000000011c39e
- (void)addObjectsFromArray:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000011c28b
- (void)addObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000011c1d4
- (void)addObject:(id)arg1;	// IMP=0x000000000011c156
- (void)_mutate;	// IMP=0x000000000011c155
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x0000000000197727
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001976fc
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001976d1

@end

