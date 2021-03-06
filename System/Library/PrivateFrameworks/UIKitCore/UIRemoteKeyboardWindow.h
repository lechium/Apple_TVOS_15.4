//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIContextCustomBinding-Protocol.h>
#import <UIKitCore/_UIScreenBasedObject-Protocol.h>

@class CAContext, FBSScene, FBSSceneIdentityToken, FBSSceneLayer, NSDictionary, NSString, UIScreen, _UIContextBinder;

__attribute__((visibility("hidden")))
@interface UIRemoteKeyboardWindow <_UIContextCustomBinding, _UIScreenBasedObject>
{
    NSDictionary *_perScreenOptions;	// 232 = 0xe8
    UIScreen *_intendedScreen;	// 240 = 0xf0
    _Bool _arePlaceholdersInitialised;	// 248 = 0xf8
    FBSSceneLayer *_keyboardSceneLayer;	// 256 = 0x100
    FBSScene *_activeScene;	// 264 = 0x108
    _Bool _resetRequired;	// 272 = 0x110
}

+ (id)remoteKeyboardWindowForScreen:(id)arg1 create:(_Bool)arg2;	// IMP=0x00000000009caea9
+ (_Bool)_isHostedInAnotherProcess;	// IMP=0x00000000009caea1
- (void)dealloc;	// IMP=0x00000000009cbb92
- (long long)_orientationForClassicPresentation;	// IMP=0x00000000009cbb81
- (void)endDisablingInterfaceAutorotation;	// IMP=0x00000000009cbb33
- (void)resetScene;	// IMP=0x00000000009cbaf1
- (void)_resetScene;	// IMP=0x00000000009cba91
@property(readonly, retain, nonatomic) FBSSceneIdentityToken *activeSceneIdentity;
- (void)detachBindable;	// IMP=0x00000000009cba04
- (_Bool)shouldDetachBindable;	// IMP=0x00000000009cb945
- (void)attachBindable;	// IMP=0x00000000009cb7b5
- (_Bool)shouldAttachBindable;	// IMP=0x00000000009cb722
- (id)_layerForCoordinateSpaceConversion;	// IMP=0x00000000009cb711
- (double)_adjustedWindowLevelFromLevel:(double)arg1;	// IMP=0x00000000009cb70b
- (_Bool)_isTextEffectsWindowNotificationOwner;	// IMP=0x00000000009cb703
- (_Bool)_isRemoteKeyboardWindow;	// IMP=0x00000000009cb6fb
- (_Bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x00000000009cb697
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(_Bool)arg3 duration:(double)arg4 force:(_Bool)arg5 isRotating:(_Bool)arg6;	// IMP=0x00000000009cb5df
- (void)setWindowLevel:(double)arg1;	// IMP=0x00000000009cb52f
- (_Bool)_isFullscreen;	// IMP=0x00000000009cb4e4
- (_Bool)_usesWindowServerHitTesting;	// IMP=0x00000000009cb4d2
- (long long)_orientationInSceneSpace;	// IMP=0x00000000009cb479
- (_Bool)_canIgnoreInteractionEvents;	// IMP=0x00000000009cb471
- (_Bool)_alwaysGetsContexts;	// IMP=0x00000000009cb469
- (_Bool)_isHostedInAnotherProcess;	// IMP=0x00000000009cb44f
- (_Bool)_isWindowServerHostingManaged;	// IMP=0x00000000009cb447
- (_Bool)_wantsSceneAssociation;	// IMP=0x00000000009cb43f
- (_Bool)_isAlwaysKeyboardWindow;	// IMP=0x00000000009cb437
- (void)invalidate;	// IMP=0x00000000009cb41b
@property(readonly) NSDictionary *_options;
@property(readonly) UIScreen *_intendedScreen;
- (_Bool)_matchingOptions:(id)arg1;	// IMP=0x00000000009cb3f1
- (id)_initWithScreen:(id)arg1 options:(id)arg2;	// IMP=0x00000000009cb34b
- (id)_initBasicWithScreen:(id)arg1 options:(id)arg2;	// IMP=0x00000000009cb1e0

// Remaining properties
@property(readonly, nonatomic) CDStruct_98d137ef _bindingDescription;
@property(nonatomic, setter=_setBoundContext:) __weak CAContext *_boundContext;
@property(nonatomic, setter=_setContextBinder:) __weak _UIContextBinder *_contextBinder;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

