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
@interface GPBInt32FloatDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x0000000000018ec6
- (void)removeFloatForKey:(int)arg1;	// IMP=0x0000000000018e8d
- (void)setFloat:(float)arg1 forKey:(int)arg2;	// IMP=0x0000000000018e05
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000018dc4
- (_Bool)getFloat:(float *)arg1 forKey:(int)arg2;	// IMP=0x0000000000018d56
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018c88
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x0000000000018c26
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000018a73
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x0000000000018919
- (void)enumerateKeysAndFloatsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001885e
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000018807
- (unsigned long long)hash;	// IMP=0x00000000000187f1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000187a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000018768
- (void)dealloc;	// IMP=0x000000000001872d
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000018714
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000186cc
- (id)initWithFloats:(const float *)arg1 forKeys:(const int *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000185c8
- (id)init;	// IMP=0x00000000000185af

@end

