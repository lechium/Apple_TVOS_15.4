//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderOutput/SCROBrailleDisplayManager.h>

@class RadiosPreferences;

@interface MSCRODBrailleDisplayManager : SCROBrailleDisplayManager
{
    struct {
        unsigned int rootPort;
        struct IONotificationPort *notifyPortRef;
        unsigned int notifierObject;
    } _sleepWake;	// 224 = 0xe0
    int _notifyLockStateToken;	// 248 = 0xf8
    unsigned long long _blankScreenToken;	// 256 = 0x100
    _Bool _isScreenBlank;	// 264 = 0x108
    _Bool _airplaneMode;	// 265 = 0x109
    _Bool _isBrailleSystemSleeping;	// 266 = 0x10a
    RadiosPreferences *_radiosPrefs;	// 272 = 0x110
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0020000000002490
+ (void)initialize;	// IMP=0x0010000000002439
+ (id)sharedManager;	// IMP=0x0010000000002428
- (void).cxx_destruct;	// IMP=0x0020000000006a6c
@property(nonatomic) _Bool isBrailleSystemSleeping; // @synthesize isBrailleSystemSleeping=_isBrailleSystemSleeping;
@property(retain, nonatomic) RadiosPreferences *radiosPrefs; // @synthesize radiosPrefs=_radiosPrefs;
@property(nonatomic) _Bool airplaneMode; // @synthesize airplaneMode=_airplaneMode;
- (id)brailleInputManager;	// IMP=0x00100000000069ee
- (id)newBrailleDisplayCommandDispatcher;	// IMP=0x00100000000069cd
- (void)airplaneModeChanged;	// IMP=0x00100000000068e2
- (void)_registerHasBlankedScreenNotification;	// IMP=0x001000000000661d
- (void)_handleSystemSleep;	// IMP=0x00100000000065ff
- (void)_delayedHandleSystemSleep;	// IMP=0x0010000000006286
- (void)_wakeFromSleep;	// IMP=0x0010000000006268
- (void)_delayedWakeFromSleep;	// IMP=0x0010000000006245
- (void)_reallyDelayedWakeFromSleep;	// IMP=0x001000000000604f
- (_Bool)_hasUserInteractedWithDeviceRecently;	// IMP=0x0010000000005f80
- (void)setLastUserInteractionTime:(double)arg1;	// IMP=0x0010000000005ddc
- (unsigned int)_rootPowerPort;	// IMP=0x0010000000005dcc
- (_Bool)_registerSleepNotifications;	// IMP=0x0010000000005c7f
- (_Bool)isConfigured;	// IMP=0x0010000000005b42
- (void)_saveBluetoothDisplayConfiguration:(id)arg1;	// IMP=0x0010000000005ad2
- (id)driverConfiguration;	// IMP=0x0010000000005989
- (void)_removeBluetoothDriverWithIOElement:(id)arg1 removeFromPreferences:(_Bool)arg2;	// IMP=0x0010000000004dc3
- (void)_removeBluetoothDriverWithAddress:(id)arg1;	// IMP=0x0010000000004d36
- (void)removeBluetoothDriverWithAddress:(id)arg1;	// IMP=0x0010000000004c32
- (void)_loadBluetoothDriverFromPreferences;	// IMP=0x00100000000042c6
- (void)_loadBluetoothDriverWithAddress:(id)arg1;	// IMP=0x00100000000030dc
- (void)loadBluetoothDriverWithAddress:(id)arg1;	// IMP=0x00100000000030bd
- (id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3;	// IMP=0x0010000000003005
- (void)_delayedPowerChangedNotification:(id)arg1;	// IMP=0x0010000000002de1
- (void)powerChangedNotification:(id)arg1;	// IMP=0x0010000000002dc2
- (void)_setupBluetooth;	// IMP=0x0010000000002cef
- (void)_eventQueue_setShowEightDotBraille:(_Bool)arg1;	// IMP=0x0010000000002c8d
- (void)_eventQueue_setContractionMode:(int)arg1;	// IMP=0x0010000000002c2c
- (void)_eventQueue_setMasterStatusCellIndex:(long long)arg1;	// IMP=0x0010000000002ba5
- (void)_eventQueue_setVirtualStatusAlignment:(int)arg1;	// IMP=0x0010000000002b1e
- (void)invalidate;	// IMP=0x0010000000002add
- (void)_eventQueue_begin;	// IMP=0x00100000000029d6
- (void)handleSettingsChange:(id)arg1;	// IMP=0x00100000000028e4
- (id)init;	// IMP=0x00100000000024cd

@end

