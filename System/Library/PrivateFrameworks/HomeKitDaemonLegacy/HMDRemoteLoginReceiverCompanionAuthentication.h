//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDRemoteLoginCompanionAuthenticationRequest;

@interface HMDRemoteLoginReceiverCompanionAuthentication
{
    HMDRemoteLoginCompanionAuthenticationRequest *_request;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00000000003db01d
- (void).cxx_destruct;	// IMP=0x00000000003dae52
@property(readonly, nonatomic) HMDRemoteLoginCompanionAuthenticationRequest *request; // @synthesize request=_request;
- (void)_authenticateAccount:(id)arg1 alreadyExists:(_Bool)arg2 withCompanionDevice:(id)arg3;	// IMP=0x00000000003daabb
- (void)_authenticate;	// IMP=0x00000000003da9ae
- (void)authenticate;	// IMP=0x00000000003da93d
- (id)description;	// IMP=0x00000000003da883
- (void)dealloc;	// IMP=0x00000000003da793
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 request:(id)arg6;	// IMP=0x00000000003da6fc

@end

