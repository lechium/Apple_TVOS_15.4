//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, MISSING_TYPE, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface PushNotificationController : NSObject
{
    NSMutableDictionary *_connections;	// 8 = 0x8
    struct MGNotificationTokenStruct *_deviceNameChangedToken;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    double _lastRegisterAttemptTime;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 40 = 0x28
    ISOperationQueue *_operationQueue;	// 48 = 0x30
    MISSING_TYPE *_pushEnabledState;	// 56 = 0x38
    NSMutableArray *_registerBlocks;	// 64 = 0x40
    NSMutableArray *_tokenOperations;	// 72 = 0x48
}

+ (id)_newPushHandlerWithURLBag:(id)arg1;	// IMP=0x00200000000977b5
+ (_Bool)_amsHandleNotification:(id)arg1 urlBag:(id)arg2;	// IMP=0x00100000000953e3
+ (id)soundFilesDirectoryPath;	// IMP=0x001000000009230e
+ (id)sharedInstance;	// IMP=0x0010000000092281
- (void).cxx_destruct;	// IMP=0x002000000009aac5
- (void)_updatePushEnabledState;	// IMP=0x001000000009a522
- (void)_updateEnvironmentAfterTokenPost:(id)arg1;	// IMP=0x001000000009a206
- (_Bool)_shouldAggressivelySendToken;	// IMP=0x001000000009a1e3
- (void)_setShouldAggressivelySendToken:(_Bool)arg1;	// IMP=0x001000000009a19f
- (void)_resetLastRegisterAttemptTime;	// IMP=0x001000000009a17d
- (void)_reloadPushStateInContext:(id)arg1;	// IMP=0x0010000000099bf5
- (void)_reloadDaemonClientInContext:(id)arg1;	// IMP=0x00100000000997c2
- (void)_reloadActiveEnvironmentInContext:(id)arg1;	// IMP=0x0010000000098fb1
- (void)_postTokensInContext:(id)arg1 force:(_Bool)arg2;	// IMP=0x00100000000986e3
- (void)_postTokensIfNecessaryInContext:(id)arg1;	// IMP=0x00100000000986cf
- (void)_postTokenForEnvironment:(id)arg1;	// IMP=0x001000000009807b
- (void)_postNotificationsAvailableForClient:(id)arg1 inContext:(id)arg2;	// IMP=0x0010000000097d6f
- (id)_portNameForEnvironmentName:(id)arg1;	// IMP=0x0010000000097cf3
- (void)_openConnectionForEnvironment:(id)arg1;	// IMP=0x00100000000979be
- (long long)_numberOfClientsInContext:(id)arg1;	// IMP=0x001000000009791c
- (id)_newPostTokenOperationForEnvironment:(id)arg1 account:(id)arg2;	// IMP=0x00100000000976b7
- (id)_newAPSConnectionWithEnvironment:(id)arg1;	// IMP=0x00100000000975b3
- (void)_loadConnectionsInContext:(id)arg1;	// IMP=0x0010000000096e28
- (_Bool)_isValidEnvironment:(id)arg1;	// IMP=0x0010000000096da2
- (_Bool)_isPushEnabled;	// IMP=0x0010000000096d94
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000096b9d
- (void)_fireRegisterBlocksAfterOperation:(id)arg1;	// IMP=0x0010000000096600
- (id)_environmentNameForConnection:(id)arg1;	// IMP=0x0010000000096459
- (id)_environmentForName:(id)arg1 createIfNeeded:(_Bool)arg2 inContext:(id)arg3;	// IMP=0x0010000000095f6b
- (id)_enabledTopics;	// IMP=0x0010000000095f25
- (void)_closeEnvironment:(id)arg1 inContext:(id)arg2;	// IMP=0x0010000000095b14
- (id)_clientForIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2 inContext:(id)arg3;	// IMP=0x001000000009565a
- (id)_bag;	// IMP=0x00100000000955b7
- (void)_addNotificationWithUserInfo:(id)arg1 client:(id)arg2 context:(id)arg3;	// IMP=0x00100000000952c4
- (void)_urlBagDidLoadNotification:(id)arg1;	// IMP=0x00100000000951ad
- (void)_storeFrontChangedNotification:(id)arg1;	// IMP=0x00100000000950e7
- (void)_networkTypeChanged:(id)arg1;	// IMP=0x0010000000094fc9
- (void)_deviceNameChanged;	// IMP=0x0010000000094d95
- (void)_accountStoreChangedNotification:(id)arg1;	// IMP=0x0010000000094ccf
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x00100000000943ec
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x001000000009402f
- (void)unregisterNotificationClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000093b1b
- (void)showLocalNotificationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000093a63
- (void)registerNotificationClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000936e8
- (void)popRemoteNotificationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000932c6
- (void)observeXPCServer:(id)arg1;	// IMP=0x001000000009321d
- (void)registerTokenForEnvironmentName:(id)arg1 accountIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000092cdc
- (void)postPushTokens;	// IMP=0x0010000000092aae
- (void)postClientNotificationWithUserInfo:(id)arg1;	// IMP=0x00100000000923d1
- (void)dealloc;	// IMP=0x0010000000091ff1
- (id)init;	// IMP=0x0010000000091c17

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

