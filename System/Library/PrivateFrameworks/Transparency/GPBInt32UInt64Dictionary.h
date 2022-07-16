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
@interface GPBInt32UInt64Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x0000000000017338
- (void)removeUInt64ForKey:(int)arg1;	// IMP=0x00000000000172ff
- (void)setUInt64:(unsigned long long)arg1 forKey:(int)arg2;	// IMP=0x0000000000017277
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000017236
- (_Bool)getUInt64:(unsigned long long *)arg1 forKey:(int)arg2;	// IMP=0x00000000000171ca
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017107
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x00000000000170a6
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000016ed6
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x0000000000016d61
- (void)enumerateKeysAndUInt64sUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016ca3
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000016c4c
- (unsigned long long)hash;	// IMP=0x0000000000016c36
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000016be5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016bad
- (void)dealloc;	// IMP=0x0000000000016b72
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000016b59
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000016b11
- (id)initWithUInt64s:(const unsigned long long *)arg1 forKeys:(const int *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000016a0f
- (id)init;	// IMP=0x00000000000169f6

@end

