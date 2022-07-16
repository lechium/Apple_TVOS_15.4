//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXCharacterSoundMap, AXMDisplayManager, AXSSPunctuationGroup, AXUISoftwareKeyboardManager, AXVoiceOverActivity, BRLTTable, MISSING_TYPE, NSArray, NSLock, NSMutableArray, NSMutableDictionary, NSNumber, NSString, VOSCommandManager, VOTElement, VOTEventFactory, VOTKeyboardManager, VOTOutputRequest, VOTVisionEngine;
@protocol OS_dispatch_queue, OS_os_transaction, VOTDirectTouchManagementProtocol, VOTElementManagementProtocol, VOTRotorManagementProtocol, VOTWorkspaceUnitTestDelegate;

@interface VOTWorkspace : NSObject
{
    VOTEventFactory *_eventFactory;	// 8 = 0x8
    id <VOTElementManagementProtocol> _elementManager;	// 16 = 0x10
    id <VOTRotorManagementProtocol> _rotorManager;	// 24 = 0x18
    id <VOTDirectTouchManagementProtocol> _directTouchManager;	// 32 = 0x20
    VOTKeyboardManager *_keyboardManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_avAccessQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_keyPostingQueue;	// 56 = 0x38
    struct __CFRunLoop *_runLoop;	// 64 = 0x40
    struct {
        unsigned int count;
        double delay;
        double lastTime;
        _Bool connected;
        double lastRecordedTimeOfDeath;
    } _retryState;	// 72 = 0x48
    _Bool;	// 112 = 0x70
    _Bool _speechMuted;	// 113 = 0x71
    _Bool _voiceOverMuted;	// 114 = 0x72
    _Bool _screenCurtainEnabled;	// 115 = 0x73
    _Bool _isSystemBatteryLow;	// 116 = 0x74
    _Bool _hintsEnabled;	// 117 = 0x75
    _Bool _typingPitchChangeEnabled;	// 118 = 0x76
    _Bool _isPostingKeyboardEvents;	// 119 = 0x77
    _Bool _speakingRateInRotor;	// 120 = 0x78
    _Bool _outputDisabled;	// 121 = 0x79
    _Bool _screenOn;	// 122 = 0x7a
    _Bool _speakNotifications;	// 123 = 0x7b
    _Bool _playKeyboardClicksOnHWInput;	// 124 = 0x7c
    _Bool _largeCursorEnabled;	// 125 = 0x7d
    int _typingMode;	// 128 = 0x80
    long long _tvInteractionMode;	// 136 = 0x88
    VOTOutputRequest *_completionRequest;	// 144 = 0x90
    long long _orientation;	// 152 = 0x98
    long long _realOrientation;	// 160 = 0xa0
    double _lastLockButtonPress;	// 168 = 0xa8
    double _lastHomeButtonPress;	// 176 = 0xb0
    double _lastKeyboardKeyPress;	// 184 = 0xb8
    double _lastDeviceInteractionEvent;	// 192 = 0xc0
    double _lastUnmuteEvent;	// 200 = 0xc8
    double _screenOnTime;	// 208 = 0xd0
    double _screenOffTime;	// 216 = 0xd8
    double _lastPowerCheck;	// 224 = 0xe0
    double _lastDeviceLock;	// 232 = 0xe8
    _Bool _deviceIsCharging;	// 240 = 0xf0
    NSArray *_enabledLanguageRotorItems;	// 248 = 0xf8
    NSString *_selectedLanguage;	// 256 = 0x100
    NSString *_audioAccessoryInstalledAssetLanguage;	// 264 = 0x108
    NSString *_systemSpokenLanguage;	// 272 = 0x110
    NSArray *_enabledBrailleLanguageRotorItems;	// 280 = 0x118
    BRLTTable *_selectedBrailleTable;	// 288 = 0x120
    long long _cachedRotorType;	// 296 = 0x128
    NSMutableDictionary *_appCache;	// 304 = 0x130
    NSMutableDictionary *_appCacheWithExactPID;	// 312 = 0x138
    struct os_unfair_lock_s _appCacheLock;	// 320 = 0x140
    NSString *_postKeyThreadKey;	// 328 = 0x148
    struct {
        _Bool isRunLoopEnabled;
        _Bool speakAutocorrectionsEnabled;
        _Bool ringerSwitchSilent;
        _Bool audioIsRoutedToSpeaker;
        _Bool speechLogging;
        _Bool isInternalInstall;
    } _vtwFlags;	// 336 = 0x150
    NSLock *_systemLangaugeLock;	// 344 = 0x158
    _Bool _originalKBAttachedState;	// 352 = 0x160
    _Bool _originalKBAttachedStateIsValid;	// 353 = 0x161
    long long _triggeredKBAttachState;	// 360 = 0x168
    long long _forcedOrientation;	// 368 = 0x170
    long long _applicationOrientation;	// 376 = 0x178
    NSMutableArray *_punctuationGroups;	// 384 = 0x180
    AXSSPunctuationGroup *_defaultPunctuationGroup;	// 392 = 0x188
    _Bool _voiceOverIsIdle;	// 400 = 0x190
    _Bool _screenCurtainSuspended;	// 401 = 0x191
    _Bool _wasEnabledThroughAccessory;	// 402 = 0x192
    _Bool _supportsHomeGestures;	// 403 = 0x193
    _Bool _accessoryShutdownInProgress;	// 404 = 0x194
    _Bool _inUnitTestMode;	// 405 = 0x195
    _Bool _inPerformanceTestMode;	// 406 = 0x196
    _Bool _isSiriTalking;	// 407 = 0x197
    _Bool _isSiriListening;	// 408 = 0x198
    _Bool _duckingTemporarilyDisabled;	// 409 = 0x199
    _Bool _pauseSpeechAndHaptics;	// 410 = 0x19a
    _Bool _imageCaptionsEnabled;	// 411 = 0x19b
    _Bool _textDetectionEnabled;	// 412 = 0x19c
    _Bool _buttonIconDetectionEnabled;	// 413 = 0x19d
    _Bool _soundEffectsEnabled;	// 414 = 0x19e
    _Bool _captionPanelEnabled;	// 415 = 0x19f
    _Bool _reachabilityActive;	// 416 = 0x1a0
    _Bool _audioDestinationRequestExternal;	// 417 = 0x1a1
    _Bool _systemVolumeControlsAvailablity;	// 418 = 0x1a2
    _Bool _brailleAlertsEnabled;	// 419 = 0x1a3
    _Bool _useDigitalCrownNavigation;	// 420 = 0x1a4
    _Bool _telephonyIsActive;	// 421 = 0x1a5
    _Bool _overridePropertiesForTesting;	// 422 = 0x1a6
    _Bool _userRecentlyUnlockedDeviceForUnitTesting;	// 423 = 0x1a7
    _Bool _userUnlockedDeviceForUnitTesting;	// 424 = 0x1a8
    _Bool _isRingerSwitchSilentForUnitTesting;	// 425 = 0x1a9
    _Bool _disableVoiceOverSettingOnStop;	// 426 = 0x1aa
    _Bool _startedFromCrash;	// 427 = 0x1ab
    int _currentCallStateForUnitTests;	// 428 = 0x1ac
    long long _navigateImagesOption;	// 432 = 0x1b0
    NSString *additionalLanguageRotorItem;	// 440 = 0x1b8
    CDUnknownBlockType testingEventListener;	// 448 = 0x1c0
    AXVoiceOverActivity *_selectedActivity;	// 456 = 0x1c8
    double _lastSpeechMuteToggleTime;	// 464 = 0x1d0
    double _lastSoundMuteToggleTime;	// 472 = 0x1d8
    unsigned long long _customContentImportance;	// 480 = 0x1e0
    NSArray *_imageCaptioningDisabledApps;	// 488 = 0x1e8
    long long _containerOutputFeedback;	// 496 = 0x1f0
    long long _moreContentOutputFeedback;	// 504 = 0x1f8
    long long _numberFeedback;	// 512 = 0x200
    long long _emojiFeedback;	// 520 = 0x208
    long long _navigationDirection;	// 528 = 0x210
    NSMutableDictionary *_websiteLanguageMappingOverrides;	// 536 = 0x218
    CDUnknownBlockType _punctuationGroupsUpdatedHandler;	// 544 = 0x220
    double _reachabilityOffset;	// 552 = 0x228
    NSArray *_activities;	// 560 = 0x230
    long long _suppressValueChangeNotificationCount;	// 568 = 0x238
    long long _suppressSelectionChangeNotificationCount;	// 576 = 0x240
    long long _suppressSelectionChangeNotificationSpeechOutputCount;	// 584 = 0x248
    long long _systemVisualizationState;	// 592 = 0x250
    AXUISoftwareKeyboardManager *_softwareKeyboardManager;	// 600 = 0x258
    VOTVisionEngine *_visionEngine;	// 608 = 0x260
    AXMDisplayManager *_displayManager;	// 616 = 0x268
    VOSCommandManager *_userCommandManager;	// 624 = 0x270
    NSObject<VOTWorkspaceUnitTestDelegate> *_unitTestDelegate;	// 632 = 0x278
    NSNumber *_unitTestSpeechRate;	// 640 = 0x280
    NSString *_unitTestSystemSpokenLanguage;	// 648 = 0x288
    NSString *_reachabilityIdentifier;	// 656 = 0x290
    AXCharacterSoundMap *_characterSoundMap;	// 664 = 0x298
    NSObject<OS_dispatch_queue> *_managedConfigurationQueue;	// 672 = 0x2a0
    NSObject<OS_os_transaction> *_votTransaction;	// 680 = 0x2a8
}

+ (id)sharedWorkspace;	// IMP=0x00200000000488c8
- (void).cxx_destruct;	// IMP=0x00100000000554e6
@property(retain, nonatomic) NSObject<OS_os_transaction> *votTransaction; // @synthesize votTransaction=_votTransaction;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *managedConfigurationQueue; // @synthesize managedConfigurationQueue=_managedConfigurationQueue;
@property(retain, nonatomic) AXCharacterSoundMap *characterSoundMap; // @synthesize characterSoundMap=_characterSoundMap;
@property(nonatomic) _Bool startedFromCrash; // @synthesize startedFromCrash=_startedFromCrash;
@property(nonatomic) _Bool disableVoiceOverSettingOnStop; // @synthesize disableVoiceOverSettingOnStop=_disableVoiceOverSettingOnStop;
@property(retain, nonatomic) NSString *reachabilityIdentifier; // @synthesize reachabilityIdentifier=_reachabilityIdentifier;
@property(retain, nonatomic) NSString *unitTestSystemSpokenLanguage; // @synthesize unitTestSystemSpokenLanguage=_unitTestSystemSpokenLanguage;
@property(retain, nonatomic) NSNumber *unitTestSpeechRate; // @synthesize unitTestSpeechRate=_unitTestSpeechRate;
- (void);	// IMP=0x00100000000553f8
@property(nonatomic) int currentCallStateForUnitTests; // @synthesize currentCallStateForUnitTests=_currentCallStateForUnitTests;
@property(nonatomic) _Bool isRingerSwitchSilentForUnitTesting; // @synthesize isRingerSwitchSilentForUnitTesting=_isRingerSwitchSilentForUnitTesting;
@property(nonatomic) _Bool userUnlockedDeviceForUnitTesting; // @synthesize userUnlockedDeviceForUnitTesting=_userUnlockedDeviceForUnitTesting;
@property(nonatomic) _Bool userRecentlyUnlockedDeviceForUnitTesting; // @synthesize userRecentlyUnlockedDeviceForUnitTesting=_userRecentlyUnlockedDeviceForUnitTesting;
@property(nonatomic) _Bool overridePropertiesForTesting; // @synthesize overridePropertiesForTesting=_overridePropertiesForTesting;
@property(nonatomic) __weak NSObject<VOTWorkspaceUnitTestDelegate> *unitTestDelegate; // @synthesize unitTestDelegate=_unitTestDelegate;
@property(nonatomic) _Bool telephonyIsActive; // @synthesize telephonyIsActive=_telephonyIsActive;
@property(readonly, nonatomic) _Bool useDigitalCrownNavigation; // @synthesize useDigitalCrownNavigation=_useDigitalCrownNavigation;
@property(retain, nonatomic) VOSCommandManager *userCommandManager; // @synthesize userCommandManager=_userCommandManager;
@property(retain, nonatomic) AXMDisplayManager *displayManager; // @synthesize displayManager=_displayManager;
@property(retain, nonatomic) VOTVisionEngine *visionEngine; // @synthesize visionEngine=_visionEngine;
@property(nonatomic) _Bool brailleAlertsEnabled; // @synthesize brailleAlertsEnabled=_brailleAlertsEnabled;
@property(readonly, nonatomic) AXUISoftwareKeyboardManager *softwareKeyboardManager; // @synthesize softwareKeyboardManager=_softwareKeyboardManager;
@property(nonatomic) _Bool systemVolumeControlsAvailablity; // @synthesize systemVolumeControlsAvailablity=_systemVolumeControlsAvailablity;
@property(nonatomic) long long systemVisualizationState; // @synthesize systemVisualizationState=_systemVisualizationState;
@property(nonatomic) long long suppressSelectionChangeNotificationSpeechOutputCount; // @synthesize suppressSelectionChangeNotificationSpeechOutputCount=_suppressSelectionChangeNotificationSpeechOutputCount;
@property(nonatomic) long long suppressSelectionChangeNotificationCount; // @synthesize suppressSelectionChangeNotificationCount=_suppressSelectionChangeNotificationCount;
@property(nonatomic) long long suppressValueChangeNotificationCount; // @synthesize suppressValueChangeNotificationCount=_suppressValueChangeNotificationCount;
@property(retain, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(nonatomic) _Bool audioDestinationRequestExternal; // @synthesize audioDestinationRequestExternal=_audioDestinationRequestExternal;
@property(nonatomic) double reachabilityOffset; // @synthesize reachabilityOffset=_reachabilityOffset;
@property(nonatomic) _Bool reachabilityActive; // @synthesize reachabilityActive=_reachabilityActive;
@property(nonatomic) int typingMode; // @synthesize typingMode=_typingMode;
@property(copy, nonatomic) CDUnknownBlockType punctuationGroupsUpdatedHandler; // @synthesize punctuationGroupsUpdatedHandler=_punctuationGroupsUpdatedHandler;
@property(retain, nonatomic) NSMutableDictionary *websiteLanguageMappingOverrides; // @synthesize websiteLanguageMappingOverrides=_websiteLanguageMappingOverrides;
@property(nonatomic) _Bool largeCursorEnabled; // @synthesize largeCursorEnabled=_largeCursorEnabled;
@property(nonatomic) _Bool captionPanelEnabled; // @synthesize captionPanelEnabled=_captionPanelEnabled;
@property(nonatomic) long long navigationDirection; // @synthesize navigationDirection=_navigationDirection;
@property(nonatomic) long long emojiFeedback; // @synthesize emojiFeedback=_emojiFeedback;
@property(nonatomic) long long numberFeedback; // @synthesize numberFeedback=_numberFeedback;
@property(nonatomic) _Bool soundEffectsEnabled; // @synthesize soundEffectsEnabled=_soundEffectsEnabled;
@property(nonatomic) _Bool buttonIconDetectionEnabled; // @synthesize buttonIconDetectionEnabled=_buttonIconDetectionEnabled;
@property(nonatomic) _Bool textDetectionEnabled; // @synthesize textDetectionEnabled=_textDetectionEnabled;
@property(nonatomic) _Bool imageCaptionsEnabled; // @synthesize imageCaptionsEnabled=_imageCaptionsEnabled;
@property(nonatomic) long long moreContentOutputFeedback; // @synthesize moreContentOutputFeedback=_moreContentOutputFeedback;
@property(nonatomic) long long containerOutputFeedback; // @synthesize containerOutputFeedback=_containerOutputFeedback;
@property(retain, nonatomic) NSArray *imageCaptioningDisabledApps; // @synthesize imageCaptioningDisabledApps=_imageCaptioningDisabledApps;
@property(nonatomic) unsigned long long customContentImportance; // @synthesize customContentImportance=_customContentImportance;
@property(nonatomic) _Bool pauseSpeechAndHaptics; // @synthesize pauseSpeechAndHaptics=_pauseSpeechAndHaptics;
@property(nonatomic) _Bool duckingTemporarilyDisabled; // @synthesize duckingTemporarilyDisabled=_duckingTemporarilyDisabled;
@property(nonatomic) _Bool isSiriListening; // @synthesize isSiriListening=_isSiriListening;
@property(nonatomic) _Bool isSiriTalking; // @synthesize isSiriTalking=_isSiriTalking;
@property(nonatomic) _Bool inPerformanceTestMode; // @synthesize inPerformanceTestMode=_inPerformanceTestMode;
@property(nonatomic) _Bool inUnitTestMode; // @synthesize inUnitTestMode=_inUnitTestMode;
@property(nonatomic) _Bool accessoryShutdownInProgress; // @synthesize accessoryShutdownInProgress=_accessoryShutdownInProgress;
@property(nonatomic) _Bool supportsHomeGestures; // @synthesize supportsHomeGestures=_supportsHomeGestures;
@property(nonatomic) _Bool wasEnabledThroughAccessory; // @synthesize wasEnabledThroughAccessory=_wasEnabledThroughAccessory;
@property(nonatomic) _Bool screenCurtainSuspended; // @synthesize screenCurtainSuspended=_screenCurtainSuspended;
@property(nonatomic) _Bool voiceOverIsIdle; // @synthesize voiceOverIsIdle=_voiceOverIsIdle;
@property(nonatomic) double lastSoundMuteToggleTime; // @synthesize lastSoundMuteToggleTime=_lastSoundMuteToggleTime;
@property(nonatomic) double lastSpeechMuteToggleTime; // @synthesize lastSpeechMuteToggleTime=_lastSpeechMuteToggleTime;
@property(nonatomic) double screenOnTime; // @synthesize screenOnTime=_screenOnTime;
@property(copy, nonatomic) CDUnknownBlockType testingEventListener; // @synthesize testingEventListener;
@property(nonatomic) _Bool playKeyboardClicksOnHWInput; // @synthesize playKeyboardClicksOnHWInput=_playKeyboardClicksOnHWInput;
@property(nonatomic) _Bool speakNotifications; // @synthesize speakNotifications=_speakNotifications;
@property(nonatomic) _Bool outputDisabled; // @synthesize outputDisabled=_outputDisabled;
@property(nonatomic) _Bool speakingRateInRotor; // @synthesize speakingRateInRotor=_speakingRateInRotor;
@property(nonatomic) long long rotorType; // @synthesize rotorType=_cachedRotorType;
@property(nonatomic) _Bool isSystemBatteryLow; // @synthesize isSystemBatteryLow=_isSystemBatteryLow;
@property(nonatomic) _Bool screenCurtainEnabled; // @synthesize screenCurtainEnabled=_screenCurtainEnabled;
@property(nonatomic) double lastKeyboardKeyPress; // @synthesize lastKeyboardKeyPress=_lastKeyboardKeyPress;
@property(nonatomic) double lastLockButtonPress; // @synthesize lastLockButtonPress=_lastLockButtonPress;
@property(nonatomic) double lastHomeButtonPress; // @synthesize lastHomeButtonPress=_lastHomeButtonPress;
@property(retain, nonatomic) NSString *additionalLanguageRotorItem; // @synthesize additionalLanguageRotorItem;
@property(nonatomic) _Bool typingPitchChangeEnabled; // @synthesize typingPitchChangeEnabled=_typingPitchChangeEnabled;
@property(nonatomic) long long navigateImagesOption; // @synthesize navigateImagesOption=_navigateImagesOption;
@property(nonatomic) _Bool voiceOverMuted; // @synthesize voiceOverMuted=_voiceOverMuted;
@property(nonatomic) _Bool soundMuted; // @synthesize soundMuted=_soundMuted;
@property(readonly, nonatomic) NSString *systemSpokenLanguage; // @dynamic systemSpokenLanguage;
- (struct CGPoint)convertDevicePointToZoomedPoint:(struct CGPoint)arg1;	// IMP=0x0010000000054cc5
- (void)handleUSBMFiBrailleDisplayConnected;	// IMP=0x0010000000054bcc
- (void)_setUSBRMPreferenceDisabled;	// IMP=0x0010000000054b6d
- (_Bool)_userHasDisabledUSBRM;	// IMP=0x0010000000054b14
@property(readonly, nonatomic) _Bool navigationStyleHonorsGroups;
@property(retain, nonatomic) NSObject<VOTRotorManagementProtocol> *rotorManager; // @dynamic rotorManager;
@property(retain, nonatomic) NSObject<VOTElementManagementProtocol> *elementManager; // @dynamic elementManager;
- (id)applicationForPID:(int)arg1;	// IMP=0x0010000000054727
- (id)applicationForElement:(id)arg1;	// IMP=0x00100000000542b8
- (id)applicationForCurrentElement;	// IMP=0x001000000005424e
- (_Bool)isBaseSystemSpokenEqualToLocalization;	// IMP=0x0010000000054119
@property(retain, nonatomic) BRLTTable *selectedBrailleTable;
- (void)_selectedBrailleTableChanged;	// IMP=0x0010000000053eb1
- (void)updateSelectedLanguage;	// IMP=0x0010000000053cb2
@property(retain) NSString *selectedLanguage; // @synthesize selectedLanguage=_selectedLanguage;
- (void)unitTestSetBrailleRotorItems:(id)arg1;	// IMP=0x0010000000053760
@property(readonly, nonatomic) NSArray *brailleLanguageRotorItems;
@property(readonly, nonatomic) NSArray *languageRotorItems; // @dynamic languageRotorItems;
- (double)lastLockButtonPressTime;	// IMP=0x00100000000534d3
- (_Bool)isRingerSwitchSilent;	// IMP=0x0010000000053468
- (_Bool)userRecentlyUnlockedDevice;	// IMP=0x00100000000533f5
- (_Bool)userUnlockedDevice;	// IMP=0x001000000005339f
- (_Bool)isAudioRoutedToSpeaker;	// IMP=0x0010000000053393
@property(nonatomic) _Bool tapAndHoldMode; // @dynamic tapAndHoldMode;
- (void)_localeChanged:(id)arg1;	// IMP=0x001000000005334f
- (void)_activeAudioRouteChanged:(id)arg1;	// IMP=0x0010000000053276
- (int)currentCallState;	// IMP=0x0010000000053257
- (int)_callCenterQueue_currentCallState;	// IMP=0x001000000005324f
@property(readonly, nonatomic) double speechRateFromSettings;
- (_Bool)screenOn;	// IMP=0x00100000000531ae
- (void)setScreenOn:(_Bool)arg1 silently:(_Bool)arg2;	// IMP=0x0010000000053154
- (void)screenLockOccurred;	// IMP=0x0010000000053137
- (void)unmuteEligibleEventOccured;	// IMP=0x00100000000530d0
- (void)userInteractedWithDevice;	// IMP=0x0010000000053069
@property(nonatomic) _Bool speechMuted; // @synthesize speechMuted=_speechMuted;
@property(nonatomic) _Bool speechLogging; // @dynamic speechLogging;
- (void)refreshBraille:(_Bool)arg1 rotorSelection:(id)arg2;	// IMP=0x0010000000052f37
- (void)_postNextLanguageEvent;	// IMP=0x0010000000052ee0
- (void)performNextLanguageButtonPress;	// IMP=0x0010000000052e7f
- (void)performEjectButtonPress;	// IMP=0x0010000000052bbd
- (MISSING_TYPE *)performVolumeDownButtonPress;	// IMP=0x0010000000052ab7
- (void)performVolumeUpButtonPress;	// IMP=0x00100000000529b1
- (void)performHomeButtonPress;	// IMP=0x00100000000528b1
- (void)resetSystemBatteryLowState;	// IMP=0x0010000000052830
- (void)rotateDeviceOrientation:(_Bool)arg1;	// IMP=0x0010000000052747
- (void)_resetOrientationAndAnnounce:(_Bool)arg1 updateApplication:(_Bool)arg2;	// IMP=0x001000000005267e
- (void)resetOrientation;	// IMP=0x0010000000052662
- (long long)applicationOrientation;	// IMP=0x0010000000052655
- (long long)deviceOrientation;	// IMP=0x0010000000052648
- (void)_setDeviceOrientation:(long long)arg1 shouldAnnounce:(_Bool)arg2 updateApplication:(_Bool)arg3;	// IMP=0x0010000000052171
- (_Bool)announceOrientationChanges;	// IMP=0x0010000000052169
- (_Bool)speakAutocorrectionsEnabled;	// IMP=0x001000000005215d
- (void)_speakCorrectionsChanged;	// IMP=0x0010000000052106
- (void)_preferencesCaptionPanelChanged;	// IMP=0x00100000000520a6
- (void)_languageChangedInBuddy;	// IMP=0x0010000000052094
- (void)_languageChanged;	// IMP=0x0010000000051f5a
- (unsigned long long)fingerCount;	// IMP=0x0010000000051f44
- (struct CGPoint)fingerPosition;	// IMP=0x0010000000051f2e
- (void)handleReturnToSpringBoard;	// IMP=0x0010000000051eeb
- (void)cancelTapAndHoldMode;	// IMP=0x0010000000051ec5
- (void)startTapAndHoldMode:(_Bool)arg1;	// IMP=0x0010000000051eaf
@property(readonly, nonatomic) _Bool directTouchElementsPresent;
- (void)handleUnsetForcedOrientationAndAnnounce:(_Bool)arg1;	// IMP=0x0010000000051e6b
- (void)handleSetForcedOrientation:(long long)arg1 shouldAnnounce:(_Bool)arg2;	// IMP=0x0010000000051e19
- (void)handleOrientationChanged;	// IMP=0x0010000000051df6
- (void)handleRingerSwitchSwitched:(id)arg1;	// IMP=0x0010000000051df0
- (void)handleProximityEvent:(id)arg1;	// IMP=0x0010000000051d90
- (void)handleLockButtonPress:(id)arg1;	// IMP=0x0010000000051d16
- (void)handlePlayPauseKeyPress:(id)arg1;	// IMP=0x0010000000051d00
- (void)_wst_handleMediaKeyPress:(id)arg1;	// IMP=0x0010000000051cee
- (void)handleMediaKeyPress:(id)arg1;	// IMP=0x0010000000051ce8
- (void)_handleSystemMuteKey:(id)arg1;	// IMP=0x001000000005191a
- (void)temporarilyChangeQuickNavState:(_Bool)arg1;	// IMP=0x0010000000051871
- (void)_temporarilyChangeQuickNav:(id)arg1;	// IMP=0x001000000005183c
- (id)keyboardPressInfo;	// IMP=0x0010000000051826
- (void)handleKeyboardKeyEvent:(id)arg1 eventOrigin:(long long)arg2;	// IMP=0x0010000000051810
- (void)handleAppleTVRemoteEvent:(id)arg1 eventOrigin:(long long)arg2 isRTL:(_Bool)arg3;	// IMP=0x00100000000515b3
- (void)_wst_handleMenuButtonPress:(id)arg1;	// IMP=0x00100000000515a1
- (void)handleMenuButtonPress:(id)arg1;	// IMP=0x0010000000051526
- (void)_wst_handleVolumeButtonPress:(id)arg1;	// IMP=0x0010000000051514
- (void)handleVolumeButtonPress:(id)arg1;	// IMP=0x00100000000512c7
- (void)_selfDestruct;	// IMP=0x001000000005113d
@property(readonly, nonatomic) _Bool isInternalInstall; // @dynamic isInternalInstall;
- (void)stop:(int)arg1;	// IMP=0x0010000000050e0a
- (void)outputRequestFinished:(id)arg1;	// IMP=0x0010000000050d9c
- (void)_stopRunLoop;	// IMP=0x0010000000050d80
- (void)punctuationGroupsChanged:(id)arg1;	// IMP=0x00100000000505a0
- (id)defaultPunctuationGroup;	// IMP=0x001000000005047d
@property(readonly, nonatomic) NSArray *punctuationGroups;
- (id)punctuationGroupForUUID:(id)arg1;	// IMP=0x0010000000050215
- (void)systemSpokenLanguageChanged:(id)arg1;	// IMP=0x001000000005013e
@property(retain, nonatomic) AXVoiceOverActivity *selectedActivity; // @synthesize selectedActivity=_selectedActivity;
- (id)phoneticStringForCharacter:(id)arg1 andVoiceIdentifier:(id)arg2;	// IMP=0x001000000004ffb6
- (void)_preferencesScreenCurtainChanged:(id)arg1;	// IMP=0x001000000004ffa2
- (void)_preferencesTypingModeChanged:(id)arg1;	// IMP=0x001000000004ff87
- (void)preferencesBrailleLanguageRotorItemsChanged:(id)arg1;	// IMP=0x001000000004fd02
- (void)preferencesLanguageRotorItemsChanged:(id)arg1;	// IMP=0x001000000004fa4a
- (void)preferencesKeyboardClickStatusChange:(id)arg1;	// IMP=0x001000000004fa36
- (void)_preferencesSpeakNotifications;	// IMP=0x001000000004f9d6
- (void)_preferencesSpeakingRateInRotorChanged;	// IMP=0x001000000004f976
- (void)_preferencesSpeechRateChange;	// IMP=0x001000000004f932
- (void)_preferencesNavigateImagesOptionChange;	// IMP=0x001000000004f8d2
- (void)_preferencesSpeakHintsChange;	// IMP=0x001000000004f86d
- (void)_preferencesTypingPitchChange;	// IMP=0x001000000004f80d
- (void)setUseDigitalCrownNavigationEnabled:(_Bool)arg1;	// IMP=0x001000000004f7b3
- (void)_preferenceUseDigitalCrownNavigationChanged;	// IMP=0x001000000004f75c
- (void)_preferenceUseSiriVoiceChanged;	// IMP=0x001000000004f756
- (void)_preferencesAlwaysUseNemethForMathChange;	// IMP=0x001000000004f712
@property(readonly, nonatomic) _Bool brailleInputActive;
@property(readonly, nonatomic) NSArray *focusedApplications;
@property(readonly, nonatomic) VOTElement *currentElement;
- (void)postKeyboardEventWithCharacters:(id)arg1 originalCharacters:(id)arg2 modifiers:(unsigned int)arg3 keyCode:(unsigned short)arg4;	// IMP=0x001000000004f464
- (void)postKeyboardEvent:(_Bool)arg1 modifiers:(unsigned int)arg2 keyCode:(unsigned short)arg3;	// IMP=0x001000000004f354
- (void)_postKeyboardEvent:(id)arg1 modifiers:(id)arg2 keyCode:(id)arg3;	// IMP=0x001000000004f1b7
- (void)_postKeyboardEventWithKeyCode:(unsigned short)arg1 characters:(id)arg2 originalCharacters:(id)arg3 modifierState:(unsigned int)arg4 eventType:(unsigned int)arg5;	// IMP=0x001000000004f082
- (void)_postKeyboardEventWithKeyCode:(unsigned short)arg1 characters:(id)arg2 originalCharacters:(id)arg3 modifierState:(unsigned int)arg4 isKeyDown:(_Bool)arg5;	// IMP=0x001000000004f05d
- (void)_postKeyboardEventWithKeyCode:(unsigned short)arg1 modifierState:(unsigned int)arg2 isKeyDown:(_Bool)arg3;	// IMP=0x001000000004f031
- (void)_postKeyboardEventsForModifiers:(unsigned int)arg1 isKeyDown:(_Bool)arg2;	// IMP=0x001000000004ef63
- (void)_postKeyboardEventWithCharacters:(id)arg1 originalCharacters:(id)arg2 modifiers:(id)arg3 keyCode:(id)arg4;	// IMP=0x001000000004edd6
- (void)dispatchCommand:(id)arg1;	// IMP=0x001000000004edc0
- (void)_voiceOverTouchEnabledChange:(struct __CFString *)arg1;	// IMP=0x001000000004e7d5
- (void)_voiceOverUsageConfirmed;	// IMP=0x001000000004e78e
- (void)_checkVoiceOverWasConfirmed;	// IMP=0x001000000004e71b
- (void)_showVOTNoHomeButtonGestureAlert;	// IMP=0x001000000004e6cd
- (void)_showConfirmPanel;	// IMP=0x001000000004e684
- (_Bool)_voiceOverIsConfirmed;	// IMP=0x001000000004e65b
- (void)loadUIKit;	// IMP=0x001000000004e5ec
- (void)run;	// IMP=0x001000000004e33b
- (void)_sendGreetingMessage;	// IMP=0x001000000004e026
- (id)_systemBootTime;	// IMP=0x001000000004dfa2
- (void)_registerWithSystem;	// IMP=0x001000000004de9c
- (void)_updateScreenCurtainEnabled:(_Bool)arg1;	// IMP=0x001000000004dcc2
- (void)_registerWithSpringBoard;	// IMP=0x001000000004d90d
- (_Bool)isVoiceOverTouchPreferenceEnabled;	// IMP=0x001000000004d8fd
- (_Bool)isAccessibilityEnabled;	// IMP=0x001000000004d8ed
- (void)handleSystemWideServerDied;	// IMP=0x001000000004d629
- (_Bool)isSystemWideServerAlive;	// IMP=0x001000000004d620
- (void)_registerForExternalDevices;	// IMP=0x001000000004d61a
- (void)_preferencesActivitiesChanged;	// IMP=0x001000000004d2e1
- (void)_updateActivityListeners;	// IMP=0x001000000004d2db
- (void)currentElementDidUpdate:(id)arg1;	// IMP=0x001000000004d27e
- (void)_preferencesSelectedLanguageChanged;	// IMP=0x001000000004d1c9
- (void)_preferencesSelectedActivityChanged;	// IMP=0x001000000004d107
- (void)dealloc;	// IMP=0x001000000004d043
- (void)_registerForPreferenceChanges;	// IMP=0x001000000004c10c
- (void)_handleReachabilityChanges;	// IMP=0x001000000004c106
- (void)willSwitchUser;	// IMP=0x001000000004c100
- (void)_registerForUserSwitches;	// IMP=0x001000000004c0fa
- (void)_migratePreferencesIfNeeded;	// IMP=0x001000000004c09e
- (void)_updateMainScreenSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x001000000004c094
- (void)_initialize;	// IMP=0x001000000004a8eb
@property(readonly) _Bool usesDisplayManager;
- (_Bool)softwareKeyboardManagerShouldSetHardwareKeyboardAttached:(id)arg1 hardwareKeyboardIsCurrentlyAttached:(_Bool)arg2 newHardwareKeyboardAttachedValue:(_Bool *)arg3;	// IMP=0x001000000004a8c6
- (void)softwareKeyboardManagerDidChangeHardwareKeyboardAttached:(id)arg1;	// IMP=0x001000000004a8b9
- (void)softwareKeyboardManager:(id)arg1 didSetHardwareKeyboardAttached:(_Bool)arg2;	// IMP=0x001000000004a8b0
- (void)softwareKeyboardManagerWillUpdateKeyboardState:(id)arg1;	// IMP=0x001000000004a5f5
@property long long tvInteractionMode;
- (void)setTvInteractionModeWithoutSaving:(long long)arg1;	// IMP=0x001000000004a581
@property(nonatomic) _Bool allowSingleLetterSearching; // @dynamic allowSingleLetterSearching;
- (id)_assetUpdaterClient;	// IMP=0x001000000004a470
- (void)_archerNotifyUserOfNavigationChanges;	// IMP=0x001000000004a361
- (void)_hunterMigrateDigitalCrownNavigation;	// IMP=0x001000000004a35b
- (void)_hunterMigrateDefaultRotors;	// IMP=0x001000000004a355
- (void)_yukonMigrateLanguageRotors;	// IMP=0x001000000004a08f
- (void)_tigrisMigrateLanguageRotors;	// IMP=0x0010000000049be9
- (void)_screenChange:(id)arg1;	// IMP=0x0010000000049b4a
- (double)activeBrailleAutoAdvanceDuration;	// IMP=0x0010000000049987
- (_Bool)activeBrailleGeneralStatusCellPreference;	// IMP=0x00100000000497ca
- (_Bool)activeBrailleTextStatusCellPreference;	// IMP=0x001000000004960d
- (long long)activeBrailleOutputPreference;	// IMP=0x0010000000049450
- (long long)activeBrailleInputPreference;	// IMP=0x0010000000049293
@property(nonatomic) _Bool hintsEnabled;
- (void)_applyVoiceOverMigrations;	// IMP=0x0010000000048fbb
@property(readonly, nonatomic) VOTEventFactory *eventFactory;
- (void)_callStatusChanged:(id)arg1;	// IMP=0x0010000000048e9f
- (id)init;	// IMP=0x00100000000488d9
- (void)notePostedEventForUnitTesting:(id)arg1;	// IMP=0x0010000000055780
- (id)lastPostedEventForUnitTesting;	// IMP=0x001000000005576f
- (id)currentElementRotorString;	// IMP=0x00100000000557ca
- (id)lastScreenChangeTime;	// IMP=0x0010000000055794
- (void)_testFetchWebElementRects;	// IMP=0x001000000005581e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

