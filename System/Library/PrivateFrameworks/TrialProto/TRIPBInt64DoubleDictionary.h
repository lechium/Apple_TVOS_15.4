//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBInt64DoubleDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x0000000000041c34
- (void)removeDoubleForKey:(long long)arg1;	// IMP=0x0000000000041bfb
- (void)setDouble:(double)arg1 forKey:(long long)arg2;	// IMP=0x0000000000041b73
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000041b32
- (_Bool)getDouble:(double *)arg1 forKey:(long long)arg2;	// IMP=0x0000000000041ac3
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x00000000000419f7
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x0000000000041995
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000004180d
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000004169f
- (void)enumerateKeysAndDoublesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000415e2
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000004158b
- (unsigned long long)hash;	// IMP=0x0000000000041575
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000041524
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000414ec
- (void)dealloc;	// IMP=0x0000000000041438
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000004141f
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000413d7
- (id)initWithDoubles:(const double *)arg1 forKeys:(const long long *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000412d3
- (id)init;	// IMP=0x00000000000412ba

@end

