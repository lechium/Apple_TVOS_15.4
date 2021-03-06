//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Transparency/NSCopying-Protocol.h>

@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBUInt64Array : NSObject <NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    unsigned long long *_values;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
    unsigned long long _capacity;	// 32 = 0x20
}

+ (id)arrayWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000007fe25
+ (id)arrayWithValueArray:(id)arg1;	// IMP=0x000000000007fdf6
+ (id)arrayWithValue:(unsigned long long)arg1;	// IMP=0x000000000007fdbd
+ (id)array;	// IMP=0x000000000007fdab
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2;	// IMP=0x000000000008054c
- (void)removeAll;	// IMP=0x0000000000080524
- (void)removeValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000008047a
- (void)addValuesFromArray:(id)arg1;	// IMP=0x000000000008045d
- (void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(unsigned long long)arg2;	// IMP=0x0000000000080404
- (void)insertValue:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000008032c
- (void)addValues:(const unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000080299
- (void)addValue:(unsigned long long)arg1;	// IMP=0x000000000008026f
- (void)internalResizeToCapacity:(unsigned long long)arg1;	// IMP=0x0000000000080202
- (unsigned long long)valueAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000801b5
- (void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000080125
- (void)enumerateValuesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000008010e
- (id)description;	// IMP=0x0000000000080062
- (unsigned long long)hash;	// IMP=0x0000000000080058
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007fffe
- (void)dealloc;	// IMP=0x000000000007ffc4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007ff87
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000007ff44
- (id)initWithValues:(const unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000007fea0
- (id)initWithValueArray:(id)arg1;	// IMP=0x000000000007fe83
- (id)init;	// IMP=0x000000000007fe54

@end

