//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>
#import <FrontBoard/FBSceneCreating-Protocol.h>
#import <FrontBoard/FBSceneEventCoordinating-Protocol.h>
#import <FrontBoard/FBSceneEventQueueDelegate-Protocol.h>

@class FBSMutableSceneDefinition, FBSceneEventQueue, FBSceneManagerObserver, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSString;
@protocol FBSceneWorkspaceDelegate;

@interface FBSceneWorkspace : NSObject <FBSceneCreating, FBSceneEventQueueDelegate, FBSceneEventCoordinating, BSDescriptionProviding>
{
    FBSceneManagerObserver *_delegate;	// 8 = 0x8
    NSMutableOrderedSet *_observers;	// 16 = 0x10
    NSMutableDictionary *_allScenesByID;	// 24 = 0x18
    NSMapTable *_providerToScenesMap;	// 32 = 0x20
    FBSceneEventQueue *_eventQueue;	// 40 = 0x28
    NSMutableArray *_pendingIdleEvents;	// 48 = 0x30
    unsigned long long _synchronizationBlockDepth;	// 56 = 0x38
    FBSMutableSceneDefinition *_buildingDefinition;	// 64 = 0x40
    _Bool _invalidated;	// 72 = 0x48
    _Bool _supportsLegacy;	// 73 = 0x49
    NSString *_identifier;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000484d2
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)eventQueueDidDrain:(id)arg1;	// IMP=0x00000000000484be
- (void)eventQueueDidUnlock:(id)arg1;	// IMP=0x00000000000484b4
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000048386
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000048336
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000048283
- (id)succinctDescription;	// IMP=0x0000000000048233
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;	// IMP=0x0000000000047b12
- (void)scene:(id)arg1 deactivateAndInvalidate:(_Bool)arg2 withError:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000046ee9
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;	// IMP=0x0000000000046807
- (void)scene:(id)arg1 handleUpdateToSettings:(id)arg2 withTransitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000004543f
- (void)scene:(id)arg1 enumerateAndCalloutToObserversWithEventName:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000045419
- (void)setClientIdentity:(id)arg1;	// IMP=0x0000000000045004
- (void)setSpecification:(id)arg1;	// IMP=0x0000000000044be7
- (void)setIdentifier:(id)arg1;	// IMP=0x0000000000044794
- (void)invalidate;	// IMP=0x0000000000042fea
- (id)createSceneWithDefinition:(id)arg1;	// IMP=0x0000000000040c8d
- (id)createScene:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040ba1
- (id)sceneWithIdentifier:(id)arg1;	// IMP=0x0000000000040b18
- (id)allScenes;	// IMP=0x0000000000040ad2
@property(nonatomic) __weak id <FBSceneWorkspaceDelegate> delegate; // @dynamic delegate;
- (void)dealloc;	// IMP=0x00000000000405e9
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000003fff2
- (id)init;	// IMP=0x000000000003ff77

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

