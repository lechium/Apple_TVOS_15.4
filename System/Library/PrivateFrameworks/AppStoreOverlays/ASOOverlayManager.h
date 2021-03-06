//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreOverlays/_UISceneComponentProviding-Protocol.h>

@class ASOOverlayViewController, ASOOverlayWindow, NSString, UIScene;

@interface ASOOverlayManager : NSObject <_UISceneComponentProviding>
{
    UIScene *_scene;	// 8 = 0x8
    ASOOverlayWindow *_window;	// 16 = 0x10
    ASOOverlayViewController *_viewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000076b7
@property(retain, nonatomic) ASOOverlayViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, retain, nonatomic) ASOOverlayWindow *window; // @synthesize window=_window;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (id)makeViewControllerIfNeeded;	// IMP=0x000000000000756d
- (void)didFinishDismissingOverlay;	// IMP=0x0000000000007481
- (void)willStartPresentingOverlay;	// IMP=0x000000000000739a
- (void)dismissOverlay;	// IMP=0x0000000000007276
- (void)presentOverlay:(id)arg1;	// IMP=0x00000000000070e9
- (id)initWithWindowScene:(id)arg1;	// IMP=0x0000000000007058
- (id)initWithScene:(id)arg1;	// IMP=0x0000000000006f3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

