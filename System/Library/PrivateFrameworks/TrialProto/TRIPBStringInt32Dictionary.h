//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBStringInt32Dictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x0000000000044702
- (void)removeInt32ForKey:(id)arg1;	// IMP=0x00000000000446ec
- (void)setInt32:(int)arg1 forKey:(id)arg2;	// IMP=0x0000000000044647
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000044606
- (_Bool)getInt32:(int *)arg1 forKey:(id)arg2;	// IMP=0x00000000000445bd
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000004452e
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x00000000000444e4
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000044372
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x0000000000044211
- (void)enumerateKeysAndInt32sUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000044178
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000044121
- (unsigned long long)hash;	// IMP=0x000000000004410b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000440ba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000044082
- (void)dealloc;	// IMP=0x0000000000043fce
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000043fb5
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000043f6d
- (id)initWithInt32s:(const int *)arg1 forKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000043e4f
- (id)init;	// IMP=0x0000000000043e36

@end

