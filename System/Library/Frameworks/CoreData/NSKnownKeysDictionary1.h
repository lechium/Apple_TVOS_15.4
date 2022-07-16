//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKnownKeysMappingStrategy;

__attribute__((visibility("hidden")))
@interface NSKnownKeysDictionary1
{
    int _cd_rc;	// 8 = 0x8
    int _count;	// 12 = 0xc
    NSKnownKeysMappingStrategy *_keySearch;	// 16 = 0x10
    id _values[0];	// 24 = 0x18
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x000000000009cf9c
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x000000000009ce28
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x000000000009ce20
+ (id)initWithDictionary:(id)arg1;	// IMP=0x000000000009ce0c
+ (id)initWithDictionary:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x000000000009cb78
+ (id)initWithObjects:(id *)arg1 forKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000009cad6
+ (id)initForKeys:(id)arg1;	// IMP=0x000000000009ca76
+ (id)initWithSearchStrategy:(id)arg1;	// IMP=0x000000000009ca0b
+ (id)initWithCoder:(id)arg1;	// IMP=0x000000000009c78c
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009c783
+ (id)alloc;	// IMP=0x000000000009c77a
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009c772
- (void)removeAllObjects;	// IMP=0x000000000009e004
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000009dd5b
- (id)objectEnumerator;	// IMP=0x000000000009dce0
- (_Bool)isEqualToDictionary:(id)arg1;	// IMP=0x000000000009dca9
- (void)getObjects:(id *)arg1;	// IMP=0x000000000009dc57
- (void)getKeys:(id *)arg1;	// IMP=0x000000000009dbdd
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;	// IMP=0x000000000009db18
- (id)allValues;	// IMP=0x000000000009da7c
- (id)allKeys;	// IMP=0x000000000009d9da
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000009d86c
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000009d7e0
- (id)objectForKey:(id)arg1;	// IMP=0x000000000009d79f
- (unsigned long long)_valueCountByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000009d789
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000009d770
- (id)keyEnumerator;	// IMP=0x000000000009d476
- (unsigned long long)count;	// IMP=0x000000000009d44d
- (void)setValues:(id *)arg1;	// IMP=0x000000000009d436
- (void)_setValues:(id *)arg1 retain:(_Bool)arg2;	// IMP=0x000000000009d37b
- (void)setValue:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000009d2c3
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000009d2b2
- (const id *)knownKeyValuesPointer;	// IMP=0x000000000009d2a2
- (const id *)values;	// IMP=0x000000000009d292
- (id)mapping;	// IMP=0x000000000009d281
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009d210
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009d16b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009cfad
- (Class)classForCoder;	// IMP=0x000000000009cf8b
- (void)dealloc;	// IMP=0x000000000009cf08
- (_Bool)_isDeallocating;	// IMP=0x000000000009cee5
- (_Bool)_tryRetain;	// IMP=0x000000000009cea7
- (unsigned long long)retainCount;	// IMP=0x000000000009ce8f
- (oneway void)release;	// IMP=0x000000000009ce51
- (id)retain;	// IMP=0x000000000009ce30

@end

