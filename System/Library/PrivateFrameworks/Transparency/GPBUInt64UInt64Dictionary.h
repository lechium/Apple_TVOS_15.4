//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Transparency/GPBDictionaryInternalsProtocol-Protocol.h>
#import <Transparency/NSCopying-Protocol.h>

@class GPBMessage, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GPBUInt64UInt64Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x000000000001ca96
- (void)removeUInt64ForKey:(unsigned long long)arg1;	// IMP=0x000000000001ca5d
- (void)setUInt64:(unsigned long long)arg1 forKey:(unsigned long long)arg2;	// IMP=0x000000000001c9d5
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000001c994
- (_Bool)getUInt64:(unsigned long long *)arg1 forKey:(unsigned long long)arg2;	// IMP=0x000000000001c927
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000001c861
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x000000000001c7f7
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000001c655
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000001c4eb
- (void)enumerateKeysAndUInt64sUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001c43b
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000001c3e4
- (unsigned long long)hash;	// IMP=0x000000000001c3ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c37d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c345
- (void)dealloc;	// IMP=0x000000000001c30a
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000001c2f1
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001c2a9
- (id)initWithUInt64s:(const unsigned long long *)arg1 forKeys:(const unsigned long long *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000001c1af
- (id)init;	// IMP=0x000000000001c196

@end

