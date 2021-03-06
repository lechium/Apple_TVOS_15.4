//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDBulletinBoard, HMDHome, HMDRemoteDeviceMonitor, HMDResidentReachabilityContext, HMFTimer, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDResidentReachabilityNotificationManager : HMFObject <HMFLogging, HMFTimerDelegate>
{
    _Bool _hasCameraConfiguredForRecording;	// 8 = 0x8
    _Bool _notificationEnabled;	// 9 = 0x9
    HMDResidentReachabilityContext *_reachabilityContext;	// 16 = 0x10
    HMDHome *_home;	// 24 = 0x18
    HMDRemoteDeviceMonitor *_deviceMonitor;	// 32 = 0x20
    CDUnknownBlockType _timerFactory;	// 40 = 0x28
    HMDBulletinBoard *_bulletinBoard;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    HMFTimer *_notificationDebounceTimer;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x000000000085f8e1
- (void).cxx_destruct;	// IMP=0x000000000085eb88
@property _Bool notificationEnabled; // @synthesize notificationEnabled=_notificationEnabled;
@property(retain) HMFTimer *notificationDebounceTimer; // @synthesize notificationDebounceTimer=_notificationDebounceTimer;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMDBulletinBoard *bulletinBoard; // @synthesize bulletinBoard=_bulletinBoard;
@property(readonly, copy) CDUnknownBlockType timerFactory; // @synthesize timerFactory=_timerFactory;
@property(readonly) _Bool hasCameraConfiguredForRecording; // @synthesize hasCameraConfiguredForRecording=_hasCameraConfiguredForRecording;
@property(readonly) __weak HMDRemoteDeviceMonitor *deviceMonitor; // @synthesize deviceMonitor=_deviceMonitor;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(retain) HMDResidentReachabilityContext *reachabilityContext; // @synthesize reachabilityContext=_reachabilityContext;
- (id)logIdentifier;	// IMP=0x000000000085ea42
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000085e8e9
- (void)_startDebounceTimer;	// IMP=0x000000000085e61b
- (void)updateNotificationEnabled;	// IMP=0x000000000085e3aa
- (_Bool)shouldPostUnreachableNotification;	// IMP=0x000000000085e32f
- (_Bool)shouldPostReachableNotification;	// IMP=0x000000000085e2bd
@property(readonly) _Bool anyEnabledResidentSupportsCameraRecordingReachabilityNotifications;
@property(readonly) _Bool isCameraReachabilityNotificationDisabledForAllSettings;
@property(readonly) _Bool hasMultipleResidentsSupportingCameraRecording;
@property(readonly) _Bool hasReachableResidentSupportingCameraRecording;
- (void)_evaluateReachabilityBulletin;	// IMP=0x000000000085d5e2
- (void)_handleResidentUpdated:(id)arg1;	// IMP=0x000000000085d571
- (void)_handleResidentRemoved:(id)arg1;	// IMP=0x000000000085d500
- (void)_handleResidentAdded:(id)arg1;	// IMP=0x000000000085d48f
- (void)_handleNetworkReachabilityChange:(id)arg1;	// IMP=0x000000000085d41e
- (void)_handleCameraProfileUnconfigured:(id)arg1;	// IMP=0x000000000085d3ad
- (void)_handleCameraProfileSettingsDidChange:(id)arg1;	// IMP=0x000000000085d2fc
- (void)configureWithHome:(id)arg1 deviceMonitor:(id)arg2 notificationCenter:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000085d19d
- (void)configureWithHome:(id)arg1 deviceMonitor:(id)arg2;	// IMP=0x000000000085d108
- (id)initWithResidentReachabilityContext:(id)arg1 workQueue:(id)arg2 timerFactory:(CDUnknownBlockType)arg3 bulletinBoard:(id)arg4;	// IMP=0x000000000085cff8
- (id)initWithResidentReachabilityContext:(id)arg1 workQueue:(id)arg2;	// IMP=0x000000000085cf5a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

