//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSystemOverlayController;

@interface PBNowPlayingManager : NSObject
{
    _Bool _presenting;	// 8 = 0x8
    _Bool _nowPlayingAppFocused;	// 9 = 0x9
    PBSystemOverlayController *_overlayController;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00200000001b1ce0
+ (id)dependencyDescription;	// IMP=0x00100000001b1a40
- (void).cxx_destruct;	// IMP=0x00200000001b3ec0
@property(retain, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(readonly, nonatomic) _Bool nowPlayingAppFocused; // @synthesize nowPlayingAppFocused=_nowPlayingAppFocused;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000001b3c90
- (void)sceneManager:(id)arg1 didChangeCurrentApplicationFromSceneHandle:(id)arg2 toSceneHandle:(id)arg3;	// IMP=0x00100000001b3bf0
- (void)screenSaverManagerDidPresentScreenSaver:(id)arg1;	// IMP=0x00100000001b3ae0
- (void)appTransitioner:(id)arg1 willBeginAppTransition:(id)arg2;	// IMP=0x00100000001b3950
- (void)overlayController:(id)arg1 didDismissSession:(id)arg2;	// IMP=0x00100000001b38a0
- (void)overlayController:(id)arg1 didPresentSession:(id)arg2;	// IMP=0x00100000001b37f0
- (_Bool)dismissNowPlaying;	// IMP=0x00100000001b3700
- (void)activateNowPlayingForReason:(unsigned long long)arg1 options:(id)arg2;	// IMP=0x00100000001b2b30
- (void)_updateNowPlayingAppFocused;	// IMP=0x00100000001b2a10
- (void)_updateNowPlayingAppFocusedUsingMediaRemoteObserver:(id)arg1 siriManager:(id)arg2 airPlayManager:(id)arg3 sceneManager:(id)arg4 processManager:(id)arg5;	// IMP=0x00100000001b2600
- (void)dealloc;	// IMP=0x00100000001b2480
- (id)init;	// IMP=0x00100000001b1dd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

