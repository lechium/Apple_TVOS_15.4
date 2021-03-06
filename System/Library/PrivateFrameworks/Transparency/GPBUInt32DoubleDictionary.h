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
@interface GPBUInt32DoubleDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x0000000000014054
- (void)removeDoubleForKey:(unsigned int)arg1;	// IMP=0x000000000001401b
- (void)setDouble:(double)arg1 forKey:(unsigned int)arg2;	// IMP=0x0000000000013f93
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000013f52
- (_Bool)getDouble:(double *)arg1 forKey:(unsigned int)arg2;	// IMP=0x0000000000013ee4
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013e19
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x0000000000013db7
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000013c1f
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x0000000000013ac5
- (void)enumerateKeysAndDoublesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013a0a
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x00000000000139b3
- (unsigned long long)hash;	// IMP=0x000000000001399d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001394c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013914
- (void)dealloc;	// IMP=0x00000000000138d9
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000000138c0
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000013878
- (id)initWithDoubles:(const double *)arg1 forKeys:(const unsigned int *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000013774
- (id)init;	// IMP=0x000000000001375b

@end

