//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Transparency/GPBDictionaryInternalsProtocol-Protocol.h>
#import <Transparency/NSCopying-Protocol.h>

@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBBoolFloatDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    float _values[2];	// 16 = 0x10
    _Bool _valueSet[2];	// 24 = 0x18
}

- (void)removeAll;	// IMP=0x000000000002c7b7
- (void)removeFloatForKey:(_Bool)arg1;	// IMP=0x000000000002c7aa
- (void)setFloat:(float)arg1 forKey:(_Bool)arg2;	// IMP=0x000000000002c785
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000002c73b
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000002c622
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000002c55e
- (void)enumerateKeysAndFloatsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c503
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c46c
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x000000000002c454
- (_Bool)getFloat:(float *)arg1 forKey:(_Bool)arg2;	// IMP=0x000000000002c432
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000002c37f
- (unsigned long long)hash;	// IMP=0x000000000002c36e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002c2f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002c2bc
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000002c2a3
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002c245
- (id)initWithFloats:(const float *)arg1 forKeys:(const _Bool *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000002c1d9
- (id)init;	// IMP=0x000000000002c1c0

@end

