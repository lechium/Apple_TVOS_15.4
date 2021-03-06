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
@interface GPBInt64UInt32Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x0000000000020f5e
- (void)removeUInt32ForKey:(long long)arg1;	// IMP=0x0000000000020f25
- (void)setUInt32:(unsigned int)arg1 forKey:(long long)arg2;	// IMP=0x0000000000020e9d
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000020e5c
- (_Bool)getUInt32:(unsigned int *)arg1 forKey:(long long)arg2;	// IMP=0x0000000000020def
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020d2b
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x0000000000020ccb
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000020afb
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x0000000000020986
- (void)enumerateKeysAndUInt32sUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000208c7
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000020870
- (unsigned long long)hash;	// IMP=0x000000000002085a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000020809
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000207d1
- (void)dealloc;	// IMP=0x0000000000020796
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000002077d
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000020735
- (id)initWithUInt32s:(const unsigned int *)arg1 forKeys:(const long long *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000020633
- (id)init;	// IMP=0x000000000002061a

@end

