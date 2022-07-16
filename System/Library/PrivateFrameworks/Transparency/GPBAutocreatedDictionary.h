//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBAutocreatedDictionary : NSMutableDictionary
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002e156
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002e139
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x000000000002e0c6
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000002e0a9
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002e054
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002dfff
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000002dfe2
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002df6f
- (id)keyEnumerator;	// IMP=0x000000000002df31
- (id)objectForKey:(id)arg1;	// IMP=0x000000000002df14
- (unsigned long long)count;	// IMP=0x000000000002def7
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000002de76
- (void)dealloc;	// IMP=0x000000000002de34

@end

