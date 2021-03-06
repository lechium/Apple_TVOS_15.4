//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager, AKPCSAuthPushHandler, APSConnection, NSArray, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AKAppleIDPushHelperService : NSObject
{
    AKAccountManager *_accountManager;	// 8 = 0x8
    APSConnection *_apsConnection;	// 16 = 0x10
    NSString *_activeAPSEnvironment;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_apsTokenSemaphore;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_pushServiceQueue;	// 40 = 0x28
    NSString *_loginCodeNotificationID;	// 48 = 0x30
    NSString *_appleCareNotificationID;	// 56 = 0x38
    NSMutableDictionary *_notificationsByPushID;	// 64 = 0x40
    NSArray *_pushDelegates;	// 72 = 0x48
    NSSet *_pushTopics;	// 80 = 0x50
    AKPCSAuthPushHandler *_pcsAuthPushHandler;	// 88 = 0x58
    NSString *_activeCode;	// 96 = 0x60
}

+ (id)sharedService;	// IMP=0x0020000000082ec1
- (void).cxx_destruct;	// IMP=0x0020000000086775
@property(copy, nonatomic) NSString *activeCode; // @synthesize activeCode=_activeCode;
- (void)setEnableCriticalReliability:(_Bool)arg1;	// IMP=0x0010000000086756
- (void)_unsafe_showNotificationForMessage:(id)arg1 account:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000086407
- (void)_startPasswordResetFlowForAccount:(id)arg1;	// IMP=0x0010000000086176
- (void)_unsafe_tearDownNotificationWithID:(id)arg1;	// IMP=0x0010000000085ff3
- (void)_unsafe_teardownCurrentLoginNotification;	// IMP=0x0010000000085f4d
- (void)_unsafe_showLoginNotificationWithCode:(id)arg1 incomingMessage:(id)arg2 piggy:(_Bool)arg3;	// IMP=0x0010000000085dcf
- (void)tearDownLoginNotifications;	// IMP=0x0010000000085d6e
- (void)showPigCode:(id)arg1 withIncomingMessage:(id)arg2;	// IMP=0x0010000000085c34
- (void)_generateLoginCodeForAccount:(id)arg1 withIncomingMessage:(id)arg2;	// IMP=0x0010000000085857
- (void)_performCommandForMessage:(id)arg1 forAccount:(id)arg2;	// IMP=0x0010000000085691
- (_Bool)_messageSupportsAlerts:(id)arg1;	// IMP=0x001000000008560e
- (void)_unsafe_presentMessage:(id)arg1 forAccount:(id)arg2;	// IMP=0x00100000000853db
- (_Bool)_shouldProcessPushMessage:(id)arg1 withAccount:(id)arg2;	// IMP=0x00100000000851cb
- (void)_unsafe_processPushMessage:(id)arg1;	// IMP=0x0010000000084c7c
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00100000000849e6
- (id)_publicAPSToken;	// IMP=0x0010000000084540
- (id)publicAPSTokenString;	// IMP=0x00100000000844f0
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0010000000084306
- (void)connectionDidReconnect:(id)arg1;	// IMP=0x00100000000842aa
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;	// IMP=0x0010000000084218
- (void)dealloc;	// IMP=0x001000000008414d
- (void)_ensureDesiredAPSEnvironmentIsInUse;	// IMP=0x0010000000083d58
- (void)_processMessageWithDelegates:(id)arg1;	// IMP=0x0010000000083aba
- (_Bool)_queryDelegatesForSuppressAction:(id)arg1;	// IMP=0x001000000008386a
- (void)_notifyDelegatesOfMessageActivation:(id)arg1 result:(unsigned long long)arg2 payload:(id)arg3;	// IMP=0x001000000008364e
- (void)_notifyDelegatesOfMessageActivation:(id)arg1 result:(unsigned long long)arg2;	// IMP=0x0010000000083455
- (void)setDelegates:(id)arg1;	// IMP=0x00100000000833d6
- (void)startWithDelegates:(id)arg1;	// IMP=0x0010000000083023
- (id)init;	// IMP=0x0010000000082f16

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

