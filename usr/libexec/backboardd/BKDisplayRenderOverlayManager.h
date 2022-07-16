//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayBrightnessController, BKOrientationManager, CAWindowServer, NSMutableIndexSet, NSMutableSet;
@protocol OS_dispatch_queue;

@interface BKDisplayRenderOverlayManager : NSObject
{
    CAWindowServer *_windowServer;	// 8 = 0x8
    BKOrientationManager *_orientationManager;	// 16 = 0x10
    BKDisplayBrightnessController *_backlightManager;	// 24 = 0x18
    NSMutableSet *_activeOverlays;	// 32 = 0x20
    NSMutableSet *_overlaysDisablingUpdates;	// 40 = 0x28
    long long _lockedOrientation;	// 48 = 0x30
    _Bool _backlightLocked;	// 56 = 0x38
    NSMutableIndexSet *_frozenDisplayIDs;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x004000000005f956
- (void).cxx_destruct;	// IMP=0x002000000005efd0
@property(readonly, nonatomic) long long lockedOrientation; // @synthesize lockedOrientation=_lockedOrientation;
@property(readonly, nonatomic) _Bool backlightLocked; // @synthesize backlightLocked=_backlightLocked;
@property(readonly, nonatomic) NSMutableSet *overlaysDisablingUpdates; // @synthesize overlaysDisablingUpdates=_overlaysDisablingUpdates;
- (id)_updateWindowServerUpdatesForOverlays:(id)arg1;	// IMP=0x001000000005ee0c
- (void)_queue_setBacklightLocked:(_Bool)arg1;	// IMP=0x001000000005ed95
- (void)_queue_setLockedOrientation:(long long)arg1;	// IMP=0x001000000005ed0c
- (void)_queue_updateStateForActiveOverlayChange;	// IMP=0x001000000005ec05
- (void)_queue_freezeOverlay:(id)arg1;	// IMP=0x001000000005e95b
- (void)_queue_setOverlaysDisablingUpdates:(id)arg1;	// IMP=0x001000000005e907
- (_Bool)isShowingNonBootUIOverlays;	// IMP=0x001000000005e879
- (void)prepareForRestart;	// IMP=0x001000000005e82e
- (_Bool)freezeOverlay:(id)arg1;	// IMP=0x001000000005e760
- (_Bool)removeOverlay:(id)arg1 withAnimationSettings:(id)arg2;	// IMP=0x001000000005e662
- (_Bool)applyOverlay:(id)arg1 withAnimationSettings:(id)arg2;	// IMP=0x001000000005e564
@property(readonly, nonatomic) NSMutableSet *activeOverlays; // @synthesize activeOverlays=_activeOverlays;
- (id)activeOverlayWithDescriptor:(id)arg1;	// IMP=0x001000000005e3b0
- (id)description;	// IMP=0x001000000005e32a
- (id)_initWithPersistenceCoordinator:(id)arg1 orientationManager:(id)arg2 backlightManager:(id)arg3 windowServer:(id)arg4;	// IMP=0x001000000005dc40

@end
