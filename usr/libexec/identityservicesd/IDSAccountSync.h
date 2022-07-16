//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDAccountController, IDSDServiceController, IDSPairingManager, IDSPushHandler, IDSRemoteCredential, IMUserDefaults, NSMutableDictionary;

@interface IDSAccountSync : NSObject
{
    IDSRemoteCredential *_syncCredential;	// 8 = 0x8
    NSMutableDictionary *_currentInFlightSyncAttempts;	// 16 = 0x10
    IDSPairingManager *_pairingManager;	// 24 = 0x18
    IDSDServiceController *_serviceController;	// 32 = 0x20
    IDSDAccountController *_accountController;	// 40 = 0x28
    IDSPushHandler *_pushHandler;	// 48 = 0x30
    IMUserDefaults *_userDefaults;	// 56 = 0x38
}

+ (id)usefulLoggingDescriptionAccountInfos:(id)arg1;	// IMP=0x004000000014b8b0
+ (double)retryTimeForKey:(id)arg1 attempts:(long long)arg2;	// IMP=0x00100000001401e0
+ (id)sharedInstance;	// IMP=0x001000000013f440
- (void).cxx_destruct;	// IMP=0x002000000014be30
@property(retain, nonatomic) IMUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) IDSPushHandler *pushHandler; // @synthesize pushHandler=_pushHandler;
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) IDSDServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(retain, nonatomic) IDSPairingManager *pairingManager; // @synthesize pairingManager=_pairingManager;
@property(retain, nonatomic) NSMutableDictionary *currentInFlightSyncAttempts; // @synthesize currentInFlightSyncAttempts=_currentInFlightSyncAttempts;
@property(retain, nonatomic) IDSRemoteCredential *syncCredential; // @synthesize syncCredential=_syncCredential;
- (void)_updateTinkerDeviceWithURIs:(id)arg1 pushToken:(id)arg2;	// IMP=0x001000000014b730
- (void)_updatePreferredAccountWithAccountInfo:(id)arg1 withAccountSyncCommand:(unsigned int)arg2;	// IMP=0x001000000014a750
- (void)_registerAccountsWithRemoteInfo:(id)arg1;	// IMP=0x00100000001484c0
- (void)synchronizeAccountsWithRemoteInfo:(id)arg1 service:(id)arg2;	// IMP=0x00100000001471e0
- (void)incomingSyncMessage:(id)arg1;	// IMP=0x0010000000146750
- (void)_syncTinkerDeviceInfo;	// IMP=0x0010000000146060
- (void)_addPhoneNumbersToAccount:(id)arg1 withNonPreferredPhoneAccounts:(id)arg2;	// IMP=0x00100000001458f0
- (id)_constructAccountInfo:(id)arg1;	// IMP=0x0010000000144aa0
- (id)constructRAResponseDictionary:(id)arg1;	// IMP=0x0010000000144640
- (void)_noteShouldSynchronizeServices:(id)arg1;	// IMP=0x0010000000143d00
- (void)_noteShouldSynchronizeTinkerDeviceInfo;	// IMP=0x0010000000143990
- (void)noteShouldFetchRemoteAccountInfoForAllServices;	// IMP=0x0010000000142bd0
- (void)noteShouldSynchronizePreferredAccount;	// IMP=0x0010000000141650
- (void)noteShouldSynchronizeAllServices;	// IMP=0x0010000000141530
- (void)noteShouldSynchronizeTinkerDeviceInfo;	// IMP=0x0010000000141500
- (void)resetAndResynchronizeEverything;	// IMP=0x00100000001414f0
- (id)_sendAccountSyncMessage:(id)arg1 withPersistentKey:(id)arg2;	// IMP=0x0010000000140ab0
- (void)_stopAllPendingActions;	// IMP=0x00100000001406e0
- (void)_startRetryForKey:(id)arg1 withAction:(CDUnknownBlockType)arg2;	// IMP=0x0010000000140360
- (void)kickAnyUnfinishedSynchronization;	// IMP=0x001000000013f970
- (void)stopAnyUnfinishedSynchronization;	// IMP=0x001000000013f940
- (void)saveTracking;	// IMP=0x001000000013f890
- (id)initWithPairingManager:(id)arg1 serviceController:(id)arg2 accountController:(id)arg3 pushHandler:(id)arg4 userDefaults:(id)arg5 remoteCredential:(id)arg6;	// IMP=0x001000000013f690
- (id)init;	// IMP=0x001000000013f500

@end
