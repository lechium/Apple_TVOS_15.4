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
@interface GPBInt64Int32Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x00000000000218c5
- (void)removeInt32ForKey:(long long)arg1;	// IMP=0x000000000002188c
- (void)setInt32:(int)arg1 forKey:(long long)arg2;	// IMP=0x0000000000021804
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x00000000000217c3
- (_Bool)getInt32:(int *)arg1 forKey:(long long)arg2;	// IMP=0x0000000000021756
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000021692
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x0000000000021632
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000021455
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x00000000000212e0
- (void)enumerateKeysAndInt32sUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000021221
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x00000000000211ca
- (unsigned long long)hash;	// IMP=0x00000000000211b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000021163
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002112b
- (void)dealloc;	// IMP=0x00000000000210f0
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000000210d7
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002108f
- (id)initWithInt32s:(const int *)arg1 forKeys:(const long long *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000020f8d
- (id)init;	// IMP=0x0000000000020f74

@end
