//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class TRIPBMessage;

@interface TRIPBBoolObjectDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    id _values[2];	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x000000000004b61f
- (void)removeObjectForKey:(_Bool)arg1;	// IMP=0x000000000004b5fa
- (void)setObject:(id)arg1 forKey:(_Bool)arg2;	// IMP=0x000000000004b57a
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000004b4f6
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000004b3e4
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000004b31b
- (id)deepCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004b2ad
- (_Bool)isInitialized;	// IMP=0x000000000004b263
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004b20c
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000004b1c6
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x000000000004b18f
- (id)objectForKey:(_Bool)arg1;	// IMP=0x000000000004b182
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000004b0ce
- (unsigned long long)hash;	// IMP=0x000000000004b0b5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004b008
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004afd0
- (void)dealloc;	// IMP=0x000000000004af11
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000004aef8
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000004ae9f
- (id)initWithObjects:(const id *)arg1 forKeys:(const _Bool *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000004add8
- (id)init;	// IMP=0x000000000004adbf

@end

