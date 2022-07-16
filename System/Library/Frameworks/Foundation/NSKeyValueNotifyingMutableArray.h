//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableArray
{
    NSMutableArray *_mutableArray;	// 24 = 0x18
}

+ (id)_proxyShare;	// IMP=0x000000000009fe0e
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x00000000000a0488
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000000a03c9
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x00000000000a0344
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a0292
- (void)removeLastObject;	// IMP=0x00000000000a01d4
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000000a0145
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000a0086
- (void)addObject:(id)arg1;	// IMP=0x000000000009ffc1
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x000000000009ffa4
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000009ff87
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000009ff6a
- (unsigned long long)count;	// IMP=0x000000000009ff4d
- (void)_proxyNonGCFinalize;	// IMP=0x000000000009fedc
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x000000000009fe35

@end

