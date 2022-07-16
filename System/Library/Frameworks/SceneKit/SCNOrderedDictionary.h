//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SCNOrderedDictionary : NSObject
{
    NSMutableArray *_keys;	// 8 = 0x8
    NSMutableDictionary *_keyValues;	// 16 = 0x10
}

- (id)description;	// IMP=0x00000000001b988f
- (id)copy;	// IMP=0x00000000001b985a
- (void)_setupFrom:(id)arg1;	// IMP=0x00000000001b97fe
- (id)keys;	// IMP=0x00000000001b97f4
- (id)dictionary;	// IMP=0x00000000001b97ea
- (id)allValues;	// IMP=0x00000000001b97d4
- (unsigned long long)count;	// IMP=0x00000000001b97be
- (void)applyBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b9679
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;	// IMP=0x00000000001b9531
- (id)allKeys;	// IMP=0x00000000001b9513
- (void)removeAllObjects;	// IMP=0x00000000001b94e8
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000000001b9451
- (id)objectAtIndex:(long long)arg1;	// IMP=0x00000000001b941c
- (id)objectForKey:(id)arg1;	// IMP=0x00000000001b9406
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001b9375
- (id)valueForKey:(id)arg1;	// IMP=0x00000000001b9363
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001b9351
- (void)dealloc;	// IMP=0x00000000001b9307

@end

