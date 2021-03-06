//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBMutableWorkspaceConnectionsState, FBWorkspaceConnectionsStateStore, NSMutableDictionary;
@protocol FBWorkspaceEventDispatcherTarget;

@interface FBWorkspaceEventDispatcher : NSObject
{
    FBWorkspaceConnectionsStateStore *_store;	// 8 = 0x8
    id <FBWorkspaceEventDispatcherTarget> _target;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    NSMutableDictionary *_lock_workspaces;	// 32 = 0x20
    NSMutableDictionary *_lock_restartAssertions;	// 40 = 0x28
    FBMutableWorkspaceConnectionsState *_lock_mutableState;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0000000000005138
- (void).cxx_destruct;	// IMP=0x0000000000006a0e
- (void)noteHandshakeForWorkspaceRegistration:(id)arg1 withRemnants:(id)arg2;	// IMP=0x0000000000006220
- (id)registerWorkspaceWithProcessHandle:(id)arg1;	// IMP=0x000000000000570d
- (void)registerTarget:(id)arg1;	// IMP=0x0000000000005313
- (void)_mainThread_dispatchHandshakeFromWorkspace:(id)arg1 toTarget:(id)arg2;	// IMP=0x0000000000005224
- (id)init;	// IMP=0x000000000000500a
- (id)_initWithConnectionStore:(id)arg1;	// IMP=0x00000000000043fe

@end

