//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMCore/IMSystemMonitorListener-Protocol.h>

@class IMHandle, IMPeople, IMServiceImpl, NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSMapTable, NSMutableDictionary, NSRecursiveLock, NSString;

@interface IMAccount : NSObject <IMSystemMonitorListener>
{
    IMPeople *_buddyList;	// 8 = 0x8
    NSRecursiveLock *_lock;	// 16 = 0x10
    NSMapTable *_imHandles;	// 24 = 0x18
    IMHandle *_loginIMHandle;	// 32 = 0x20
    NSArray *_cachedAllowList;	// 40 = 0x28
    NSArray *_cachedBlockList;	// 48 = 0x30
    NSString *_loginID;	// 56 = 0x38
    NSString *_displayName;	// 64 = 0x40
    NSString *_uniqueID;	// 72 = 0x48
    long long _accountType;	// 80 = 0x50
    NSString *_strippedLogin;	// 88 = 0x58
    NSDictionary *_data;	// 96 = 0x60
    NSMutableDictionary *_dataChanges;	// 104 = 0x68
    NSMutableDictionary *_localCache;	// 112 = 0x70
    NSDictionary *_profile;	// 120 = 0x78
    NSMutableDictionary *_profileChanges;	// 128 = 0x80
    NSString *_countryCode;	// 136 = 0x88
    long long _profileStatus;	// 144 = 0x90
    NSDictionary *_accountPreferences;	// 152 = 0x98
    NSMutableDictionary *_accountPreferencesChanges;	// 160 = 0xa0
    NSDictionary *_accountPersistentProperties;	// 168 = 0xa8
    NSMutableDictionary *_accountPersistentPropertiesChanges;	// 176 = 0xb0
    NSArray *_groups;	// 184 = 0xb8
    NSMutableDictionary *_sortOrders;	// 192 = 0xc0
    NSDictionary *_members;	// 200 = 0xc8
    NSMutableDictionary *_coalescedChanges;	// 208 = 0xd0
    NSArray *_targetGroupState;	// 216 = 0xd8
    NSArray *_lastReceivedGroupState;	// 224 = 0xe0
    NSDictionary *_subtypeInfo;	// 232 = 0xe8
    NSArray *_vettedAliases;	// 240 = 0xf0
    NSArray *_aliases;	// 248 = 0xf8
    unsigned long long _myStatus;	// 256 = 0x100
    NSMutableDictionary *_currentAccountStatus;	// 264 = 0x108
    NSString *_myStatusMessage;	// 272 = 0x110
    NSDictionary *_myNowPlaying;	// 280 = 0x118
    NSDate *_myIdleSince;	// 288 = 0x120
    NSData *_myPictureData;	// 296 = 0x128
    NSData *_accountImageData;	// 304 = 0x130
    unsigned long long _capabilities;	// 312 = 0x138
    unsigned long long _defaultHandleCapabilities;	// 320 = 0x140
    _Bool _hasCheckedDefaultHandleCapabilities;	// 328 = 0x148
    NSAttributedString *_myProfile;	// 336 = 0x150
    long long _registrationStatus;	// 344 = 0x158
    long long _registrationFailureReason;	// 352 = 0x160
    NSDictionary *_registrationAlertInfo;	// 360 = 0x168
    unsigned long long _loginStatus;	// 368 = 0x170
    _Bool _isActive;	// 376 = 0x178
    _Bool _hasPostedOfflineNotification;	// 377 = 0x179
    _Bool _justLoggedIn;	// 378 = 0x17a
    _Bool _useMeCardName;	// 379 = 0x17b
    unsigned int _cachedBlockingMode;	// 380 = 0x17c
    _Bool _blockIdleStatus;	// 384 = 0x180
    _Bool _syncedWithRemoteBuddyList;	// 385 = 0x181
    _Bool _hasReceivedSync;	// 386 = 0x182
    int _numHolding;	// 388 = 0x184
    int _coalesceCount;	// 392 = 0x188
    _Bool _needToCheckForWatchedIMHandles;	// 396 = 0x18c
    _Bool _iconChecked;	// 397 = 0x18d
    _Bool _hasBeenRemoved;	// 398 = 0x18e
    IMServiceImpl *_service;	// 400 = 0x190
    id _smallImage;	// 408 = 0x198
    id _accountImage;	// 416 = 0x1a0
    _Bool _asleep;	// 424 = 0x1a8
}

+ (id)allBuddyListIMHandles;	// IMP=0x000000000002fad1
+ (id)arrayOfAllIMHandles;	// IMP=0x000000000002f8e6
+ (id)nameOfLoginStatus:(unsigned long long)arg1;	// IMP=0x000000000002c351
+ (id)_groupSummaryFromGroupList:(id)arg1;	// IMP=0x0000000000026a7f
+ (void)removeTemporaryPasswordForAccount:(id)arg1 forServiceName:(id)arg2;	// IMP=0x0000000000023800
+ (void)setTemporaryPassword:(id)arg1 forAccount:(id)arg2 forAuthID:(id)arg3 forServiceName:(id)arg4;	// IMP=0x0000000000023474
+ (id)temporaryPasswordForAccount:(id)arg1 forAuthID:(id)arg2 forServiceName:(id)arg3;	// IMP=0x0000000000023087
+ (void)removePasswordForAccount:(id)arg1 forServiceName:(id)arg2;	// IMP=0x0000000000022cb9
+ (void)setPassword:(id)arg1 forAccount:(id)arg2 forAuthID:(id)arg3 forServiceName:(id)arg4;	// IMP=0x00000000000227a3
+ (id)passwordForAccount:(id)arg1 forServiceName:(id)arg2;	// IMP=0x0000000000022714
- (void).cxx_destruct;	// IMP=0x0000000000035e8c
@property(readonly, nonatomic) _Bool justLoggedIn; // @synthesize justLoggedIn=_justLoggedIn;
@property(readonly, nonatomic) IMPeople *buddyList; // @synthesize buddyList=_buddyList;
@property(readonly, nonatomic) id loginIMHandle; // @synthesize loginIMHandle=_loginIMHandle;
@property(readonly, nonatomic) NSDictionary *accountSubtypeInfo; // @synthesize accountSubtypeInfo=_subtypeInfo;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) unsigned int blockingMode; // @synthesize blockingMode=_cachedBlockingMode;
@property(nonatomic) _Bool blockIdleStatus; // @synthesize blockIdleStatus=_blockIdleStatus;
@property(readonly, nonatomic) unsigned long long loginStatus; // @synthesize loginStatus=_loginStatus;
@property(readonly, nonatomic) unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) NSDate *myIdleSince; // @synthesize myIdleSince=_myIdleSince;
@property(readonly, nonatomic) NSData *myPictureData; // @synthesize myPictureData=_myPictureData;
@property(readonly, nonatomic) NSString *myStatusMessage; // @synthesize myStatusMessage=_myStatusMessage;
@property(readonly, nonatomic) unsigned long long myStatus; // @synthesize myStatus=_myStatus;
@property(readonly, nonatomic) NSAttributedString *myProfile; // @synthesize myProfile=_myProfile;
@property(readonly, nonatomic) NSDictionary *myStatusDictionary; // @synthesize myStatusDictionary=_currentAccountStatus;
@property(readonly, nonatomic) __weak IMServiceImpl *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSString *strippedLogin; // @synthesize strippedLogin=_strippedLogin;
@property(retain, nonatomic) NSString *login; // @synthesize login=_loginID;
- (_Bool)_updateDisplayName:(id)arg1;	// IMP=0x0000000000035a7d
@property(copy, nonatomic) NSString *displayName;
- (void)setInteger:(int)arg1 forPreferenceKey:(id)arg2;	// IMP=0x0000000000035641
- (int)integerForPreferenceKey:(id)arg1;	// IMP=0x00000000000355e3
- (void)setBool:(_Bool)arg1 forPreferenceKey:(id)arg2;	// IMP=0x0000000000035562
- (_Bool)boolForPreferenceKey:(id)arg1;	// IMP=0x00000000000354ff
- (void)setString:(id)arg1 forPreferenceKey:(id)arg2;	// IMP=0x00000000000354ed
- (id)stringForPreferenceKey:(id)arg1;	// IMP=0x000000000003548d
- (id)dictionaryDataForPreferenceKey:(id)arg1;	// IMP=0x000000000003547b
- (void)setDictionaryData:(id)arg1 forPreferenceKey:(id)arg2;	// IMP=0x0000000000035469
- (void)removeObjectForPreferenceKey:(id)arg1;	// IMP=0x0000000000035452
- (void)setObject:(id)arg1 forPreferenceKey:(id)arg2;	// IMP=0x00000000000353b5
- (id)objectForPreferenceKey:(id)arg1;	// IMP=0x000000000003531e
@property(readonly, nonatomic) NSDictionary *accountPreferences;
- (void)_removePersistentPropertyForKey:(id)arg1;	// IMP=0x000000000003527a
- (void)_setPersistentPropertyObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000351d2
- (id)_persistentPropertyForKey:(id)arg1;	// IMP=0x000000000003513b
@property(readonly, nonatomic) NSDictionary *_persistentProperties;
@property(readonly, nonatomic) _Bool isAsleep;
- (void)systemWillSleep;	// IMP=0x00000000000350e6
- (void)systemDidWake;	// IMP=0x00000000000350d9
- (void)_setInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x0000000000035058
- (void)setInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x0000000000034fd7
- (long long)integerForKey:(id)arg1;	// IMP=0x0000000000034f74
- (void)_setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0000000000034ef3
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0000000000034e72
- (_Bool)boolForKey:(id)arg1;	// IMP=0x0000000000034e0f
- (void)_setString:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000034dfd
- (void)setString:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000034deb
- (id)stringForKey:(id)arg1;	// IMP=0x0000000000034d87
- (id)dictionaryDataForKey:(id)arg1;	// IMP=0x0000000000034d75
- (void)_setDictionaryData:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000034d63
- (void)setDictionaryData:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000034d51
- (void)_removeObjectForKey:(id)arg1;	// IMP=0x0000000000034d3a
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000000034d23
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000034b4b
- (void)_setLocalCachedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000034aaa
- (void)_setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000034a09
- (id)objectForKey:(id)arg1;	// IMP=0x000000000003491b
- (long long)validationErrorReasonForAlias:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000034909
- (long long)validationErrorReasonForAlias:(id)arg1;	// IMP=0x000000000003487e
- (long long)validationStatusForAlias:(id)arg1 type:(long long)arg2;	// IMP=0x000000000003486c
- (long long)validationStatusForAlias:(id)arg1;	// IMP=0x0000000000034762
- (_Bool)validateAlias:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000034750
- (_Bool)validateAliases:(id)arg1;	// IMP=0x00000000000344e9
- (_Bool)validateAlias:(id)arg1;	// IMP=0x0000000000034356
- (_Bool)unvalidateAliases:(id)arg1;	// IMP=0x0000000000034158
- (_Bool)unvalidateAlias:(id)arg1;	// IMP=0x000000000003410c
- (long long)typeForAlias:(id)arg1;	// IMP=0x000000000003403e
- (_Bool)removeAlias:(id)arg1 type:(long long)arg2;	// IMP=0x000000000003402c
- (_Bool)removeAliases:(id)arg1;	// IMP=0x0000000000033b52
- (_Bool)removeAlias:(id)arg1;	// IMP=0x00000000000339bf
- (_Bool)addAlias:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000033854
- (_Bool)addAliases:(id)arg1;	// IMP=0x0000000000033182
- (_Bool)addAlias:(id)arg1;	// IMP=0x0000000000032fef
- (id)aliasesForType:(long long)arg1;	// IMP=0x0000000000032ef5
- (_Bool)hasAlias:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000032ee3
- (_Bool)hasAlias:(id)arg1;	// IMP=0x0000000000032e35
- (void)_invalidateCachedAliases;	// IMP=0x0000000000032e15
@property(readonly, nonatomic) NSArray *aliases;
@property(readonly, nonatomic, getter=isMakoAccount) _Bool makoAccount;
- (id)_statuses;	// IMP=0x000000000003273b
- (id)_aliasInfoForAlias:(id)arg1;	// IMP=0x00000000000324c9
- (_Bool)_aliasIsVisible:(id)arg1;	// IMP=0x0000000000032436
- (id)_aliases;	// IMP=0x000000000003241a
@property(readonly, nonatomic) NSArray *aliasesToRegister;
@property(readonly, nonatomic) NSArray *vettedAliases;
- (void)_updateProfileInfo:(id)arg1;	// IMP=0x0000000000031ba8
- (long long)profileValidationErrorReason;	// IMP=0x0000000000031b5a
- (long long)profileValidationStatus;	// IMP=0x0000000000031b28
- (_Bool)validateProfile;	// IMP=0x0000000000031998
- (_Bool)setProfileString:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000318d8
- (_Bool)setProfileValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000316a3
- (_Bool)removeProfileValueForKey:(id)arg1;	// IMP=0x000000000003162d
- (id)profileStringForKey:(id)arg1;	// IMP=0x00000000000315cd
- (id)profileValueForKey:(id)arg1;	// IMP=0x0000000000031540
@property(readonly, nonatomic) NSDictionary *profileInfo;
@property(readonly, nonatomic) NSString *countryCode;
- (_Bool)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;	// IMP=0x0000000000030ea3
- (void)enrollSelfDeviceInSMSRelay;	// IMP=0x0000000000030e2d
- (void)unEnrollDeviceInSMSRelay:(id)arg1;	// IMP=0x0000000000030d92
- (void)enrollDeviceInSMSRelay:(id)arg1;	// IMP=0x0000000000030cf7
- (_Bool)authenticateAccount;	// IMP=0x0000000000030b39
- (_Bool)requestNewAuthorizationCredentials;	// IMP=0x0000000000030b27
@property(readonly, nonatomic) NSString *authorizationToken;
@property(readonly, nonatomic) NSString *authorizationID;
@property(readonly, nonatomic) _Bool supportsAuthorization;
- (struct _FZChatRoomValidity)validityOfChatRoomName:(id)arg1;	// IMP=0x000000000003048f
- (id)defaultChatSuffix;	// IMP=0x0000000000030437
- (id)chatIDForRoomName:(id)arg1;	// IMP=0x0000000000030219
- (void)nowLoggedOut;	// IMP=0x00000000000301eb
- (void)nowLoggedIn;	// IMP=0x00000000000301e5
- (void)handleSubscriptionRequestFrom:(id)arg1 withMessage:(id)arg2;	// IMP=0x00000000000300eb
- (void)imHandle:(id)arg1 buddyStatusChanged:(_Bool)arg2;	// IMP=0x000000000002ffb0
- (void)disconnectAllIMHandles;	// IMP=0x000000000002fcdc
- (void)unregisterIMHandleWithID:(id)arg1;	// IMP=0x000000000002f876
- (void)registerIMHandle:(id)arg1;	// IMP=0x000000000002f7bb
- (void)_refreshLoginIMHandle;	// IMP=0x000000000002f529
- (void)forgetAllWatches;	// IMP=0x000000000002f3a3
- (void)stopWatchingIMHandle:(id)arg1;	// IMP=0x000000000002f2e4
- (void)startWatchingIMHandle:(id)arg1;	// IMP=0x000000000002f200
- (void)watchBuddiesIfNecessary;	// IMP=0x000000000002f19e
- (void)_watchBuddiesIfNecessary;	// IMP=0x000000000002eff3
- (id)handlesForCNContact:(id)arg1;	// IMP=0x000000000002ef30
- (void)requestBuddyListAuthorizationFromIMHandle:(id)arg1;	// IMP=0x000000000002ee90
- (void)setBuddyListAuthorization:(_Bool)arg1 forIMHandle:(id)arg2;	// IMP=0x000000000002ede7
- (unsigned long long)sortOrderForIMHandle:(id)arg1 inGroup:(id)arg2;	// IMP=0x000000000002ed66
- (id)imHandleWithID:(id)arg1;	// IMP=0x000000000002ed52
- (id)existingIMHandleWithID:(id)arg1 countryCode:(id)arg2;	// IMP=0x000000000002eb27
- (id)imHandleWithID:(id)arg1 countryCode:(id)arg2;	// IMP=0x000000000002e8ae
- (id)_imHandleWithID:(id)arg1 alreadyCanonical:(_Bool)arg2 originalID:(id)arg3 countryCode:(id)arg4;	// IMP=0x000000000002e612
- (id)imHandleWithID:(id)arg1 alreadyCanonical:(_Bool)arg2;	// IMP=0x000000000002e5fa
- (unsigned long long)defaultHandleCapabilities;	// IMP=0x000000000002e482
- (id)existingIMHandleWithID:(id)arg1;	// IMP=0x000000000002e46e
- (id)existingIMHandleWithID:(id)arg1 alreadyCanonical:(_Bool)arg2;	// IMP=0x000000000002e2ae
- (id)existingIMHandleWithInfo:(id)arg1 alreadyCanonical:(_Bool)arg2;	// IMP=0x000000000002e205
- (id)imHandleWithInfo:(id)arg1 alreadyCanonical:(_Bool)arg2;	// IMP=0x000000000002e15c
- (id)existingIMHandleWithInfo:(id)arg1;	// IMP=0x000000000002e0ba
- (id)imHandleWithInfo:(id)arg1;	// IMP=0x000000000002e018
- (Class)imHandleClass;	// IMP=0x000000000002e007
@property(readonly, nonatomic) NSArray *arrayOfAllIMHandles;
- (void)recalculateSubtypeInfo;	// IMP=0x000000000002ddd2
- (void)_clearImageCache;	// IMP=0x000000000002dd7c
- (id)recalculatedSubtypeInfo;	// IMP=0x000000000002dd74
- (long long)compareNames:(id)arg1;	// IMP=0x000000000002dce3
- (void)groupsChanged:(id)arg1 error:(id)arg2;	// IMP=0x000000000002ce03
- (void)_syncWithRemoteBuddies;	// IMP=0x000000000002cd70
- (void)setIMAccountLoginStatus:(unsigned long long)arg1 errorMessage:(id)arg2 reason:(int)arg3;	// IMP=0x000000000002c776
- (void)setIMAccountLoginStatus:(unsigned long long)arg1 errorMessage:(id)arg2;	// IMP=0x000000000002c75f
- (void)setIMAccountLoginStatus:(unsigned long long)arg1;	// IMP=0x000000000002c74b
- (void)setIsActive:(_Bool)arg1;	// IMP=0x000000000002c5cd
@property(readonly, nonatomic) _Bool isConnected;
@property(readonly, nonatomic) _Bool isConnecting;
@property(readonly, nonatomic) NSString *loginStatusMessage;
- (void)_notJustLoggedIn;	// IMP=0x000000000002c3f3
- (_Bool)unregisterAccount;	// IMP=0x000000000002c2c5
- (_Bool)registerAccount;	// IMP=0x000000000002c239
@property(readonly, nonatomic) long long registrationFailureReason;
@property(readonly, nonatomic) long long registrationStatus;
- (void)_updateRegistrationStatus:(int)arg1 error:(int)arg2 info:(id)arg3;	// IMP=0x000000000002bec5
@property(readonly, nonatomic) _Bool supportsRegistration;
@property(readonly, nonatomic) NSDictionary *registrationFailureAlertInfo;
@property(readonly, nonatomic) _Bool canSendMessages;
@property(readonly, nonatomic) _Bool isOperational;
@property(readonly, nonatomic) _Bool isRegistered;
@property(readonly, nonatomic) _Bool _isUsableForSending;
- (void)accountDidDeactivate;	// IMP=0x000000000002b7fe
- (void)accountDidBecomeActive;	// IMP=0x000000000002b7ec
- (void)accountWillBeRemoved;	// IMP=0x000000000002b767
- (void)_serviceDidDisconnect:(id)arg1;	// IMP=0x000000000002b74e
- (void)_serviceDidReconnect:(id)arg1;	// IMP=0x000000000002b73c
- (void)_serviceDidConnect:(id)arg1;	// IMP=0x000000000002b72a
- (void)_registrationStatusChanged:(id)arg1;	// IMP=0x000000000002b70a
- (void)setBuddyProperties:(id)arg1 buddyPictures:(id)arg2;	// IMP=0x000000000002b0aa
- (void)buddyPictureChanged:(id)arg1 imageData:(id)arg2 imageHash:(id)arg3;	// IMP=0x000000000002affc
- (void)buddyPropertiesChanged:(id)arg1;	// IMP=0x000000000002aebd
- (void)resumeBuddyUpdates;	// IMP=0x000000000002ae99
- (void)_resumeBuddyUpdatesNow;	// IMP=0x000000000002ad78
- (void)holdBuddyUpdates;	// IMP=0x000000000002acde
@property(readonly, nonatomic) _Bool makingChanges;
- (void)endChanges;	// IMP=0x000000000002ab92
- (id)memberGroups:(id)arg1;	// IMP=0x000000000002ab79
@property(readonly, nonatomic) NSArray *groupList;
- (id)groupMembers:(id)arg1;	// IMP=0x000000000002a9fa
- (id)propertiesForGroup:(id)arg1;	// IMP=0x000000000002a8d0
- (void)reorderGroups:(id)arg1;	// IMP=0x000000000002a7a9
- (void)reorderGroup:(id)arg1 order:(id)arg2;	// IMP=0x000000000002a5ec
- (void)renameGroup:(id)arg1 to:(id)arg2;	// IMP=0x000000000002a3c3
- (void)changeBuddyList:(id)arg1 add:(_Bool)arg2 groups:(id)arg3 atLocation:(long long)arg4;	// IMP=0x0000000000029348
- (void)addBuddyToBuddyList:(id)arg1;	// IMP=0x00000000000291ee
- (_Bool)removeIMHandle:(id)arg1 fromGroups:(id)arg2;	// IMP=0x0000000000029155
- (_Bool)addIMHandle:(id)arg1 toGroups:(id)arg2 atLocation:(long long)arg3;	// IMP=0x00000000000290de
- (_Bool)removePeople:(id)arg1 fromGroups:(id)arg2;	// IMP=0x0000000000029059
- (_Bool)addPeople:(id)arg1 toGroups:(id)arg2 atLocation:(long long)arg3;	// IMP=0x0000000000028d31
- (void)_ensureGroupsExists:(id)arg1;	// IMP=0x0000000000028b33
- (void)syncWithRemoteBuddies;	// IMP=0x0000000000028a44
- (void)_markHasSyncedWithRemoteBuddies;	// IMP=0x0000000000028a37
@property(readonly, nonatomic) _Bool hasSyncedWithRemoteBuddies;
- (void)requestGroups;	// IMP=0x000000000002898f
- (void)hookupToDaemon;	// IMP=0x000000000002894d
- (void)beginChanges;	// IMP=0x0000000000028906
- (void)_applyChangesToTemporaryCache:(id)arg1;	// IMP=0x0000000000026f2d
- (void)setTargetGroupsState:(id)arg1;	// IMP=0x0000000000026e88
- (void)updateWithTargetGroups;	// IMP=0x0000000000026e6d
- (void)setWaitForTargetState;	// IMP=0x0000000000026e12
- (void)targetGroupStateTimeout;	// IMP=0x0000000000026db1
@property(readonly, nonatomic) _Bool hasTargetGroupStateBeenMet;
@property(readonly, nonatomic) _Bool isAwaitingTargetGroupState;
- (void)clearTargetState;	// IMP=0x0000000000026a26
@property(nonatomic) _Bool blockOtherAddresses;
@property(retain, nonatomic) NSArray *allowList;
@property(retain, nonatomic) NSArray *blockList;
- (void)blockMessages:(_Bool)arg1 fromID:(id)arg2;	// IMP=0x00000000000263a7
- (void)setCachedBlockIdleStatus:(_Bool)arg1;	// IMP=0x0000000000026243
- (void)setCachedBlockingMode:(unsigned int)arg1;	// IMP=0x00000000000260df
- (void)setCachedBlockList:(id)arg1;	// IMP=0x0000000000025d9a
- (void)setCachedAllowList:(id)arg1;	// IMP=0x0000000000025a55
@property(readonly, nonatomic) NSArray *emailDomains;
@property(readonly, nonatomic) NSDictionary *dictionary;
- (void)loadFromDictionary:(id)arg1;	// IMP=0x00000000000258ee
- (void)_loadFromDictionary:(id)arg1 force:(_Bool)arg2;	// IMP=0x0000000000024745
- (void)setValue:(id)arg1 ofExtraProperty:(id)arg2 ofIMHandle:(id)arg3;	// IMP=0x0000000000024695
- (void)requestProperty:(id)arg1 ofIMHandle:(id)arg2;	// IMP=0x0000000000024602
@property(readonly, nonatomic) long long invalidSettings;
@property(readonly, nonatomic) _Bool isManaged;
@property(readonly, nonatomic) _Bool validServer;
@property(readonly, nonatomic) _Bool validPort;
@property(readonly, nonatomic) _Bool validLogin;
@property(readonly, nonatomic) _Bool canActivate;
@property(readonly, nonatomic) _Bool isSMSRelayCapable;
@property(readonly, nonatomic) _Bool allowsMMSRelay;
@property(readonly, nonatomic) _Bool allowsSMSRelay;
@property(nonatomic) _Bool allowsVCRelay;
@property(nonatomic) _Bool goIdle;
@property(readonly, nonatomic) long long port;
@property(readonly, nonatomic) NSString *server;
- (id)_serverWithSSL:(_Bool)arg1;	// IMP=0x0000000000023e3d
- (id)description;	// IMP=0x0000000000023d20
@property(readonly, nonatomic) _Bool useSSL;
@property(nonatomic) _Bool autoLogin;
@property(readonly, nonatomic) _Bool hasCustomDescription;
@property(retain, nonatomic) NSString *accountDescription;
@property(nonatomic, getter=isInvisible) _Bool invisible;
- (void)removeTemporaryPassword;	// IMP=0x0000000000023759
- (void)setTemporaryPassword:(id)arg1;	// IMP=0x0000000000022df9
@property(readonly, nonatomic) NSString *temporaryPassword;
- (void)removePassword;	// IMP=0x0000000000022af9
- (void)setPassword:(id)arg1;	// IMP=0x0000000000022486
@property(readonly, nonatomic) NSString *password;
@property(readonly, nonatomic) _Bool handlesChatInvites;
- (void)updateCapabilities:(unsigned long long)arg1;	// IMP=0x0000000000022187
- (_Bool)hasCapability:(unsigned long long)arg1;	// IMP=0x0000000000022161
- (long long)compareServices:(id)arg1;	// IMP=0x0000000000022092
- (long long)compareIDs:(id)arg1;	// IMP=0x0000000000021fed
- (long long)compareStatus:(id)arg1;	// IMP=0x0000000000021f69
- (long long)compareAccountNames:(id)arg1;	// IMP=0x0000000000021eb8
- (long long)compareLoginStatus:(id)arg1;	// IMP=0x0000000000021e33
- (_Bool)emailAddressIsID:(id)arg1;	// IMP=0x0000000000021db2
- (void)resetToDefaults;	// IMP=0x0000000000021cc7
- (void)writeSettings;	// IMP=0x0000000000021a22
- (_Bool)equalID:(id)arg1 andID:(id)arg2;	// IMP=0x000000000002199f
- (id)canonicalFormOfID:(id)arg1 countryCode:(id)arg2;	// IMP=0x0000000000021845
- (id)canonicalFormOfID:(id)arg1;	// IMP=0x0000000000021831
@property(readonly, nonatomic) NSData *accountImageData;
@property(readonly, nonatomic) NSString *serviceName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *internalName;
@property(readonly, nonatomic) NSString *shortName;
- (void)setUniqueID:(id)arg1;	// IMP=0x00000000000215fc
@property(readonly, nonatomic) NSString *uniqueID;
@property(readonly, nonatomic) NSString *myNowPlayingString;
- (void)setCurrentAccountStatus:(id)arg1;	// IMP=0x000000000002103c
- (void)_updateMyStatus:(unsigned long long)arg1 message:(id)arg2;	// IMP=0x0000000000020de2
@property(readonly, nonatomic) long long accountType;
- (void)_updateLogin:(id)arg1;	// IMP=0x0000000000020bbd
- (void)loginStatusChanged:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4;	// IMP=0x0000000000020b75
- (void)logoutAccount;	// IMP=0x000000000002085c
- (void)loginAccount;	// IMP=0x0000000000020848
- (void)autoLoginAccount;	// IMP=0x0000000000020831
- (void)_loginWithAutoLogin:(_Bool)arg1;	// IMP=0x0000000000020722
- (id)initWithUniqueID:(id)arg1 service:(id)arg2;	// IMP=0x00000000000200e2
- (id)initWithService:(id)arg1;	// IMP=0x00000000000200cb
- (void)clearServiceCaches;	// IMP=0x000000000001ffed
- (void)dealloc;	// IMP=0x000000000001fecf

@end

