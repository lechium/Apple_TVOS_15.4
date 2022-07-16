//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBWorkspaceConnectionsState, NSString;
@protocol OS_dispatch_queue;

@interface FBWorkspaceConnectionsStateStore : NSObject
{
    NSString *_path1;	// 8 = 0x8
    NSString *_path2;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    FBWorkspaceConnectionsState *_queue_state;	// 32 = 0x20
    long long _queue_lastBuffer;	// 40 = 0x28
    long long _queue_nextWriteFailure;	// 48 = 0x30
    _Bool _queue_writeFailedOnce;	// 56 = 0x38
}

+ (_Bool)_storeState:(id)arg1 toPath:(id)arg2 withGeneration:(_Bool)arg3 injectedFailure:(inout long long *)arg4;	// IMP=0x000000000006c0fb
+ (void)_unlinkShmPath:(id)arg1 graceful:(_Bool)arg2;	// IMP=0x000000000006bee4
+ (id)_loadStateFromPath:(id)arg1 outGeneration:(out _Bool *)arg2 outExisted:(out _Bool *)arg3;	// IMP=0x000000000006b607
+ (void)_unlinkAllForIdentifier:(id)arg1;	// IMP=0x000000000006b3d0
- (void).cxx_destruct;	// IMP=0x000000000006cbbc
- (void)_setFailureModeForNextWrite:(long long)arg1;	// IMP=0x000000000006b36f
@property(readonly, nonatomic) long long _lastUsedBuffer;
@property(copy, nonatomic) FBWorkspaceConnectionsState *state;
- (id)_initWithIdentifier:(id)arg1;	// IMP=0x000000000006a6eb
- (id)init;	// IMP=0x000000000006a5bd

@end
