//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoard/FBSSceneUpdater-Protocol.h>
#import <FrontBoard/FBSWorkspaceScenesSource-Protocol.h>
#import <FrontBoard/FBSceneClient-Protocol.h>
#import <FrontBoard/FBSceneClientProvider-Protocol.h>
#import <FrontBoard/FBSceneClientProviderInternal-Protocol.h>

@class FBSceneClientProviderInvalidationAction, NSMutableArray, NSMutableDictionary, NSString;
@protocol NSCopying;

@interface FBLocalSynchronousSceneClientProvider : NSObject <FBSWorkspaceScenesSource, FBSceneClient, FBSSceneUpdater, FBSceneClientProviderInternal, FBSceneClientProvider>
{
    _Bool _workspaceInitialized;	// 8 = 0x8
    NSMutableArray *_pendingSceneCreatesBeforeFBSWorkspaceInitialization;	// 16 = 0x10
    FBSceneClientProviderInvalidationAction *_invalidationAction;	// 24 = 0x18
    NSMutableDictionary *_localSceneInfoByIdentifier;	// 32 = 0x20
    NSMutableDictionary *_hostsByIdentifier;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000000052561
- (void).cxx_destruct;	// IMP=0x0000000000054852
- (void)_sendSceneCreateFBSWorkspaceDelegateForSceneInfo:(id)arg1 transitionContext:(id)arg2;	// IMP=0x00000000000545e8
- (id)sceneWithIdentifier:(id)arg1;	// IMP=0x0000000000054594
- (id)scenes;	// IMP=0x00000000000544a3
@property(readonly, nonatomic) NSObject<NSCopying> *identifier;
- (void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;	// IMP=0x000000000005447e
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;	// IMP=0x0000000000054397
- (void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;	// IMP=0x0000000000054278
- (id)endpoint;	// IMP=0x0000000000054232
- (id)hostProcess;	// IMP=0x00000000000541db
- (id)callOutQueue;	// IMP=0x0000000000054194
- (void)host:(id)arg1 didReceiveActions:(id)arg2;	// IMP=0x000000000005408b
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000053c2e
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000537da
- (void)unregisterHost:(id)arg1;	// IMP=0x0000000000053463
- (id)registerHost:(id)arg1 settings:(id)arg2 initialClientSettings:(id)arg3 fromRemnant:(id)arg4 error:(out id *)arg5;	// IMP=0x00000000000527c2
- (void)registerInvalidationAction:(id)arg1;	// IMP=0x000000000005261a
- (id)fbsSceneWithIdentifier:(id)arg1;	// IMP=0x00000000000525c6
- (id)_init;	// IMP=0x00000000000520ea
- (id)init;	// IMP=0x0000000000051fbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

