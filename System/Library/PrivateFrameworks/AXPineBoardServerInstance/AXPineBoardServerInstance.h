//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXFrontBoardProcessWatcher, AXIPCClient, AXIPCServer, AXPineBoardServiceProvider, AXSpeechAssetMonitorHelper;

@interface AXPineBoardServerInstance : NSObject
{
    AXSpeechAssetMonitorHelper *_assetMonitor;	// 8 = 0x8
    _Bool _systemAppServerRunning;	// 16 = 0x10
    AXPineBoardServiceProvider *_serviceProvider;	// 24 = 0x18
    id _axEnabledNotificationObserverToken;	// 32 = 0x20
    AXIPCServer *_server;	// 40 = 0x28
    AXIPCClient *_client;	// 48 = 0x30
    AXFrontBoardProcessWatcher *_processWatcher;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x00000000000038c9
+ (void)initialize;	// IMP=0x0000000000003859
- (void).cxx_destruct;	// IMP=0x0000000000005fe6
@property(retain, nonatomic) AXFrontBoardProcessWatcher *processWatcher; // @synthesize processWatcher=_processWatcher;
@property(retain, nonatomic) AXIPCClient *client; // @synthesize client=_client;
@property(retain, nonatomic) AXIPCServer *server; // @synthesize server=_server;
@property(retain, nonatomic) id axEnabledNotificationObserverToken; // @synthesize axEnabledNotificationObserverToken=_axEnabledNotificationObserverToken;
@property(nonatomic, getter=isSystemAppServerRunning) _Bool systemAppServerRunning; // @synthesize systemAppServerRunning=_systemAppServerRunning;
@property(retain, nonatomic) AXPineBoardServiceProvider *serviceProvider; // @synthesize serviceProvider=_serviceProvider;
- (id)_rebootDevice:(id)arg1;	// IMP=0x0000000000005f0d
- (id)_isSystemSleeping:(id)arg1;	// IMP=0x0000000000005dc8
- (id)_wakeUpDeviceIfNecessary:(id)arg1;	// IMP=0x0000000000005d88
- (id)_sytemAppPID:(id)arg1;	// IMP=0x0000000000005c4f
- (id)_isAppSwitcherVisible:(id)arg1;	// IMP=0x0000000000005b0a
- (id)_isReceivingAirPlay:(id)arg1;	// IMP=0x00000000000059c5
- (id)_isSiriTalkingOrListening:(id)arg1;	// IMP=0x0000000000005880
- (id)_isSoftwareUpdateUIVisible:(id)arg1;	// IMP=0x000000000000573b
- (id)_showControlCenterVisible:(id)arg1;	// IMP=0x000000000000559b
- (id)_isControlCenterVisible:(id)arg1;	// IMP=0x0000000000005456
- (id)_isMediaPlaying:(id)arg1;	// IMP=0x0000000000004e52
- (id)_isNowPlayingUIVisible:(id)arg1;	// IMP=0x0000000000004d0d
- (id)_isScreenSaverVisible:(id)arg1;	// IMP=0x0000000000004bc8
- (id)_isSiriVisible:(id)arg1;	// IMP=0x0000000000004a83
- (id)_dismissSiri:(id)arg1;	// IMP=0x000000000000493e
- (void)_migrateToTopaz;	// IMP=0x00000000000048df
- (void)_startSystemAppServerIfNeeded;	// IMP=0x000000000000409d
- (void)_updateAccessibilityProductStatus;	// IMP=0x0000000000004097
- (void)dealloc;	// IMP=0x0000000000003ff0
- (void)_performValidations;	// IMP=0x0000000000003e3c
- (id)_appDelegateInitialLaunchApplicationBundleID;	// IMP=0x0000000000003dc7
- (void)_updateNotifyServerWhenReady;	// IMP=0x0000000000003c12
- (id)init;	// IMP=0x000000000000391e

@end

