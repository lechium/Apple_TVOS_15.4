//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSCompoundAssertion, NSString, PBSSystemHomeUIStreamState, PBSystemHomeUIServiceRemoteViewController, PBSystemOverlayController, RBSAssertion, TVSObserverSet;

@interface PBHomeUIManager : NSObject
{
    _Bool _presenting;	// 8 = 0x8
    PBSystemOverlayController *_overlayController;	// 16 = 0x10
    TVSObserverSet *_observers;	// 24 = 0x18
    PBSystemHomeUIServiceRemoteViewController *_remoteViewController;	// 32 = 0x20
    BSCompoundAssertion *_preheatCompoundAssertion;	// 40 = 0x28
    RBSAssertion *_preheatProcessAssertion;	// 48 = 0x30
}

+ (id)_sceneWorkspace;	// IMP=0x0020000000107270
+ (id)_processExecutionContextWithLaunchIntent:(long long)arg1;	// IMP=0x00100000001071c0
+ (id)_processIdentity;	// IMP=0x0010000000107180
+ (id)sharedInstance;	// IMP=0x0010000000105330
+ (id)dependencyDescription;	// IMP=0x00100000001051c0
- (void).cxx_destruct;	// IMP=0x0020000000107940
@property(readonly, nonatomic) RBSAssertion *preheatProcessAssertion; // @synthesize preheatProcessAssertion=_preheatProcessAssertion;
@property(readonly, nonatomic) BSCompoundAssertion *preheatCompoundAssertion; // @synthesize preheatCompoundAssertion=_preheatCompoundAssertion;
@property(readonly, nonatomic) __weak PBSystemHomeUIServiceRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(readonly, nonatomic) TVSObserverSet *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void)pictureInPictureManager:(id)arg1 didCancelPictureInPictureForApplication:(id)arg2;	// IMP=0x0010000000107750
- (void)remoteViewController:(id)arg1 didUpdateStreamState:(id)arg2;	// IMP=0x00100000001076d0
- (void)remoteViewController:(id)arg1 didUpdateRequestsVisibility:(_Bool)arg2;	// IMP=0x00100000001074f0
- (void)overlayController:(id)arg1 didDismissSession:(id)arg2;	// IMP=0x0010000000107440
- (void)overlayController:(id)arg1 willPresentSession:(id)arg2;	// IMP=0x00100000001073a0
- (void)_notifyObserversStreamStateDidUpdate:(id)arg1;	// IMP=0x0010000000106fe0
- (void)_preheatSystemHomeUIServiceIfNeeded;	// IMP=0x0010000000106990
- (_Bool)_tryActivatingCameraUsingExistingSceneWithContext:(id)arg1;	// IMP=0x0010000000106840
- (void)_dismiss:(CDUnknownBlockType)arg1;	// IMP=0x00100000001066c0
- (void)_updateIsPresenting;	// IMP=0x00100000001065c0
- (id)preheatSystemHomeUIServiceForReason:(id)arg1;	// IMP=0x00100000001060f0
- (_Bool)dismissWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000106030
- (void)presentCameraWithContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000105a20
- (id)addObserver:(id)arg1;	// IMP=0x00100000001059b0
@property(readonly, nonatomic) PBSSystemHomeUIStreamState *currentStreamState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000001057b0
- (void)dealloc;	// IMP=0x0010000000105720
- (id)init;	// IMP=0x0010000000105420

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

