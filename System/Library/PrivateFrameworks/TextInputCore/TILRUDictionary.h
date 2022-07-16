//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TILRUDictionaryNode;

@interface TILRUDictionary : NSObject
{
    struct __CFDictionary *_dictionary;	// 8 = 0x8
    unsigned long long _maxCount;	// 16 = 0x10
    TILRUDictionaryNode *_head;	// 24 = 0x18
    TILRUDictionaryNode *_tail;	// 32 = 0x20
}

+ (id)dictionaryWithMaximumCapacity:(unsigned long long)arg1;	// IMP=0x000000000002b0f0
- (void).cxx_destruct;	// IMP=0x000000000002b0c8
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x000000000002b0b6
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000002b0a4
- (void)removeAllObjects;	// IMP=0x000000000002b06e
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000002b028
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002aef4
- (id)objectForKey:(id)arg1;	// IMP=0x000000000002ae7c
- (id)allKeys;	// IMP=0x000000000002ae66
- (unsigned long long)count;	// IMP=0x000000000002ae58
- (id)description;	// IMP=0x000000000002ad17
- (void)dealloc;	// IMP=0x000000000002acdd
- (id)initWithMaximumCapacity:(unsigned long long)arg1;	// IMP=0x000000000002abec
- (void)_addNodeToFront:(id)arg1;	// IMP=0x000000000002b26d
- (void)_moveNodeToFront:(id)arg1;	// IMP=0x000000000002b205
- (void)_removeNode:(id)arg1;	// IMP=0x000000000002b1a1
- (void)_removeNodeFromLinkedList:(id)arg1;	// IMP=0x000000000002b127
- (id)objectForKeyWithoutAffectingLRU:(id)arg1;	// IMP=0x000000000002b514
- (id)allValuesInLRUOrder;	// IMP=0x000000000002b440
- (id)allKeysInLRUOrder;	// IMP=0x000000000002b36c
- (unsigned long long)linkedListCount;	// IMP=0x000000000002b2f8

@end

