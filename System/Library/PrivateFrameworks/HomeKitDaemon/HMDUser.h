//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareTrustManagerDataSource-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareTrustManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMDRemoteEventRouterUserAccessControlProvider-Protocol.h>
#import <HomeKitDaemon/HMDSettingsControllerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDUserDataControllerDataSource-Protocol.h>
#import <HomeKitDaemon/HMDUserDataControllerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDUserSettingsBackingStoreControllerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDUserSettingsInitialValueProviding-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class AVOutputDeviceAuthorizedPeer, HAPPairingIdentity, HMBShareUserID, HMDAccountHandle, HMDAccountIdentifier, HMDAssistantAccessControl, HMDCloudShareMessenger, HMDCloudShareTrustManager, HMDHome, HMDPersonSettingsManager, HMDPhotosPersonManager, HMDSettingsControllerDependency, HMDSiriMultiUserNewLanguageNotificationManager, HMDUserDataController, HMDUserPhotosPersonDataManager, HMDUserSettingsBackingStoreController, HMFMessageDispatcher, HMPhotosPersonManagerSettings, HMUserPresenceAuthorization, NAFuture, NSData, NSNumber, NSObject, NSSet, NSString, NSUUID;
@protocol HMDUserDataSource, HMFLocking, OS_dispatch_queue;

@interface HMDUser : HMFObject <HMDCloudShareTrustManagerDataSource, HMDCloudShareTrustManagerDelegate, HMDUserDataControllerDelegate, HMDUserSettingsBackingStoreControllerDelegate, HMDUserDataControllerDataSource, HMFLogging, HMFDumpState, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, HMDSettingsControllerDelegate, HMDRemoteEventRouterUserAccessControlProvider, HMDUserSettingsInitialValueProviding, NSSecureCoding>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
    _Bool _remoteAccessAllowed;	// 32 = 0x20
    HMDAccountHandle *_accountHandle;	// 40 = 0x28
    HMDAccountIdentifier *_accountIdentifier;	// 48 = 0x30
    _Bool _needsiTunesMultiUserRepair;	// 56 = 0x38
    unsigned long long _privilege;	// 64 = 0x40
    HMDHome *_home;	// 72 = 0x48
    NSString *_userID;	// 80 = 0x50
    HMUserPresenceAuthorization *_presenceAuthStatus;	// 88 = 0x58
    NSNumber *_camerasAccessLevelValue;	// 96 = 0x60
    HAPPairingIdentity *_pairingIdentity;	// 104 = 0x68
    NSString *_displayName;	// 112 = 0x70
    HMDAssistantAccessControl *_assistantAccessControl;	// 120 = 0x78
    unsigned long long _announceAccessLevel;	// 128 = 0x80
    long long _userCloudShareWithOwnerMessagingState;	// 136 = 0x88
    HMBShareUserID *_cloudShareID;	// 144 = 0x90
    NAFuture *_cloudShareIDFuture;	// 152 = 0x98
    HMDUserPhotosPersonDataManager *_photosPersonDataManager;	// 160 = 0xa0
    HMDPersonSettingsManager *_personSettingsManager;	// 168 = 0xa8
    NSString *_accessCode;	// 176 = 0xb0
    NSUUID *_accessCodeChangedByUserUUID;	// 184 = 0xb8
    HMDUserDataController *_userDataController;	// 192 = 0xc0
    HMDSettingsControllerDependency *_sharedSettingsControllerDependency;	// 200 = 0xc8
    HMDCloudShareMessenger *_shareMessenger;	// 208 = 0xd0
    HMDSettingsControllerDependency *_privateSettingsControllerDependency;	// 216 = 0xd8
    HMDUserSettingsBackingStoreController *_privateBackingStoreController;	// 224 = 0xe0
    id <HMDUserDataSource> _dataSource;	// 232 = 0xe8
    HMDSiriMultiUserNewLanguageNotificationManager *_siriMultiUserNewLanguageNotificationManager;	// 240 = 0xf0
    HMFMessageDispatcher *_messageDispatcher;	// 248 = 0xf8
    unsigned long long _announceNotificationModeForCurrentDevice;	// 256 = 0x100
    HMDCloudShareTrustManager *_cloudShareTrustManager;	// 264 = 0x108
    HMDUserSettingsBackingStoreController *_sharedBackingStoreController;	// 272 = 0x110
}

+ (id)userDictionaryWithUserID:(id)arg1 privilege:(unsigned long long)arg2 remoteAccessAllowed:(_Bool)arg3 cameraAccessLevel:(unsigned long long)arg4 announceAccessAllowed:(id)arg5 announceAccessLevel:(unsigned long long)arg6;	// IMP=0x0000000000995bd5
+ (id)userWithDictionary:(id)arg1 home:(id)arg2;	// IMP=0x000000000099587c
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000995874
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x000000000099586c
+ (id)logCategory;	// IMP=0x000000000099583c
+ (id)UUIDWithUserID:(id)arg1 forHomeIdentifier:(id)arg2 uuid:(id)arg3 pairingIdentity:(id)arg4;	// IMP=0x0000000000995596
+ (id)userIDForAccountHandle:(id)arg1;	// IMP=0x0000000000995543
+ (id)ownerWithUserID:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 homeManager:(id)arg4;	// IMP=0x000000000099522e
+ (id)currentUserWithPrivilege:(unsigned long long)arg1 forHome:(id)arg2;	// IMP=0x0000000000994ec3
- (void).cxx_destruct;	// IMP=0x000000000098db3a
@property(retain) HMDUserSettingsBackingStoreController *sharedBackingStoreController; // @synthesize sharedBackingStoreController=_sharedBackingStoreController;
@property(retain) HMDCloudShareTrustManager *cloudShareTrustManager; // @synthesize cloudShareTrustManager=_cloudShareTrustManager;
@property unsigned long long announceNotificationModeForCurrentDevice; // @synthesize announceNotificationModeForCurrentDevice=_announceNotificationModeForCurrentDevice;
@property(retain) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain) HMDSiriMultiUserNewLanguageNotificationManager *siriMultiUserNewLanguageNotificationManager; // @synthesize siriMultiUserNewLanguageNotificationManager=_siriMultiUserNewLanguageNotificationManager;
@property(readonly) id <HMDUserDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property _Bool needsiTunesMultiUserRepair; // @synthesize needsiTunesMultiUserRepair=_needsiTunesMultiUserRepair;
@property(retain) HMDUserSettingsBackingStoreController *privateBackingStoreController; // @synthesize privateBackingStoreController=_privateBackingStoreController;
@property(retain) HMDSettingsControllerDependency *privateSettingsControllerDependency; // @synthesize privateSettingsControllerDependency=_privateSettingsControllerDependency;
@property(retain) HMDCloudShareMessenger *shareMessenger; // @synthesize shareMessenger=_shareMessenger;
@property(retain) HMDSettingsControllerDependency *sharedSettingsControllerDependency; // @synthesize sharedSettingsControllerDependency=_sharedSettingsControllerDependency;
@property(retain) HMDUserDataController *userDataController; // @synthesize userDataController=_userDataController;
@property(retain) NSUUID *accessCodeChangedByUserUUID; // @synthesize accessCodeChangedByUserUUID=_accessCodeChangedByUserUUID;
@property(copy) NSString *accessCode; // @synthesize accessCode=_accessCode;
@property(retain) HMDPersonSettingsManager *personSettingsManager; // @synthesize personSettingsManager=_personSettingsManager;
@property(retain) HMDUserPhotosPersonDataManager *photosPersonDataManager; // @synthesize photosPersonDataManager=_photosPersonDataManager;
@property(readonly) NAFuture *cloudShareIDFuture; // @synthesize cloudShareIDFuture=_cloudShareIDFuture;
@property(retain) HMBShareUserID *cloudShareID; // @synthesize cloudShareID=_cloudShareID;
@property(copy, setter=setUUID:) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)allAccessoryUUID;	// IMP=0x000000000098d800
- (void)applyConditionalValueUpdateToModels:(id)arg1;	// IMP=0x000000000098d7fa
- (id)pushTokensForDevicesObservingSubjectDevice:(id)arg1 subActivity:(id)arg2;	// IMP=0x000000000098d73a
- (void)deregisterIDSActivityObserver:(id)arg1;	// IMP=0x000000000098d6c8
- (void)deregisterIDSActivityObserver:(id)arg1 subActivity:(id)arg2 subjectDevice:(id)arg3;	// IMP=0x000000000098d5ac
- (void)updateIDSActivityObserver:(id)arg1;	// IMP=0x000000000098d4f8
- (void)registerIDSActivityObserver:(id)arg1 subActivity:(id)arg2 subjectDevice:(id)arg3;	// IMP=0x000000000098d3dc
- (void)cloudShareTrustManager:(id)arg1 didRemoveUserWithUUID:(id)arg2;	// IMP=0x000000000098d254
- (void)didRemoveTrustZoneInCloudShareTrustManager:(id)arg1;	// IMP=0x000000000098d17b
- (void)didFinishConfiguringForCloudShareTrustManager:(id)arg1;	// IMP=0x000000000098d0b4
- (void)cloudShareTrustManager:(id)arg1 didFetchOwnerCloudShareID:(id)arg2;	// IMP=0x000000000098cf9c
- (_Bool)isOwnerCapableForTrustManager:(id)arg1;	// IMP=0x000000000098cf58
- (id)homeForCloudShareTrustManager:(id)arg1;	// IMP=0x000000000098cf46
- (id)ownerForCloudShareTrustManager:(id)arg1;	// IMP=0x000000000098cf3d
- (id)zoneNameForCloudShareTrustManager:(id)arg1;	// IMP=0x000000000098cebc
- (_Bool)cloudShareTrustManager:(id)arg1 shouldShareTrustWithUser:(id)arg2;	// IMP=0x000000000098cd83
- (void)configureCloudShareTrustManager;	// IMP=0x000000000098cb5f
- (id)trustTargetUUID;	// IMP=0x000000000098ca74
- (void)updateCloudShareID:(id)arg1;	// IMP=0x000000000098c765
- (void)removeCloudShareID;	// IMP=0x000000000098c626
- (_Bool)userDataController:(id)arg1 isHAPAccessory:(id)arg2;	// IMP=0x000000000098c421
- (_Bool)userDataController:(id)arg1 isAppleMediaAccessory:(id)arg2;	// IMP=0x000000000098c21c
- (id)privateZoneControllerForUserDataController:(id)arg1;	// IMP=0x000000000098c20a
- (id)sharedZoneControllerForUserDataController:(id)arg1;	// IMP=0x000000000098c1f8
- (void)postUserSettingsUpdatedNotificationWithReason:(id)arg1;	// IMP=0x000000000098c120
- (void)userDataControllerDidUpdateMediaContentProfile:(id)arg1;	// IMP=0x000000000098c107
- (void)userDataControllerDidUpdateAssistantAccessControl:(id)arg1;	// IMP=0x000000000098c0ee
- (_Bool)userDataController:(id)arg1 isMediaContentProfileCapableAccessoryID:(id)arg2;	// IMP=0x000000000098bdff
- (_Bool)userDataController:(id)arg1 isPersonalRequestCapableAccessoryID:(id)arg2;	// IMP=0x000000000098bb10
- (void)backingStoreController:(id)arg1 didUpdatePhotosPersonManagerSettingsModel:(id)arg2 previousPhotosPersonManagerSettingsModel:(id)arg3;	// IMP=0x000000000098ba75
- (id)ownerForUserSettingsBackingStoreController:(id)arg1;	// IMP=0x000000000098ba6c
- (id)backingStoreController:(id)arg1 createParticipantManagerForCloudZone:(id)arg2;	// IMP=0x000000000098b96b
- (void)didStopBackingStoreController:(id)arg1;	// IMP=0x000000000098b79b
- (void)didStartLocalZoneForBackingStoreController:(id)arg1;	// IMP=0x000000000098b62e
- (void)didStartBackingStoreController:(id)arg1;	// IMP=0x000000000098b5bc
@property(readonly) NSUUID *userUUID;
@property(readonly) _Bool isRunningOnHomeOwnersDevice;
- (id)settingsControllerFollowerKeyPaths:(id)arg1;	// IMP=0x000000000098b49c
- (id)settingsController:(id)arg1 willUpdateSettingAtKeyPath:(id)arg2 withValue:(id)arg3;	// IMP=0x000000000098b07f
- (void)settingsController:(id)arg1 didUpdateWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000098b031
- (id)dictionaryEncoding;	// IMP=0x000000000098af2d
- (void)removeCloudData;	// IMP=0x000000000098ae25
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x000000000098a9e1
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x000000000098a9ca
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x000000000098a75a
- (id)announceUserSettingsModelWithChangeType:(unsigned long long)arg1;	// IMP=0x000000000098a6b2
- (void)migrateCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000098a28c
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000989f02
- (void)_transactionUserUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000988f0b
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000988a0b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009879f4
@property(readonly, copy, nonatomic) NSString *encodingRemoteDisplayName;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000986f0b
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;	// IMP=0x0000000000986e8d
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x0000000000986e2b
- (id)publicKey;	// IMP=0x0000000000986db1
- (id)pairingUsername;	// IMP=0x0000000000986d61
@property(copy) NSString *userID; // @synthesize userID=_userID;
@property(readonly) NSNumber *notificationContextNFCIdentifier;
@property(readonly) NSNumber *notificationContextHAPIdentifier;
- (void)configurePersonSettingsManager;	// IMP=0x0000000000986981
- (void)configurePhotosPersonDataManager;	// IMP=0x0000000000986828
- (id)updatePhotosPersonManagerSettings:(id)arg1;	// IMP=0x00000000009867a5
@property(readonly) HMDPhotosPersonManager *photosPersonManager;
@property(readonly, copy) HMPhotosPersonManagerSettings *photosPersonManagerSettings;
- (void)_handleAnnounceSettingsUpdate:(id)arg1;	// IMP=0x00000000009861e7
- (void)handleRemovedAccessory:(id)arg1;	// IMP=0x00000000009860f0
- (void)removeAccessoriesFromAssistantAccessControlList:(id)arg1;	// IMP=0x0000000000986078
- (void)_handleMediaContentProfileAccessControlUpdate:(id)arg1;	// IMP=0x000000000098591b
- (void)handleMediaContentProfileAccessControlUpdate:(id)arg1;	// IMP=0x0000000000985889
- (void)_handleAssistantAccessControlUpdate:(id)arg1;	// IMP=0x00000000009847c9
- (void)handleAssistantAccessControlUpdate:(id)arg1;	// IMP=0x0000000000984737
- (_Bool)isCurrentUserAndOwner;	// IMP=0x00000000009845d3
@property(retain) HMDAssistantAccessControl *assistantAccessControl; // @synthesize assistantAccessControl=_assistantAccessControl;
@property(readonly) NSUUID *assistantAccessControlModelUUID;
@property(readonly, getter=isValid) _Bool valid;
@property(readonly, getter=isRemoteGateway) _Bool remoteGateway;
@property unsigned long long announceAccessLevel; // @synthesize announceAccessLevel=_announceAccessLevel;
- (unsigned long long)defaultAnnounceUserAccessLevel;	// IMP=0x0000000000984277
@property(readonly, getter=isAnnounceAccessAllowed) _Bool announceAccessAllowed;
- (unsigned long long)camerasAccessLevel;	// IMP=0x0000000000984169
@property(retain, nonatomic) NSNumber *camerasAccessLevelValue; // @synthesize camerasAccessLevelValue=_camerasAccessLevelValue;
@property(getter=isRemoteAccessAllowed) _Bool remoteAccessAllowed; // @synthesize remoteAccessAllowed=_remoteAccessAllowed;
- (_Bool)refreshDisplayName;	// IMP=0x0000000000983c62
- (void)setDisplayName:(id)arg1;	// IMP=0x0000000000983b97
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy) HMUserPresenceAuthorization *presenceAuthStatus; // @synthesize presenceAuthStatus=_presenceAuthStatus;
- (void)__handleRemovedAccount:(id)arg1;	// IMP=0x000000000098364a
- (void)__handleAddedAccount:(id)arg1;	// IMP=0x0000000000983439
- (_Bool)requiresMakoSupport;	// IMP=0x00000000009833f0
- (id)account;	// IMP=0x0000000000983362
- (void)_handleNeedsiTunesMultiUserRepair:(id)arg1;	// IMP=0x0000000000982f78
- (void)_handleShareClientRepairRequest:(id)arg1;	// IMP=0x0000000000982491
- (void)_sendAccountMessage:(id)arg1 payload:(id)arg2 deviceCapabilities:(id)arg3 multicast:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000982208
- (void)_sendSecureShareClientPayloadToMostEligibleDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000981e04
- (void)_handleMultiUserSharePayloadRequest:(id)arg1;	// IMP=0x0000000000981192
- (void)_handleShareLookupInfoRequest:(id)arg1;	// IMP=0x0000000000980c39
- (void)_handlePairingIdentityRequest:(id)arg1;	// IMP=0x00000000009803e4
- (void)deregisterIdentity;	// IMP=0x0000000000980369
- (void)registerIdentity;	// IMP=0x00000000009802bc
@property(copy) HAPPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
@property(copy) HMDAccountIdentifier *accountIdentifier;
- (void)setAccountHandle:(id)arg1;	// IMP=0x000000000097fc78
- (id)accountHandle;	// IMP=0x000000000097fb4c
@property(readonly) _Bool isCurrentUser;
- (_Bool)updateAdministrator:(_Bool)arg1;	// IMP=0x000000000097fa99
@property unsigned long long privilege; // @synthesize privilege=_privilege;
@property(readonly, getter=isOwner) _Bool owner;
@property(readonly, getter=isAdministrator) _Bool administrator;
- (unsigned long long)_compatiblePrivilege;	// IMP=0x000000000097f7f8
@property __weak HMDHome *home; // @synthesize home=_home;
- (unsigned long long)allowedRemoteEventAccessUserTypes;	// IMP=0x000000000097f5d9
- (void)deregisterForMessages;	// IMP=0x000000000097f4df
- (void)registerForMessages;	// IMP=0x000000000097efdf
- (void)unconfigure;	// IMP=0x000000000097ef52
- (void)_recoverTrustManagerDueToUUIDChange;	// IMP=0x000000000097ee26
- (void)updateSharedBackingStoreControllerParticipants;	// IMP=0x000000000097edd4
- (void)_recoverUserSettingsDueToUUIDChange;	// IMP=0x000000000097ea74
- (void)recoverUserCloudDataDueToUUIDChangeFromOldUUID:(id)arg1;	// IMP=0x000000000097e9e2
- (void)_handleCloudShareWithOwnerMessageError;	// IMP=0x000000000097e995
@property long long userCloudShareWithOwnerMessagingState; // @synthesize userCloudShareWithOwnerMessagingState=_userCloudShareWithOwnerMessagingState;
- (long long)sharedUserSettingsLogEventBackingStoreControllerRunState;	// IMP=0x000000000097e8b1
- (void)initializeUserSettingsWithHome:(id)arg1;	// IMP=0x000000000097e130
- (void)handleUserDataControllerInitialized:(id)arg1;	// IMP=0x000000000097e0de
- (void)configureWithHome:(id)arg1;	// IMP=0x000000000097de21
- (_Bool)hasDeviceWithHomeKitVersionGreaterThanVersion:(id)arg1;	// IMP=0x000000000097dbf6
- (id)dumpState;	// IMP=0x000000000097d8c0
- (id)attributeDescriptions;	// IMP=0x000000000097d2eb
- (id)shortDescription;	// IMP=0x000000000097d229
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000097cf13
@property(readonly) unsigned long long hash;
- (void)dealloc;	// IMP=0x000000000097ce44
- (id)initWithAccountHandle:(id)arg1 homeUUID:(id)arg2 pairingIdentity:(id)arg3 privilege:(unsigned long long)arg4 dataSource:(id)arg5;	// IMP=0x000000000097cbf1
- (id)initWithAccountHandle:(id)arg1 homeUUID:(id)arg2 pairingIdentity:(id)arg3 privilege:(unsigned long long)arg4;	// IMP=0x000000000097cb41
- (id)initWithAccountHandle:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 privilege:(unsigned long long)arg4 dataSource:(id)arg5;	// IMP=0x000000000097ca51
- (id)initWithAccountHandle:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 privilege:(unsigned long long)arg4;	// IMP=0x000000000097c9a1
- (id)initWithModelObject:(id)arg1;	// IMP=0x000000000097c5d0
- (id)privateSettingValuesByKeyPathForAWD;	// IMP=0x000000000097c580
- (id)sharedSettingValuesByKeyPathForAWD;	// IMP=0x000000000097c530
@property(readonly, copy) AVOutputDeviceAuthorizedPeer *av_authorizedPeer;
@property(readonly) _Bool hasCameraClipsAccess;
@property(readonly, copy) NSData *nfcIssuerKeyIdentifier;

// Remaining properties
@property(readonly, getter=isCurrentUser) _Bool currentUser;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

