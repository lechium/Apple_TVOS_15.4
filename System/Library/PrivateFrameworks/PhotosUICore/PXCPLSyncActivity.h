//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSProgress;
@protocol OS_dispatch_queue;

@interface PXCPLSyncActivity
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    unsigned long long _syncProgressState;	// 16 = 0x10
    id _syncProgressSubscriber;	// 24 = 0x18
    NSProgress *_syncProgress;	// 32 = 0x20
    _Bool _isSyncing;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000377c97
@property(readonly, nonatomic) _Bool isSyncing; // @synthesize isSyncing=_isSyncing;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000377c3d
- (void)_updateSyncProgressState;	// IMP=0x0000000000377b8d
- (void)_updateIsSyncing;	// IMP=0x0000000000377b50
- (void)_unsubscribeFromSyncProgress;	// IMP=0x00000000003779ea
- (void)_queue_subscribeToSyncProgress;	// IMP=0x0000000000377768
- (void)_setSyncProgressState:(unsigned long long)arg1;	// IMP=0x000000000037763c
- (void)_setSyncProgress:(id)arg1;	// IMP=0x000000000037750f
- (void)setIsSyncing:(_Bool)arg1;	// IMP=0x0000000000377488
- (id)description;	// IMP=0x000000000037743f
- (void)dealloc;	// IMP=0x0000000000377401
- (id)init;	// IMP=0x00000000003772dd

@end

