//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSKnownKeysMappingStrategy1
{
    int _cd_rc;	// 8 = 0x8
    int _reserved64;	// 12 = 0xc
    void *_table;	// 16 = 0x10
    unsigned long long _length;	// 24 = 0x18
    id _reserved1;	// 32 = 0x20
    id *_keys;	// 40 = 0x28
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x000000000009c09d
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009b7d7
+ (id)alloc;	// IMP=0x000000000009b7cb
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x000000000009adde
+ (void)initialize;	// IMP=0x000000000009ad9a
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009ad92
- (id)description;	// IMP=0x000000000009c4b6
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000009c45d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009c452
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009c3af
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009c0ae
- (Class)classForCoder;	// IMP=0x000000000009c08c
- (unsigned long long)hash;	// IMP=0x000000000009c043
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009bf52
- (id)allKeys;	// IMP=0x000000000009bf20
- (id *)keys;	// IMP=0x000000000009bf0f
- (unsigned long long)length;	// IMP=0x000000000009befe
- (unsigned long long)fastIndexForKnownKey:(id)arg1;	// IMP=0x000000000009bba0
- (unsigned long long)indexForKey:(id)arg1;	// IMP=0x000000000009bb12
- (void)dealloc;	// IMP=0x000000000009ba07
- (id)initForKeys:(id)arg1;	// IMP=0x000000000009b913
- (id)initForKeys:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000009b8bb
- (_Bool)_isDeallocating;	// IMP=0x000000000009b898
- (_Bool)_tryRetain;	// IMP=0x000000000009b85a
- (unsigned long long)retainCount;	// IMP=0x000000000009b842
- (oneway void)release;	// IMP=0x000000000009b804
- (id)retain;	// IMP=0x000000000009b7e3

@end

