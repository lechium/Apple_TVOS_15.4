//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface HMDRemoteLoginInitiatorProxyAuthentication
{
    NSDictionary *_authResults;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x000000000000da73
- (void).cxx_destruct;	// IMP=0x000000000000d9b8
@property(readonly, nonatomic) NSDictionary *authResults; // @synthesize authResults=_authResults;
- (void)_authenticate;	// IMP=0x000000000000d482
- (void)authenticate;	// IMP=0x000000000000d411
- (int)loginType;	// IMP=0x000000000000d406
- (id)description;	// IMP=0x000000000000d39a
- (void)dealloc;	// IMP=0x000000000000d2aa
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 authResults:(id)arg6;	// IMP=0x000000000000d213

@end
