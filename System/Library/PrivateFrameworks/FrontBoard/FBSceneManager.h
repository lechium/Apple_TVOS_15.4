//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoard/FBWorkspaceEventDispatcherTarget-Protocol.h>

@class FBSceneWorkspace, NSString;
@protocol FBSceneManagerDelegate;

@interface FBSceneManager : NSObject <FBWorkspaceEventDispatcherTarget>
{
    FBSceneWorkspace *_workspace;	// 8 = 0x8
    _Bool _suppressConnectionHandshakes;	// 16 = 0x10
}

+ (void)synchronizeChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000004d39c
+ (id)sharedInstance;	// IMP=0x000000000004cbe5
+ (id)observeKeyboardSceneAvailability:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d507
+ (void)setKeyboardScene:(id)arg1;	// IMP=0x000000000000d1fb
+ (void)_clearKeyboardScene;	// IMP=0x000000000000d1de
+ (id)keyboardScene;	// IMP=0x000000000000d1c8
- (void).cxx_destruct;	// IMP=0x000000000004e62e
@property(nonatomic, setter=_setSuppressConnectionHandshakes:) _Bool _suppressConnectionHandshakes; // @synthesize _suppressConnectionHandshakes;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)didReceiveHandshake:(id)arg1;	// IMP=0x000000000004e434
- (id)_createSceneWithDefinition:(id)arg1 settings:(id)arg2 initialClientSettings:(id)arg3 transitionContext:(id)arg4 fromRemnant:(id)arg5 usingClientProvider:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000004e426
- (_Bool)_isSynchronizingSceneUpdates;	// IMP=0x000000000004e418
- (id)newSceneIdentityTokenForIdentity:(id)arg1;	// IMP=0x000000000004e213
- (void)destroyScene:(id)arg1 withTransitionContext:(id)arg2;	// IMP=0x000000000004df83
- (id)createSceneWithIdentifier:(id)arg1 settings:(id)arg2 initialClientSettings:(id)arg3 clientProvider:(id)arg4 transitionContext:(id)arg5;	// IMP=0x000000000004dcc5
- (id)createSceneFromRemnant:(id)arg1 withSettings:(id)arg2 transitionContext:(id)arg3;	// IMP=0x000000000004d9a1
- (id)createSceneWithIdentifier:(id)arg1 parameters:(id)arg2 clientProvider:(id)arg3 transitionContext:(id)arg4;	// IMP=0x000000000004d62c
- (id)createSceneWithDefinition:(id)arg1 initialParameters:(id)arg2;	// IMP=0x000000000004d413
- (id)createSceneWithDefinition:(id)arg1;	// IMP=0x000000000004d3fd
- (id)sceneFromIdentityTokenStringRepresentation:(id)arg1;	// IMP=0x000000000004d11b
- (id)sceneFromIdentityToken:(id)arg1;	// IMP=0x000000000004cfc4
- (id)scenesPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000004ce9d
- (void)enumerateScenesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004cd4b
- (id)sceneWithIdentifier:(id)arg1;	// IMP=0x000000000004cd35
- (void)removeObserver:(id)arg1;	// IMP=0x000000000004cd27
- (void)addObserver:(id)arg1;	// IMP=0x000000000004cd19
@property(nonatomic) __weak id <FBSceneManagerDelegate> delegate;
- (id)init;	// IMP=0x000000000004cc8c

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

