//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSFrozenOrderedSetM
{
    _Atomic struct __cow_state_t *cow;	// 8 = 0x8
    CDStruct_2595eaee storage;	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d5997
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00000000000d56b1
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d5b28
- (id)mutableCopy;	// IMP=0x00000000000d5a85
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d5a80
- (id)copy;	// IMP=0x00000000000d5a7b
- (void)dealloc;	// IMP=0x00000000000d599c
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000d58c3
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d589b
- (unsigned long long)countForObject:(id)arg1;	// IMP=0x00000000000d583b
- (_Bool)containsObject:(id)arg1;	// IMP=0x00000000000d57dd
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d5754
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x00000000000d56c4
- (unsigned long long)count;	// IMP=0x00000000000d56b4

@end
