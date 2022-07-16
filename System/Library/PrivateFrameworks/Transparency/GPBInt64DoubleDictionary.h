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
@interface GPBInt64DoubleDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x00000000000246d7
- (void)removeDoubleForKey:(long long)arg1;	// IMP=0x000000000002469e
- (void)setDouble:(double)arg1 forKey:(long long)arg2;	// IMP=0x0000000000024616
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x00000000000245d5
- (_Bool)getDouble:(double *)arg1 forKey:(long long)arg2;	// IMP=0x0000000000024566
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000002449a
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x0000000000024438
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000024284
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x0000000000024129
- (void)enumerateKeysAndDoublesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002406c
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000024015
- (unsigned long long)hash;	// IMP=0x0000000000023fff
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000023fae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000023f76
- (void)dealloc;	// IMP=0x0000000000023f3b
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000023f22
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000023eda
- (id)initWithDoubles:(const double *)arg1 forKeys:(const long long *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000023dd6
- (id)init;	// IMP=0x0000000000023dbd

@end
