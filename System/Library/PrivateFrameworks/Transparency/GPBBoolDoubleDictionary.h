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
@interface GPBBoolDoubleDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    double _values[2];	// 16 = 0x10
    _Bool _valueSet[2];	// 32 = 0x20
}

- (void)removeAll;	// IMP=0x000000000002cdb6
- (void)removeDoubleForKey:(_Bool)arg1;	// IMP=0x000000000002cda9
- (void)setDouble:(double)arg1 forKey:(_Bool)arg2;	// IMP=0x000000000002cd84
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000002cd3a
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000002cc21
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000002cb5d
- (void)enumerateKeysAndDoublesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002cb02
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ca6e
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x000000000002ca56
- (_Bool)getDouble:(double *)arg1 forKey:(_Bool)arg2;	// IMP=0x000000000002ca34
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000002c984
- (unsigned long long)hash;	// IMP=0x000000000002c973
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002c8f7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002c8bf
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000002c8a6
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002c848
- (id)initWithDoubles:(const double *)arg1 forKeys:(const _Bool *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000002c7dc
- (id)init;	// IMP=0x000000000002c7c3

@end
