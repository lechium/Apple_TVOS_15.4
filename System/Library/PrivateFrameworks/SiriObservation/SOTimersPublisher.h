//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, SOTimersSnapshot;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface SOTimersPublisher : NSObject
{
    NSObject<OS_dispatch_queue> *_timersPublisherQueue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_timersPublisherDispatchGroup;	// 16 = 0x10
    NSHashTable *_subscribers;	// 24 = 0x18
    SOTimersSnapshot *_timerSnapshot;	// 32 = 0x20
    NSString *_typeName;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000010ae1
@property(readonly, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
- (void)_createNewSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010a5e
- (void)dealloc;	// IMP=0x0000000000010a2f
- (void)_startObserving;	// IMP=0x0000000000010a29
- (void)_notifySubscribersOfEvent:(long long)arg1;	// IMP=0x000000000001085c
- (void)stateReset:(id)arg1;	// IMP=0x0000000000010845
- (void)firingTimerDismissed:(id)arg1;	// IMP=0x000000000001082e
- (void)firingTimerChanged:(id)arg1;	// IMP=0x0000000000010817
- (void)timerFired:(id)arg1;	// IMP=0x0000000000010800
- (void)timersRemoved:(id)arg1;	// IMP=0x00000000000107e9
- (void)timersUpdated:(id)arg1;	// IMP=0x00000000000107d2
- (void)timersAdded:(id)arg1;	// IMP=0x00000000000107bb
- (void)removeSubscriber:(id)arg1;	// IMP=0x000000000001070d
- (void)addSubscriber:(id)arg1;	// IMP=0x00000000000105f0
- (void)getCurrentSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010522
- (id)init;	// IMP=0x000000000001043b

@end

