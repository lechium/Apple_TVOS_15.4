//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMMutableApplicationData-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/HMSiriEndpointProfilesMessengerFactory-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class CLLocation, HMApplicationData, HMFMessageDestination, HMFUnfairLock, HMFVersion, HMHomeManager, HMHomePersonManager, HMHomePersonManagerSettings, HMMutableArray, HMPersonSettingsManager, HMRoom, HMUser, NSArray, NSDate, NSOperationQueue, NSSet, NSString, NSUUID, _HMContext;
@protocol HMHomeDelegate, OS_dispatch_queue;

@interface HMHome : NSObject <HMSiriEndpointProfilesMessengerFactory, HMFLogging, HMMutableApplicationData, HMObjectMerge, HMFMessageReceiver, NSSecureCoding>
{
    _Bool _automaticSoftwareUpdateEnabled;	// 8 = 0x8
    long long _minimumMediaUserPrivilege;	// 16 = 0x10
    _Bool _mediaPeerToPeerEnabled;	// 24 = 0x18
    NSString *_mediaPassword;	// 32 = 0x20
    long long _protectionMode;	// 40 = 0x28
    HMFUnfairLock *_lock;	// 48 = 0x30
    _Bool _primary;	// 56 = 0x38
    _Bool _notificationsEnabled;	// 57 = 0x39
    _Bool _bulletinNotificationsSupported;	// 58 = 0x3a
    _Bool _multiUserEnabled;	// 59 = 0x3b
    _Bool _hasAnyUserAcknowledgedCameraRecordingOnboarding;	// 60 = 0x3c
    _Bool _hasOnboardedForAccessCode;	// 61 = 0x3d
    _Bool _hasOnboardedForWalletKey;	// 62 = 0x3e
    _Bool _isUpdatedToROAR;	// 63 = 0x3f
    _Bool _ownerUser;	// 64 = 0x40
    _Bool _adminUser;	// 65 = 0x41
    _Bool _notificationEnableRequested;	// 66 = 0x42
    _Bool _notificationEnableRequestedForAppleMediaAccessories;	// 67 = 0x43
    NSUUID *_uniqueIdentifier;	// 72 = 0x48
    id <HMHomeDelegate> _delegate;	// 80 = 0x50
    CLLocation *_homeLocation;	// 88 = 0x58
    NSString *_name;	// 96 = 0x60
    HMUser *_currentUser;	// 104 = 0x68
    HMApplicationData *_applicationData;	// 112 = 0x70
    NSDate *_notificationsUpdatedTime;	// 120 = 0x78
    long long _homeLocationStatus;	// 128 = 0x80
    unsigned long long _networkRouterSupport;	// 136 = 0x88
    unsigned long long _networkRouterSupportDisableReason;	// 144 = 0x90
    NSSet *_supportedFeatures;	// 152 = 0x98
    HMHomePersonManager *_personManager;	// 160 = 0xa0
    HMHomePersonManagerSettings *_personManagerSettings;	// 168 = 0xa8
    HMPersonSettingsManager *_personSettingsManager;	// 176 = 0xb0
    NSString *_threadNetworkID;	// 184 = 0xb8
    NSArray *_managedTriggers;	// 192 = 0xc0
    NSString *_assistantIdentifier;	// 200 = 0xc8
    unsigned long long _homeHubState;	// 208 = 0xd0
    HMMutableArray *_currentRooms;	// 216 = 0xd8
    HMMutableArray *_currentZones;	// 224 = 0xe0
    HMMutableArray *_currentServiceGroups;	// 232 = 0xe8
    HMMutableArray *_currentTriggerOwnedActionSets;	// 240 = 0xf0
    HMMutableArray *_currentTriggers;	// 248 = 0xf8
    HMMutableArray *_currentUsers;	// 256 = 0x100
    HMMutableArray *_currentResidentDevices;	// 264 = 0x108
    long long _locationAuthorization;	// 272 = 0x110
    NSOperationQueue *_shareWithHomeOwnerOperationQueue;	// 280 = 0x118
    HMMutableArray *_currentAccessoryProtectionGroups;	// 288 = 0x120
    _HMContext *_context;	// 296 = 0x128
    HMHomeManager *_homeManager;	// 304 = 0x130
    NSUUID *_uuid;	// 312 = 0x138
    HMRoom *_homeAsRoom;	// 320 = 0x140
    HMMutableArray *_currentActionSets;	// 328 = 0x148
    HMMutableArray *_currentMediaSystems;	// 336 = 0x150
    HMMutableArray *_currentAccessories;	// 344 = 0x158
    HMFVersion *_supportedSiriEndPointVersion;	// 352 = 0x160
}

+ (id)logCategory;	// IMP=0x000000000011be63
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000011be5b
+ (id)passSerialNumberWithHomeUUID:(id)arg1 userUUID:(id)arg2;	// IMP=0x0000000000043bc6
+ (id)errorByDeviceWithOverallError:(id)arg1;	// IMP=0x0000000000043cf0
+ (_Bool)isValidMediaPassword:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000137d64
+ (id)generateMediaPasswordWithError:(id *)arg1;	// IMP=0x0000000000137d52
+ (_Bool)accessorySupportsMediaAccessControl:(id)arg1;	// IMP=0x0000000000137d3d
- (void).cxx_destruct;	// IMP=0x0000000000112e98
@property(copy) HMFVersion *supportedSiriEndPointVersion; // @synthesize supportedSiriEndPointVersion=_supportedSiriEndPointVersion;
@property(retain, nonatomic) HMMutableArray *currentAccessories; // @synthesize currentAccessories=_currentAccessories;
@property(retain, nonatomic) HMMutableArray *currentMediaSystems; // @synthesize currentMediaSystems=_currentMediaSystems;
@property(retain, nonatomic) HMMutableArray *currentActionSets; // @synthesize currentActionSets=_currentActionSets;
@property(retain, nonatomic) HMRoom *homeAsRoom; // @synthesize homeAsRoom=_homeAsRoom;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(retain, nonatomic) HMMutableArray *currentAccessoryProtectionGroups; // @synthesize currentAccessoryProtectionGroups=_currentAccessoryProtectionGroups;
@property(retain, nonatomic) NSOperationQueue *shareWithHomeOwnerOperationQueue; // @synthesize shareWithHomeOwnerOperationQueue=_shareWithHomeOwnerOperationQueue;
@property(nonatomic) _Bool notificationEnableRequestedForAppleMediaAccessories; // @synthesize notificationEnableRequestedForAppleMediaAccessories=_notificationEnableRequestedForAppleMediaAccessories;
@property(nonatomic) _Bool notificationEnableRequested; // @synthesize notificationEnableRequested=_notificationEnableRequested;
@property(nonatomic) long long locationAuthorization; // @synthesize locationAuthorization=_locationAuthorization;
@property(nonatomic, getter=isAdminUser) _Bool adminUser; // @synthesize adminUser=_adminUser;
@property(nonatomic, getter=isOwnerUser) _Bool ownerUser; // @synthesize ownerUser=_ownerUser;
@property(retain, nonatomic) HMMutableArray *currentResidentDevices; // @synthesize currentResidentDevices=_currentResidentDevices;
@property(retain, nonatomic) HMMutableArray *currentUsers; // @synthesize currentUsers=_currentUsers;
@property(retain, nonatomic) HMMutableArray *currentTriggers; // @synthesize currentTriggers=_currentTriggers;
@property(retain, nonatomic) HMMutableArray *currentTriggerOwnedActionSets; // @synthesize currentTriggerOwnedActionSets=_currentTriggerOwnedActionSets;
@property(retain, nonatomic) HMMutableArray *currentServiceGroups; // @synthesize currentServiceGroups=_currentServiceGroups;
@property(readonly, nonatomic) HMMutableArray *currentZones; // @synthesize currentZones=_currentZones;
@property(readonly, nonatomic) HMMutableArray *currentRooms; // @synthesize currentRooms=_currentRooms;
@property(readonly, nonatomic) unsigned long long homeHubState; // @synthesize homeHubState=_homeHubState;
@property(nonatomic) _Bool isUpdatedToROAR; // @synthesize isUpdatedToROAR=_isUpdatedToROAR;
@property(copy, nonatomic) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
@property(copy, nonatomic) NSArray *managedTriggers; // @synthesize managedTriggers=_managedTriggers;
@property(retain, nonatomic) NSString *threadNetworkID; // @synthesize threadNetworkID=_threadNetworkID;
@property(nonatomic) _Bool multiUserEnabled; // @synthesize multiUserEnabled=_multiUserEnabled;
- (void)fetchLastModifiedServiceOfType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011269e
- (id)logIdentifier;	// IMP=0x000000000011264e
- (id)mediaDestintionsWithHomeTheaterSupportedOptions;	// IMP=0x000000000011257b
- (id)mediaDestintionsWithSupportedOptions:(unsigned long long)arg1;	// IMP=0x000000000011244b
@property(readonly) HMPersonSettingsManager *personSettingsManager; // @synthesize personSettingsManager=_personSettingsManager;
@property(copy) HMHomePersonManagerSettings *personManagerSettings; // @synthesize personManagerSettings=_personManagerSettings;
@property(retain) HMHomePersonManager *personManager; // @synthesize personManager=_personManager;
- (void)_updateApplicationData:(id)arg1 forAppDataContainer:(id)arg2 appDataContainerUUIDKeyName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000111b0d
- (void)updateApplicationData:(id)arg1 forAppDataContainer:(id)arg2 appDataContainerUUIDKeyName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001118f5
- (void)updateApplicationData:(id)arg1 forActionSet:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001118d9
- (void)updateApplicationData:(id)arg1 forServiceGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001118bd
- (void)updateApplicationData:(id)arg1 forRoom:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001118a1
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000111886
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy, nonatomic) HMFMessageDestination *messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001117b5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000110188
@property(readonly, copy) NSUUID *applicationDataIdentifier;
- (void)_notifyDelegateOfBulletinNotificationsSupportedUpdate;	// IMP=0x000000000011004c
- (void)_notifyDelegateOfUpdatedHomeLocationStatus;	// IMP=0x000000000010ff22
- (void)_notifyDelegateOfRemovedMediaSystem:(id)arg1;	// IMP=0x000000000010fc56
- (void)_notifyDelegateOfAddedMediaSystem:(id)arg1;	// IMP=0x000000000010f96f
- (void)_removeIncompatibleTrigger:(id)arg1;	// IMP=0x000000000010f8e0
- (void)_notifyDelegateOfHomeHubStateUpdate;	// IMP=0x000000000010f7b6
- (void)_notifyDelegateOfTriggerUpdated:(id)arg1;	// IMP=0x000000000010f56e
- (void)_notifyDelegateOfTriggerRemoved:(id)arg1;	// IMP=0x000000000010f43c
- (void)_notifyDelegateOfTriggerAdded:(id)arg1;	// IMP=0x000000000010f30a
- (void)_notifyDelegateOfAccesoryInvitationsUpdateForUser:(id)arg1;	// IMP=0x000000000010f17c
- (void)notifyDelegateOfAccesoryInvitationsUpdateForUser:(id)arg1;	// IMP=0x000000000010eff8
- (void)_notifyDelegateOfAccessControlUpdateForUser:(id)arg1;	// IMP=0x000000000010ed8a
- (void)notifyDelegateOfAccessControlUpdateForUser:(id)arg1;	// IMP=0x000000000010ec06
- (void)_invokeDelegateForAppData:(id)arg1;	// IMP=0x000000000010ea88
- (void)_notifyDelegateOfAppDataUpdate;	// IMP=0x000000000010e9a4
- (void)_notifyDelegateOfAppDataUpdateForActionSet:(id)arg1;	// IMP=0x000000000010e845
- (void)notifyDelegateOfAppDataUpdateForActionSet:(id)arg1;	// IMP=0x000000000010e6c1
- (void)_notifyDelegateOfAppDataUpdateForServiceGroup:(id)arg1;	// IMP=0x000000000010e562
- (void)notifyDelegateOfAppDataUpdateForServiceGroup:(id)arg1;	// IMP=0x000000000010e3de
- (void)_notifyDelegateOfAppDataUpdateForRoom:(id)arg1;	// IMP=0x000000000010e27f
- (void)notifyDelegateOfAppDataUpdateForRoom:(id)arg1;	// IMP=0x000000000010e0fb
- (id)_getContainerForAppData:(id)arg1;	// IMP=0x000000000010dfc9
- (void)_handleHomeHubStateUpdatedNotification:(id)arg1;	// IMP=0x000000000010df40
- (void)_handleHomeLocationStatusUpdateNotification:(id)arg1;	// IMP=0x000000000010dcd7
- (void)_handleAccessorySetupCodeFailureMessage:(id)arg1;	// IMP=0x000000000010dc2c
- (void)_handleRuntimeStateUpdate:(id)arg1 reason:(id)arg2;	// IMP=0x000000000010d92d
- (void)handleRuntimeStateUpdate:(id)arg1 reason:(id)arg2;	// IMP=0x000000000010d76f
- (void)_handleMediaSystemRemovedNotification:(id)arg1;	// IMP=0x000000000010d47b
- (void)_handleAccessoryInfoUpdatedNotification:(id)arg1;	// IMP=0x000000000010d100
- (void)_handleNotificationsEnabled:(id)arg1;	// IMP=0x000000000010cded
- (void)_handleUpdatedResidentDevice:(id)arg1;	// IMP=0x000000000010c970
- (void)_enableNotification:(_Bool)arg1 forCharacteristics:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010c0ec
- (void)enableNotification:(_Bool)arg1 forCharacteristics:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010bd1e
- (void)reEnableNotifications;	// IMP=0x000000000010bbe1
- (void)_enableNotifications:(_Bool)arg1 includeAppleMediaAccessoryNotifications:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010b837
- (void)enableNotifications:(_Bool)arg1 includeAppleMediaAccessoryNotifications:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010b556
- (void)enableNotifications:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010b28b
- (void)_updateInvitation:(id)arg1 invitationState:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010af03
- (void)_acceptInvitation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010aee9
- (void)__locationAuthorizationUpdated:(id)arg1;	// IMP=0x000000000010ac6f
- (void)__updateLocation:(id)arg1 locationStatus:(long long)arg2;	// IMP=0x000000000010aa00
- (void)_retrieveLocation;	// IMP=0x000000000010a7c8
- (void)updateAccessForUser:(id)arg1 announceAccess:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010a396
- (void)updateAccessForUser:(id)arg1 camerasAccessLevel:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000109ec7
- (void)updateForUser:(id)arg1 presenceAuthorizationStatus:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000109a43
- (void)updateAccessForUser:(id)arg1 remoteAccess:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001095c5
- (void)updateAccessForUser:(id)arg1 administrator:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000109147
- (void)__updateHomeAccessControlFromResponsePayload:(id)arg1 forUser:(id)arg2;	// IMP=0x0000000000108ee6
- (void)_handleMultipleCharacteristicValuesUpdated:(id)arg1;	// IMP=0x000000000010879f
- (void)_handleAccessoryErrorNotification:(id)arg1;	// IMP=0x0000000000108597
- (void)_handleUserRemovedNotification:(id)arg1;	// IMP=0x0000000000108287
- (void)_handleUpdatedPresenceComputeNotification:(id)arg1;	// IMP=0x0000000000108086
- (id)_findUserWithID:(id)arg1;	// IMP=0x0000000000107eb4
- (void)_handleUserAddedNotification:(id)arg1;	// IMP=0x0000000000107ae3
- (void)_handleUserInvitationsUpdatedNotification:(id)arg1;	// IMP=0x0000000000107add
- (id)outgoingInvitations;	// IMP=0x0000000000107ac4
- (void)_notifyUpdatedSupportedFeatures;	// IMP=0x00000000001079c9
- (void)_handleAccessoryReprovisionedNotification:(id)arg1;	// IMP=0x00000000001076bd
- (void)_reprovisionAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000107253
- (void)reprovisionAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000106f59
- (void)_handleAccessoryReprovisionStateUpdate:(id)arg1;	// IMP=0x0000000000106c06
- (void)handleStartWithError:(id)arg1 response:(id)arg2;	// IMP=0x0000000000106a40
- (void)_startSearchForAccessoriesNeedingReprovisioning;	// IMP=0x00000000001067f0
- (void)startSearchForAccessoriesNeedingReprovisioning;	// IMP=0x00000000001066b3
- (void)_addIdentifier:(id)arg1 bridgeUUID:(id)arg2;	// IMP=0x0000000000106573
- (void)_removeServices:(id)arg1;	// IMP=0x0000000000106422
- (void)removeServices:(id)arg1;	// IMP=0x000000000010629e
- (void)_handleAccessoryRemovedResponse:(id)arg1;	// IMP=0x0000000000105f5e
- (void)_handleAddAccessoryProgressNotification:(id)arg1;	// IMP=0x0000000000105a8c
- (void)_callProgressHandler:(CDUnknownBlockType)arg1 updatingAccessoryDescription:(id)arg2 fromMessage:(id)arg3;	// IMP=0x00000000001052e6
- (void)_handleAccessoryAddedNotification:(id)arg1;	// IMP=0x00000000001040b0
- (_Bool)_removeTriggerFromResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000103f43
- (_Bool)_addTrigger:(id)arg1 triggerUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000103c06
- (_Bool)_addTimerTriggerFromResponse:(id)arg1 withTimerTrigger:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001038b9
- (_Bool)_addEventTriggerFromResponse:(id)arg1 withEventTrigger:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000103112
- (void)notifyDelegatesOfExecution:(id)arg1 actionSet:(id)arg2;	// IMP=0x0000000000102f78
- (_Bool)_handleActionSetRemovedFromResponse:(CDUnknownBlockType)arg1 responsePayload:(id)arg2;	// IMP=0x0000000000102c4f
- (_Bool)_addActionSetFromResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000102897
- (void)_handleHomeLocationUpdateNotificaton:(id)arg1;	// IMP=0x0000000000102848
- (void)_handleHomeLocationUpdate:(id)arg1;	// IMP=0x00000000001027df
- (id)lightProfileWithProfileUUID:(id)arg1;	// IMP=0x000000000010249c
- (id)profileWithUniqueIdentifier:(id)arg1;	// IMP=0x000000000010214d
- (id)mediaProfileWithProfileUUID:(id)arg1;	// IMP=0x0000000000101f4e
- (id)mediaProfileWithUUID:(id)arg1;	// IMP=0x0000000000101d4f
- (void)_notifySetupFailedIfInHomeUIService:(CDUnknownBlockType)arg1;	// IMP=0x0000000000101b3a
- (id)accessoryWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000000101967
- (id)userWithUUID:(id)arg1;	// IMP=0x0000000000101864
- (id)accessoryWithUUID:(id)arg1;	// IMP=0x00000000001017e1
- (id)triggerWithName:(id)arg1;	// IMP=0x000000000010175e
- (id)triggerWithUUID:(id)arg1;	// IMP=0x00000000001016db
- (id)actionSetWithName:(id)arg1;	// IMP=0x0000000000101658
- (id)triggerOwnedActionSetWithUUID:(id)arg1;	// IMP=0x00000000001015d5
- (id)actionSetWithUUID:(id)arg1;	// IMP=0x0000000000101552
- (id)serviceGroupWithName:(id)arg1;	// IMP=0x00000000001014cf
- (id)serviceGroupWithUUID:(id)arg1;	// IMP=0x000000000010144c
- (id)zoneWithName:(id)arg1;	// IMP=0x00000000001013c9
- (id)zoneWithUUID:(id)arg1;	// IMP=0x0000000000101346
- (id)roomWithName:(id)arg1;	// IMP=0x00000000001012c3
- (id)roomWithUUID:(id)arg1;	// IMP=0x00000000001011bb
- (void)_registerNotificationHandlers;	// IMP=0x000000000010088c
- (id)_privateDelegate;	// IMP=0x000000000010082b
- (void)_handleAccessoryConnectivityChangedNotification:(id)arg1;	// IMP=0x0000000000100717
- (void)_handleDidRemoveWalletKeyMessage:(id)arg1;	// IMP=0x00000000001005e5
- (void)_handleDidAddWalletKeyMessage:(id)arg1;	// IMP=0x00000000001004ea
@property _Bool hasOnboardedForWalletKey; // @synthesize hasOnboardedForWalletKey=_hasOnboardedForWalletKey;
@property _Bool hasOnboardedForAccessCode; // @synthesize hasOnboardedForAccessCode=_hasOnboardedForAccessCode;
- (void)setHasAnyUserAcknowledgedCameraRecordingOnboardingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fffba
@property(nonatomic) _Bool hasAnyUserAcknowledgedCameraRecordingOnboarding; // @synthesize hasAnyUserAcknowledgedCameraRecordingOnboarding=_hasAnyUserAcknowledgedCameraRecordingOnboarding;
- (void)_handleMultiUserEnabledChangeNotification:(id)arg1;	// IMP=0x00000000000ffb76
- (void)enableMultiUserWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ff649
- (_Bool)isMultiUserEnabled;	// IMP=0x00000000000ff447
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000fef8f
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000fec5e
@property(readonly, copy) NSString *description;
- (unsigned long long)_mergeCurrentHomeAccessoryNetworkProtectionGroupsWithNewAccessoryNetworkProtectionGroups:(id)arg1;	// IMP=0x00000000000fe77f
- (unsigned long long)_mergeCurrentHomeMediaSystemsWithNewMediaSystems:(id)arg1;	// IMP=0x00000000000fe554
- (unsigned long long)_mergeCurrentHomeResidentDevicesWithNewHomeResidentDevices:(id)arg1;	// IMP=0x00000000000fe329
- (unsigned long long)_mergeCurrentHomeUsersWithNewHomeUsers:(id)arg1;	// IMP=0x00000000000fe0fe
- (unsigned long long)_mergeCurrentHomeTriggersWithNewHomeTriggers:(id)arg1;	// IMP=0x00000000000fded3
- (unsigned long long)_mergeCurrentHomeTriggerOwnedActionSetsWithNewHomeActionSets:(id)arg1;	// IMP=0x00000000000fdcc9
- (unsigned long long)_mergeCurrentHomeActionSetsWithNewHomeActionSets:(id)arg1;	// IMP=0x00000000000fda9e
- (unsigned long long)_mergeCurrentHomeServiceGroupsWithNewHomeServiceGroups:(id)arg1;	// IMP=0x00000000000fd873
- (unsigned long long)_mergeAccessoriesForMergeCollection:(id)arg1 currentAccessories:(id)arg2;	// IMP=0x00000000000fd653
- (unsigned long long)_mergeCurrentHomeAccessoriesWithNewHomeAccessories:(id)arg1;	// IMP=0x00000000000fd4ca
- (unsigned long long)_mergeCurrentHomeZonesWithNewHomeZones:(id)arg1;	// IMP=0x00000000000fd29f
- (unsigned long long)_mergeRoomsForMergeCollection:(id)arg1 currentRooms:(id)arg2;	// IMP=0x00000000000fd178
- (unsigned long long)_mergeCurrentHomeRoomsWithNewHomeRooms:(id)arg1;	// IMP=0x00000000000fcfef
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x00000000000fa905
- (void)mergeWithNewObjectNoMergeCount:(id)arg1;	// IMP=0x00000000000fa7e5
- (void)recomputeAssistantIdentifiersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fa0d3
- (void)recomputeAssistantIdentifier;	// IMP=0x00000000000fa066
- (void)_recomputeAssistantIdentifier;	// IMP=0x00000000000f9f9f
- (void)_setupBuiltinActionSets:(id)arg1;	// IMP=0x00000000000f9d26
- (id)createActionSetWithName:(id)arg1 type:(id)arg2 uuid:(id)arg3;	// IMP=0x00000000000f9c4c
- (id)createAndAddActionSetWithName:(id)arg1 type:(id)arg2 uuid:(id)arg3;	// IMP=0x00000000000f9be0
- (void)setBulletinNotificationsSupported:(_Bool)arg1;	// IMP=0x00000000000f9b42
@property(readonly, getter=areBulletinNotificationsSupported) _Bool bulletinNotificationsSupported; // @synthesize bulletinNotificationsSupported=_bulletinNotificationsSupported;
- (void)sendConfigureBulletinNotification;	// IMP=0x00000000000f9913
@property unsigned long long networkRouterSupportDisableReason; // @synthesize networkRouterSupportDisableReason=_networkRouterSupportDisableReason;
@property unsigned long long networkRouterSupport; // @synthesize networkRouterSupport=_networkRouterSupport;
@property long long protectionMode; // @synthesize protectionMode=_protectionMode;
@property(copy, nonatomic) NSDate *notificationsUpdatedTime; // @synthesize notificationsUpdatedTime=_notificationsUpdatedTime;
@property(nonatomic, getter=areNotificationsEnabled) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
- (id)targetControllers;	// IMP=0x00000000000f8f16
- (id)controlTargets;	// IMP=0x00000000000f8d5b
- (id)mediaSystems;	// IMP=0x00000000000f8d0b
@property(readonly, nonatomic) _Bool supportsAddingNetworkRouter;
- (_Bool)_setSupportedFeature:(long long)arg1 enabled:(_Bool)arg2;	// IMP=0x00000000000f8bc7
@property(copy, nonatomic) NSSet *supportedFeatures; // @synthesize supportedFeatures=_supportedFeatures;
@property(retain, nonatomic) HMApplicationData *applicationData; // @synthesize applicationData=_applicationData;
@property(retain, nonatomic) HMUser *currentUser; // @synthesize currentUser=_currentUser;
@property(readonly) CLLocation *homeLocation; // @synthesize homeLocation=_homeLocation;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long homeLocationStatus; // @synthesize homeLocationStatus=_homeLocationStatus;
@property(nonatomic, getter=isPrimary) _Bool primary; // @synthesize primary=_primary;
@property(nonatomic) __weak id <HMHomeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)__configureWithContext:(id)arg1 homeManager:(id)arg2;	// IMP=0x00000000000f6bff
- (void)unconfigure;	// IMP=0x00000000000f6a80
- (void)_unconfigure;	// IMP=0x00000000000f5e07
- (void)_unconfigureContext;	// IMP=0x00000000000f5d68
- (id)initWithName:(id)arg1 uuid:(id)arg2 homeAsRoomUUID:(id)arg3 homeAsRoomName:(id)arg4 actionSets:(id)arg5;	// IMP=0x00000000000f5c57
- (id)initWithName:(id)arg1 uuid:(id)arg2;	// IMP=0x00000000000f5890
- (id)init;	// IMP=0x00000000000f5882
- (void)setHasOnboardedForAccessCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000026e8a
- (id)createAccessCodeManager;	// IMP=0x0000000000026e41
- (void)fetchWalletKeyDeviceStateForPairedWatchesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004200f
- (void)fetchWalletKeyDeviceStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000041cee
- (void)fetchIsWalletKeySupportedOnAnyPairedWatchWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000041aa3
- (void)fetchIsWalletKeySupportedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000041858
- (void)fetchExistingWalletKeyUUIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004160d
- (void)fetchWalletKeyColorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004121e
- (void)fetchWalleKeyExpressEnablementConflictingPassDescription:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040fd3
- (void)fetchIsExpressEnabledForWalletKeyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040d88
- (void)fetchWalletKeyEncodedPKPassWithIgnoredErrorCodes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000040907
- (void)fetchAvailableWalletKeyEncodedPKPass:(CDUnknownBlockType)arg1;	// IMP=0x000000000004088b
- (void)fetchWalletKeyEncodedPKPass:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040808
- (void)fetchWalletKeyCustomURLWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000405bd
- (void)enableExpressForWalletKeyWithAuthData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000040282
- (void)addWalletKeyToPairedWatchesWithOptions:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003ff09
- (void)fetchHasWalletKeyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003fcbe
- (void)addWalletKeyWithOptions:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003f8fb
- (void)addWalletKeyWithOptions:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003f73a
- (void)setHasOnboardedForWalletKeyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f434
@property(readonly, copy) NSString *walletKeyPassSerialNumber;
- (void)fetchSettingsForLightProfiles:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009c58f
- (void)unjoinThreadNetworkWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c7cad
- (void)joinThreadNetwork:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c7909
- (void)joinThreadNetworkWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c75d5
- (void)retrieveResultsWithReportingContext:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001351f0
- (void)_retrieveResultsWithReportingContext:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3 activity:(id)arg4;	// IMP=0x0000000000134eec
- (void)_performBatchRequest:(id)arg1 activity:(id)arg2;	// IMP=0x0000000000133946
- (CDUnknownBlockType)__responseHandlerForRequests:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3 activity:(id)arg4;	// IMP=0x0000000000133801
- (void)__handleExecuteRequest:(id)arg1 activity:(id)arg2 batchRequest:(id)arg3;	// IMP=0x00000000001334a7
- (void)performBatchRequest:(id)arg1;	// IMP=0x00000000001331a4
- (void)performBatchCharacteristicRequest:(id)arg1;	// IMP=0x0000000000132e6e
- (void)unblockAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000132b8c
- (id)servicesWithTypes:(id)arg1;	// IMP=0x0000000000132803
- (void)_assignAccessory:(id)arg1 toRoom:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000132704
- (void)assignAccessory:(id)arg1 toRoom:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001323d5
- (void)_removeAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001320ad
- (void)removeAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000131db3
- (void)_cancelPairingForAccessoryWithDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000131972
- (void)cancelPairingForAccessoryWithDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000131678
- (void)userDidRespondToConsentRequestForSetupAccessoryDescription:(id)arg1 withResponse:(long long)arg2;	// IMP=0x000000000013139c
- (void)_startPairingWithAccessoryDescription:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001308f8
- (void)startPairingWithAccessoryDescription:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001306b7
- (void)stopDiscoveringSymptomsForNearbyDevices;	// IMP=0x000000000013053a
- (void)startDiscoveringSymptomsForNearbyDevices;	// IMP=0x00000000001303bd
- (CDUnknownBlockType)__defaultProgressHandlerForAddAccessory;	// IMP=0x0000000000130322
- (void)addAccessoryWithAccessorySetupPayload:(id)arg1 progress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001300e1
- (void)establishShareWithHomeOwner:(id)arg1 container:(id)arg2 allowWriteAccess:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000012fe08
- (void)establishShareWithHomeOwner:(id)arg1 container:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000012fdf0
- (void)shareWithHomeOwner:(id)arg1 container:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000012fd55
- (void)addAndSetUpNewAccessoriesWithSuggestedRoomName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000012f94f
- (void)addAndSetupAccessoriesWithPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000012f5d4
- (void)addAndSetupAccessoriesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000012f22e
- (void)_continuePairingForAccessoryWithUUID:(id)arg1 setupCode:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000012ef0c
- (void)continuePairingForAccessoryWithUUID:(id)arg1 setupCode:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000012ebdd
- (void)_cancelPairingForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000012e8d6
- (void)cancelPairingForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000012e5dc
- (void)_addAccessory:(id)arg1 accessoryDescription:(id)arg2 password:(id)arg3 setupCodeDeferred:(_Bool)arg4 progress:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000012da6e
- (void)startPairingWithAccessory:(id)arg1 accessorySetupDescription:(id)arg2 progress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000012d67c
- (void)addAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000012d55c
- (void)addAccessory:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000012d544
- (void)addAccessory:(id)arg1 password:(id)arg2 progress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000012d13f
@property(readonly, copy, nonatomic) NSArray *accessories;
- (id)roomForEntireHome;	// IMP=0x0000000000128ad8
- (void)_removeRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000128361
- (void)removeRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001281a3
- (void)_addRoomWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000127983
- (void)addRoomWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000127687
@property(readonly, copy, nonatomic) NSArray *rooms;
- (void)_removeZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011fecf
- (void)removeZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011fbd5
- (void)_addZoneWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011f713
- (void)addZoneWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011f417
@property(readonly, copy, nonatomic) NSArray *zones;
- (void)_removeServiceGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000126ef5
- (void)removeServiceGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000126bfb
- (void)_addServiceGroupWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000012674d
- (void)addServiceGroupWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000126451
@property(readonly, copy, nonatomic) NSArray *serviceGroups;
- (void)removeUserWithoutConfirmation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000012289d
- (void)inviteUsers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000122677
- (void)addUser:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000122376
- (void)addUserWithoutConfirmation:(id)arg1 privilege:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000122075
- (void)addUserWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000121d8a
- (id)owner;	// IMP=0x0000000000121b44
- (id)administrator;	// IMP=0x00000000001218fe
- (id)location;	// IMP=0x00000000001218b6
- (id)residentDevices;	// IMP=0x0000000000121866
- (id)_createFailedAccessoriesListFromError:(id)arg1;	// IMP=0x00000000001213e0
- (void)_removeUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000120de6
- (void)removeUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000120aec
- (id)homeAccessControlForUser:(id)arg1;	// IMP=0x0000000000120ad7
- (void)_manageUsersWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000120a15
- (void)manageUsersWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000012075d
@property(readonly, copy, nonatomic) NSArray *users;
- (void)_executeActionSet:(id)arg1 activity:(id)arg2 reportContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000012c40c
- (void)executeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000012c056
- (void)_removeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000012b9e9
- (void)removeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000012b6ef
- (void)_addActionSetWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000012b007
- (void)addActionSetWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000012ad0b
- (id)builtinActionSetOfType:(id)arg1;	// IMP=0x000000000012ac6e
@property(readonly, copy, nonatomic) NSArray *triggerOwnedActionSets; // @dynamic triggerOwnedActionSets;
@property(readonly, copy, nonatomic) NSArray *actionSets;
- (void)_removeMediaSystem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000125131
- (void)removeMediaSystem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000124e37
- (void)_userDidConfirmExecution:(_Bool)arg1 ofTriggerWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000012491b
- (void)userDidConfirmExecution:(_Bool)arg1 ofTriggerWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000124618
- (void)userDidConfirmExecution:(_Bool)arg1 ofTrigger:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000124260
- (void)_removeTrigger:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000123c9e
- (void)removeTrigger:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001239a4
- (void)_addTrigger:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000122fa4
- (void)addTrigger:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000122caa
@property(readonly, copy, nonatomic) NSArray *triggers;
- (void)enableRemoteAccess:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011c80c
- (void)queryRemoteAccessWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000011c6f0
- (void)updateAutomaticSoftwareUpdateEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000125e2c
@property(getter=isAutomaticSoftwareUpdateEnabled) _Bool automaticSoftwareUpdateEnabled; // @dynamic automaticSoftwareUpdateEnabled;
- (void)updateMediaPassword:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000129ba0
@property(copy) NSString *mediaPassword; // @dynamic mediaPassword;
- (void)updateMediaPeerToPeerEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001296cf
@property(getter=isMediaPeerToPeerEnabled) _Bool mediaPeerToPeerEnabled; // @dynamic mediaPeerToPeerEnabled;
- (void)updateMinimumMediaUserPrivilege:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000012925b
@property long long minimumMediaUserPrivilege; // @dynamic minimumMediaUserPrivilege;
- (void)setAccessoryNetworkProtectionChangeSupportMinHomeKitVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011dedb
- (void)setNetworkRouterSupportMinimumHomeKitVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011dbd2
- (void)_didUpdateNetworkRouterSupport;	// IMP=0x000000000011daa8
- (void)_handleHomeNetworkRouterSupportUpdated:(id)arg1;	// IMP=0x000000000011d962
- (void)_didUpdateAccessoryNetworkProtectionGroup:(id)arg1;	// IMP=0x000000000011d802
- (void)_didRemoveAccessoryNetworkProtectionGroup:(id)arg1;	// IMP=0x000000000011d6a2
- (void)_didAddAccessoryNetworkProtectionGroup:(id)arg1;	// IMP=0x000000000011d542
- (void)_handleAccessoryNetworkProtectionGroupRemovedNotification:(id)arg1;	// IMP=0x000000000011d2bd
- (void)_handleAccessoryNetworkProtectionGroupAddedNotification:(id)arg1;	// IMP=0x000000000011d02a
- (void)updateAccessoryNetworkProtectionGroup:(id)arg1 protectionMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000011cd0d
- (void)updateNetworkProtection:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011c9a4
@property(readonly, copy) NSArray *accessoryProtectionGroups;
- (id)userActionPredictionController;	// IMP=0x0000000000120611
- (void)resolveThreadNetworkCredentialsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000011bf65
@property(readonly, nonatomic) NSUUID *threadNetworkCredentialsUUID;
- (id)accessoryWithIdsIdentifier:(id)arg1;	// IMP=0x000000000012a987
- (id)accessoryWithSiriEndpointIdentifier:(id)arg1;	// IMP=0x000000000012a975
- (id)accessoryWithEndpointIdentifier:(id)arg1;	// IMP=0x000000000012a963
- (void)retrieveHomeKitLocationForFeedbackWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000011ece0
- (id)createSiriEndpointProfilesMessenger;	// IMP=0x00000000001b8ea9
- (void)executeActions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ddb4e
- (void)updatePersonManagerSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ff3dd
- (id)personManagerWithUUID:(id)arg1;	// IMP=0x00000000001ff301
- (id)photosPersonManagerWithUUID:(id)arg1;	// IMP=0x00000000001ff267
- (id)photosPersonManagerForUser:(id)arg1;	// IMP=0x00000000001ff252
- (void)configurePersonManagerWithSettings:(id)arg1;	// IMP=0x00000000001fefd6
- (void)resetAndRemoveAllCHIPPairingsFromAccessory:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000020438e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

