//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <Preferences/PSController-Protocol.h>
#import <Preferences/UINavigationControllerDelegate-Protocol.h>

@class NSMutableSet, NSString, PSSpecifier, PSStackPushAnimationController;

@interface PSRootController : UINavigationController <PSController, UINavigationControllerDelegate>
{
    PSSpecifier *_specifier;	// 8 = 0x8
    NSMutableSet *_tasks;	// 16 = 0x10
    _Bool _deallocating;	// 24 = 0x18
    PSStackPushAnimationController *_stackAnimationController;	// 32 = 0x20
    unsigned long long _supportedOrientationsOverride;	// 40 = 0x28
}

+ (_Bool)processedBundle:(id)arg1 parentController:(id)arg2 parentSpecifier:(id)arg3 bundleControllers:(id *)arg4 settings:(id)arg5;	// IMP=0x0000000000039e82
+ (id)readPreferenceValue:(id)arg1;	// IMP=0x000000000003853f
+ (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000003845c
+ (void)writePreference:(id)arg1;	// IMP=0x0000000000037f23
- (void).cxx_destruct;	// IMP=0x000000000003c6cd
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000003c507
- (void)_setNavigationBarHidden:(_Bool)arg1 edge:(unsigned long long)arg2 duration:(double)arg3;	// IMP=0x000000000003c4a6
- (void)pushControllersAsStack:(id)arg1;	// IMP=0x000000000003bde0
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000003bd97
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x000000000003bd6a
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000003bb4a
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000003b78d
- (id)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000000003b5cd
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000003b40d
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000000003b230
- (void)_delayedControllerReleaseAfterPop:(id)arg1;	// IMP=0x000000000003b045
- (_Bool)canBeShownFromSuspendedState;	// IMP=0x000000000003b03d
- (void)didDismissFormSheetView;	// IMP=0x000000000003ae8a
- (void)willDismissFormSheetView;	// IMP=0x000000000003acd7
- (void)didDismissPopupView;	// IMP=0x000000000003ab24
- (void)willDismissPopupView;	// IMP=0x000000000003a971
- (void)logSettingsPath;	// IMP=0x000000000003a376
- (id)aggregateDictionaryPath;	// IMP=0x0000000000039e9c
- (id)rootController;	// IMP=0x0000000000039e79
- (void)setRootController:(id)arg1;	// IMP=0x0000000000039e73
- (id)parentController;	// IMP=0x0000000000039e6b
- (void)dealloc;	// IMP=0x0000000000039bef
- (_Bool)deallocating;	// IMP=0x0000000000039bdf
- (void)didWake;	// IMP=0x0000000000039b3e
- (void)didUnlock;	// IMP=0x0000000000039a9d
- (void)willUnlock;	// IMP=0x00000000000399fc
- (void)didLock;	// IMP=0x000000000003995b
- (void)suspend;	// IMP=0x00000000000398ba
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000003989e
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;	// IMP=0x000000000003988d
- (void)sendWillBecomeActive;	// IMP=0x00000000000397dc
- (void)sendWillResignActive;	// IMP=0x000000000003972b
- (void)willBecomeActive;	// IMP=0x0000000000039725
- (void)willResignActive;	// IMP=0x000000000003971f
- (void)statusBarWillChangeHeight:(id)arg1;	// IMP=0x00000000000393fc
- (void)showLeftButton:(id)arg1 withStyle:(long long)arg2 rightButton:(id)arg3 withStyle:(long long)arg4;	// IMP=0x0000000000039277
- (void)handleURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003922a
- (void)handleURL:(id)arg1;	// IMP=0x0000000000039224
- (void)showController:(id)arg1 animate:(_Bool)arg2;	// IMP=0x0000000000039182
- (void)showController:(id)arg1;	// IMP=0x000000000003916e
- (void)pushController:(id)arg1 animate:(_Bool)arg2;	// IMP=0x000000000003915c
- (void)pushController:(id)arg1;	// IMP=0x000000000003914a
- (id)specifier;	// IMP=0x0000000000039135
- (void)setSpecifier:(id)arg1;	// IMP=0x00000000000390e4
- (void)setParentController:(id)arg1;	// IMP=0x00000000000390de
- (void)statusBarWillAnimateByHeight:(double)arg1;	// IMP=0x00000000000390d8
- (id)specifiers;	// IMP=0x00000000000390d0
- (id)contentViewForTopController;	// IMP=0x0000000000039063
- (_Bool)busy;	// IMP=0x000000000003903f
- (void)taskFinished:(id)arg1;	// IMP=0x0000000000038f5d
- (void)addTask:(id)arg1;	// IMP=0x0000000000038f03
- (_Bool)taskIsRunning:(id)arg1;	// IMP=0x0000000000038ee6
- (id)tasksDescription;	// IMP=0x0000000000038d31
- (id)initWithTitle:(id)arg1 identifier:(id)arg2;	// IMP=0x0000000000038bab
- (id)readPreferenceValue:(id)arg1;	// IMP=0x0000000000038b92
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000038526

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

