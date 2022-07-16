//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBInt64ObjectDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x0000000000043405
- (void)removeObjectForKey:(long long)arg1;	// IMP=0x00000000000433cc
- (void)setObject:(id)arg1 forKey:(long long)arg2;	// IMP=0x0000000000043327
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x00000000000432e6
- (id)objectForKey:(long long)arg1;	// IMP=0x00000000000432ad
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000004321d
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x00000000000431d2
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000004305a
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x0000000000042ef8
- (id)deepCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000042e03
- (_Bool)isInitialized;	// IMP=0x0000000000042ce4
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000042c42
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000042beb
- (unsigned long long)hash;	// IMP=0x0000000000042bd5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000042b84
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000042b4c
- (void)dealloc;	// IMP=0x0000000000042a98
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000042a7f
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000042a37
- (id)initWithObjects:(const id *)arg1 forKeys:(const long long *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000004290c
- (id)init;	// IMP=0x00000000000428f3

@end

