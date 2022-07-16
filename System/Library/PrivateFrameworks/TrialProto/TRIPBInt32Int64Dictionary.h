//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBInt32Int64Dictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x0000000000034a92
- (void)removeInt64ForKey:(int)arg1;	// IMP=0x0000000000034a59
- (void)setInt64:(long long)arg1 forKey:(int)arg2;	// IMP=0x00000000000349d1
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000034990
- (_Bool)getInt64:(long long *)arg1 forKey:(int)arg2;	// IMP=0x0000000000034924
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000034861
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x0000000000034800
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000003466d
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x00000000000344f8
- (void)enumerateKeysAndInt64sUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003443a
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x00000000000343e3
- (unsigned long long)hash;	// IMP=0x00000000000343cd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003437c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000034344
- (void)dealloc;	// IMP=0x0000000000034290
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000034277
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000003422f
- (id)initWithInt64s:(const long long *)arg1 forKeys:(const int *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000003412d
- (id)init;	// IMP=0x0000000000034114

@end

