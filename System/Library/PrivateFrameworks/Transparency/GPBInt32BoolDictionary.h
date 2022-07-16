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
@interface GPBInt32BoolDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x0000000000018599
- (void)removeBoolForKey:(int)arg1;	// IMP=0x0000000000018560
- (void)setBool:(_Bool)arg1 forKey:(int)arg2;	// IMP=0x00000000000184d8
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000018497
- (_Bool)getBool:(_Bool *)arg1 forKey:(int)arg2;	// IMP=0x000000000001842b
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000001838a
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x0000000000018329
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000018179
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000001801c
- (void)enumerateKeysAndBoolsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017f5e
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000017f07
- (unsigned long long)hash;	// IMP=0x0000000000017ef1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000017ea0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000017e68
- (void)dealloc;	// IMP=0x0000000000017e2d
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000017e14
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000017dcc
- (id)initWithBools:(const _Bool *)arg1 forKeys:(const int *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000017cc9
- (id)init;	// IMP=0x0000000000017cb0

@end
