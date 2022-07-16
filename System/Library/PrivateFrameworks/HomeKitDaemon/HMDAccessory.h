//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDBulletinIdentifiers-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMDAccessoryNetworkAccessViolation, HMDAccessoryVersion, HMDApplicationData, HMDHome, HMDNetworkRouterFirewallRuleAccessoryIdentifier, HMDRoom, HMDSoftwareUpdate, HMDVendorModelEntry, HMFMessageDispatcher, HMFVersion, NSArray, NSData, NSDate, NSDictionary, NSMutableSet, NSNumber, NSObject, NSSet, NSString, NSUUID;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDAccessory : HMFObject <HMDBulletinIdentifiers, NSSecureCoding, HMDHomeMessageReceiver, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    _Bool _primary;	// 16 = 0x10
    _Bool _reachable;	// 17 = 0x11
    _Bool _remotelyReachable;	// 18 = 0x12
    NSMutableSet *_accessoryProfiles;	// 24 = 0x18
    _Bool _suspended;	// 32 = 0x20
    _Bool _reachabilityPingEnabled;	// 33 = 0x21
    _Bool _reachablilityPingNotificationEnabled;	// 34 = 0x22
    _Bool _custom1WoBLE;	// 35 = 0x23
    _Bool _resetOnBackoffExpiry;	// 36 = 0x24
    _Bool _supportsDoorbellChime;	// 37 = 0x25
    _Bool _supportsCoordinationDoorbellChime;	// 38 = 0x26
    _Bool _shouldProcessTransactionRemoval;	// 39 = 0x27
    _Bool _supportsManagedConfigurationProfile;	// 40 = 0x28
    _Bool _suspendCapable;	// 41 = 0x29
    _Bool _remoteAccessEnabled;	// 42 = 0x2a
    _Bool _custom1WoWLAN;	// 43 = 0x2b
    NSString *_identifier;	// 48 = 0x30
    HMDRoom *_room;	// 56 = 0x38
    NSString *_model;	// 64 = 0x40
    NSString *_initialModel;	// 72 = 0x48
    NSString *_manufacturer;	// 80 = 0x50
    NSString *_initialManufacturer;	// 88 = 0x58
    HMDAccessoryVersion *_firmwareVersion;	// 96 = 0x60
    NSString *_serialNumber;	// 104 = 0x68
    HMDApplicationData *_appData;	// 112 = 0x70
    NSString *_productData;	// 120 = 0x78
    NSString *_providedName;	// 128 = 0x80
    unsigned long long _configNumber;	// 136 = 0x88
    NSNumber *_networkClientIdentifier;	// 144 = 0x90
    NSUUID *_networkRouterUUID;	// 152 = 0x98
    long long _currentNetworkProtectionMode;	// 160 = 0xa0
    long long _networkClientLAN;	// 168 = 0xa8
    NSUUID *_networkClientProfileFingerprint;	// 176 = 0xb0
    long long _wiFiCredentialType;	// 184 = 0xb8
    NSArray *_allowedHosts;	// 192 = 0xc0
    NSData *_wiFiUniquePreSharedKey;	// 200 = 0xc8
    NSUUID *_configuredNetworkProtectionGroupUUID;	// 208 = 0xd0
    NSUUID *_defaultNetworkProtectionGroupUUID;	// 216 = 0xd8
    HMFVersion *_primaryProfileVersion;	// 224 = 0xe0
    NSNumber *_initialCategoryIdentifier;	// 232 = 0xe8
    HMDSoftwareUpdate *_softwareUpdate;	// 240 = 0xf0
    NSDate *_timeBecameUnreachable;	// 248 = 0xf8
    NSDate *_timeBecameReachable;	// 256 = 0x100
    NSString *_pendingConfigurationIdentifier;	// 264 = 0x108
    double _lastPairingFailureTime;	// 272 = 0x110
    unsigned long long _consecutivePairingFailures;	// 280 = 0x118
    NSUUID *_preferredMediaUserUUID;	// 288 = 0x120
    NSNumber *_preferredMediaUserSelectionTypeNumber;	// 296 = 0x128
    HMDAccessory *_hostAccessory;	// 304 = 0x130
    NSUUID *_uuid;	// 312 = 0x138
    HMAccessoryCategory *_category;	// 320 = 0x140
    HMDHome *_home;	// 328 = 0x148
    NSString *_configurationAppIdentifier;	// 336 = 0x150
    NSArray *_transportReports;	// 344 = 0x158
    HMDAccessoryNetworkAccessViolation *_networkAccessViolation;	// 352 = 0x160
    NSObject<OS_dispatch_queue> *_workQueue;	// 360 = 0x168
    HMFMessageDispatcher *_msgDispatcher;	// 368 = 0x170
    NSNumber *_categoryIdentifier;	// 376 = 0x178
    NSString *_configuredName;	// 384 = 0x180
    unsigned long long _accessoryReprovisionState;	// 392 = 0x188
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000396b87
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x0000000000396b7f
+ (id)logCategory;	// IMP=0x0000000000396b4f
+ (_Bool)splitProductDataIntoProductGroupAndProductNumber:(id)arg1 productGroup:(id *)arg2 productNumber:(id *)arg3;	// IMP=0x0000000000396a8d
+ (_Bool)validateProductData:(id)arg1;	// IMP=0x00000000003969ca
- (void).cxx_destruct;	// IMP=0x0000000000390b32
@property(nonatomic) _Bool custom1WoWLAN; // @synthesize custom1WoWLAN=_custom1WoWLAN;
@property(nonatomic) unsigned long long accessoryReprovisionState; // @synthesize accessoryReprovisionState=_accessoryReprovisionState;
@property(retain, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property(retain, nonatomic) NSNumber *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic, getter=isRemoteAccessEnabled) _Bool remoteAccessEnabled; // @synthesize remoteAccessEnabled=_remoteAccessEnabled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMDAccessoryNetworkAccessViolation *networkAccessViolation; // @synthesize networkAccessViolation=_networkAccessViolation;
@property(nonatomic, getter=isSuspendCapable) _Bool suspendCapable; // @synthesize suspendCapable=_suspendCapable;
@property(nonatomic, getter=isPrimary) _Bool primary; // @synthesize primary=_primary;
@property(readonly) _Bool supportsManagedConfigurationProfile; // @synthesize supportsManagedConfigurationProfile=_supportsManagedConfigurationProfile;
@property(copy, nonatomic) NSArray *transportReports; // @synthesize transportReports=_transportReports;
@property _Bool shouldProcessTransactionRemoval; // @synthesize shouldProcessTransactionRemoval=_shouldProcessTransactionRemoval;
@property(readonly, nonatomic) _Bool supportsCoordinationDoorbellChime; // @synthesize supportsCoordinationDoorbellChime=_supportsCoordinationDoorbellChime;
@property(readonly, nonatomic) _Bool supportsDoorbellChime; // @synthesize supportsDoorbellChime=_supportsDoorbellChime;
@property(copy, nonatomic) NSString *configurationAppIdentifier; // @synthesize configurationAppIdentifier=_configurationAppIdentifier;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSNumber *preferredMediaUserSelectionTypeNumber; // @synthesize preferredMediaUserSelectionTypeNumber=_preferredMediaUserSelectionTypeNumber;
@property(copy, nonatomic) NSUUID *preferredMediaUserUUID; // @synthesize preferredMediaUserUUID=_preferredMediaUserUUID;
@property(nonatomic) unsigned long long consecutivePairingFailures; // @synthesize consecutivePairingFailures=_consecutivePairingFailures;
@property(retain, nonatomic) NSArray *allowedHosts; // @synthesize allowedHosts=_allowedHosts;
@property(nonatomic) long long wiFiCredentialType; // @synthesize wiFiCredentialType=_wiFiCredentialType;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
- (void)logEventWithEvent:(id)arg1;	// IMP=0x0000000000390801
- (void)notifyClientsOfUpdatedAccessoryControllableValue:(_Bool)arg1;	// IMP=0x00000000003904c1
- (_Bool)supportsUnreachablePing;	// IMP=0x00000000003904b9
- (void)stopReachabilityCheck;	// IMP=0x0000000000390411
- (void)startReachabilityCheck;	// IMP=0x0000000000390369
- (void)handleRemovedSoftwareUpdateModel:(id)arg1 message:(id)arg2;	// IMP=0x0000000000390082
- (void)handleAddedSoftwareUpdateModel:(id)arg1 message:(id)arg2;	// IMP=0x000000000038fd6f
- (void)handleUpdatedSoftwareUpdateModel:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000038fb15
- (_Bool)_allowSoftwareUpdateChangeFromSource:(unsigned long long)arg1;	// IMP=0x000000000038faa5
- (void)_applySoftwareUpdateModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000038f924
- (void)updateSoftwareUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000038f848
@property(readonly, nonatomic) _Bool supportsFirmwareUpdate;
- (_Bool)supportsSoftwareUpdate;	// IMP=0x000000000038f838
@property(retain, nonatomic) HMDSoftwareUpdate *softwareUpdate; // @synthesize softwareUpdate=_softwareUpdate;
- (void)__handlePairingIdentityRequest:(id)arg1;	// IMP=0x000000000038ef1c
- (_Bool)supportsMinimumUserPrivilege;	// IMP=0x000000000038ef14
- (void)_updateHost:(id)arg1;	// IMP=0x000000000038eb2a
@property(nonatomic) __weak HMDAccessory *hostAccessory; // @synthesize hostAccessory=_hostAccessory;
- (void)removeHostedAccessory:(id)arg1;	// IMP=0x000000000038e99e
- (void)addHostedAccessory:(id)arg1;	// IMP=0x000000000038e8e8
- (id)hashRouteID;	// IMP=0x000000000038e84c
- (_Bool)providesHashRouteID;	// IMP=0x000000000038e844
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000038d586
- (_Bool)supportsDiagnosticsTransfer;	// IMP=0x000000000038d57e
@property(readonly, nonatomic) _Bool supportsAnnounce;
@property(readonly, nonatomic) _Bool supportsThirdPartyMusic;
@property(readonly, nonatomic) _Bool supportsMusicAlarm;
- (_Bool)_shouldFilterAccessoryProfile:(id)arg1;	// IMP=0x000000000038d55e
@property(readonly, nonatomic) _Bool supportsCompanionInitiatedRestart;
@property(readonly, nonatomic) _Bool supportsAudioReturnChannel;
@property(readonly, nonatomic) _Bool supportsMultiUser;
@property(readonly, nonatomic) _Bool supportsTargetControl;
@property(readonly, nonatomic) _Bool supportsTargetController;
- (void)autoConfigureTargetControllers;	// IMP=0x000000000038d530
- (void)handleIdentifyAccessoryMessage:(id)arg1;	// IMP=0x000000000038d4b5
@property(readonly) _Bool supportsIdentify;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000038c78a
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;	// IMP=0x000000000038c620
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x000000000038c57b
- (id)dumpNetworkState;	// IMP=0x000000000038c3f2
- (id)dumpSimpleState;	// IMP=0x000000000038c1e5
- (id)dumpState;	// IMP=0x000000000038b454
- (void)didUpdateCurrentNetworkProtection;	// IMP=0x000000000038b44e
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000038b266
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000038ae21
@property(readonly) _Bool supportsUserManagement;
- (void)__handleListPairings:(id)arg1;	// IMP=0x000000000038ac4d
- (_Bool)shouldEnableDaemonRelaunch;	// IMP=0x000000000038ac45
- (void)didEncounterError:(id)arg1;	// IMP=0x000000000038a8f9
- (void)__handleUpdatePendingConfigurationIdentifierMessage:(id)arg1;	// IMP=0x000000000038a5cf
@property(copy, nonatomic) NSString *pendingConfigurationIdentifier; // @synthesize pendingConfigurationIdentifier=_pendingConfigurationIdentifier;
@property(retain, nonatomic) NSUUID *configuredNetworkProtectionGroupUUID; // @synthesize configuredNetworkProtectionGroupUUID=_configuredNetworkProtectionGroupUUID;
@property(readonly, nonatomic) NSUUID *defaultNetworkProtectionGroupUUID; // @synthesize defaultNetworkProtectionGroupUUID=_defaultNetworkProtectionGroupUUID;
- (id)networkProtectionGroupUUID;	// IMP=0x000000000038a06c
- (void)saveNetworkAccessViolation:(id)arg1;	// IMP=0x0000000000389fbb
- (void)_handleWiFiReconfiguration:(id)arg1;	// IMP=0x0000000000389cd4
- (void)saveWiFiUniquePreSharedKey:(id)arg1 credentialType:(long long)arg2;	// IMP=0x0000000000389c1d
@property(retain, nonatomic) NSData *wiFiUniquePreSharedKey; // @synthesize wiFiUniquePreSharedKey=_wiFiUniquePreSharedKey;
- (void)setWifiCredentialType:(long long)arg1;	// IMP=0x0000000000389980
- (_Bool)supportsWiFiReconfiguration;	// IMP=0x0000000000389881
- (void)saveCurrentNetworkProtectionMode:(long long)arg1 assignedLAN:(long long)arg2 allowedWANHosts:(id)arg3 profileFingerprint:(id)arg4;	// IMP=0x000000000038978d
@property(retain, nonatomic) NSUUID *networkClientProfileFingerprint; // @synthesize networkClientProfileFingerprint=_networkClientProfileFingerprint;
@property(nonatomic) long long networkClientLAN; // @synthesize networkClientLAN=_networkClientLAN;
@property(nonatomic) long long currentNetworkProtectionMode; // @synthesize currentNetworkProtectionMode=_currentNetworkProtectionMode;
- (long long)targetNetworkProtectionMode;	// IMP=0x00000000003892d0
- (void)saveNetworkClientIdentifier:(id)arg1 networkRouterUUID:(id)arg2 clearProfileFingerprint:(_Bool)arg3;	// IMP=0x00000000003891ea
@property(retain, nonatomic) NSUUID *networkRouterUUID; // @synthesize networkRouterUUID=_networkRouterUUID;
@property(retain, nonatomic) NSNumber *networkClientIdentifier; // @synthesize networkClientIdentifier=_networkClientIdentifier;
- (_Bool)needsAirplayAccess;	// IMP=0x0000000000388df4
- (_Bool)supportsNetworkProtection;	// IMP=0x0000000000388dec
@property(retain, nonatomic) HMFVersion *primaryProfileVersion; // @synthesize primaryProfileVersion=_primaryProfileVersion;
- (void)setAccessoryProfiles:(id)arg1;	// IMP=0x0000000000388b2a
- (void)removeAccessoryProfile:(id)arg1;	// IMP=0x0000000000388a4f
- (void)addAccessoryProfile:(id)arg1;	// IMP=0x00000000003888f2
@property(readonly, copy) NSArray *accessoryProfiles;
- (void)appDataRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000388742
- (void)appDataUpdated:(id)arg1 message:(id)arg2;	// IMP=0x00000000003885c7
- (void)__handleSetAppData:(id)arg1;	// IMP=0x000000000038818d
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
- (void)_configNumberUpdated;	// IMP=0x0000000000387f61
@property(nonatomic) unsigned long long configNumber; // @synthesize configNumber=_configNumber;
- (id)runtimeState;	// IMP=0x0000000000387c21
- (void)_remoteAccessEnabled:(_Bool)arg1;	// IMP=0x0000000000387a08
- (void)remoteAccessEnabled:(_Bool)arg1;	// IMP=0x000000000038798c
- (void)_notifyConnectivityChangedWithReachabilityState:(_Bool)arg1 remoteAccessChanged:(_Bool)arg2;	// IMP=0x00000000003877ac
- (id)messageSendPolicy;	// IMP=0x0000000000387779
@property(nonatomic) _Bool custom1WoBLE; // @synthesize custom1WoBLE=_custom1WoBLE;
@property(readonly, nonatomic) long long reachableTransports;
- (_Bool)isReachableForXPCClients;	// IMP=0x00000000003875c9
@property(nonatomic, getter=isRemotelyReachable) _Bool remotelyReachable; // @synthesize remotelyReachable=_remotelyReachable;
@property(nonatomic, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
@property(copy, nonatomic) NSDate *timeBecameReachable; // @synthesize timeBecameReachable=_timeBecameReachable;
@property(copy, nonatomic) NSDate *timeBecameUnreachable; // @synthesize timeBecameUnreachable=_timeBecameUnreachable;
@property(nonatomic) _Bool reachablilityPingNotificationEnabled; // @synthesize reachablilityPingNotificationEnabled=_reachablilityPingNotificationEnabled;
@property(nonatomic) _Bool reachabilityPingEnabled; // @synthesize reachabilityPingEnabled=_reachabilityPingEnabled;
- (void)setSuspendedCapable:(_Bool)arg1;	// IMP=0x00000000003864b2
@property(readonly, nonatomic) _Bool supportsPersonalRequests;
@property(readonly, nonatomic) _Bool supportsMediaContentProfile;
@property(readonly) _Bool requiresHomeAppForManagement;
- (void)removeAdvertisement:(id)arg1;	// IMP=0x000000000038639f
- (void)addAdvertisement:(id)arg1;	// IMP=0x0000000000386399
- (void)notifyAccessoryNameChanged:(_Bool)arg1;	// IMP=0x0000000000385fb9
- (void)updateMediaSession:(id)arg1;	// IMP=0x0000000000385f08
@property(readonly, copy, nonatomic) HMDVendorModelEntry *vendorInfo;
@property(readonly, nonatomic) NSString *productGroup;
- (void)setProductData:(id)arg1;	// IMP=0x0000000000385ca2
@property(readonly, nonatomic) NSString *productData; // @synthesize productData=_productData;
- (void)setSerialNumber:(id)arg1;	// IMP=0x0000000000385aab
@property(readonly, copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (void)setFirmwareVersion:(id)arg1;	// IMP=0x00000000003857dc
@property(readonly, copy, nonatomic) HMDAccessoryVersion *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
- (void)setInitialManufacturer:(id)arg1;	// IMP=0x00000000003855e5
@property(readonly, copy, nonatomic) NSString *initialManufacturer; // @synthesize initialManufacturer=_initialManufacturer;
- (void)setManufacturer:(id)arg1;	// IMP=0x00000000003853ee
@property(readonly, copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
- (void)setInitialModel:(id)arg1;	// IMP=0x00000000003851f7
@property(readonly, copy, nonatomic) NSString *initialModel; // @synthesize initialModel=_initialModel;
- (void)setModel:(id)arg1;	// IMP=0x0000000000385000
@property(readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
- (void)__handleRename:(id)arg1;	// IMP=0x0000000000384c04
- (void)_renameAccessory:(id)arg1 resetName:(_Bool)arg2 message:(id)arg3;	// IMP=0x0000000000384a0d
@property(copy, nonatomic) NSString *providedName; // @synthesize providedName=_providedName;
- (id)getConfiguredName;	// IMP=0x00000000003847d9
- (void)_handleUpdatedName:(id)arg1;	// IMP=0x00000000003846fb
@property(readonly, copy, nonatomic) NSString *name;
- (void)__handleGetAccessoryAdvertisingParams:(id)arg1;	// IMP=0x0000000000384598
- (void)setInitialCategoryIdentifier:(id)arg1;	// IMP=0x00000000003844cd
@property(readonly, nonatomic) NSNumber *initialCategoryIdentifier; // @synthesize initialCategoryIdentifier=_initialCategoryIdentifier;
- (id)_updateCategory:(id)arg1 notifyClients:(_Bool)arg2;	// IMP=0x0000000000384037
- (void)updateCategory:(id)arg1;	// IMP=0x0000000000383dcf
- (_Bool)_updateRoom:(id)arg1 source:(unsigned long long)arg2;	// IMP=0x00000000003839ee
- (void)__handleUpdateRoom:(id)arg1;	// IMP=0x0000000000383536
- (id)modelWithUpdatedRoom:(id)arg1;	// IMP=0x0000000000383390
- (void)updateRoom:(id)arg1 source:(unsigned long long)arg2;	// IMP=0x00000000003832d9
@property(retain, nonatomic) HMDRoom *room; // @synthesize room=_room;
@property(readonly, nonatomic) _Bool hasBattery;
@property(readonly, copy) NSUUID *endpointIdentifier;
@property(readonly, copy) NSUUID *spiClientIdentifier;
@property(nonatomic) _Bool resetOnBackoffExpiry; // @synthesize resetOnBackoffExpiry=_resetOnBackoffExpiry;
- (void)setConsecutivePairingFailure:(unsigned long long)arg1;	// IMP=0x0000000000382e11
- (unsigned long long)consecutivePairingFailure;	// IMP=0x0000000000382d18
@property(nonatomic) double lastPairingFailureTime; // @synthesize lastPairingFailureTime=_lastPairingFailureTime;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)removeCloudData;	// IMP=0x000000000038283c
- (void)unconfigure;	// IMP=0x00000000003826f2
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 initialConfiguration:(_Bool)arg4;	// IMP=0x00000000003825ac
- (void)_relayIdentifyAccessorytoResidentForMessage:(id)arg1;	// IMP=0x0000000000382459
- (void)__handleIdentify:(id)arg1;	// IMP=0x000000000038217c
- (void)handleAccessoryUpdateShouldProcessTransactionRemovalValueRequestMessage:(id)arg1;	// IMP=0x0000000000381f11
- (void)_registerForMessages;	// IMP=0x0000000000381496
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x0000000000381330
- (void)populateModelObject:(id)arg1 version:(long long)arg2;	// IMP=0x0000000000380755
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;	// IMP=0x0000000000380699
- (id)shortDescription;	// IMP=0x0000000000380509
- (unsigned long long)supportedTransports;	// IMP=0x0000000000380421
@property(readonly, getter=isCurrentAccessory) _Bool currentAccessory;
- (id)attributeDescriptions;	// IMP=0x000000000037fe23
- (id)privateDescription;	// IMP=0x000000000037fd61
- (void)dealloc;	// IMP=0x000000000037fc9b
- (void)sendRemovalRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000037fa32
- (void)sendRemovalRequest;	// IMP=0x000000000037fa1e
- (void)runTransactionWithPreferredMediaUserUUID:(id)arg1 selectionType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000037fa18
- (void)setDefaultPreferredMediaUserIfRemoved:(id)arg1 defaultUser:(id)arg2;	// IMP=0x000000000037f791
- (void)setPreferredMediaUser:(id)arg1 selectionType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000037f696
- (void)encodePreferredMediaUser:(id)arg1;	// IMP=0x000000000037f5be
- (void)decodePreferredMediaUser:(id)arg1;	// IMP=0x000000000037f4ec
- (void)transactionAccessoryUpdatedForPreferredMediaUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000037f143
- (void)runTransactionWithModels:(id)arg1 label:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000037eec2
- (void)runTransactionWithModel:(id)arg1 label:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000037eded
- (id)initWithTransaction:(id)arg1 home:(id)arg2;	// IMP=0x000000000037e53b
- (id)init;	// IMP=0x000000000037e31f
- (id)accessoryBulletinContext;	// IMP=0x0000000000026ecc
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;
- (void)_handlePreviewAllowedHosts:(id)arg1;	// IMP=0x00000000002280dc
- (void)populateVendorDetailsForCoreAnalytics:(id)arg1 keyPrefix:(id)arg2;	// IMP=0x00000000004d5b95
- (id)vendorDetailsForAWD;	// IMP=0x00000000004d5a46
- (id)metricLoggingVendorDetails;	// IMP=0x00000000004d5a10
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;
@property(readonly) HMDNetworkRouterFirewallRuleAccessoryIdentifier *metadataIdentifier;
- (id)networkProtectionReportForAWD;	// IMP=0x0000000000b13e8b
- (int)networkProtectionStatusForAnalytics;	// IMP=0x0000000000b13da5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

