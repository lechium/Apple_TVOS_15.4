//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSCFArray
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000006d14a
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006d6d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006d58c
- (unsigned long long)retainCount;	// IMP=0x000000000006d587
- (_Bool)_isDeallocating;	// IMP=0x000000000006d577
- (_Bool)_tryRetain;	// IMP=0x000000000006d566
- (oneway void)release;	// IMP=0x000000000006d561
- (id)retain;	// IMP=0x000000000006d55c
- (id)description;	// IMP=0x000000000006d4a1
- (unsigned long long)hash;	// IMP=0x000000000006d49c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006d444
- (Class)classForCoder;	// IMP=0x000000000006d41e
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006d38e
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x000000000006d2f3
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000006d21e
- (void)removeLastObject;	// IMP=0x000000000006d1cd
- (void)addObject:(id)arg1;	// IMP=0x000000000006d1a1
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000006d14d
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000006d0aa
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x000000000006d00b
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006cf6c
- (unsigned long long)count;	// IMP=0x000000000006cf31

@end

