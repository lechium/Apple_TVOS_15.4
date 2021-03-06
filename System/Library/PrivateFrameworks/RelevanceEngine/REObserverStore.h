//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable;

@interface REObserverStore : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000914d2
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000091340
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000912ec
- (void)addObserver:(id)arg1;	// IMP=0x0000000000091298
@property(readonly, nonatomic) NSArray *allObservers;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithFunctionsOptions:(unsigned long long)arg1;	// IMP=0x00000000000911a1
- (id)init;	// IMP=0x000000000009118a

@end

