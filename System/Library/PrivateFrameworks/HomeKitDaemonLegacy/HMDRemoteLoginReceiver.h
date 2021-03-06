//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDRemoteLoginReceiverAuthenticationDelegate-Protocol.h>

@class HMDRemoteLoginReceiverSession, NSString;

@interface HMDRemoteLoginReceiver <HMDRemoteLoginReceiverAuthenticationDelegate>
{
    HMDRemoteLoginReceiverSession *_loginSession;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00000000009265d4
- (void).cxx_destruct;	// IMP=0x000000000092628a
@property(retain, nonatomic) HMDRemoteLoginReceiverSession *loginSession; // @synthesize loginSession=_loginSession;
- (void)didCompleteAuthentication:(id)arg1 response:(id)arg2;	// IMP=0x0000000000926189
- (void)_handleACAccountDidChangeNotification:(id)arg1;	// IMP=0x0000000000925e07
- (void)_callCompletion:(id)arg1;	// IMP=0x0000000000925c0a
- (void)_auditLoggedInAccountFor:(id)arg1;	// IMP=0x0000000000925ab9
- (void)auditLoggedInAccountFor:(id)arg1;	// IMP=0x0000000000925a08
- (void)auditLoggedInAccount;	// IMP=0x0000000000925997
- (void)_handleSignoutRequest:(id)arg1;	// IMP=0x000000000092555b
- (void)_authenticate:(id)arg1 message:(id)arg2;	// IMP=0x0000000000925329
- (void)_handleProxyAuthenticationRequest:(id)arg1;	// IMP=0x0000000000924de3
- (void)_handleProxyDeviceRequest:(id)arg1;	// IMP=0x0000000000924982
- (void)_handleCompanionAuthenticationRequest:(id)arg1;	// IMP=0x000000000092443c
- (void)registerForNotifications;	// IMP=0x000000000092439a
- (void)registerForMessages;	// IMP=0x0000000000924006
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x0000000000923fc5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

