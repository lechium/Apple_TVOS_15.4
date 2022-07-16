//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSMutableSet
{
}

+ (id)setWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000000ac5c
- (id)setByAddingObjectsFromSet:(id)arg1;	// IMP=0x000000000000a932
- (id)setByAddingObjectsFromArray:(id)arg1;	// IMP=0x000000000000a780
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000000a6b8
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000018f6cf
- (void)unionSet:(id)arg1;	// IMP=0x000000000000a33b
- (void)unionOrderedSet:(id)arg1;	// IMP=0x000000000000a17a
- (void)setSet:(id)arg1;	// IMP=0x0000000000009e1a
- (void)setOrderedSet:(id)arg1;	// IMP=0x0000000000009c4f
- (void)setArray:(id)arg1;	// IMP=0x0000000000009ae9
- (void)setObject:(id)arg1;	// IMP=0x0000000000009a55
- (void)replaceObject:(id)arg1;	// IMP=0x00000000000099af
- (void)removeObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000000998e
- (void)removeObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00000000000096ff
- (void)removeObjectsInSet:(id)arg1;	// IMP=0x00000000000093f7
- (void)removeObjectsInOrderedSet:(id)arg1;	// IMP=0x00000000000092a4
- (void)removeObjectsInOrderedSet:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000009161
- (void)removeObjectsInArray:(id)arg1;	// IMP=0x000000000000900e
- (void)removeObjectsInArray:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000008ecb
- (void)removeAllObjects;	// IMP=0x0000000000008cfe
- (void)minusSet:(id)arg1;	// IMP=0x0000000000008998
- (void)minusOrderedSet:(id)arg1;	// IMP=0x00000000000087d7
- (void)intersectSet:(id)arg1;	// IMP=0x000000000000824c
- (void)intersectOrderedSet:(id)arg1;	// IMP=0x0000000000007e76
- (void)addObjectsFromSet:(id)arg1;	// IMP=0x0000000000007baa
- (void)addObjectsFromOrderedSet:(id)arg1;	// IMP=0x0000000000007a57
- (void)addObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000000783f
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x000000000000764d
- (void)addObjectsFromArray:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000007435
- (void)addObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000007377
- (void)_mutate;	// IMP=0x0000000000007376
- (void)removeObject:(id)arg1;	// IMP=0x000000000018f6a4
- (void)addObject:(id)arg1;	// IMP=0x000000000018f679

@end

