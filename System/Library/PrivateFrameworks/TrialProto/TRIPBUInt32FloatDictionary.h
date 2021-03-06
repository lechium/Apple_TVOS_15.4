//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBUInt32FloatDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x00000000000300a1
- (void)removeFloatForKey:(unsigned int)arg1;	// IMP=0x0000000000030068
- (void)setFloat:(float)arg1 forKey:(unsigned int)arg2;	// IMP=0x000000000002ffe0
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000002ff9f
- (_Bool)getFloat:(float *)arg1 forKey:(unsigned int)arg2;	// IMP=0x000000000002ff31
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000002fe63
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x000000000002fe01
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000002fbd4
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000002f9d1
- (void)enumerateKeysAndFloatsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f916
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000002f8bf
- (unsigned long long)hash;	// IMP=0x000000000002f8a9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002f858
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002f820
- (void)dealloc;	// IMP=0x000000000002f76c
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000002f753
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002f70b
- (id)initWithFloats:(const float *)arg1 forKeys:(const unsigned int *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000002f607
- (id)init;	// IMP=0x000000000002f5ee

@end

