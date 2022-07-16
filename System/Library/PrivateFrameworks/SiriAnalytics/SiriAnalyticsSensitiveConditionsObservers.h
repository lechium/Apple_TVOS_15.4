//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface SiriAnalyticsSensitiveConditionsObservers : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableSet *_observers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000b4bf
- (void)pollAllObserversWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b1a3
- (void)addSensitiveConditionsObserver:(id)arg1;	// IMP=0x000000000000b036
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000000afcb

@end
