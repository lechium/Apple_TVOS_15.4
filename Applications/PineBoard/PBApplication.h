//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISystemShellApplication.h>

@class MISSING_TYPE, NSMutableArray, NSString, NSTimer, PBAppInfoController, PBBulletinService, PBDialogHiddenAssertion, PBProfileServiceDelegate, PBSBulletin;

@interface PBApplication : UISystemShellApplication
{
    PBBulletinService *_bulletinService;	// 8 = 0x8
    PBSBulletin *_networkBulletin;	// 16 = 0x10
    PBSBulletin *_sysdiagnoseBulletin;	// 24 = 0x18
    PBSBulletin *_screenshotCapturedBulletin;	// 32 = 0x20
    _Bool _needsAdjustToDisplayChange;	// 40 = 0x28
    _Bool _inhibitForThermal;	// 41 = 0x29
    _Bool _inhibitForOSUpdate;	// 42 = 0x2a
    _Bool _processingSysdiagnoseViaChord;	// 43 = 0x2b
    NSMutableArray *_enqueuedEvents;	// 48 = 0x30
    _Bool _userInterfaceLayoutDirectionIsValid;	// 56 = 0x38
    long long _userInterfaceLayoutDirection;	// 64 = 0x40
    _Bool _airPlayActive;	// 72 = 0x48
    NSTimer *_suppressWakeForHIDEventsTimer;	// 80 = 0x50
    PBAppInfoController *_appInfoController;	// 88 = 0x58
    PBProfileServiceDelegate *_profileServiceDelegate;	// 96 = 0x60
    PBDialogHiddenAssertion *_singleAppModeDialogAssertion;	// 104 = 0x68
}

+ (id)sharedAppInfoStore;	// IMP=0x002000000003bc80
+ (id)sharedApplicationLibrary;	// IMP=0x001000000003bb30
+ (id)sharedApplication;	// IMP=0x0010000000039d30
- (void).cxx_destruct;	// IMP=0x0010000000047100
@property(readonly, nonatomic) PBDialogHiddenAssertion *singleAppModeDialogAssertion; // @synthesize singleAppModeDialogAssertion=_singleAppModeDialogAssertion;
@property(retain, nonatomic) PBProfileServiceDelegate *profileServiceDelegate; // @synthesize profileServiceDelegate=_profileServiceDelegate;
@property(readonly, nonatomic) PBAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(retain, nonatomic) NSTimer *suppressWakeForHIDEventsTimer; // @synthesize suppressWakeForHIDEventsTimer=_suppressWakeForHIDEventsTimer;
@property(nonatomic) _Bool airPlayActive; // @synthesize airPlayActive=_airPlayActive;
- (void)activateAppSwitcher;	// IMP=0x0010000000046f40
- (id)appSwitcherWindow;	// IMP=0x0010000000046e30
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000046bb0
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x0010000000046a70
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x0010000000045b10
- (void)sceneManager:(id)arg1 didChangeCurrentApplicationFromSceneHandle:(id)arg2 toSceneHandle:(id)arg3;	// IMP=0x0010000000045a70
- (void)_enhanceLogging:(unsigned int)arg1;	// IMP=0x0010000000044ef0
- (void)_checkForQuestionableBootArgs;	// IMP=0x0010000000044cf0
- (void)_startUpAndRunningTimer;	// IMP=0x0010000000044c50
- (id)_sanitizeAppIdentifierHistory:(id)arg1;	// IMP=0x0010000000044940
- (void)_activateScreenSaverFromUserAction:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000447e0
- (void)_saveRecentApplicationBundleIdentifiers;	// IMP=0x0010000000044730
- (void)_startExternalControlManagement;	// IMP=0x0010000000044490
- (void)userActivityTriggeredForReason:(id)arg1;	// IMP=0x00100000000443f0
- (void)sendEventData:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000044250
- (MISSING_TYPE *)sendMenuButtonEventRequestedByClient: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000044130
- (void)deactivateScreenSaverRequestedByClient:(id)arg1;	// IMP=0x0010000000043f10
- (void)activateScreenSaverRequestedByClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000043dd0
- (void)activateScreenSaverRequestedByClient:(id)arg1;	// IMP=0x0010000000043d70
- (void)noteUserPresenceDetected;	// IMP=0x0010000000043bd0
- (void)rebootRequestedByClient:(id)arg1;	// IMP=0x0010000000043a90
- (void)relaunchRequestedByClient:(id)arg1;	// IMP=0x0010000000043950
- (void)relaunchBackboarddRequestedByClient:(id)arg1;	// IMP=0x0010000000043820
- (void)wakeRequestedByClient:(id)arg1 forReason:(id)arg2;	// IMP=0x00100000000432c0
- (void)sleepRequestedByClient:(id)arg1 forReason:(id)arg2;	// IMP=0x0010000000042df0
- (void)client:(id)arg1 setSleepTimeout:(double)arg2;	// IMP=0x0010000000042ca0
- (void)powerManager:(id)arg1 willWakeSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000042af0
- (void)powerManager:(id)arg1 willSleepSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000426c0
- (void)_bluetoothRemotePowerSourceLimitedSourceNotification:(id)arg1;	// IMP=0x00100000000425d0
- (void)sendHIDButtonEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 type:(unsigned long long)arg3 senderID:(unsigned long long)arg4 toApplication:(id)arg5;	// IMP=0x0010000000042270
- (void)forwardHIDButtonEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 type:(unsigned long long)arg3 senderID:(unsigned long long)arg4;	// IMP=0x0010000000042040
- (void)_blackScreenRecoveryModeNotification:(id)arg1;	// IMP=0x00100000000417e0
- (void)_internetAvailabilityDidChangeNotification;	// IMP=0x0010000000041500
- (void)_handleCurrentApplicationDidChange:(id)arg1;	// IMP=0x0010000000041350
- (void)resetIdleTimerAndUndim;	// IMP=0x0010000000041310
- (void)languageDidChange;	// IMP=0x00100000000412b0
- (_Bool)_isSystemEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00100000000411e0
- (_Bool)_isButtonDownEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0010000000041190
@property(readonly, copy, nonatomic) NSString *kioskAppBundleIdentifier;
- (_Bool)activityInhibited;	// IMP=0x0010000000041090
- (void)resumeActivityAfterOSUpdate;	// IMP=0x0010000000041050
- (void)stopAllActivityForOSUpdate;	// IMP=0x0010000000041010
- (void)resumeActivityAfterThermal;	// IMP=0x0010000000040fd0
- (void)stopAllActivityForThermal;	// IMP=0x0010000000040f90
- (void)_resumeAllActivityCommon:(const char *)arg1 flag:(_Bool *)arg2;	// IMP=0x0010000000040d80
- (void)_stopAllActivityCommon:(const char *)arg1 flag:(_Bool *)arg2;	// IMP=0x0010000000040b70
- (_Bool)_validatePresses:(id)arg1 forWindow:(id)arg2;	// IMP=0x0010000000040880
- (void)sendEvent:(id)arg1;	// IMP=0x00100000000407a0
- (void)_finishButtonEvent:(id)arg1;	// IMP=0x0010000000040720
- (void)_removeEnqueuedEvent:(id)arg1;	// IMP=0x0010000000040670
- (void)_handleKeyUIEvent:(id)arg1;	// IMP=0x001000000003fe70
- (void)_logButtonEventTiming:(id)arg1;	// IMP=0x001000000003f440
- (_Bool)_prepareButtonEvent:(id)arg1 withPressInfo:(id)arg2;	// IMP=0x001000000003ea10
- (_Bool)_shouldTriggerExternalControlActionForEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000003e8b0
- (void)_handleAsleepARCVolumeEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000003e490
- (void)_handleHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000003e130
- (_Bool)__handleHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000003dd90
- (_Bool)_handlePhysicalButtonEvent:(id)arg1;	// IMP=0x001000000003d870
- (void)_processChordsWithPressesEvent:(id)arg1;	// IMP=0x001000000003cb60
- (_Bool)_handleSystemPressHidEvent:(struct __IOHIDEvent *)arg1 withType:(long long)arg2;	// IMP=0x001000000003c200
- (id)keyCommands;	// IMP=0x001000000003c010
- (id)_windowForSystemAppButtonEventsForScreen:(id)arg1;	// IMP=0x001000000003bf40
- (void)resignActive;	// IMP=0x001000000003bf30
- (_Bool)_accessibilityIsSystemAppServer;	// IMP=0x001000000003bef0
- (long long)userInterfaceLayoutDirection;	// IMP=0x001000000003be00
- (id)bulletinService;	// IMP=0x001000000003ba90
- (void)dealloc;	// IMP=0x001000000003b970
- (void)_showScreenshotCapturedIndication;	// IMP=0x001000000003b4d0
- (void)_hideSysdiagnoseIndication;	// IMP=0x001000000003b3b0
- (void)_showSysdiagnoseIndication;	// IMP=0x001000000003b170
- (void)_showStackShotIndication;	// IMP=0x001000000003b000
- (void)finishSystemAppLaunch;	// IMP=0x001000000003a5d0
- (_Bool)disablesFrontBoardImplicitWindowScenes;	// IMP=0x001000000003a5b0
- (id)init;	// IMP=0x0010000000039d70
- (void)failedTest:(id)arg1;	// IMP=0x0010000000194780
- (void)failedTest:(id)arg1 withFailure:(id)arg2;	// IMP=0x00100000001946d0
- (void)_dismissAssistant;	// IMP=0x0010000000194680
- (void)_runSiriBringUpTest:(id)arg1 testOptions:(id)arg2;	// IMP=0x0010000000194480
- (void)_startResumeTestNamed:(id)arg1 options:(id)arg2;	// IMP=0x00100000001943c0
- (void)_startLaunchTestNamed:(id)arg1 options:(id)arg2;	// IMP=0x0010000000193e60
- (void)_retryLaunchTestWithOptions:(id)arg1;	// IMP=0x0010000000193ce0
- (void)_activateApplication:(id)arg1 suspended:(_Bool)arg2 forTest:(id)arg3;	// IMP=0x0010000000193b70
- (void)_markUserLaunchInitiationTimeForTest:(id)arg1;	// IMP=0x0010000000193b30
- (_Bool)_isAppExecutableRunning:(id)arg1;	// IMP=0x0010000000193a70
- (_Bool)runTest:(id)arg1 options:(id)arg2;	// IMP=0x0010000000193860

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

