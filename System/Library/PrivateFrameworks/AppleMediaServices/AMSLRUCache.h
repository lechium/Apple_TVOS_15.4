//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSDoubleLinkedList, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AMSLRUCache : NSObject
{
    unsigned long long _maxSize;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
    NSMutableDictionary *_backingDictionary;	// 24 = 0x18
    AMSDoubleLinkedList *_backingList;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000167c9f
@property(retain, nonatomic) AMSDoubleLinkedList *backingList; // @synthesize backingList=_backingList;
@property(retain, nonatomic) NSMutableDictionary *backingDictionary; // @synthesize backingDictionary=_backingDictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, nonatomic) unsigned long long maxSize; // @synthesize maxSize=_maxSize;
- (void)_removeObjectForKey:(id)arg1;	// IMP=0x0000000000167b2a
- (unsigned long long)_count;	// IMP=0x0000000000167ab1
- (void)_addObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000016772d
- (id)description;	// IMP=0x00000000001673b5
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000167246
- (void)removeAllObjects;	// IMP=0x0000000000167103
- (id)objectForKey:(id)arg1 withCreationBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000166d4e
- (id)objectForKey:(id)arg1;	// IMP=0x000000000016698e
- (id)allObjectsAndKeys;	// IMP=0x0000000000166755
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithMaxSize:(unsigned long long)arg1;	// IMP=0x0000000000166578
- (id)init;	// IMP=0x0000000000166561

@end

