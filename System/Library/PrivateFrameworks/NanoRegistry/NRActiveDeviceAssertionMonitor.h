//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface NRActiveDeviceAssertionMonitor : NSObject
{
    int _assertionToken;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000000045252
- (void).cxx_destruct;	// IMP=0x0000000000045bfe
- (void)removeObserver:(id)arg1;	// IMP=0x000000000004589a
- (void)addObserver:(id)arg1;	// IMP=0x0000000000045653
@property(readonly, nonatomic) _Bool hasActiveAssertion;

@end

