//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDAssistantAccessControlModelUpdateReceiver-Protocol.h>
#import <HomeKitDaemon/HMDMediaContentProfileAccessControlModelUpdateReceiver-Protocol.h>
#import <HomeKitDaemon/HMDSharedUserDataModelUpdateReceiver-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMBModel, HMFTimer, HMFUnfairLock, NSArray, NSDictionary, NSMutableSet, NSNotificationCenter, NSString, NSUUID;
@protocol HMDSettingsControllerProtocol, HMDUserDataControllerDataSource, HMDUserDataControllerDelegate, HMDUserDataControllerTimerCreator, OS_dispatch_queue;

@interface HMDUserDataController : NSObject <HMDAssistantAccessControlModelUpdateReceiver, HMDMediaContentProfileAccessControlModelUpdateReceiver, HMDSharedUserDataModelUpdateReceiver, HMFLogging, HMFTimerDelegate>
{
    _Bool _isModifyingState;	// 8 = 0x8
    _Bool _assistantAccessControlRequiresAuthenticationForSecureRequests;	// 9 = 0x9
    _Bool _assistantAccessControlActivityNotificationsEnabledForPersonalRequests;	// 10 = 0xa
    _Bool _isCurrentUser;	// 11 = 0xb
    unsigned long long _state;	// 16 = 0x10
    HMFUnfairLock *_lock;	// 24 = 0x18
    NSUUID *_homeUUID;	// 32 = 0x20
    NSUUID *_userUUID;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_clientQueue;	// 48 = 0x30
    id <HMDUserDataControllerDelegate> _delegate;	// 56 = 0x38
    id <HMDUserDataControllerDataSource> _dataSource;	// 64 = 0x40
    id <HMDUserDataControllerTimerCreator> _timerCreator;	// 72 = 0x48
    NSUUID *_sharedSettingsRootUUID;	// 80 = 0x50
    NSUUID *_assistantAccessControlModelUUID;	// 88 = 0x58
    NSMutableSet *_assistantAccessControlAccessoryUUIDs;	// 96 = 0x60
    NSUUID *_mediaContentProfileAccessControlModelUUID;	// 104 = 0x68
    NSMutableSet *_mediaContentProfileAccessControlAccessories;	// 112 = 0x70
    NSUUID *_privateSettingsRootUUID;	// 120 = 0x78
    HMFTimer *_sharedZoneFirstLoadTimer;	// 128 = 0x80
    HMFTimer *_privateZoneFirstLoadTimer;	// 136 = 0x88
    NSNotificationCenter *_notificationCenter;	// 144 = 0x90
    id <HMDSettingsControllerProtocol> _sharedSettingsController;	// 152 = 0x98
    id <HMDSettingsControllerProtocol> _privateSettingsController;	// 160 = 0xa0
}

+ (id)logCategory;	// IMP=0x000000000088ff9e
- (void).cxx_destruct;	// IMP=0x000000000088e56f
@property(readonly) id <HMDSettingsControllerProtocol> privateSettingsController; // @synthesize privateSettingsController=_privateSettingsController;
@property(readonly) id <HMDSettingsControllerProtocol> sharedSettingsController; // @synthesize sharedSettingsController=_sharedSettingsController;
@property(readonly) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(retain) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) HMFTimer *privateZoneFirstLoadTimer; // @synthesize privateZoneFirstLoadTimer=_privateZoneFirstLoadTimer;
@property(retain, nonatomic) HMFTimer *sharedZoneFirstLoadTimer; // @synthesize sharedZoneFirstLoadTimer=_sharedZoneFirstLoadTimer;
@property(retain) NSUUID *privateSettingsRootUUID; // @synthesize privateSettingsRootUUID=_privateSettingsRootUUID;
@property(retain) NSMutableSet *mediaContentProfileAccessControlAccessories; // @synthesize mediaContentProfileAccessControlAccessories=_mediaContentProfileAccessControlAccessories;
@property(retain) NSUUID *mediaContentProfileAccessControlModelUUID; // @synthesize mediaContentProfileAccessControlModelUUID=_mediaContentProfileAccessControlModelUUID;
@property(retain) NSMutableSet *assistantAccessControlAccessoryUUIDs; // @synthesize assistantAccessControlAccessoryUUIDs=_assistantAccessControlAccessoryUUIDs;
@property(retain) NSUUID *assistantAccessControlModelUUID; // @synthesize assistantAccessControlModelUUID=_assistantAccessControlModelUUID;
@property(retain) NSUUID *sharedSettingsRootUUID; // @synthesize sharedSettingsRootUUID=_sharedSettingsRootUUID;
@property(readonly) id <HMDUserDataControllerTimerCreator> timerCreator; // @synthesize timerCreator=_timerCreator;
@property(readonly) __weak id <HMDUserDataControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) __weak id <HMDUserDataControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly) NSUUID *userUUID; // @synthesize userUUID=_userUUID;
@property(readonly) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property _Bool assistantAccessControlActivityNotificationsEnabledForPersonalRequests; // @synthesize assistantAccessControlActivityNotificationsEnabledForPersonalRequests=_assistantAccessControlActivityNotificationsEnabledForPersonalRequests;
@property _Bool assistantAccessControlRequiresAuthenticationForSecureRequests; // @synthesize assistantAccessControlRequiresAuthenticationForSecureRequests=_assistantAccessControlRequiresAuthenticationForSecureRequests;
- (id)logIdentifier;	// IMP=0x000000000088e300
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000088e24f
- (void)mediaContentProfileAccessControlModelRemoved:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000088e0e0
- (void)mediaContentProfileAccessControlModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000088deac
- (long long)sharedUserSettingsLogEventBackingStoreControllerRunState;	// IMP=0x000000000088de38
- (void)setHasUserSeenRMVNewLanguageNotification:(_Bool)arg1;	// IMP=0x000000000088dbd4
@property(readonly) _Bool hasUserSeenRMVNewLanguageNotification;
@property(readonly) _Bool isRecognizeMyVoiceEnabled;
@property(readonly, copy) NSDictionary *privateSettingValuesByKeyPathForAWD;
@property(readonly, copy) NSDictionary *sharedSettingValuesByKeyPathForAWD;
- (void)assistantAccessControlModelRemoved:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000088d5e6
- (void)assistantAccessControlModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000088d1a6
- (void)sharedUserDataModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000088d171
@property(readonly, copy) HMBModel *assistantAccessControlModelToReset;
- (void)handleRemovedAccessory:(id)arg1;	// IMP=0x000000000088cfd2
- (void)handleMediaContentProfileAccessControlUpdatedAccessoryUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000088c9a6
- (void)handleAssistantAccessControlAccessoryUUIDsUpdated:(id)arg1 requireAuthenticationForSecureRequests:(_Bool)arg2 activityNotificationsEnabledForPersonalRequests:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000088c0ae
- (void)handleStartForZoneController:(id)arg1;	// IMP=0x000000000088bfb7
- (void)_startupPrivateZone;	// IMP=0x000000000088bbe1
- (void)_startupSharedZone;	// IMP=0x000000000088b71d
- (void)_invalidatePrivateZoneFirstLoadTimer;	// IMP=0x000000000088b693
- (void)_startPrivateZoneFirstLoadTimer;	// IMP=0x000000000088b496
- (void)performFirstRunOperationsOnPrivateZoneController:(id)arg1;	// IMP=0x000000000088b017
- (void)_invalidateSharedZoneFirstLoadTimer;	// IMP=0x000000000088af8d
- (void)_startSharedZoneFirstLoadTimer;	// IMP=0x000000000088ad90
- (void)performFirstRunOperationsOnSharedZoneController:(id)arg1;	// IMP=0x000000000088a745
- (void)initializePrivateZoneController:(id)arg1 userDataModel:(id)arg2;	// IMP=0x000000000088a605
- (void)initializeSharedZoneController:(id)arg1 userDataModel:(id)arg2;	// IMP=0x0000000000889c24
- (void)eventDidInitializeSharedZone;	// IMP=0x000000000088994e
- (void)eventDidInitializePrivateZone;	// IMP=0x0000000000889681
@property unsigned long long state; // @synthesize state=_state;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000088930e
@property(readonly, copy) NSArray *mediaContentProfileAccessControlAccessoriesToEncode;
@property(readonly, copy) NSArray *assistantAccessControlAccessoriesToEncode;
@property(readonly) _Bool isInitialized;
- (void)configure;	// IMP=0x0000000000889184
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2 queue:(id)arg3 userID:(id)arg4 homeID:(id)arg5 sharedSettingsController:(id)arg6 privateSettingsController:(id)arg7 isCurrentUser:(_Bool)arg8;	// IMP=0x000000000088905a
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2 queue:(id)arg3 userID:(id)arg4 homeID:(id)arg5 sharedSettingsController:(id)arg6 privateSettingsController:(id)arg7 timerCreator:(id)arg8 isCurrentUser:(_Bool)arg9;	// IMP=0x0000000000888e21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

