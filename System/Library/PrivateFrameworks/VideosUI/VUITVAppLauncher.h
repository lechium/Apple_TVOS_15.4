//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/UIGestureRecognizerDelegate-Protocol.h>
#import <VideosUI/VUITVAppLaunchProtocol-Protocol.h>
#import <VideosUI/VUITVApplicationControllerDelegate-Protocol.h>

@class ATAParsedOpenURL, NSArray, NSDictionary, NSString, UIViewController, UIWindow, VUIBootURLController, VUINavigateToUpNextHandler, VUIStateMachine, VUITVApplicationController;
@protocol VUITabBarProtocol><VUITVAppRootViewController;

@interface VUITVAppLauncher : NSObject <VUITVApplicationControllerDelegate, UIGestureRecognizerDelegate, VUITVAppLaunchProtocol>
{
    struct os_unfair_lock_s _isStillProcessingStartupItemsLock;	// 8 = 0x8
    _Bool _isStillProcessingStartupItems;	// 12 = 0xc
    _Bool _overrideOrientation;	// 13 = 0xd
    _Bool _appWasForegrounded;	// 14 = 0xe
    _Bool _startupPrewarmSubscriptionDataCompleted;	// 15 = 0xf
    _Bool _startupOfferProcessingCompleted;	// 16 = 0x10
    VUITVApplicationController *_appController;	// 24 = 0x18
    UIViewController<VUITabBarProtocol><VUITVAppRootViewController> *_tabBarController;	// 32 = 0x20
    UIWindow *_appWindow;	// 40 = 0x28
    CDUnknownBlockType _switchTabHandler;	// 48 = 0x30
    VUINavigateToUpNextHandler *_navigateToUpNextHandler;	// 56 = 0x38
    NSDictionary *_launchOptions;	// 64 = 0x40
    ATAParsedOpenURL *_deferredParsedOpenURL;	// 72 = 0x48
    VUIBootURLController *_bootURLController;	// 80 = 0x50
    NSArray *_tabBarItems;	// 88 = 0x58
    VUIStateMachine *_stateMachine;	// 96 = 0x60
}

+ (id)_libraryOnlyTabBarItem;	// IMP=0x00000000001c0452
+ (_Bool)_isDeeplinkTVButton:(id)arg1;	// IMP=0x00000000001bfb4c
+ (id)sharedInstance;	// IMP=0x00000000001b95e3
- (void).cxx_destruct;	// IMP=0x00000000001c0842
@property(nonatomic) _Bool startupOfferProcessingCompleted; // @synthesize startupOfferProcessingCompleted=_startupOfferProcessingCompleted;
@property(nonatomic) _Bool startupPrewarmSubscriptionDataCompleted; // @synthesize startupPrewarmSubscriptionDataCompleted=_startupPrewarmSubscriptionDataCompleted;
@property(nonatomic) _Bool appWasForegrounded; // @synthesize appWasForegrounded=_appWasForegrounded;
@property(nonatomic) _Bool overrideOrientation; // @synthesize overrideOrientation=_overrideOrientation;
@property(retain, nonatomic) VUIStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
@property(retain, nonatomic) VUIBootURLController *bootURLController; // @synthesize bootURLController=_bootURLController;
@property(retain, nonatomic) ATAParsedOpenURL *deferredParsedOpenURL; // @synthesize deferredParsedOpenURL=_deferredParsedOpenURL;
@property(copy, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(retain, nonatomic) VUINavigateToUpNextHandler *navigateToUpNextHandler; // @synthesize navigateToUpNextHandler=_navigateToUpNextHandler;
@property(copy, nonatomic) CDUnknownBlockType switchTabHandler; // @synthesize switchTabHandler=_switchTabHandler;
@property(retain, nonatomic) UIWindow *appWindow; // @synthesize appWindow=_appWindow;
@property(retain, nonatomic) UIViewController<VUITabBarProtocol><VUITVAppRootViewController> *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(retain, nonatomic) VUITVApplicationController *appController; // @synthesize appController=_appController;
@property(nonatomic) _Bool isStillProcessingStartupItems;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000001c044a
- (void)_handleDebugUIGesture:(_Bool)arg1;	// IMP=0x00000000001c03ac
- (void)_setupDebugUI;	// IMP=0x00000000001c02c1
- (void)_javascriptSetTabBarItems:(id)arg1;	// IMP=0x00000000001c0156
- (id)rootViewControllerForAppController:(id)arg1;	// IMP=0x00000000001c00c7
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x00000000001bff3b
- (void)appController:(id)arg1 didStopWithOptions:(id)arg2;	// IMP=0x00000000001bfe54
- (void)appController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000001bfd6d
- (void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000000001bfc86
- (void)_presentSyndicationOnboardingIfNeeded;	// IMP=0x00000000001bfc74
- (void)_finishAppLoading;	// IMP=0x00000000001bfc3f
- (void)_hideLoadingView;	// IMP=0x00000000001bfade
- (void)_showLoadingView;	// IMP=0x00000000001bfa83
- (void)_accountsChanged:(id)arg1;	// IMP=0x00000000001bf97a
- (void)_presentErrorDialogWithNetworkAvailable:(_Bool)arg1;	// IMP=0x00000000001bf6b5
- (void)_handleDeferredParsedOpenURLIfNeeded;	// IMP=0x00000000001bf640
- (void)_resetDeferredParsedOpenURL;	// IMP=0x00000000001bf62c
- (void)_handleParsedOpenURL:(id)arg1;	// IMP=0x00000000001befd9
- (void)_handleNetworkReachabilityDidChangeNotification:(id)arg1;	// IMP=0x00000000001bee0b
- (void)_initializePlayer;	// IMP=0x00000000001becf7
- (_Bool)_isActiveMediaLibraryTheDeviceMediaLibrary;	// IMP=0x00000000001bec70
- (void)_initializeMediaLibrary;	// IMP=0x00000000001bea26
- (void)_updateDeviceMediaLibraryFromCloud;	// IMP=0x00000000001be9b3
- (void)_syncBookmarkServiceIfRequired;	// IMP=0x00000000001be945
- (void)_initializeBookmarkService;	// IMP=0x00000000001be8ee
- (void)_stopApplicationController;	// IMP=0x00000000001be8b1
- (void)_startApplicationControllerWithBootURL:(id)arg1;	// IMP=0x00000000001be498
- (void)_fetchApplicationControllerBootURL;	// IMP=0x00000000001be0be
- (void)_fetchFullFeatureFlag:(id)arg1;	// IMP=0x00000000001bde01
- (void)_resetJavascriptState;	// IMP=0x00000000001bddc0
- (void)_showJavascriptUnavailableUIWithNetworkAvailable:(_Bool)arg1;	// IMP=0x00000000001bdc84
- (void)_updateTabControllerWithTabBarItems:(id)arg1 setSelectedIndexFromDefaults:(_Bool)arg2;	// IMP=0x00000000001bd952
- (void)_finishJavascriptSetupWithTabBarItems:(id)arg1 setSelectedIndexFromDefaults:(_Bool)arg2;	// IMP=0x00000000001bd924
- (void)_startJavascriptSetup;	// IMP=0x00000000001bd88d
- (void)_registerStateMachineHandlers;	// IMP=0x00000000001bb113
- (void)_configureStateMachine;	// IMP=0x00000000001bb080
- (void)_applicationWillTerminateNotification:(id)arg1;	// IMP=0x00000000001bafdc
- (void)_applicationWillResignActiveNotification:(id)arg1;	// IMP=0x00000000001baf86
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;	// IMP=0x00000000001bae35
- (void)_handleAMSEngagementSheetPresentation:(_Bool)arg1;	// IMP=0x00000000001bae2f
- (void)_applicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x00000000001bac09
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x00000000001babef
- (void)registerForApplicationNotifications;	// IMP=0x00000000001baa73
- (id)_dialogMetricsForGDPR;	// IMP=0x00000000001ba9e5
- (void)didAcceptGDPRWelcome;	// IMP=0x00000000001ba74a
- (void)didShowGDPRWelcome;	// IMP=0x00000000001ba5fd
- (void)selectTabBarItem:(id)arg1;	// IMP=0x00000000001ba58b
- (void)processStartupItems;	// IMP=0x00000000001ba363
- (void)refreshTabBarItems;	// IMP=0x00000000001ba215
- (void)cleanUp;	// IMP=0x00000000001ba10e
- (void)setMainWindow:(id)arg1;	// IMP=0x00000000001ba04e
- (void)didFailToLaunch:(id)arg1;	// IMP=0x00000000001b9fa3
- (_Bool)openURL:(id)arg1 options:(id)arg2;	// IMP=0x00000000001b9d76
- (_Bool)applicationDidFinishLaunchingWithOptions:(id)arg1;	// IMP=0x00000000001b9aba
- (_Bool)applicationWillFinishLaunchingWithOptions:(id)arg1;	// IMP=0x00000000001b9976
- (void)preWarm:(id)arg1;	// IMP=0x00000000001b98cb
- (id)init;	// IMP=0x00000000001b9638

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
