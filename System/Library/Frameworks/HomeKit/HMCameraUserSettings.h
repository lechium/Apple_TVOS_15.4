//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMFObject-Protocol.h>

@class HMAccessory, HMCameraBulletinBoardSmartNotification, HMFUnfairLock, NSArray, NSSet, NSString, NSUUID, _HMCameraUserSettings, _HMContext;
@protocol HMCameraUserSettingsDelegate, OS_dispatch_queue;

@interface HMCameraUserSettings : NSObject <HMFLogging, HMFMessageReceiver, HMFObject>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    _HMCameraUserSettings *_cameraUserSettings;	// 16 = 0x10
    HMCameraBulletinBoardSmartNotification *_smartNotificationBulletin;	// 24 = 0x18
    id <HMCameraUserSettingsDelegate> _delegate;	// 32 = 0x20
    _HMContext *_context;	// 40 = 0x28
    HMAccessory *_accessory;	// 48 = 0x30
}

+ (id)shortDescription;	// IMP=0x00000000001b0b6d
+ (id)logCategory;	// IMP=0x00000000001b0b3d
- (void).cxx_destruct;	// IMP=0x00000000001af458
@property(nonatomic) __weak HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property __weak id <HMCameraUserSettingsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_mergeNewSettings:(id)arg1;	// IMP=0x00000000001af39b
- (void)_notifyDelegatesOfUpdatedSettings;	// IMP=0x00000000001af2a0
- (void)_updateSettings:(id)arg1 shouldNotifyDelegate:(_Bool)arg2;	// IMP=0x00000000001af014
@property(readonly, getter=isReachabilityEventNotificationEnabled) _Bool reachabilityEventNotificationEnabled;
@property(readonly, getter=isReachabilityChangeNotificationEnabled) _Bool reachabilityChangeNotificationEnabled;
@property(readonly, getter=areActivityZonesIncludedForSignificantEventDetection) _Bool activityZonesIncludedForSignificantEventDetection;
@property(readonly, getter=activityZones) NSSet *activityZones;
@property(readonly, getter=isCameraManuallyDisabled) _Bool cameraManuallyDisabled;
@property(readonly, getter=isAccessModeChangeNotificationEnabled) _Bool accessModeChangeNotificationEnabled;
@property(readonly, getter=isRecordingAudioEnabled) _Bool recordingAudioEnabled;
@property(readonly, getter=isNightVisionModeEnabled) _Bool nightVisionModeEnabled;
@property(readonly, getter=areSnapshotsAllowed) _Bool snapshotsAllowed;
@property(readonly, getter=isAccessModeIndicatorEnabled) _Bool accessModeIndicatorEnabled;
@property(readonly) unsigned long long recordingEventTriggers;
@property(readonly) unsigned long long supportedFeatures;
@property(readonly) unsigned long long currentAccessMode;
- (unsigned long long)accessModeNotAtHome;	// IMP=0x00000000001aec2e
- (unsigned long long)accessModeAtHome;	// IMP=0x00000000001aebea
@property(readonly) NSUUID *uniqueIdentifier;
@property(retain) HMCameraBulletinBoardSmartNotification *smartNotificationBulletin; // @synthesize smartNotificationBulletin=_smartNotificationBulletin;
@property(copy) _HMCameraUserSettings *cameraUserSettings; // @synthesize cameraUserSettings=_cameraUserSettings;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)logIdentifier;	// IMP=0x00000000001ae827
- (id)messageDestination;	// IMP=0x00000000001ae7be
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (void)handleSettingsDidUpdateMessage:(id)arg1;	// IMP=0x00000000001ae414
- (void)updateReachabilityEventNotificationEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001adef1
- (void)updateReachabilityChangeNotificationEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001adedf
- (void)updateActivityZones:(id)arg1 areActivityZonesIncludedForSignificantEventDetection:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ad7fc
- (void)updateActivityZones:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ad7e2
- (void)updateAccessModeChangeNotificationEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ad2ac
- (void)updateRecordingAudioEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001acd76
- (void)updateNightVisionModeEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ac840
- (void)updateSnapshotsAllowed:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ac30a
- (void)updateAccessModeIndicatorEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001abdd4
- (void)updateRecordingEventTriggers:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ab785
- (void)updateAccessMode:(unsigned long long)arg1 forPresenceEventType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ab09c
- (id)smartNotificationBulletinForSettings:(id)arg1;	// IMP=0x00000000001aaf08
- (unsigned long long)accessModeForPresenceType:(unsigned long long)arg1;	// IMP=0x00000000001aaed7
- (void)configureWithAccessory:(id)arg1 context:(id)arg2;	// IMP=0x00000000001aad9d
- (id)initWithCameraUserSettings:(id)arg1;	// IMP=0x00000000001aad08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

