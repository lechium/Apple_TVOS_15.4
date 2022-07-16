//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBUInt64FloatDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x000000000003b7f1
- (void)removeFloatForKey:(unsigned long long)arg1;	// IMP=0x000000000003b7b8
- (void)setFloat:(float)arg1 forKey:(unsigned long long)arg2;	// IMP=0x000000000003b730
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000003b6ef
- (_Bool)getFloat:(float *)arg1 forKey:(unsigned long long)arg2;	// IMP=0x000000000003b680
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000003b5b1
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x000000000003b54f
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000003b3c7
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000003b259
- (void)enumerateKeysAndFloatsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003b19c
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000003b145
- (unsigned long long)hash;	// IMP=0x000000000003b12f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003b0de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003b0a6
- (void)dealloc;	// IMP=0x000000000003aff2
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000003afd9
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000003af91
- (id)initWithFloats:(const float *)arg1 forKeys:(const unsigned long long *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000003ae8d
- (id)init;	// IMP=0x000000000003ae74

@end
