//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface HBIconCacheSynchronizedSet : NSObject
{
    struct os_unfair_lock_s;	// 8 = 0x8
    NSMutableSet *_objects;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000495ad
@property(readonly, nonatomic) NSMutableSet *objects; // @synthesize objects=_objects;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
- (void)removeObject:(id)arg1;	// IMP=0x0010000000049546
- (_Bool)addObject:(id)arg1;	// IMP=0x00100000000494d0
- (id)init;	// IMP=0x0010000000049473

@end

