//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageDispatcher.h>

@class HMDHomeManager, HMDMessageFilterChain, HMDSecureRemoteMessageFilter, HMDSecureRemoteMessageTransport, HMDXPCMessageTransport, NSMutableDictionary;

@interface HMDMessageDispatcher : HMFMessageDispatcher
{
    HMDXPCMessageTransport *_XPCTransport;	// 8 = 0x8
    HMDSecureRemoteMessageTransport *_secureRemoteTransport;	// 16 = 0x10
    HMDMessageFilterChain *_messageFilterChain;	// 24 = 0x18
    NSMutableDictionary *_remoteGateways;	// 32 = 0x20
    HMDSecureRemoteMessageFilter *_secureRemoteMessageFilter;	// 40 = 0x28
    HMDHomeManager *_homeManager;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x000000000056ef4b
+ (id)defaultDispatcher;	// IMP=0x000000000056eee8
+ (id)destinationWithTarget:(id)arg1 userID:(id)arg2 destination:(id)arg3 multicast:(_Bool)arg4 accountRegistry:(id)arg5;	// IMP=0x000000000056ed52
+ (id)destinationWithTarget:(id)arg1 userID:(id)arg2 destination:(id)arg3 multicast:(_Bool)arg4;	// IMP=0x000000000056ec85
- (void).cxx_destruct;	// IMP=0x000000000056e862
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) HMDSecureRemoteMessageFilter *secureRemoteMessageFilter; // @synthesize secureRemoteMessageFilter=_secureRemoteMessageFilter;
@property(retain, nonatomic) NSMutableDictionary *remoteGateways; // @synthesize remoteGateways=_remoteGateways;
@property(readonly, nonatomic) HMDMessageFilterChain *messageFilterChain; // @synthesize messageFilterChain=_messageFilterChain;
@property(readonly, nonatomic) HMDSecureRemoteMessageTransport *secureRemoteTransport; // @synthesize secureRemoteTransport=_secureRemoteTransport;
@property(readonly, nonatomic) HMDXPCMessageTransport *XPCTransport; // @synthesize XPCTransport=_XPCTransport;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000056e6e2
- (void)dispatchMessage:(id)arg1;	// IMP=0x000000000056e33a
- (void)configureHTTPTransport:(id)arg1;	// IMP=0x000000000056e289
- (void)disableMessageServer;	// IMP=0x000000000056e24a
- (void)enableMessageServer;	// IMP=0x000000000056e208
- (id)httpMessageTransport;	// IMP=0x000000000056e09c
- (void)configureHomeManager:(id)arg1;	// IMP=0x000000000056dfeb
- (void)reset;	// IMP=0x000000000056dfae
- (id)filterClasses;	// IMP=0x000000000056de70
- (void)dealloc;	// IMP=0x000000000056ddfb
- (id)initWithXPCTransport:(id)arg1 secureRemoteTransport:(id)arg2 messageFilterChain:(id)arg3;	// IMP=0x000000000056dc3e
- (id)prepareAnswerForRequestedCapabilities:(id)arg1;	// IMP=0x000000000057096a
- (void)removeHome:(id)arg1;	// IMP=0x00000000005708f8
- (void)updateHome:(id)arg1 configurationVersion:(long long)arg2;	// IMP=0x0000000000570880
- (void)sendSecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 destination:(id)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000005700c2
- (id)remoteAccessDeviceForHome:(id)arg1;	// IMP=0x0000000000570072
- (id)residentCommunicationHandlerForHome:(id)arg1;	// IMP=0x000000000056ff33
- (void)_setRemoteAccessDevice:(id)arg1 forHome:(id)arg2 sendNotification:(_Bool)arg3;	// IMP=0x000000000056f488
- (void)setRemoteAccessDevice:(id)arg1 forHome:(id)arg2;	// IMP=0x000000000056f3ac
- (void)setCompanionDevice:(id)arg1 forHome:(id)arg2;	// IMP=0x000000000056f2d0
- (void)handleSecureSessionError:(id)arg1;	// IMP=0x000000000056f21f

@end

