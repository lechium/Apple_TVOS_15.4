//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/FBApplicationProcessLaunchTransactionObserver-Protocol.h>
#import <FrontBoard/FBUpdateSceneTransactionObserver-Protocol.h>

@class FBApplicationProcess, FBApplicationProcessLaunchTransaction, FBSSceneClientIdentity, NSMutableArray, NSString;

@interface FBApplicationUpdateScenesTransaction <FBApplicationProcessLaunchTransactionObserver, FBUpdateSceneTransactionObserver>
{
    FBSSceneClientIdentity *_clientIdentity;	// 8 = 0x8
    FBApplicationProcessLaunchTransaction *_processLaunchTransaction;	// 16 = 0x10
    _Bool _processLaunched;	// 24 = 0x18
    _Bool _waitsForSceneCommits;	// 25 = 0x19
    NSMutableArray *_updateSceneTransactions;	// 32 = 0x20
    NSMutableArray *_pendingUpdateSceneBlocks;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000011272
@property(nonatomic) _Bool waitsForSceneCommits; // @synthesize waitsForSceneCommits=_waitsForSceneCommits;
- (void)updateSceneTransactionDidCommitUpdate:(id)arg1;	// IMP=0x0000000000011113
- (void)updateSceneTransactionWillCommitUpdate:(id)arg1;	// IMP=0x0000000000010fc4
- (void)updateSceneTransactionWillUpdateScene:(id)arg1;	// IMP=0x0000000000010eac
- (void)updateSceneTransactionDidCreateScene:(id)arg1;	// IMP=0x0000000000010d94
- (void)transaction:(id)arg1 didLaunchProcess:(id)arg2;	// IMP=0x0000000000010cac
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;	// IMP=0x0000000000010ba4
- (void)_executeSceneUpdatesIfAppropriate;	// IMP=0x0000000000010880
- (void)_noteDidCommitUpdateForScene:(id)arg1;	// IMP=0x000000000001087a
- (void)_noteWillCommitUpdateForScene:(id)arg1;	// IMP=0x0000000000010874
- (id)_customizedDescriptionProperties;	// IMP=0x00000000000107d0
- (void)_didComplete;	// IMP=0x000000000001064b
- (void)_willFailWithReason:(id)arg1;	// IMP=0x00000000000104f1
- (void)_willInterruptWithReason:(id)arg1;	// IMP=0x0000000000010397
- (_Bool)_canBeInterrupted;	// IMP=0x000000000001038f
- (_Bool)_shouldFailForChildTransaction:(id)arg1;	// IMP=0x000000000001033c
- (void)_didRemoveChildTransaction:(id)arg1;	// IMP=0x00000000000102a1
- (void)_willAddChildTransaction:(id)arg1;	// IMP=0x000000000001021e
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000101ef
- (void)addObserver:(id)arg1;	// IMP=0x00000000000101c0
- (void)_updateSceneWithIdentity:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;	// IMP=0x000000000000fc83
- (void)updateSceneWithIdentity:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;	// IMP=0x000000000000fc71
- (void)updateSceneWithIdentifier:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;	// IMP=0x000000000000fbd5
@property(readonly, nonatomic) FBApplicationProcess *process;
@property(readonly, nonatomic) NSString *bundleID;
- (id)initWithProcessIdentity:(id)arg1 executionContextProvider:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f950
- (id)initWithClientIdentity:(id)arg1 executionContextProvider:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f712
- (id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f603
- (id)init;	// IMP=0x000000000000f4d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

