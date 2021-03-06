//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBInt32Int32Dictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x000000000003376a
- (void)removeInt32ForKey:(int)arg1;	// IMP=0x0000000000033731
- (void)setInt32:(int)arg1 forKey:(int)arg2;	// IMP=0x00000000000336a9
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000033668
- (_Bool)getInt32:(int *)arg1 forKey:(int)arg2;	// IMP=0x00000000000335fc
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000033537
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x00000000000334ce
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000033343
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x00000000000331db
- (void)enumerateKeysAndInt32sUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003312e
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x00000000000330d7
- (unsigned long long)hash;	// IMP=0x00000000000330c1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000033070
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000033038
- (void)dealloc;	// IMP=0x0000000000032f84
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000032f6b
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000032f23
- (id)initWithInt32s:(const int *)arg1 forKeys:(const int *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000032e29
- (id)init;	// IMP=0x0000000000032e10

@end

