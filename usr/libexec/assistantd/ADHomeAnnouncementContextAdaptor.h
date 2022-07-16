//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFHomeAnnouncementObserver, AFHomeAnnouncementSnapshot, AFInstanceContext, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface ADHomeAnnouncementContextAdaptor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_group;	// 16 = 0x10
    AFHomeAnnouncementObserver *_observer;	// 24 = 0x18
    AFHomeAnnouncementSnapshot *_snapshot;	// 32 = 0x20
    CDUnknownBlockType _snapshotUpdater;	// 40 = 0x28
    double _expirationDuration;	// 48 = 0x30
    AFInstanceContext *_instanceContext;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000020248c
- (void)_setSnapshot:(id)arg1;	// IMP=0x001000000020236f
- (void)_processAndEvaluateSnapshot:(id)arg1;	// IMP=0x0010000000201a74
- (void)_invalidate;	// IMP=0x00100000002019f5
- (void)homeAnnouncementObserver:(id)arg1 snapshotDidUpdateFrom:(id)arg2 to:(id)arg3;	// IMP=0x001000000020194d
- (void)homeAnnouncementObserver:(id)arg1 stateDidUpdateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x0010000000201947
- (void)invalidate;	// IMP=0x00100000002018e6
- (void)getSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002017f1
- (void)unregisterSnapshotUpdater;	// IMP=0x001000000020170e
- (void)registerSnapshotUpdater:(CDUnknownBlockType)arg1;	// IMP=0x0010000000201501
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x0010000000201379

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

