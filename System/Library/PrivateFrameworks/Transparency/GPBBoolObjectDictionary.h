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
@interface GPBBoolObjectDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    id _values[2];	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x000000000002d59f
- (void)removeObjectForKey:(_Bool)arg1;	// IMP=0x000000000002d57a
- (void)setObject:(id)arg1 forKey:(_Bool)arg2;	// IMP=0x000000000002d4fa
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000002d476
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000002d364
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000002d2a9
- (id)deepCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002d23b
- (_Bool)isInitialized;	// IMP=0x000000000002d1f1
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d19a
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d154
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x000000000002d11d
- (id)objectForKey:(_Bool)arg1;	// IMP=0x000000000002d110
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000002d05c
- (unsigned long long)hash;	// IMP=0x000000000002d043
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002cf96
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002cf5e
- (void)dealloc;	// IMP=0x000000000002cf14
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000002cefb
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002cea2
- (id)initWithObjects:(const id *)arg1 forKeys:(const _Bool *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000002cddb
- (id)init;	// IMP=0x000000000002cdc2

@end

