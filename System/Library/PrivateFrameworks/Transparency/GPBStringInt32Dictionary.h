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
@interface GPBStringInt32Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x0000000000026f04
- (void)removeInt32ForKey:(id)arg1;	// IMP=0x0000000000026eee
- (void)setInt32:(int)arg1 forKey:(id)arg2;	// IMP=0x0000000000026e49
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000026e08
- (_Bool)getInt32:(int *)arg1 forKey:(id)arg2;	// IMP=0x0000000000026dbf
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000026d30
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x0000000000026ce6
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000026b55
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x00000000000269fc
- (void)enumerateKeysAndInt32sUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000026963
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000002690c
- (unsigned long long)hash;	// IMP=0x00000000000268f6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000268a5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002686d
- (void)dealloc;	// IMP=0x0000000000026832
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000026819
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000267d1
- (id)initWithInt32s:(const int *)arg1 forKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000266b3
- (id)init;	// IMP=0x000000000002669a

@end

