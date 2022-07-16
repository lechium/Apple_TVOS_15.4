//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMRapportSyncEngine, BMSyncDatabase, BMSyncDevicePeerStatusTracker;
@protocol OS_dispatch_queue;

@interface BMSyncScheduler : NSObject
{
    BMRapportSyncEngine *_syncEngine;	// 8 = 0x8
    BMSyncDevicePeerStatusTracker *_peerStatusTracker;	// 16 = 0x10
    BMSyncDatabase *_database;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000222c5
- (void)syncNowIfPolicyAllowsWithReason:(unsigned long long)arg1 activity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000021b27
- (void)syncNowIfPolicyAllowsWithReason:(unsigned long long)arg1 activity:(id)arg2;	// IMP=0x0010000000021b12
- (id)initWithSyncEngine:(id)arg1 peerStatusTracker:(id)arg2 database:(id)arg3 queue:(id)arg4;	// IMP=0x0010000000021a30

@end
