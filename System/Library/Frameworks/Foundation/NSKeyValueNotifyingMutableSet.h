//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableSet
{
    NSMutableSet *_mutableSet;	// 24 = 0x18
}

+ (id)_proxyShare;	// IMP=0x00000000000a1d3a
- (void)unionSet:(id)arg1;	// IMP=0x00000000000a2368
- (void)setSet:(id)arg1;	// IMP=0x00000000000a22e3
- (void)removeObject:(id)arg1;	// IMP=0x00000000000a2201
- (void)removeAllObjects;	// IMP=0x00000000000a216e
- (void)minusSet:(id)arg1;	// IMP=0x00000000000a20e9
- (void)intersectSet:(id)arg1;	// IMP=0x00000000000a2064
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x00000000000a1fb2
- (void)addObject:(id)arg1;	// IMP=0x00000000000a1ed0
- (id)objectEnumerator;	// IMP=0x00000000000a1eb3
- (id)member:(id)arg1;	// IMP=0x00000000000a1e96
- (unsigned long long)count;	// IMP=0x00000000000a1e79
- (void)_proxyNonGCFinalize;	// IMP=0x00000000000a1e08
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000000a1d61

@end

