//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBInt32UInt64Dictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x00000000000340fe
- (void)removeUInt64ForKey:(int)arg1;	// IMP=0x00000000000340c5
- (void)setUInt64:(unsigned long long)arg1 forKey:(int)arg2;	// IMP=0x000000000003403d
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000033ffc
- (_Bool)getUInt64:(unsigned long long *)arg1 forKey:(int)arg2;	// IMP=0x0000000000033f90
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000033ecd
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x0000000000033e6c
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000033cd9
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x0000000000033b64
- (void)enumerateKeysAndUInt64sUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000033aa6
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000033a4f
- (unsigned long long)hash;	// IMP=0x0000000000033a39
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000339e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000339b0
- (void)dealloc;	// IMP=0x00000000000338fc
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000000338e3
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000003389b
- (id)initWithUInt64s:(const unsigned long long *)arg1 forKeys:(const int *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000033799
- (id)init;	// IMP=0x0000000000033780

@end

