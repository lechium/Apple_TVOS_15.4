//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, CNContactStore, CUSystemMonitor, MISSING_TYPE, NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSMutableString, NSNumber, NSSet, NSString, SDAirDropServer, SDDeferrableOperation, SDSmartCoverMonitor, SFPowerSource, _TtC16DaemoniOSLibrary27SDAirDropContactHashManager;

__attribute__((visibility("hidden")))
@interface SDStatusMonitor : NSObject
{
    _Bool _activateStarted;	// 8 = 0x8
    NSNumber *_airDropAllowed;	// 16 = 0x10
    int _airDropCount;	// 24 = 0x18
    int _airDropModeNotifyToken;	// 28 = 0x1c
    _Bool _airDropPublished;	// 32 = 0x20
    int _airPlayPrefsToken;	// 36 = 0x24
    NSNumber *_backlightOn;	// 40 = 0x28
    int _backlightLevelToken;	// 48 = 0x30
    NSString *_bonjourName;	// 56 = 0x38
    _Bool _carplayConnected;	// 64 = 0x40
    NSMutableDictionary *_certificates;	// 72 = 0x48
    NSString *_computerName;	// 80 = 0x50
    NSNumber *_computerToComputer;	// 88 = 0x58
    NSString *_consoleUser;	// 96 = 0x60
    unsigned int _consoleUserID;	// 104 = 0x68
    _TtC16DaemoniOSLibrary27SDAirDropContactHashManager *_contactHashManager;	// 112 = 0x70
    CNContactStore *_contactStore;	// 120 = 0x78
    NSString *_currentDiscoverableMode;	// 128 = 0x80
    NSString *_deviceInformation;	// 136 = 0x88
    _Bool _deviceIsHighPriority;	// 144 = 0x90
    MISSING_TYPE *_deviceKeyBagState;	// 152 = 0x98
    NSNumber *_deviceSupportsWAPI;	// 160 = 0xa0
    NSNumber *_deviceUIUnlocked;	// 168 = 0xa8
    _Bool _deviceWasUnlockedOnce;	// 176 = 0xb0
    struct __CFRunLoopSource *_dynamicStoreSource;	// 184 = 0xb8
    _Bool _finderAirDropEnabled;	// 192 = 0xc0
    SDAirDropServer *_finderServer;	// 200 = 0xc8
    NSNumber *_handoffVisible;	// 208 = 0xd0
    NSMutableDictionary *_identities;	// 216 = 0xd8
    int _keyBagUnlockToken;	// 224 = 0xe0
    NSString *_localHostName;	// 232 = 0xe8
    long long _mediaAccessControlSetting;	// 240 = 0xf0
    NSDictionary *_mountPoints;	// 248 = 0xf8
    NSString *_myAppleID;	// 256 = 0x100
    NSString *_myAppleIDCommonName;	// 264 = 0x108
    struct __SecCertificate *_myAppleIDIntermediateCertificate;	// 272 = 0x110
    struct __SecCertificate *_myAppleIDCertificate;	// 280 = 0x118
    struct __SecIdentity *_myAppleIDSecIdentity;	// 288 = 0x120
    NSMutableString *_myEmailHashes;	// 296 = 0x128
    NSMutableString *_myPhoneHashes;	// 304 = 0x130
    struct _DNSServiceRef_t *_nameMonitor;	// 312 = 0x138
    _Bool _needsExitForLocaleChange;	// 320 = 0x140
    NSString *_netbiosName;	// 328 = 0x148
    unsigned int _notifierObject;	// 336 = 0x150
    struct IONotificationPort *_notifyPortRef;	// 344 = 0x158
    NSDictionary *_odisksMountPoints;	// 352 = 0x160
    _Bool _pairedWatchHasLongPasscode;	// 360 = 0x168
    long long _pairedWatchWristState;	// 368 = 0x170
    NSNumber *_personalHotspotAutoState;	// 376 = 0x178
    _Bool _personalHotspotFamilyEnabled;	// 384 = 0x180
    NSMutableDictionary *_personalHotspotFamilyStates;	// 392 = 0x188
    NSNumber *_personalHotspotAllowed;	// 400 = 0x190
    struct __IOPMConnection *_pmConnection;	// 408 = 0x198
    unsigned int _rootPort;	// 416 = 0x1a0
    NSNumber *_screenOn;	// 424 = 0x1a8
    NSMutableDictionary *_serverNames;	// 432 = 0x1b0
    _Bool _sleepModeOn;	// 440 = 0x1b8
    struct __SCPreferences *_smbPreferences;	// 448 = 0x1c0
    NSMutableDictionary *_ssidHashes;	// 456 = 0x1c8
    CUSystemMonitor *_systemMonitor;	// 464 = 0x1d0
    unsigned int _systemUIFlags;	// 472 = 0x1d8
    int _uiLockStatusToken;	// 476 = 0x1dc
    NSNumber *_wirelessAccessPoint;	// 480 = 0x1e0
    NSString *_workgroup;	// 488 = 0x1e8
    long long _watchWristState;	// 496 = 0x1f0
    SDDeferrableOperation *_preventLocaleRestart;	// 504 = 0x1f8
    SDSmartCoverMonitor *_smartCoverMonitor;	// 512 = 0x200
    NSString *_requestedDiscoverableMode;	// 520 = 0x208
    int _screenBlankedToken;	// 528 = 0x210
    _Bool _controlCenterVisible;	// 532 = 0x214
    _Bool _multipleUsersLoggedIn;	// 533 = 0x215
    _Bool _wirelessCritical;	// 534 = 0x216
    CNContact *___meCard;	// 536 = 0x218
    NSDictionary *_awdlState;	// 544 = 0x220
    NSDate *_lastDarkWakeDate;	// 552 = 0x228
    NSSet *_effectiveBlacklistedAppBundleIDs;	// 560 = 0x230
}

+ (_Bool)enableOOBPCredentialLogging;	// IMP=0x0020000000157b8a
+ (_Bool)isBuddyCompleted;	// IMP=0x00100000001577f6
+ (_Bool)b332PairingEnabled;	// IMP=0x00100000001577ba
+ (long long)shareSheetMaxSuggestions;	// IMP=0x00100000001573b4
+ (double)b332BTAddressRotationDelay;	// IMP=0x0010000000156702
+ (id)sharedMonitor;	// IMP=0x0010000000150a10
- (void).cxx_destruct;	// IMP=0x002000000015a57f
@property(readonly) _Bool wirelessCritical; // @synthesize wirelessCritical=_wirelessCritical;
@property(readonly) _Bool multipleUsersLoggedIn; // @synthesize multipleUsersLoggedIn=_multipleUsersLoggedIn;
@property(readonly) _Bool controlCenterVisible; // @synthesize controlCenterVisible=_controlCenterVisible;
@property(readonly) NSSet *effectiveBlacklistedAppBundleIDs; // @synthesize effectiveBlacklistedAppBundleIDs=_effectiveBlacklistedAppBundleIDs;
@property(readonly) NSDate *lastDarkWakeDate; // @synthesize lastDarkWakeDate=_lastDarkWakeDate;
@property(readonly) NSDictionary *awdlState; // @synthesize awdlState=_awdlState;
- (void)logWiFiPowerState;	// IMP=0x001000000015a467
- (void)clearWirelessState;	// IMP=0x001000000015a42a
- (void)clearOperationModeInfo;	// IMP=0x001000000015a3d7
- (void)installSSIDCacheMonitor;	// IMP=0x001000000015a1a7
- (void)installWiFiPasswordSharingMonitor;	// IMP=0x001000000015a078
- (void)handleWiFiPasswordSharingChanged;	// IMP=0x001000000015a054
- (id)stringForWatchWristState:(long long)arg1;	// IMP=0x001000000015a001
@property(readonly) long long watchWristState;
- (void)updateWatchWristState:(long long)arg1;	// IMP=0x0010000000159f0d
- (void)installWristStateMonitor;	// IMP=0x0010000000159f07
- (void)installVolumesMonitor;	// IMP=0x0010000000159f01
- (void)installUserPictureMonitor;	// IMP=0x0010000000159efb
- (void)installUILockStatusMonitor;	// IMP=0x0010000000159ef5
- (void)installSystemUIMonitor;	// IMP=0x0010000000159eef
- (void)installSpringBoardStateMonitor;	// IMP=0x0010000000159db2
- (_Bool)smbConfiguration:(struct __SCPreferences *)arg1 netBiosName:(id *)arg2 workgroup:(id *)arg3;	// IMP=0x0010000000159daa
- (void)reloadSMBConfInfo;	// IMP=0x0010000000159c54
- (void)installSMBPreferencesMonitor;	// IMP=0x0010000000159c4e
- (void)installSleepWakeCallBack;	// IMP=0x0010000000159b9a
- (void)installSleepNotification;	// IMP=0x0010000000159b94
- (void)handleSleepWakeCallBack:(unsigned int)arg1 messageArguement:(void *)arg2;	// IMP=0x001000000015999c
- (void)installSleepStateMonitor;	// IMP=0x0010000000159996
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0010000000159984
@property(readonly) SFPowerSource *localPowerSource;
- (void)updateLocalPowerSource:(id)arg1;	// IMP=0x00100000001598f6
- (void)handleMISStateChanged:(id)arg1;	// IMP=0x0010000000159880
- (void)installMISMonitor;	// IMP=0x001000000015987a
- (void)updatePairedWatchHasLongPasscode:(_Bool)arg1;	// IMP=0x00100000001597b2
@property(readonly) _Bool pairedWatchHasLongPasscode;
- (void)updatePairedWatchLockState:(int)arg1;	// IMP=0x00100000001596d1
@property(readonly) int pairedWatchLockState;
- (void)updatePairedWatchWristState:(long long)arg1;	// IMP=0x00100000001595f3
@property(readonly) long long pairedWatchWristState;
- (void)handleNameMonitorCallBack:(const char *)arg1 flags:(unsigned int)arg2 error:(int)arg3;	// IMP=0x0010000000159518
- (void)updateBlacklistedAppBundleIDs;	// IMP=0x00100000001593fa
- (void)managedConfigurationSettingsChanged:(id)arg1;	// IMP=0x00100000001593bf
- (void)installManagedConfigurationMonitor;	// IMP=0x001000000015930a
- (void)installLocaleChangeMonitor;	// IMP=0x00100000001590f2
- (void)installKeyBagUnlockMonitor;	// IMP=0x00100000001590ec
- (void)installFinderSidebarPrefsMonitor;	// IMP=0x00100000001590e6
- (void)installDynamicStoreCallBack;	// IMP=0x0010000000158e76
- (void)handleDynamicStoreCallback:(struct __SCDynamicStore *)arg1 changedKeys:(struct __CFArray *)arg2;	// IMP=0x0010000000158bcd
- (void)installDisplaySleepMonitor;	// IMP=0x0010000000158bc7
- (void)installDisplayConfigurationMonitor;	// IMP=0x0010000000158bc1
- (void)installCoreTelephonyMonitor;	// IMP=0x0010000000158bbb
- (void)installContactsMonitor;	// IMP=0x0010000000158a3d
- (void)meCardChanged:(id)arg1;	// IMP=0x0010000000158944
- (void)contactStoreDidChange:(id)arg1;	// IMP=0x001000000015885b
- (void)installSmartCoverStatusMonitor;	// IMP=0x001000000015882c
- (void)installClamshellStateChangeMonitor;	// IMP=0x0010000000158826
- (void)uninstallCarPlayStatusMonitor;	// IMP=0x0010000000158820
- (void)installWirelessCarPlayMonitor;	// IMP=0x001000000015881a
- (void)installCarPlayStatusMonitor;	// IMP=0x0010000000158814
- (void)restartBonjourNameMonitor;	// IMP=0x00100000001587c5
- (void)uninstallBonjourNameMonitor;	// IMP=0x0010000000158799
- (void)installBonjourNameMonitor;	// IMP=0x0010000000158689
- (void)logBluetoothPowerState;	// IMP=0x00100000001585d7
- (void)logBluetoothAvailabilityState:(_Bool)arg1;	// IMP=0x0010000000158534
- (void)installBluetoothMonitor;	// IMP=0x00100000001583d6
- (void)bluetoothAddressChanged;	// IMP=0x001000000015837a
- (void)airplaneModeChanged;	// IMP=0x0010000000158361
- (void)installAirplaneModeMonitor;	// IMP=0x001000000015835b
- (void)installBacklightMonitor;	// IMP=0x0010000000158355
- (void)installWirelessMonitor;	// IMP=0x001000000015834f
- (void)updateAWDLStateInfo;	// IMP=0x0010000000158316
- (void)handleAWDLState:(id)arg1;	// IMP=0x0010000000158310
- (void)installAppleIDAccountInfoMonitor;	// IMP=0x0010000000158256
- (void)appleIDAccountInfoChanged:(id)arg1;	// IMP=0x00100000001581be
- (void)installAppleIDUsernameMonitor;	// IMP=0x0010000000158140
- (long long)mediaAccessControlSetting;	// IMP=0x0010000000158133
- (void)updateMediaAccessControlSetting:(_Bool)arg1;	// IMP=0x0010000000158074
- (void)installAirPlayPreferencesMonitor;	// IMP=0x0010000000157fd3
- (void)logAirDropTransactionForClientServer:(_Bool)arg1 beginEnd:(_Bool)arg2 count:(int)arg3;	// IMP=0x0010000000157ef7
@property(readonly) _Bool asynchronousProxyLoadingEnabled;
@property(readonly) _Bool wirelessCarPlay;
@property(readonly) _Bool wirelessAccessPoint;
@property(readonly) _Bool wifiUserPowerPreference;
@property(readonly) _Bool testDiskFull;
@property(readonly) _Bool smartCoverIsClosed;
@property(readonly) _Bool sleepModeOn;
@property(readonly) _Bool signedIntoPrimaryiCloudAccount;
@property(readonly) _Bool showThisComputer;
@property(readonly) _Bool showMeInWormhole;
@property(readonly) _Bool screenOn;
@property(readonly) _Bool runningAsSetupUser;
@property(readonly) _Bool registerAllInterfaces;
@property(readonly) _Bool myAppleIDIsManaged;
@property(readonly) _Bool internetSharingEnabled;
@property(readonly) _Bool ignoreIconDiskCache;
@property(readonly) _Bool handoffVisible;
@property(readonly) _Bool forceP2P;
@property(readonly) _Bool forceAWDL;
@property(readonly) _Bool finderAirDropEnabled;
@property(readonly) _Bool enableXML;
@property(readonly) _Bool enableWebloc;
@property(readonly) _Bool enableStreamDebugging;
@property(readonly) _Bool enableStrangers;
@property(readonly) _Bool enablePKZipCompression;
@property(readonly) _Bool enablePKZip;
@property(readonly) _Bool enableHotspotFallback;
@property(readonly) _Bool enableDVZip;
@property(readonly) _Bool enableDemoMode;
@property(readonly) _Bool enableDebugMode;
@property(readonly) _Bool enableContinuity;
@property(readonly) _Bool enableBugs;
@property(readonly) _Bool enableAllRecents;
@property(readonly) _Bool enableAirDropReceiving;
@property(readonly) _Bool enableAirDropAdvertising;
@property(readonly) _Bool eduModeEnabled;
@property(readonly) _Bool dockHasDownloadsFolder;
@property(readonly) _Bool disableTLS;
@property(readonly) _Bool disableRotation;
@property(readonly) _Bool disableTransformingPhotosAssetBundlesToFolders;
@property(readonly) _Bool disableExtractMediaFromBundles;
@property(readonly) _Bool disableQuarantine;
@property(readonly) _Bool disablePipelining;
@property(readonly) _Bool disablePictureQuery;
@property(readonly) _Bool disablePeopleSuggestions;
@property(readonly) _Bool disableContinuityTLS;
@property(readonly) _Bool disableCompression;
@property(readonly) _Bool disableAutoAcceptForPhotosAssetBundles;
@property(readonly) _Bool disableAutoAccept;
@property(readonly) _Bool deviceWasUnlockedOnce;
@property(readonly) _Bool deviceUIUnlocked;
@property(readonly) _Bool deviceSupportsWAPI;
@property(readonly) _Bool deviceSupportsRanging;
@property(readonly) _Bool deviceSupportsContinuity;
@property(readonly) _Bool deviceRequiresNewRanging;
@property(readonly) _Bool deviceKeyBagUnlocked;
@property(readonly) _Bool deviceKeyBagLocking;
@property(readonly) _Bool deviceKeyBagLocked;
@property(readonly) _Bool deviceKeyBagDisabled;
@property(readonly) _Bool currentConsoleUser;
@property(readonly) _Bool connectedEnabled;
@property(readonly) _Bool computerToComputer;
@property(readonly) _Bool coalesceMe;
@property(readonly) _Bool carplayConnected;
@property(readonly) _Bool bypassLTKeyAbort;
@property(readonly) _Bool browseAllInterfaces;
@property(readonly) _Bool bonjourEnabled;
@property(readonly) _Bool backlightOn;
@property(readonly) _Bool alwaysSendPayload;
@property(readonly) _Bool alwaysAutoAccept;
@property(readonly) _Bool altDSIDNeedsFixing;
@property(readonly) _Bool allEnabled;
@property(readonly, getter=isAirDropAvailable) _Bool airdropAvailable;
- (void)updateAirDropAllowed;	// IMP=0x00100000001574f4
@property(readonly, getter=isAirDropAllowed) _Bool airdropAllowed;
@property(readonly) int workgroupThreshold;
@property(readonly) NSString *workgroup;
@property(readonly) unsigned int systemUIFlags;
@property(readonly) NSString *someComputerName;
@property(readonly) int sidebarMaxCount;
@property(readonly) NSString *netbiosName;
@property(readonly) NSData *myShortHashesForAirDrop;
@property(readonly) NSData *myMediumHashes;
@property(readonly) NSString *myPrimaryEmail;
@property(readonly) NSString *myGivenName;
@property(readonly) NSString *myName;
@property(readonly) NSString *myEmail;
@property(readonly) NSDictionary *myAppleIDValidationRecord;
@property(readonly) NSArray *myAppleIDPhoneNumbers;
@property(readonly) NSString *myAppleIDPhoneHash;
@property(readonly) NSString *myAppleIDEmailHash;
@property(readonly) NSArray *myAppleIDEmailAddresses;
@property(readonly) NSString *myAppleIDCommonName;
- (id)_myAppleID;	// IMP=0x0010000000156a12
@property(readonly) NSString *myAppleID;
@property(readonly) NSString *myAltDSID;
@property(readonly) NSString *myAccountAppleID;
@property(readonly) NSString *modelName;
@property(readonly) NSString *modelCode;
@property(readonly) int minPersonImageSize;
- (void)clearLocalHostName;	// IMP=0x00100000001566c5
@property(readonly) NSString *localHostName;
@property(readonly) long long deviceKeyBagState;
@property(readonly) NSString *deviceInformation;
- (void)clearConsoleUser;	// IMP=0x001000000015618a
@property(readonly) NSString *consoleUser;
- (void)clearComputerName;	// IMP=0x0010000000156119
@property(readonly) NSString *computerName;
@property(readonly) NSString *bonjourName;
@property(readonly) NSData *bluetoothAddress;
- (id)awdlStateInfo;	// IMP=0x0010000000156050
@property(readonly) NSArray *awdlPeerList;
@property(readonly) NSDictionary *awdlInfo;
@property _Bool airplaneModeEnabled;
@property _Bool wirelessEnabled;
@property __weak SDAirDropServer *finderServer;
@property _Bool bluetoothEnabled;
@property _Bool airDropPublished;
- (id)wifiSSIDForSSIDHash:(id)arg1;	// IMP=0x0010000000155d9c
- (unsigned int)wifiPasswordSharingAvailability;	// IMP=0x0010000000155bcc
- (id)defaultWiFiDevice;	// IMP=0x0010000000155bc4
- (_Bool)_multipleUsersLoggedIn;	// IMP=0x0010000000155bbc
- (void)postNotification:(id)arg1;	// IMP=0x0010000000155ba8
- (void)postNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0010000000155b1c
- (void)removePreventExitForLocaleReason:(id)arg1;	// IMP=0x00100000001559b3
- (void)pushDateForPreventExitForLocaleReason:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0010000000155812
- (void)addPreventExitForLocaleReason:(id)arg1;	// IMP=0x00100000001556a9
@property(readonly) _Bool simStateReady;
- (long long)signalStrength;	// IMP=0x0010000000155694
- (void)updatePersonalHotspotAllowed;	// IMP=0x00100000001555b8
@property(readonly) _Bool personalHotspotAllowed;
- (unsigned char)networkType;	// IMP=0x001000000015550d
@property(readonly) _Bool familyHotspotEnabled;
- (void)updateFamilyHotspotState;	// IMP=0x00100000001554bd
- (long long)familyHotspotStateForAltDSID:(id)arg1;	// IMP=0x00100000001554b0
- (_Bool)lteConnectionShows4G;	// IMP=0x00100000001554a8
- (void)cellularDataEnabled:(_Bool *)arg1 airplaneMode:(_Bool *)arg2;	// IMP=0x0010000000155492
- (void)updateAutoHotspotState;	// IMP=0x001000000015546f
- (long long)autoHotspotState;	// IMP=0x0010000000155467
- (id)phoneNumbersForContact:(id)arg1;	// IMP=0x0010000000155263
- (void)resetMeCardWithReason:(id)arg1;	// IMP=0x00100000001550f8
@property(readonly, nonatomic) CNContact *meCard; // @synthesize meCard=___meCard;
- (id)instantMessageEmailsForContact:(id)arg1;	// IMP=0x0010000000154cd4
- (id)emailOrPhoneForEmailHash:(id)arg1 phoneHash:(id)arg2;	// IMP=0x0010000000154c36
- (id)emailsForContact:(id)arg1;	// IMP=0x0010000000154a72
- (id)contactWithContactIdentifier:(id)arg1;	// IMP=0x0010000000154742
- (id)contactsWithPhoneNumberOrEmail:(id)arg1 keys:(id)arg2;	// IMP=0x00100000001545fa
- (_Bool)isEmail:(id)arg1;	// IMP=0x00100000001545de
- (id)contactWithPreferredIdentifierForContacts:(id)arg1;	// IMP=0x00100000001542b8
- (_Bool)contactsContainsShortHashes:(id)arg1;	// IMP=0x00100000001542a2
- (_Bool)contactIsBlocked:(id)arg1;	// IMP=0x001000000015429a
- (_Bool)contactIdentifierIsBlocked:(id)arg1;	// IMP=0x0010000000154292
- (id)contactIdentifierForMediumHashes:(id)arg1;	// IMP=0x001000000015427c
- (id)contactsForEmailHash:(id)arg1 phoneHash:(id)arg2;	// IMP=0x001000000015416d
- (void)clearMyIconAndHash;	// IMP=0x00100000001540a3
- (id)addAdditionalInformationToMeCard:(id)arg1;	// IMP=0x00100000001538a4
- (id)awdlNetwork;	// IMP=0x001000000015389c
- (id)awdlInfoForPeerWithServiceName:(id)arg1;	// IMP=0x0010000000153894
- (id)awdlDevice;	// IMP=0x001000000015388c
- (id)verifiedIdentityForAppleID:(id)arg1;	// IMP=0x00100000001537f0
- (id)unifiedAppleIDInfo;	// IMP=0x00100000001531e2
- (id)phoneNumbersForAppleID:(id)arg1;	// IMP=0x001000000015311f
- (void)hsa2EnabledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000015310f
- (void)handleAppleAccountSignOut;	// IMP=0x0010000000153083
- (void)handleAppleAccountSignIn;	// IMP=0x0010000000152ff7
- (void)fixAltDSIDIfNeeded;	// IMP=0x0010000000152d7c
- (id)emailAddressesForAppleID:(id)arg1;	// IMP=0x0010000000152cb9
- (struct __SecIdentity *)_copyMyAppleIDSecIdentity;	// IMP=0x0010000000152c0e
- (struct __SecIdentity *)copyMyAppleIDSecIdentity;	// IMP=0x0010000000152bd2
- (struct __SecCertificate *)_copyMyAppleIDIntermediateCertificate;	// IMP=0x0010000000152b08
- (struct __SecCertificate *)copyMyAppleIDIntermediateCertificate;	// IMP=0x0010000000152acc
- (struct __SecCertificate *)_copyMyAppleIDCertificate;	// IMP=0x0010000000152a04
- (struct __SecCertificate *)copyMyAppleIDCertificate;	// IMP=0x00100000001529c8
- (struct __SecCertificate *)copyCertificateForRealName:(id)arg1;	// IMP=0x0010000000152933
- (id)commonNameForCertificate:(struct __SecCertificate *)arg1;	// IMP=0x0010000000152876
- (void)clearMyAppleIDInfo;	// IMP=0x0010000000152715
- (void)cacheIdentity:(id)arg1;	// IMP=0x001000000015263e
- (void)cacheCertificate:(struct __SecCertificate *)arg1 forRealName:(id)arg2;	// IMP=0x0010000000152590
- (_Bool)verifyAndParseValidationRecordData:(id)arg1 intoDictionary:(out id *)arg2;	// IMP=0x0010000000152270
- (long long)appleIDAccountState;	// IMP=0x001000000015201e
- (void)updateDiscoverableMode;	// IMP=0x0010000000151e4c
- (void)setServerMountPoints:(id)arg1;	// IMP=0x0010000000151dbe
@property(retain) NSString *discoverableMode;
- (void)setODiskMountPoints:(id)arg1;	// IMP=0x0010000000151cae
- (id)serverNameForHost:(id)arg1;	// IMP=0x0010000000151c02
- (void)removeServerName:(id)arg1;	// IMP=0x0010000000151b71
- (id)reconciledDiscoverableMode;	// IMP=0x00100000001519ff
- (id)odiskMountPointsForServer:(id)arg1;	// IMP=0x001000000015196c
- (id)newDiscoverableMode;	// IMP=0x00100000001516c1
- (id)mountPointsForServer:(id)arg1;	// IMP=0x001000000015162e
- (_Bool)isAirDropReady;	// IMP=0x00100000001514e3
- (long long)discoverableLevel;	// IMP=0x001000000015143f
- (id)defaultDiscoverableMode;	// IMP=0x0010000000151422
- (id)createHostNameKey:(id)arg1;	// IMP=0x001000000015136a
- (void)airDropTransactionEnd:(_Bool)arg1;	// IMP=0x0010000000151319
- (void)airDropTransactionBegin:(_Bool)arg1;	// IMP=0x00100000001512cc
- (void)addServerName:(id)arg1 forHostName:(id)arg2;	// IMP=0x00100000001511fc
@property(readonly, copy) NSString *description;
- (void)clearMonitorCache;	// IMP=0x0010000000150f17
- (void)activate;	// IMP=0x0010000000150d23
- (id)init;	// IMP=0x0010000000150a79

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

