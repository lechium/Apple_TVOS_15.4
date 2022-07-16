//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Transparency/NSCopying-Protocol.h>

@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBInt64Array : NSObject <NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    long long *_values;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
    unsigned long long _capacity;	// 32 = 0x20
}

+ (id)arrayWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000007f5e2
+ (id)arrayWithValueArray:(id)arg1;	// IMP=0x000000000007f5b3
+ (id)arrayWithValue:(long long)arg1;	// IMP=0x000000000007f57a
+ (id)array;	// IMP=0x000000000007f568
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2;	// IMP=0x000000000007fd09
- (void)removeAll;	// IMP=0x000000000007fce1
- (void)removeValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007fc37
- (void)addValuesFromArray:(id)arg1;	// IMP=0x000000000007fc1a
- (void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(long long)arg2;	// IMP=0x000000000007fbc1
- (void)insertValue:(long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000007fae9
- (void)addValues:(const long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000007fa56
- (void)addValue:(long long)arg1;	// IMP=0x000000000007fa2c
- (void)internalResizeToCapacity:(unsigned long long)arg1;	// IMP=0x000000000007f9bf
- (long long)valueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007f972
- (void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000007f8e2
- (void)enumerateValuesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007f8cb
- (id)description;	// IMP=0x000000000007f81f
- (unsigned long long)hash;	// IMP=0x000000000007f815
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007f7bb
- (void)dealloc;	// IMP=0x000000000007f781
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007f744
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000007f701
- (id)initWithValues:(const long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000007f65d
- (id)initWithValueArray:(id)arg1;	// IMP=0x000000000007f640
- (id)init;	// IMP=0x000000000007f611

@end
