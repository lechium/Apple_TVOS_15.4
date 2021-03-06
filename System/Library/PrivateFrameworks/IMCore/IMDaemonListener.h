//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSProtocolChecker, NSString;

@interface IMDaemonListener : NSObject
{
    NSMutableDictionary *_properties;	// 8 = 0x8
    NSMutableDictionary *_persistentProperties;	// 16 = 0x10
    NSMutableArray *_deferredChatMessages;	// 24 = 0x18
    NSMutableArray *_handlers;	// 32 = 0x20
    NSProtocolChecker *_protocol;	// 40 = 0x28
    NSMutableDictionary *_services;	// 48 = 0x30
    NSDate *_myIdleSince;	// 56 = 0x38
    NSData *_myPicture;	// 64 = 0x40
    NSMutableDictionary *_contexts;	// 72 = 0x48
    NSString *_myStatusMessage;	// 80 = 0x50
    NSString *_myNowPlayingString;	// 88 = 0x58
    unsigned long long _myStatus;	// 96 = 0x60
    unsigned long long _vcCapabilities;	// 104 = 0x68
    _Bool _setupComplete;	// 112 = 0x70
    _Bool _postedSetupComplete;	// 113 = 0x71
    _Bool _holdingChatMessages;	// 114 = 0x72
    _Bool _hidingDisconnect;	// 115 = 0x73
    _Bool _hasPendingProcessChange;	// 116 = 0x74
}

- (void).cxx_destruct;	// IMP=0x000000000004157d
@property(readonly, nonatomic) NSDictionary *persistentProperties; // @synthesize persistentProperties=_persistentProperties;
@property(readonly, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) _Bool hasPostedSetupComplete; // @synthesize hasPostedSetupComplete=_postedSetupComplete;
@property(readonly, nonatomic) _Bool shouldHoldChatMessages; // @synthesize shouldHoldChatMessages=_holdingChatMessages;
@property(readonly, nonatomic) unsigned long long vcCapabilities; // @synthesize vcCapabilities=_vcCapabilities;
@property(readonly, nonatomic) NSString *myStatusMessage; // @synthesize myStatusMessage=_myStatusMessage;
@property(readonly, nonatomic) _Bool isSetupComplete; // @synthesize isSetupComplete=_setupComplete;
@property(readonly, nonatomic) NSArray *handlers; // @synthesize handlers=_handlers;
@property(nonatomic, setter=_setHidingDisconnect:) _Bool _hidingDisconnect; // @synthesize _hidingDisconnect;
@property(readonly, nonatomic) NSMutableDictionary *_contexts; // @synthesize _contexts;
- (void)_resetPostedSetupCompleted;	// IMP=0x00000000000414d9
- (void)oneTimeCodesDidChange:(id)arg1;	// IMP=0x0000000000041399
- (void)pendingNicknamesOrHandledNicknamesDidChange;	// IMP=0x000000000004132e
- (void)updatePersonalNickname:(id)arg1;	// IMP=0x00000000000412b8
- (void)updateNicknameHandlesForSharing:(id)arg1 blocked:(id)arg2;	// IMP=0x000000000004122e
- (void)handlesSharingNicknamesDidChange;	// IMP=0x00000000000411ea
- (void)updatePendingNicknameUpdates:(id)arg1 handledNicknameUpdates:(id)arg2;	// IMP=0x0000000000040ec7
- (void)updateNicknameData:(id)arg1;	// IMP=0x0000000000040ec1
- (void)nicknameRequestResponse:(id)arg1 encodedNicknameData:(id)arg2;	// IMP=0x0000000000040ebb
- (void)receivedUrgentRequestForMessages:(id)arg1;	// IMP=0x0000000000040cb6
- (void)updateCloudKitStateWithDictionary:(id)arg1;	// IMP=0x0000000000040c40
- (void)updateCloudKitState;	// IMP=0x0000000000040bfc
- (void)didAttemptToDisableAllDevicesResult:(_Bool)arg1;	// IMP=0x0000000000040ba9
- (void)didPerformAdditionalStorageRequiredCheckWithSuccess:(_Bool)arg1 additionalStorageRequired:(unsigned long long)arg2 forAccountId:(id)arg3 error:(id)arg4;	// IMP=0x0000000000040b0d
- (void)didAttemptToSetEnabledTo:(_Bool)arg1 result:(_Bool)arg2;	// IMP=0x0000000000040ab5
- (void)qosClassWhileServicingRequestsResponse:(unsigned int)arg1 identifier:(id)arg2;	// IMP=0x0000000000040986
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000404ed
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000404d7
- (void)didFetchCloudKitSyncDebuggingInfo:(id)arg1;	// IMP=0x0000000000040436
- (void)didAttemptToDisableiCloudBackups:(long long)arg1 error:(id)arg2;	// IMP=0x000000000004020f
- (void)didFetchRampState:(id)arg1;	// IMP=0x00000000000400fb
- (void)didFetchSyncStateStats:(id)arg1;	// IMP=0x000000000003ffe7
- (void)databaseChatSpamUpdated:(id)arg1;	// IMP=0x000000000003fde2
- (void)databaseUpdated:(id)arg1;	// IMP=0x000000000003fa29
- (void)_deferredSetup:(id)arg1;	// IMP=0x000000000003effe
- (void)setupComplete:(_Bool)arg1 info:(id)arg2;	// IMP=0x000000000003e2fa
- (void)account:(id)arg1 defaults:(id)arg2 blockList:(id)arg3 allowList:(id)arg4 blockingMode:(unsigned int)arg5 blockIdleStatus:(_Bool)arg6 status:(id)arg7 capabilities:(unsigned long long)arg8 serviceLoginStatus:(unsigned int)arg9 loginStatusMessage:(id)arg10;	// IMP=0x000000000003e24a
- (void)service:(id)arg1 properties:(id)arg2 defaults:(id)arg3 defaultAccountSettings:(id)arg4 allAccounts:(id)arg5 activeAccounts:(id)arg6;	// IMP=0x000000000003d46d
- (void)services:(id)arg1 properties:(id)arg2 persistentProperties:(id)arg3;	// IMP=0x000000000003ccf8
- (void)account:(id)arg1 status:(id)arg2 capabilities:(unsigned long long)arg3 serviceLoginStatus:(unsigned int)arg4 loginStatusMessage:(id)arg5;	// IMP=0x000000000003c9e6
- (void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3;	// IMP=0x000000000003c77f
- (void)_cacheValue:(id)arg1 forPersistentProperty:(id)arg2;	// IMP=0x000000000003c705
- (id)valueOfPersistentProperty:(id)arg1;	// IMP=0x000000000003c6ef
- (void)property:(id)arg1 changedTo:(id)arg2 from:(id)arg3;	// IMP=0x000000000003c488
- (void)_cacheValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000000003c40e
- (id)valueOfProperty:(id)arg1;	// IMP=0x000000000003c3f8
- (id)_stampForContext:(id)arg1;	// IMP=0x000000000003c3e2
- (void)_setStamp:(id)arg1 forContext:(id)arg2;	// IMP=0x000000000003c301
- (void)account:(id)arg1 postedError:(id)arg2;	// IMP=0x000000000003bfae
- (void)account:(id)arg1 blockIdleStatusChanged:(_Bool)arg2;	// IMP=0x000000000003bfa8
- (void)account:(id)arg1 blockingModeChanged:(unsigned int)arg2;	// IMP=0x000000000003bfa2
- (void)account:(id)arg1 allowListChanged:(id)arg2;	// IMP=0x000000000003bf9c
- (void)account:(id)arg1 blockListChanged:(id)arg2;	// IMP=0x000000000003bf96
- (void)account:(id)arg1 handleSubscriptionRequestFrom:(id)arg2 withMessage:(id)arg3;	// IMP=0x000000000003bcd3
- (void)account:(id)arg1 groupsChanged:(id)arg2 error:(id)arg3;	// IMP=0x000000000003b9ff
- (void)fileTransferExplicitDownloadFailed:(id)arg1 suggestedRetryGUID:(id)arg2 error:(id)arg3;	// IMP=0x000000000003b918
- (void)fileTransfer:(id)arg1 explicitDownloadSucceededWithPath:(id)arg2 livePhotoBundlePath:(id)arg3;	// IMP=0x000000000003b831
- (void)fileTransferHighQualityDownloadFailed:(id)arg1;	// IMP=0x000000000003b781
- (void)fileTransfer:(id)arg1 highQualityDownloadSucceededWithPath:(id)arg2;	// IMP=0x000000000003b6b3
- (void)fileTransfer:(id)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4;	// IMP=0x000000000003b5e8
- (void)fileTransfer:(id)arg1 updatedWithProperties:(id)arg2 forceNotify:(_Bool)arg3;	// IMP=0x000000000003b509
- (void)fileTransfers:(id)arg1 createdWithLocalPaths:(id)arg2;	// IMP=0x000000000003b43b
- (void)fileTransfer:(id)arg1 createdWithProperties:(id)arg2;	// IMP=0x000000000003b36d
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesReceived:(id)arg5;	// IMP=0x000000000003af9e
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageReceived:(id)arg5;	// IMP=0x000000000003abcf
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 invitationReceived:(id)arg5;	// IMP=0x000000000003a803
- (void)account:(id)arg1 buddyProperties:(id)arg2 buddyPictures:(id)arg3;	// IMP=0x000000000003a52f
- (void)pinCodeAlertCompleted:(id)arg1 deviceName:(id)arg2 deviceType:(id)arg3 phoneNumber:(id)arg4 responseFromDevice:(_Bool)arg5 wasCancelled:(_Bool)arg6;	// IMP=0x000000000003a262
- (void)displayPinCodeForAccount:(id)arg1 pinCode:(id)arg2 deviceName:(id)arg3 deviceType:(id)arg4 phoneNumber:(id)arg5;	// IMP=0x0000000000039fc1
- (void)account:(id)arg1 buddyPictureChanged:(id)arg2 imageData:(id)arg3 imageHash:(id)arg4;	// IMP=0x0000000000039cc6
- (void)account:(id)arg1 buddyPropertiesChanged:(id)arg2;	// IMP=0x0000000000039a25
- (void)networkDataAvailabilityChanged:(_Bool)arg1;	// IMP=0x0000000000039995
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;	// IMP=0x00000000000397a3
- (void)account:(id)arg1 capabilitiesChanged:(unsigned long long)arg2;	// IMP=0x00000000000394d6
- (void)account:(id)arg1 statusChanged:(id)arg2;	// IMP=0x000000000003923d
- (void)account:(id)arg1 loginStatusChanged:(unsigned int)arg2 message:(id)arg3 reason:(int)arg4 properties:(id)arg5;	// IMP=0x0000000000038ed7
- (void)accountRemoved:(id)arg1;	// IMP=0x0000000000038dfb
- (void)accountAdded:(id)arg1 defaults:(id)arg2 service:(id)arg3;	// IMP=0x0000000000038c68
- (void)account:(id)arg1 defaultsChanged:(id)arg2;	// IMP=0x00000000000389cc
- (void)activeAccountsChanged:(id)arg1 forService:(id)arg2;	// IMP=0x0000000000038368
- (void)defaultsChanged:(id)arg1 forService:(id)arg2;	// IMP=0x00000000000380e3
- (void)releaseHeldChatMessages;	// IMP=0x0000000000037f9c
- (void)holdChatMessages;	// IMP=0x0000000000037f92
@property(readonly, nonatomic) _Bool isHoldingChatMessages;
- (void)_deferNotification:(id)arg1;	// IMP=0x0000000000037f1b
- (void)_processDeferredInvitationDictionary:(id)arg1;	// IMP=0x0000000000037cf4
@property(readonly, nonatomic) unsigned int myIdleTime;
@property(readonly, nonatomic) unsigned long long myStatus;
- (void)_processMyStatusChanged;	// IMP=0x0000000000037c0d
- (void)_reallyProcessMyStatusChanged;	// IMP=0x0000000000037497
- (id)serviceWithName:(id)arg1;	// IMP=0x0000000000037481
@property(readonly, nonatomic) NSArray *allServices;
- (void)removeHandler:(id)arg1;	// IMP=0x000000000003741e
- (void)addHandler:(id)arg1;	// IMP=0x00000000000373ac
- (void)_noteDisconnected;	// IMP=0x00000000000373a0
- (id)init;	// IMP=0x00000000000372ea

@end

