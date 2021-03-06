//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/SFUnlockClientProtocol-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, SFAutoUnlockManagerDelegate;

@interface SFAutoUnlockManager : NSObject <SFUnlockClientProtocol>
{
    id <SFAutoUnlockManagerDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 16 = 0x10
}

+ (long long)mockedPhoneAutoUnlockSimulateErrorCode;	// IMP=0x0000000000028992
+ (float)mockedPhoneAutoUnlockSimulateManualReLock;	// IMP=0x00000000000288c3
+ (_Bool)mockedPhoneAutoUnlockSimulateMagnetBreak;	// IMP=0x0000000000028855
+ (_Bool)mockedPhoneAutoUnlockSimulatePhoneMissedFinalConfirmationToUnlock;	// IMP=0x00000000000287e7
+ (_Bool)mockedPhoneAutoUnlockSimulateDevicesOutOfRange;	// IMP=0x0000000000028779
+ (float)mockedPhoneAutoUnlockSimulateLatency;	// IMP=0x00000000000286aa
+ (_Bool)mockedPhoneAutoUnlockWatchNoMotion;	// IMP=0x000000000002863c
+ (_Bool)mockedPhoneAutoUnlockWatchSleepModeOn;	// IMP=0x00000000000285ce
+ (_Bool)mockedPhoneAutoUnlockWatchAWDLUnavailable;	// IMP=0x0000000000028560
+ (_Bool)mockedPhoneAutoUnlockWatchWiFiOff;	// IMP=0x00000000000284f2
+ (_Bool)mockedPhoneAutoUnlockWatchOffWrist;	// IMP=0x0000000000028484
+ (_Bool)mockedPhoneAutoUnlockWatchLocked;	// IMP=0x0000000000028416
+ (_Bool)mockedPhoneAutoUnlockWatchWristDetectionDisabled;	// IMP=0x00000000000283a8
+ (_Bool)mockedPhoneAutoUnlockWatchHasWeakPasscode;	// IMP=0x000000000002833a
+ (_Bool)mockedPhoneAutoUnlockNoPairedWatch;	// IMP=0x00000000000282cc
+ (_Bool)mockedPhoneAutoUnlockNoWatch;	// IMP=0x000000000002825e
+ (_Bool)mockedPhoneAutoUnlockAWDLUnavailable;	// IMP=0x00000000000281f0
+ (_Bool)mockedPhoneAutoUnlockWiFiOff;	// IMP=0x0000000000028182
+ (_Bool)mockedPhoneAutoUnlockNoMask;	// IMP=0x0000000000028114
+ (_Bool)mockedPhoneAutoUnlockMaskUnlikely;	// IMP=0x00000000000280a6
+ (_Bool)mockedPhoneAutoUnlockNeverUnlocked;	// IMP=0x0000000000028038
+ (_Bool)mockedPhoneAutoUnlockFaceIDDisabled;	// IMP=0x0000000000027fca
+ (_Bool)mockedPhoneAutoUnlockInBioLockout;	// IMP=0x0000000000027f5c
+ (_Bool)mockedPhoneAutoUnlockEnabled;	// IMP=0x0000000000027ee6
+ (id)userDefaults;	// IMP=0x0000000000027e7a
+ (void)enableBluetoothAndWiFi;	// IMP=0x00000000000237a2
+ (void)mockedEnableBluetoothAndWiFi;	// IMP=0x0000000000023755
+ (_Bool)bluetoothAndWiFiEnabled;	// IMP=0x000000000002374d
+ (_Bool)mockedBluetoothAndWiFiEnabled;	// IMP=0x0000000000023731
+ (_Bool)autoUnlockEnabled:(unsigned int)arg1;	// IMP=0x00000000000234d5
+ (_Bool)autoUnlockEnabled;	// IMP=0x00000000000232c2
+ (_Bool)mockedAutoUnlockEnabled;	// IMP=0x00000000000232a6
+ (_Bool)autoUnlockSupported;	// IMP=0x000000000002329c
- (void).cxx_destruct;	// IMP=0x0000000000029b19
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <SFAutoUnlockManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)authPromptInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002979b
- (void)autoUnlockStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002941e
- (void)deviceRequestedRelock:(id)arg1;	// IMP=0x00000000000292c3
- (void)failedUnlockWithError:(id)arg1;	// IMP=0x00000000000291f5
- (void)completedUnlockWithDevice:(id)arg1;	// IMP=0x000000000002909a
- (void)beganAttemptWithDevice:(id)arg1;	// IMP=0x0000000000028f3f
- (void)failedToEnableDevice:(id)arg1 error:(id)arg2;	// IMP=0x0000000000028e42
- (void)enabledDevice:(id)arg1;	// IMP=0x0000000000028ce7
- (void)keyDeviceLocked:(id)arg1;	// IMP=0x0000000000028b8c
- (void)onDelegateQueue_notifyDelegateOfAttemptError:(id)arg1;	// IMP=0x0000000000028ae2
- (void)onDelegateQueue_notifyDelegateOfEnableError:(id)arg1 device:(id)arg2;	// IMP=0x0000000000028a03
- (void)requestRelock;	// IMP=0x0000000000027e74
- (void)cancelAutoUnlock;	// IMP=0x0000000000027dad
- (void)mockedCancelUnlock;	// IMP=0x0000000000027b7c
- (void)attemptAutoUnlockForSiri;	// IMP=0x0000000000027789
- (void)attemptAutoUnlockWithoutNotifyingWatch;	// IMP=0x0000000000027396
- (void)attemptAutoUnlock;	// IMP=0x0000000000026f5f
- (void)clearPhoneAutoUnlockBehaviorChangeNotification;	// IMP=0x0000000000026eb4
- (void)declinedToEnablePhoneAutoUnlock;	// IMP=0x0000000000026e06
- (void)donateDeviceUnlockedWithMask:(_Bool)arg1;	// IMP=0x0000000000026d0c
- (void)completeAutoUnlockWithNotification:(_Bool)arg1;	// IMP=0x0000000000026c23
- (void)prewarmAutoUnlock;	// IMP=0x0000000000026b8b
- (void)mockedAttemptAutoUnlock;	// IMP=0x0000000000025c23
- (void)disableAutoUnlockForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000254c3
- (void)mockedDisableAutoUnlockForDevice:(CDUnknownBlockType)arg1;	// IMP=0x00000000000252da
- (void)cancelEnablingAutoUnlockForDevice:(id)arg1;	// IMP=0x0000000000025009
- (void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2;	// IMP=0x0000000000024978
- (void)mockedEnableAutoUnlockWithDevice:(id)arg1;	// IMP=0x000000000002443d
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023c9f
- (void)mockedEligibleAutoUnlockDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000239bd
- (void)repairCloudPairing;	// IMP=0x00000000000237a8
@property(readonly, nonatomic) double spinnerDelay;
- (id)init;	// IMP=0x000000000002368b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

