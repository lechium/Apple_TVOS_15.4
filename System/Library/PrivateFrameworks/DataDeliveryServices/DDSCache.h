//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;
@protocol DDSCacheDelegate, OS_dispatch_queue;

@interface DDSCache : NSObject
{
    id <DDSCacheDelegate> _delegate;	// 8 = 0x8
    NSMutableDictionary *_cache;	// 16 = 0x10
    NSMutableOrderedSet *_order;	// 24 = 0x18
    unsigned long long _maxCount;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000015415
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(readonly, nonatomic) NSMutableOrderedSet *order; // @synthesize order=_order;
@property(readonly, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(nonatomic) __weak id <DDSCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearCache;	// IMP=0x0000000000015245
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000014f7f
- (void)cacheObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000014be7
- (id)initWithMaxCount:(unsigned long long)arg1;	// IMP=0x0000000000014b20

@end

