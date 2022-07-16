//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class TRIPBMessage;

@interface TRIPBBoolUInt64Dictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    unsigned long long _values[2];	// 16 = 0x10
    _Bool _valueSet[2];	// 32 = 0x20
}

- (void)removeAll;	// IMP=0x0000000000049305
- (void)removeUInt64ForKey:(_Bool)arg1;	// IMP=0x00000000000492f8
- (void)setUInt64:(unsigned long long)arg1 forKey:(_Bool)arg2;	// IMP=0x00000000000492d4
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000004928c
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000049167
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000004908d
- (void)enumerateKeysAndUInt64sUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000049034
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000048fac
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x0000000000048f96
- (_Bool)getUInt64:(unsigned long long *)arg1 forKey:(_Bool)arg2;	// IMP=0x0000000000048f76
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000048ec8
- (unsigned long long)hash;	// IMP=0x0000000000048eb7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000048e45
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000048e0d
- (void)dealloc;	// IMP=0x0000000000048d63
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000048d4a
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000048cee
- (id)initWithUInt64s:(const unsigned long long *)arg1 forKeys:(const _Bool *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000048c85
- (id)init;	// IMP=0x0000000000048c6c

@end

