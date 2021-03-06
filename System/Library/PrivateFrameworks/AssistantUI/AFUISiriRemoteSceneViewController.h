//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantUI/AFUIViewControllerHosting-Protocol.h>
#import <AssistantUI/SiriUIPresentationRemoteControlling-Protocol.h>

@class AFApplicationInfo, NSArray, NSString, NSXPCConnection;
@protocol AFUISiriRemoteSceneViewControllerDataSource, AFUISiriRemoteSceneViewControllerDelegate;

@interface AFUISiriRemoteSceneViewController <AFUIViewControllerHosting, SiriUIPresentationRemoteControlling>
{
    _Bool _connectionHasBeenResumed;	// 8 = 0x8
    NSArray *_audioCategoriesDisablingVolumeHUD;	// 16 = 0x10
    _Bool _expectingInvalidation;	// 24 = 0x18
    id <AFUISiriRemoteSceneViewControllerDataSource> _dataSource;	// 32 = 0x20
    id <AFUISiriRemoteSceneViewControllerDelegate> _delegate;	// 40 = 0x28
    AFApplicationInfo *_viewServiceApplicationInfo;	// 48 = 0x30
    NSXPCConnection *_remoteConnection;	// 56 = 0x38
}

+ (id)remoteObjectInterface;	// IMP=0x000000000000a31c
+ (id)exportedInterface;	// IMP=0x000000000000a222
- (void).cxx_destruct;	// IMP=0x000000000000e791
@property(retain, nonatomic) NSXPCConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
@property(readonly, nonatomic) AFApplicationInfo *viewServiceApplicationInfo; // @synthesize viewServiceApplicationInfo=_viewServiceApplicationInfo;
@property(nonatomic) __weak id <AFUISiriRemoteSceneViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <AFUISiriRemoteSceneViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000000e6f7
- (void)dealloc;	// IMP=0x000000000000e642
- (void)takeScreenshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e580
- (void)didSuccessfullyHandleCommandsInDelayedActionCommand:(id)arg1;	// IMP=0x000000000000e4be
- (void)emitInstrumentationEvent:(id)arg1 atTime:(unsigned long long)arg2;	// IMP=0x000000000000e3f6
- (void)emitInstrumentationEvent:(id)arg1;	// IMP=0x000000000000e334
- (void)emitUIStateTransitionForSiriDismissalWithDismissalReason:(int)arg1;	// IMP=0x000000000000e25b
- (void)presentationStateUpdatedFromPresentationState:(long long)arg1 toPresentationState:(long long)arg2;	// IMP=0x000000000000e1ba
- (void)siriWillBeginTearDownForDismissalReason:(unsigned long long)arg1;	// IMP=0x000000000000e0f3
- (void)hasContentAtPoint:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000df70
- (void)setWaitingForTelephonyToStart:(_Bool)arg1;	// IMP=0x000000000000ded4
- (void)applicationDidBecomeActive;	// IMP=0x000000000000de47
- (void)applicationWillEnterForeground;	// IMP=0x000000000000ddba
- (void)applicationWillResignActive;	// IMP=0x000000000000dd2d
- (void)didReceiveShortTapActionWithRequestOptions:(id)arg1;	// IMP=0x000000000000dc6b
- (void)didReceiveBugButtonLongPress;	// IMP=0x000000000000dbde
- (void)didReceiveReportBugAction;	// IMP=0x000000000000db51
- (void)didReceiveHelpAction;	// IMP=0x000000000000dac4
- (void)setSession:(id)arg1;	// IMP=0x000000000000da02
- (void)setBottomContentInset:(double)arg1;	// IMP=0x000000000000d963
- (void)setStatusViewHeight:(double)arg1;	// IMP=0x000000000000d898
- (void)setStatusBarFrame:(struct CGRect)arg1;	// IMP=0x000000000000d7c3
- (void)siriKeyboardViewDidChange:(CDStruct_a82615c4 *)arg1;	// IMP=0x000000000000d727
- (void)startRequestForText:(id)arg1;	// IMP=0x000000000000d665
- (void)siriDidHidePasscodeUnlock;	// IMP=0x000000000000d5d8
- (void)siriWillHidePasscodeUnlockForResult:(long long)arg1;	// IMP=0x000000000000d53c
- (void)siriWillShowPasscodeUnlockAndCancelRequest:(_Bool)arg1;	// IMP=0x000000000000d4a0
- (void)siriWillShowPasscodeUnlock;	// IMP=0x000000000000d489
- (void)didReceiveOrbViewTapToCancelRequest;	// IMP=0x000000000000d3fc
- (void)siriDidDeactivate;	// IMP=0x000000000000d145
- (void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2 lockState:(unsigned long long)arg3;	// IMP=0x000000000000d01b
- (void)preloadPluginBundles;	// IMP=0x000000000000cf8e
- (void)preloadPresentationBundleWithIdentifier:(id)arg1;	// IMP=0x000000000000ce81
- (void)setRequestOptions:(id)arg1;	// IMP=0x000000000000cd74
- (void)siriDidActivateFromSource:(long long)arg1;	// IMP=0x000000000000ccd8
- (void)siriWillActivateFromSource:(long long)arg1;	// IMP=0x000000000000cbef
- (void)updateRemoteSceneWithFrontMostAppInterfaceOrientation:(long long)arg1;	// IMP=0x000000000000cb53
- (void)updateToPresentationWithIdentifier:(id)arg1 presentationProperties:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000c9f0
- (void)presentationDidPresentKeyboard;	// IMP=0x000000000000c966
- (void)requestHostBlurVisible:(_Bool)arg1 reason:(long long)arg2 fence:(id)arg3;	// IMP=0x000000000000c877
- (void)setShouldDismissForSwipesOutsideContent:(_Bool)arg1;	// IMP=0x000000000000c7d5
- (void)setShouldDismissForTapsOutsideContent:(_Bool)arg1;	// IMP=0x000000000000c733
- (void)setShouldDismissForTapOutsideContent:(_Bool)arg1;	// IMP=0x000000000000c691
- (void)servicePresentedIntentWithBundleId:(id)arg1;	// IMP=0x000000000000c61c
- (void)serviceViewControllerRequestsDismissalWithDismissalReason:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c4e8
- (void)serviceViewControllerRequestsPresentation:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c473
- (void)serviceDidDetectAudioRoutePickerTap;	// IMP=0x000000000000c427
- (void)serviceDidPresentConversationFromBreadcrumb;	// IMP=0x000000000000c3db
- (void)servicePresentationDidChangePeekMode:(unsigned long long)arg1;	// IMP=0x000000000000c38a
- (void)serviceDidDetectMicButtonLongPressEnded;	// IMP=0x000000000000c33e
- (void)serviceDidDetectMicButtonLongPressBegan;	// IMP=0x000000000000c2f2
- (void)serviceDidDetectMicButtonTap;	// IMP=0x000000000000c2a6
- (void)openURL:(id)arg1 bundleId:(id)arg2 inPlace:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000c201
- (void)serviceDidPresentUserInterface;	// IMP=0x000000000000c1b5
- (void)serviceDidExitUITrackingMode;	// IMP=0x000000000000c169
- (void)serviceDidEnterUITrackingMode;	// IMP=0x000000000000c11d
- (void)serviceCancelHIDEventDefferal;	// IMP=0x000000000000c0d1
- (void)serviceRequestsHIDEventDefferal;	// IMP=0x000000000000c085
- (void)serviceDidEndEditing;	// IMP=0x000000000000c039
- (void)serviceWillBeginEditing;	// IMP=0x000000000000bfed
- (void)serviceViewControllerRequestsKeyboardWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000bf78
- (void)serviceDidResetTextInput;	// IMP=0x000000000000bf2c
- (void)serviceDidRequestKeyboard:(_Bool)arg1 minimized:(_Bool)arg2;	// IMP=0x000000000000becc
- (void)serviceDidRequestKeyboard:(_Bool)arg1;	// IMP=0x000000000000be7b
- (void)pulseHelpButton;	// IMP=0x000000000000be2f
- (void)handlePasscodeUnlockWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000bdba
- (void)getScreenshotWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000bd09
- (void)setRequestHandlingStatus:(unsigned long long)arg1;	// IMP=0x000000000000bcb8
- (void)setBugReportingAvailable:(_Bool)arg1;	// IMP=0x000000000000bc67
- (void)setHelpButtonEmphasized:(_Bool)arg1;	// IMP=0x000000000000bc16
- (void)setStatusBarHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000bb96
- (void)setStatusBarHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000bb36
- (void)serviceDidDismissViewControllerWithStatusBarStyle:(long long)arg1;	// IMP=0x000000000000bae5
- (void)serviceWillDismissViewControllerWithStatusBarStyle:(long long)arg1;	// IMP=0x000000000000ba94
- (void)serviceDidPresentViewControllerWithStatusBarStyle:(long long)arg1;	// IMP=0x000000000000ba43
- (void)serviceWillPresentViewControllerWithStatusBarStyle:(long long)arg1;	// IMP=0x000000000000b9f2
- (void)setStatusViewUserInteractionEnabled:(_Bool)arg1;	// IMP=0x000000000000b9a1
- (void)setStatusViewDisabled:(_Bool)arg1;	// IMP=0x000000000000b950
- (void)setCarDisplaySnippetMode:(long long)arg1;	// IMP=0x000000000000b8ff
- (void)setFullScreenDimmingLayerVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000b89f
- (void)setTypeToSiriViewHidden:(_Bool)arg1;	// IMP=0x000000000000b84e
- (void)setStatusViewHidden:(_Bool)arg1;	// IMP=0x000000000000b7fd
- (void)siriIdleAndQuietStatusDidChange:(_Bool)arg1;	// IMP=0x000000000000b7ac
- (void)serviceDidRequestCurrentTextInput:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b737
- (void)serviceUserRelevantEventDidOccur;	// IMP=0x000000000000b6eb
- (void)serviceStartRequestWithOptions:(id)arg1;	// IMP=0x000000000000b676
- (void)serviceBulletinWithIdentifier:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b5bc
- (void)serviceStartGuidedAccess;	// IMP=0x000000000000b570
- (void)serviceRequestsDismissalWithUserInfo:(id)arg1 withReason:(unsigned long long)arg2;	// IMP=0x000000000000b43c
- (void)serviceRequestsActivationSourceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b3b9
- (id)sessionDelegate;	// IMP=0x000000000000b357
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000000b2a2
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000000b1fc
- (void)_handleSceneDidActivateWithIdentifier:(id)arg1;	// IMP=0x000000000000b080
- (void)_audioCategoriesDisablingVolumeHUDDidChangeTo:(id)arg1;	// IMP=0x000000000000aef4
- (void)_handleInvalidationForReason:(unsigned long long)arg1 explanation:(id)arg2;	// IMP=0x000000000000ac53
- (void)sceneController:(id)arg1 willInvalidateScene:(id)arg2 forReason:(unsigned long long)arg3;	// IMP=0x000000000000ac2e
- (void)startHostingSceneForConfiguration:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a990
- (void)_interrupted;	// IMP=0x000000000000a8e7
- (void)_invalidated;	// IMP=0x000000000000a7cd
- (id)serviceViewControllerProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a69e
- (id)serviceViewControllerProxy;	// IMP=0x000000000000a64e
- (id)_connection;	// IMP=0x0000000000009df9
- (void)invalidate;	// IMP=0x0000000000009d55
- (id)init;	// IMP=0x0000000000009c95

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

