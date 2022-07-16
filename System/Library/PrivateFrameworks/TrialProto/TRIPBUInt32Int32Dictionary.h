//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBUInt32Int32Dictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x000000000002d573
- (void)removeInt32ForKey:(unsigned int)arg1;	// IMP=0x000000000002d53a
- (void)setInt32:(int)arg1 forKey:(unsigned int)arg2;	// IMP=0x000000000002d4b2
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000002d471
- (_Bool)getInt32:(int *)arg1 forKey:(unsigned int)arg2;	// IMP=0x000000000002d405
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d342
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x000000000002d2e2
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000002d0a1
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000002ce8b
- (void)enumerateKeysAndInt32sUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002cdce
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000002cd77
- (unsigned long long)hash;	// IMP=0x000000000002cd61
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002cd10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002ccd8
- (void)dealloc;	// IMP=0x000000000002cc24
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000002cc0b
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002cbc3
- (id)initWithInt32s:(const int *)arg1 forKeys:(const unsigned int *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000002cac1
- (id)init;	// IMP=0x000000000002caa8

@end
