//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@class AFBBufRef;

@interface AFBDictionary : NSDictionary
{
    AFBBufRef *_bufRef;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
    Class _keyClass;	// 24 = 0x18
    CDUnknownBlockType _keyAtIndex;	// 32 = 0x20
    CDUnknownBlockType _tableAtIndex;	// 40 = 0x28
    CDUnknownBlockType _objectForValidKey;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000012990
- (_Bool)isEqualToDictionary:(id)arg1;	// IMP=0x00000000000124f6
- (id)allKeysForObject:(id)arg1;	// IMP=0x0000000000012356
- (id)allValues;	// IMP=0x0000000000012279
- (id)allKeys;	// IMP=0x000000000001217b
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001208a
- (id)keyEnumerator;	// IMP=0x0000000000012054
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000011fe1
- (unsigned long long)count;	// IMP=0x0000000000011fd0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011fc5
- (id)init;	// IMP=0x0000000000011fbf
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011fb0
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000011f5c
- (id)initWithBufRef:(id)arg1 count:(unsigned long long)arg2 keyClass:(Class)arg3 keyAtIndex:(CDUnknownBlockType)arg4 tableAtIndex:(CDUnknownBlockType)arg5 objectForValidKey:(CDUnknownBlockType)arg6;	// IMP=0x0000000000011e25

@end
