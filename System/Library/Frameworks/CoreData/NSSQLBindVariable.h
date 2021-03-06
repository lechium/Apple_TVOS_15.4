//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface NSSQLBindVariable : NSObject
{
    int _cd_rc;	// 8 = 0x8
    unsigned char _sqlType;	// 12 = 0xc
    unsigned int _index;	// 16 = 0x10
    unsigned int _flags;	// 20 = 0x14
    id _value;	// 24 = 0x18
    NSPropertyDescription *_propertyDescription;	// 32 = 0x20
    NSPropertyDescription *_tombstonedPropertyDescription;	// 40 = 0x28
    long long _int64;	// 48 = 0x30
}

- (id)tombstonedPropertyDescription;	// IMP=0x00000000001457bc
- (void)setTombstonedPropertyDescription:(id)arg1;	// IMP=0x00000000001457b2
- (id)propertyDescription;	// IMP=0x00000000001457a8
- (_Bool)allowsCoercion;	// IMP=0x000000000014579b
- (_Bool)hasObjectValue;	// IMP=0x000000000014578d
- (void)setIndex:(unsigned int)arg1;	// IMP=0x0000000000145784
- (unsigned int)index;	// IMP=0x000000000014577b
- (void)setSQLType:(unsigned char)arg1;	// IMP=0x0000000000145772
- (unsigned char)sqlType;	// IMP=0x0000000000145768
- (id)value;	// IMP=0x0000000000145737
- (void)setValue:(id)arg1;	// IMP=0x0000000000145709
- (void)setUnsignedInt:(unsigned int)arg1;	// IMP=0x00000000001456fd
- (unsigned int)unsignedInt;	// IMP=0x00000000001456da
- (void)setInt64:(long long)arg1;	// IMP=0x00000000001456d0
- (long long)int64;	// IMP=0x00000000001456ac
- (void)dealloc;	// IMP=0x000000000014566a
- (_Bool)_isDeallocating;	// IMP=0x000000000014564e
- (_Bool)_tryRetain;	// IMP=0x0000000000145619
- (unsigned long long)retainCount;	// IMP=0x0000000000145608
- (oneway void)release;	// IMP=0x00000000001455d1
- (id)retain;	// IMP=0x00000000001455b7
- (id)initWithUnsignedInt:(unsigned int)arg1 sqlType:(unsigned char)arg2;	// IMP=0x0000000000145573
- (id)initWithInt64:(long long)arg1 sqlType:(unsigned char)arg2;	// IMP=0x000000000014552f
- (id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 propertyDescription:(id)arg3 allowCoercion:(_Bool)arg4;	// IMP=0x0000000000145467
- (id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 propertyDescription:(id)arg3;	// IMP=0x0000000000145452

@end

