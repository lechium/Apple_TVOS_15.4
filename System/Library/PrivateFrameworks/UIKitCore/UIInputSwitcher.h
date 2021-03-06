//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIDelayedAction, UIInputSwitcherView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcher : NSObject
{
    UIDelayedAction *m_showSwitcherDelay;	// 8 = 0x8
    UIDelayedAction *m_hideSwitcherDelay;	// 16 = 0x10
    int m_state;	// 24 = 0x18
    UIInputSwitcherView *m_switcherView;	// 32 = 0x20
    double m_lastGlobeKeyUpTime;	// 40 = 0x28
    NSString *_newMode;	// 48 = 0x30
    _Bool _usingCapsLockLanguageSwitch;	// 56 = 0x38
    _Bool _dismissingEmojiPopover;	// 57 = 0x39
    NSString *_loadedIdentifier;	// 64 = 0x40
}

+ (id)activeInstance;	// IMP=0x00000000007f2ec4
+ (id)sharedInstance;	// IMP=0x00000000007f2e88
- (void).cxx_destruct;	// IMP=0x00000000007f4a96
@property(nonatomic) _Bool dismissingEmojiPopover; // @synthesize dismissingEmojiPopover=_dismissingEmojiPopover;
@property(nonatomic) _Bool usingCapsLockLanguageSwitch; // @synthesize usingCapsLockLanguageSwitch=_usingCapsLockLanguageSwitch;
@property(copy, nonatomic) NSString *loadedIdentifier; // @synthesize loadedIdentifier=_loadedIdentifier;
- (_Bool)handleModifiersChangedEvent:(id)arg1;	// IMP=0x00000000007f487e
- (_Bool)needsFullHUD;	// IMP=0x00000000007f471c
- (_Bool)handleEmojiPicker;	// IMP=0x00000000007f451d
- (_Bool)handleNavigationEvent:(id)arg1;	// IMP=0x00000000007f4242
- (_Bool)handleGlobeKeyEvent:(id)arg1 switcherIsVisible:(_Bool)arg2;	// IMP=0x00000000007f409f
- (_Bool)handleSwitchingKeyEvent:(id)arg1;	// IMP=0x00000000007f3de0
- (void)updateHardwareLayout;	// IMP=0x00000000007f3cf2
- (_Bool)switchMode:(id)arg1 withHUD:(_Bool)arg2 withDelay:(_Bool)arg3;	// IMP=0x00000000007f39c8
- (_Bool)switchMode:(id)arg1 withHUD:(_Bool)arg2 withDelay:(_Bool)arg3 fromCapsLock:(_Bool)arg4;	// IMP=0x00000000007f3945
- (_Bool)handleSwitchCommand:(_Bool)arg1 withHUD:(_Bool)arg2 withDelay:(_Bool)arg3;	// IMP=0x00000000007f3869
- (_Bool)handleSwitchCommand:(_Bool)arg1;	// IMP=0x00000000007f384c
- (id)inputModeIdentifierWithNextFlag:(_Bool)arg1;	// IMP=0x00000000007f36b8
- (_Bool)isVisibleOrHiding;	// IMP=0x00000000007f3681
- (void)hideSwitcherIfNeeded;	// IMP=0x00000000007f3667
- (_Bool)isVisible;	// IMP=0x00000000007f365a
- (void)clearShowSwitcherTimer;	// IMP=0x00000000007f3626
- (void)cancelShowSwitcherTimer;	// IMP=0x00000000007f3609
- (void)touchShowSwitcherTimer;	// IMP=0x00000000007f357b
- (void)showSwitcherWithoutAutoHide;	// IMP=0x00000000007f3567
- (void)showSwitcherWithAutoHide;	// IMP=0x00000000007f3550
- (void)showSwitcherShouldAutoHide:(_Bool)arg1;	// IMP=0x00000000007f3468
- (void)_showSwitcherViewAsHUD;	// IMP=0x00000000007f340c
- (void)clearHideSwitcherTimer;	// IMP=0x00000000007f33d8
- (void)touchHideSwitcherTimer;	// IMP=0x00000000007f3310
- (void)cancelHideSwitcherTimer;	// IMP=0x00000000007f32f3
- (void)cleanUpAfterHide;	// IMP=0x00000000007f3289
- (void)hideSwitcher;	// IMP=0x00000000007f3016
- (void)handleRotate:(id)arg1;	// IMP=0x00000000007f3004
- (void)dealloc;	// IMP=0x00000000007f2f66
- (id)init;	// IMP=0x00000000007f2ed5

@end

