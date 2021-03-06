//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface PHAssociatedObjectsTable : NSObject
{
    struct os_unfair_lock_s _locks[16];	// 8 = 0x8
    NSMapTable *_buckets[16];	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001395a4
- (void)removeAllAssociatedObjectsOnObject:(id)arg1;	// IMP=0x00000000001394a9
- (void)removeAssociatedObjectOnObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000139349
- (id)setAssociatedObjectIfNotSet:(id)arg1 onObject:(id)arg2 forKey:(id)arg3;	// IMP=0x000000000013913e
- (void)setAssociatedObject:(id)arg1 onObject:(id)arg2 forKey:(id)arg3;	// IMP=0x0000000000138fc5
- (id)associatedObjectOnObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000138e06
@property(readonly) long long stripeCount;
- (id)init;	// IMP=0x0000000000138d52

@end

