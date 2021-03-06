//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFNotifyObserver, NSHashTable, SASLockStateMonitor, SUICApplicationStateHelper;

@interface SASSystemState : NSObject
{
    _Bool _accessibilityShortcutEnabled;	// 8 = 0x8
    _Bool _enabled;	// 9 = 0x9
    int _carPlayConnectionState;	// 12 = 0xc
    SASLockStateMonitor *_lockStateMonitor;	// 16 = 0x10
    SUICApplicationStateHelper *_applicationStateHelper;	// 24 = 0x18
    NSHashTable *_listeners;	// 32 = 0x20
    AFNotifyObserver *_observerWirelessSplitter;	// 40 = 0x28
    AFNotifyObserver *_observerBluetoothGuestConnected;	// 48 = 0x30
    unsigned long long _carPlayEnhancedSiriCharacteristics;	// 56 = 0x38
    long long _carPlayEnhancedVoiceTriggerMode;	// 64 = 0x40
}

+ (id)new;	// IMP=0x000000000002cad9
+ (id)sharedSystemState;	// IMP=0x000000000002c838
- (void).cxx_destruct;	// IMP=0x000000000002d2a3
@property(nonatomic) long long carPlayEnhancedVoiceTriggerMode; // @synthesize carPlayEnhancedVoiceTriggerMode=_carPlayEnhancedVoiceTriggerMode;
@property(nonatomic) unsigned long long carPlayEnhancedSiriCharacteristics; // @synthesize carPlayEnhancedSiriCharacteristics=_carPlayEnhancedSiriCharacteristics;
@property(retain, nonatomic) AFNotifyObserver *observerBluetoothGuestConnected; // @synthesize observerBluetoothGuestConnected=_observerBluetoothGuestConnected;
@property(retain, nonatomic) AFNotifyObserver *observerWirelessSplitter; // @synthesize observerWirelessSplitter=_observerWirelessSplitter;
@property(retain, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) SUICApplicationStateHelper *applicationStateHelper; // @synthesize applicationStateHelper=_applicationStateHelper;
@property(nonatomic) _Bool accessibilityShortcutEnabled; // @synthesize accessibilityShortcutEnabled=_accessibilityShortcutEnabled;
@property(nonatomic) int carPlayConnectionState; // @synthesize carPlayConnectionState=_carPlayConnectionState;
@property(retain, nonatomic) SASLockStateMonitor *lockStateMonitor; // @synthesize lockStateMonitor=_lockStateMonitor;
- (_Bool)isConnectedToEyesFreeDevice;	// IMP=0x000000000002d1ca
- (_Bool)siriIsSupported;	// IMP=0x000000000002d135
- (_Bool)siriIsRestricted;	// IMP=0x000000000002d12b
- (_Bool)siriIsEnabled;	// IMP=0x000000000002d0bc
- (void)_updateAccessibilityState;	// IMP=0x000000000002cfd0
- (_Bool)isATV;	// IMP=0x000000000002cfc6
- (_Bool)smartCoverClosed;	// IMP=0x000000000002cfbe
- (_Bool)isPad;	// IMP=0x000000000002cfb4
- (_Bool)carPlaySupportsEnhancedSiriCharacteristic:(unsigned long long)arg1;	// IMP=0x000000000002cf79
- (_Bool)carPlaySupportsAnyEnhancedSiriCharacteristics;	// IMP=0x000000000002cf60
- (_Bool)isRightHandDrive;	// IMP=0x000000000002cf58
- (_Bool)isConnectedToTrustedCarPlay;	// IMP=0x000000000002cf50
- (_Bool)isConnectedToCarPlay;	// IMP=0x000000000002cf48
- (void)monitorCarSessions;	// IMP=0x000000000002cf42
- (_Bool)carDNDActive;	// IMP=0x000000000002cf3a
- (_Bool)_mapsAppIsVisibleOnLockscreen;	// IMP=0x000000000002cf32
- (_Bool)_internalAlwaysEyesFreeEnabled;	// IMP=0x000000000002cf28
- (_Bool)carDNDActiveOrEyesFreeAndShouldHaveFullScreenPresentation;	// IMP=0x000000000002ceb5
- (_Bool)isGuestConnected;	// IMP=0x000000000002cdff
- (_Bool)isWirelessSplitterOn;	// IMP=0x000000000002cd49
- (_Bool)hasIncomingCall;	// IMP=0x000000000002cd41
- (_Bool)isInActiveCall;	// IMP=0x000000000002cd39
- (id)foregroundAppInfosForPresentationIdentifier:(long long)arg1;	// IMP=0x000000000002cccb
- (_Bool)_deviceIsUnlocked;	// IMP=0x000000000002ccc3
- (_Bool)deviceScreenIsOn;	// IMP=0x000000000002cc7f
- (_Bool)deviceIsPasscodeLocked;	// IMP=0x000000000002cc77
- (_Bool)deviceIsBlocked;	// IMP=0x000000000002cc6f
- (_Bool)hasUnlockedSinceBoot;	// IMP=0x000000000002cc67
- (id)currentSpokenLanguageCode;	// IMP=0x000000000002cbc5
- (void)removeStateChangeListener:(id)arg1;	// IMP=0x000000000002cb53
- (void)addStateChangeListener:(id)arg1;	// IMP=0x000000000002cae1
- (id)init;	// IMP=0x000000000002c8f8
- (id)_initForTesting;	// IMP=0x000000000002c8c9

@end

