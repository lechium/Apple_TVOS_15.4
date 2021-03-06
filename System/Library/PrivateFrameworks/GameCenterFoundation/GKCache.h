//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/GKCache-Protocol.h>

@class GKLinkedList, NSMutableDictionary, NSString;

@interface GKCache : NSObject <GKCache>
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
    GKLinkedList *_cacheList;	// 16 = 0x10
    unsigned long long _maxCount;	// 24 = 0x18
    unsigned long long _count;	// 32 = 0x20
}

@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(retain, nonatomic) GKLinkedList *cacheList; // @synthesize cacheList=_cacheList;
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void)removeAllObjects;	// IMP=0x00000000000e6ac3
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000000000e6a59
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000000000e6a47
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000e6937
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000000e6925
- (id)objectForKey:(id)arg1;	// IMP=0x00000000000e68b5
- (void)dealloc;	// IMP=0x00000000000e6843
- (id)initWithMaxCount:(unsigned long long)arg1;	// IMP=0x00000000000e6771

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

