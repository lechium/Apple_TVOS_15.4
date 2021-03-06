//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface CalDefaultDictionary : NSObject <NSCopying>
{
    Class _defaultClass;	// 8 = 0x8
    NSMutableDictionary *_dict;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004a1dd
- (id)finalDictionary;	// IMP=0x000000000004a1cf
- (void)setDictionary:(id)arg1;	// IMP=0x000000000004a1be
- (unsigned long long)count;	// IMP=0x000000000004a1a8
- (id)keys;	// IMP=0x000000000004a192
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000004a17c
- (void)removeAllObjects;	// IMP=0x000000000004a166
- (id)objectForKey:(id)arg1;	// IMP=0x000000000004a0eb
- (id)existingObjectForKey:(id)arg1;	// IMP=0x000000000004a0d5
- (id)_mutableCopyOfFinalDictionaryWithZone:(struct _NSZone *)arg1 isDeepCopy:(_Bool)arg2;	// IMP=0x000000000004a039
- (id)_copyWithZone:(struct _NSZone *)arg1 isDeepCopy:(_Bool)arg2;	// IMP=0x0000000000049fb6
- (id)deepCopy;	// IMP=0x0000000000049f9d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000049f89
- (id)initWithDefaultClass:(Class)arg1;	// IMP=0x0000000000049f28

@end

