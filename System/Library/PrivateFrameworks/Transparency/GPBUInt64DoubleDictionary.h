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
@interface GPBUInt64DoubleDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x000000000001ef0a
- (void)removeDoubleForKey:(unsigned long long)arg1;	// IMP=0x000000000001eed1
- (void)setDouble:(double)arg1 forKey:(unsigned long long)arg2;	// IMP=0x000000000001ee49
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000001ee08
- (_Bool)getDouble:(double *)arg1 forKey:(unsigned long long)arg2;	// IMP=0x000000000001ed99
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000001eccd
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x000000000001ec6b
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000001ead2
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000001e977
- (void)enumerateKeysAndDoublesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e8ba
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000001e863
- (unsigned long long)hash;	// IMP=0x000000000001e84d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001e7fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001e7c4
- (void)dealloc;	// IMP=0x000000000001e789
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000001e770
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001e728
- (id)initWithDoubles:(const double *)arg1 forKeys:(const unsigned long long *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000001e624
- (id)init;	// IMP=0x000000000001e60b

@end

