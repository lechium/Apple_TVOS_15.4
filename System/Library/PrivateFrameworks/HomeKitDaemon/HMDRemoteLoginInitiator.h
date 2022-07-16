//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDRemoteLoginInitiatorAuthenticationDelegate-Protocol.h>

@class HMDRemoteLoginAnisetteDataProviderBridge, HMDRemoteLoginInitiatorSession, HMDRemoteLoginMessageSender, NSString;

@interface HMDRemoteLoginInitiator <HMDRemoteLoginInitiatorAuthenticationDelegate>
{
    HMDRemoteLoginInitiatorSession *_loginSession;	// 8 = 0x8
    HMDRemoteLoginAnisetteDataProviderBridge *_anisetteProviderBridge;	// 16 = 0x10
    HMDRemoteLoginMessageSender *_remoteMessageSender;	// 24 = 0x18
}

+ (_Bool)hasMessageReceiverChildren;	// IMP=0x00000000002bfe89
+ (id)logCategory;	// IMP=0x00000000002bfe59
- (void).cxx_destruct;	// IMP=0x00000000002bf965
@property(retain, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender; // @synthesize remoteMessageSender=_remoteMessageSender;
@property(retain, nonatomic) HMDRemoteLoginAnisetteDataProviderBridge *anisetteProviderBridge; // @synthesize anisetteProviderBridge=_anisetteProviderBridge;
@property(retain, nonatomic) HMDRemoteLoginInitiatorSession *loginSession; // @synthesize loginSession=_loginSession;
- (void)didCompleteAuthentication:(id)arg1 error:(id)arg2 loggedInAccount:(id)arg3;	// IMP=0x00000000002bf7ec
- (id)messageReceiverChildren;	// IMP=0x00000000002bf6bf
- (void)_resetCurrentSession:(id)arg1;	// IMP=0x00000000002bf5db
- (void)_callCompletion:(id)arg1 loggedInAccount:(id)arg2 authSession:(id)arg3;	// IMP=0x00000000002bf2c0
- (void)_handleSignoutResponse:(id)arg1 error:(id)arg2 message:(id)arg3;	// IMP=0x00000000002bf0df
- (void)_handleRemoteLoginSignout:(id)arg1;	// IMP=0x00000000002bedd7
- (void)_proxyLoginWithSessionID:(id)arg1 authResults:(id)arg2 remoteDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002beb3e
- (void)_handleRemoteLoginProxyAuthentication:(id)arg1;	// IMP=0x00000000002be7e3
- (void)_handleProxyDeviceResponse:(id)arg1 error:(id)arg2 message:(id)arg3;	// IMP=0x00000000002be43a
- (void)_handleRemoteLoginProxiedDevice:(id)arg1;	// IMP=0x00000000002be1dd
- (void)_companionLoginWithSessionID:(id)arg1 account:(id)arg2 remoteDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002bdf44
- (void)_handleRemoteLoginCompanionAuthentication:(id)arg1;	// IMP=0x00000000002bdcca
- (void)registerForMessages;	// IMP=0x00000000002bd9aa
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x00000000002bd7b6
- (id)initWithUUID:(id)arg1 accessory:(id)arg2 remoteLoginHandler:(id)arg3;	// IMP=0x00000000002bd716

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

