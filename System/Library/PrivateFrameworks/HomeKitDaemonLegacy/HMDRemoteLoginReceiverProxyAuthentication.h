//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDRemoteLoginProxyAuthenticationRequest;

@interface HMDRemoteLoginReceiverProxyAuthentication
{
    HMDRemoteLoginProxyAuthenticationRequest *_request;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0000000000454ebc
- (void).cxx_destruct;	// IMP=0x0000000000454e93
@property(readonly, nonatomic) HMDRemoteLoginProxyAuthenticationRequest *request; // @synthesize request=_request;
- (void)_authenticate;	// IMP=0x0000000000454cae
- (void)authenticate;	// IMP=0x0000000000454c3d
- (id)description;	// IMP=0x0000000000454baa
- (void)dealloc;	// IMP=0x0000000000454aba
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 request:(id)arg6;	// IMP=0x0000000000454a23

@end

