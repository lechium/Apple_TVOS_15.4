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
@interface GPBUInt64BoolDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x000000000001dcdd
- (void)removeBoolForKey:(unsigned long long)arg1;	// IMP=0x000000000001dca4
- (void)setBool:(_Bool)arg1 forKey:(unsigned long long)arg2;	// IMP=0x000000000001dc1c
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000001dbdb
- (_Bool)getBool:(_Bool *)arg1 forKey:(unsigned long long)arg2;	// IMP=0x000000000001db6e
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000001dacc
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x000000000001da6b
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000001d8d3
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000001d775
- (void)enumerateKeysAndBoolsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d6b5
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000001d65e
- (unsigned long long)hash;	// IMP=0x000000000001d648
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d5f7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001d5bf
- (void)dealloc;	// IMP=0x000000000001d584
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000001d56b
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001d523
- (id)initWithBools:(const _Bool *)arg1 forKeys:(const unsigned long long *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000001d420
- (id)init;	// IMP=0x000000000001d407

@end

