//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIViewHost-Protocol.h>

@class NSMutableDictionary, NSString, UIKBRenderConfig, UIScreen;

__attribute__((visibility("hidden")))
@interface UIInputSetContainerView <_UIViewHost>
{
    UIKBRenderConfig *_renderConfig;	// 112 = 0x70
    NSMutableDictionary *_hostedViews;	// 120 = 0x78
    _Bool _disableGeometryObserverNotifications;	// 128 = 0x80
    struct CGPoint _offsetOrigin;	// 136 = 0x88
}

+ (_Bool)_notifyOnExplicitLayout;	// IMP=0x0000000000938755
+ (_Bool)_shouldHitTestInputViewFirst;	// IMP=0x00000000009384d1
@property(nonatomic) struct CGPoint offsetOrigin; // @synthesize offsetOrigin=_offsetOrigin;
- (_Bool)_isTransparentFocusRegion;	// IMP=0x0000000000938b74
- (void)setCenter:(struct CGPoint)arg1;	// IMP=0x0000000000938b33
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000938ad5
- (_Bool)_disableGeometryObserverNotification;	// IMP=0x0000000000938a5e
- (void)performWithoutGeometryObserverNotifications:(CDUnknownBlockType)arg1;	// IMP=0x0000000000938a38
- (void)_didRemoveSubview:(id)arg1;	// IMP=0x0000000000938968
- (void)didAddSubview:(id)arg1;	// IMP=0x00000000009388db
- (_Bool)hasHostedViews;	// IMP=0x00000000009388b7
- (void)addHostedView:(id)arg1 withViewRemovalHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000938788
@property(readonly, retain) UIScreen *hostingScreen;
- (void)_setAccessoryViewFrame:(struct CGRect)arg1;	// IMP=0x00000000009386e4
- (struct CGRect)_accessoryViewFrame;	// IMP=0x000000000093868b
- (id)_inputWindowController;	// IMP=0x000000000093864c
- (void)_setRenderConfig:(id)arg1;	// IMP=0x00000000009385ef
- (id)_inheritedRenderConfig;	// IMP=0x00000000009385de
- (void)dealloc;	// IMP=0x000000000093857a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000009384d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

