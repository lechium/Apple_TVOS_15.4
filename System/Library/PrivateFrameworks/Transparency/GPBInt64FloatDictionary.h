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
@interface GPBInt64FloatDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x0000000000023da7
- (void)removeFloatForKey:(long long)arg1;	// IMP=0x0000000000023d6e
- (void)setFloat:(float)arg1 forKey:(long long)arg2;	// IMP=0x0000000000023ce6
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000023ca5
- (_Bool)getFloat:(float *)arg1 forKey:(long long)arg2;	// IMP=0x0000000000023c36
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023b67
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x0000000000023b05
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000023951
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x00000000000237f6
- (void)enumerateKeysAndFloatsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023739
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x00000000000236e2
- (unsigned long long)hash;	// IMP=0x00000000000236cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002367b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000023643
- (void)dealloc;	// IMP=0x0000000000023608
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000000235ef
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000235a7
- (id)initWithFloats:(const float *)arg1 forKeys:(const long long *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000234a3
- (id)init;	// IMP=0x000000000002348a

@end
