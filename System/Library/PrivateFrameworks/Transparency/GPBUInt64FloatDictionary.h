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
@interface GPBUInt64FloatDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x000000000001e5f5
- (void)removeFloatForKey:(unsigned long long)arg1;	// IMP=0x000000000001e5bc
- (void)setFloat:(float)arg1 forKey:(unsigned long long)arg2;	// IMP=0x000000000001e534
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000001e4f3
- (_Bool)getFloat:(float *)arg1 forKey:(unsigned long long)arg2;	// IMP=0x000000000001e484
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e3b5
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x000000000001e353
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000001e1ba
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000001e05f
- (void)enumerateKeysAndFloatsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001dfa2
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000001df4b
- (unsigned long long)hash;	// IMP=0x000000000001df35
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001dee4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001deac
- (void)dealloc;	// IMP=0x000000000001de71
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000001de58
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001de10
- (id)initWithFloats:(const float *)arg1 forKeys:(const unsigned long long *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000001dd0c
- (id)init;	// IMP=0x000000000001dcf3

@end
