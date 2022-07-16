//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIButton, UIWindow;

__attribute__((visibility("hidden")))
@interface UIZoomViewController
{
    UIWindow *_window;	// 400 = 0x190
    UIButton *_zoomButton;	// 408 = 0x198
}

- (void).cxx_destruct;	// IMP=0x0000000000ef33c8
- (id)_window;	// IMP=0x0000000000ef33b7
- (id)screen;	// IMP=0x0000000000ef3375
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1 forWindow:(id)arg2;	// IMP=0x0000000000ef335f
- (void)_suspendAnimationStarted:(id)arg1;	// IMP=0x0000000000ef3282
- (void)_applicationDidFinishLaunching:(id)arg1;	// IMP=0x0000000000ef31a0
- (void)_zoomOrientationAnimationFinished;	// IMP=0x0000000000ef3064
- (void)_zoomOrientationChange:(id)arg1;	// IMP=0x0000000000ef2ea7
- (void)loadView;	// IMP=0x0000000000ef2d1a
- (void)_setupPositioningAndRotationForInterfaceOrientation:(long long)arg1 offscreen:(_Bool)arg2;	// IMP=0x0000000000ef2a63
- (void)_updateZoomButton;	// IMP=0x0000000000ef28f7
- (void)_changeZoom:(id)arg1;	// IMP=0x0000000000ef283e
- (_Bool)isClassicControlWindow:(id)arg1;	// IMP=0x0000000000ef282a
- (void)dealloc;	// IMP=0x0000000000ef279e
- (id)init;	// IMP=0x0000000000ef2689

@end
