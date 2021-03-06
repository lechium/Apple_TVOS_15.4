//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>

@class TRIPBMessage;

@interface TRIPBBoolArray : NSObject <NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    _Bool *_values;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
    unsigned long long _capacity;	// 32 = 0x20
}

+ (id)arrayWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000029348
+ (id)arrayWithValueArray:(id)arg1;	// IMP=0x0000000000029319
+ (id)arrayWithValue:(_Bool)arg1;	// IMP=0x00000000000292e1
+ (id)array;	// IMP=0x00000000000292cf
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000029ab9
- (void)removeAll;	// IMP=0x0000000000029a91
- (void)removeValueAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000299ec
- (void)addValuesFromArray:(id)arg1;	// IMP=0x00000000000299cf
- (void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(_Bool)arg2;	// IMP=0x0000000000029976
- (void)insertValue:(_Bool)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000298a4
- (void)addValues:(const _Bool *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000029819
- (void)addValue:(_Bool)arg1;	// IMP=0x00000000000297f0
- (void)internalResizeToCapacity:(unsigned long long)arg1;	// IMP=0x0000000000029794
- (_Bool)valueAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000029748
- (void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000296b7
- (void)enumerateValuesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000296a0
- (id)description;	// IMP=0x00000000000295f3
- (unsigned long long)hash;	// IMP=0x00000000000295e9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000029593
- (void)dealloc;	// IMP=0x00000000000294e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000294a3
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000029460
- (id)initWithValues:(const _Bool *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000293c3
- (id)initWithValueArray:(id)arg1;	// IMP=0x00000000000293a6
- (id)init;	// IMP=0x0000000000029377

@end

