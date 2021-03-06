//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class TRIPBMessage;

@interface TRIPBBoolFloatDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    float _values[2];	// 16 = 0x10
    _Bool _valueSet[2];	// 24 = 0x18
}

- (void)removeAll;	// IMP=0x000000000004a6f5
- (void)removeFloatForKey:(_Bool)arg1;	// IMP=0x000000000004a6e8
- (void)setFloat:(float)arg1 forKey:(_Bool)arg2;	// IMP=0x000000000004a6c3
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000004a679
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000004a55e
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000004a487
- (void)enumerateKeysAndFloatsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004a42c
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000004a395
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x000000000004a37d
- (_Bool)getFloat:(float *)arg1 forKey:(_Bool)arg2;	// IMP=0x000000000004a35b
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000004a2a8
- (unsigned long long)hash;	// IMP=0x000000000004a297
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004a21d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004a1e5
- (void)dealloc;	// IMP=0x000000000004a13b
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000004a122
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000004a0c4
- (id)initWithFloats:(const float *)arg1 forKeys:(const _Bool *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000004a058
- (id)init;	// IMP=0x000000000004a03f

@end

