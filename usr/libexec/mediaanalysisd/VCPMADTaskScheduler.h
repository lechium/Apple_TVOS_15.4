//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPMADTaskScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_managementQueue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_runningGroup;	// 16 = 0x10
    NSMutableArray *_runningTasks;	// 24 = 0x18
    NSMutableDictionary *_pendingTasks;	// 32 = 0x20
    unsigned long long _nextTaskID;	// 40 = 0x28
    float _resourceBudget;	// 48 = 0x30
    int _cpuMonitorID;	// 52 = 0x34
}

+ (id)sharedInstance;	// IMP=0x004000000000973b
+ (id)qosArray;	// IMP=0x00100000000093c3
- (void).cxx_destruct;	// IMP=0x002000000000c742
- (unsigned long long)currentOutstandingTasks;	// IMP=0x001000000000c4d3
- (void)cancelAllTasks;	// IMP=0x001000000000bff8
- (void)cancelTaskWithID:(unsigned long long)arg1;	// IMP=0x001000000000ba16
- (unsigned long long)addBackgroundTask:(id)arg1 withQoS:(unsigned int)arg2;	// IMP=0x001000000000b6a4
- (unsigned long long)addForegroundTask:(id)arg1 withQoS:(unsigned int)arg2;	// IMP=0x001000000000b2d1
- (_Bool)validateTask:(id)arg1 withQoS:(unsigned int)arg2;	// IMP=0x001000000000b057
- (void)cancelBackgroundTasks;	// IMP=0x001000000000ae4c
- (void)_runTask:(id)arg1;	// IMP=0x001000000000a60a
- (void)_schedule;	// IMP=0x001000000000a1c8
- (void)_tryFreeingResourcesForQOS:(id)arg1 resourceRequirement:(float)arg2;	// IMP=0x0010000000009790
- (void)dealloc;	// IMP=0x00100000000096af
- (id)init;	// IMP=0x00100000000093d0

@end
