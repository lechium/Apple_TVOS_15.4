//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFNetAddress;

@interface HMDNetworkRouterFirewallRuleLANMulticast
{
    unsigned short _port;	// 8 = 0x8
    HMFNetAddress *_ipAddress;	// 16 = 0x10
}

+ (id)createWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(_Bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(_Bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(_Bool)arg7 ruleDictionary:(id)arg8 error:(id *)arg9;	// IMP=0x000000000008010d
- (void).cxx_destruct;	// IMP=0x00000000000800fa
@property(readonly, nonatomic) unsigned short port; // @synthesize port=_port;
@property(readonly, nonatomic) HMFNetAddress *ipAddress; // @synthesize ipAddress=_ipAddress;
- (id)prettyJSONDictionary;	// IMP=0x000000000007ff78
- (id)attributeDescriptions;	// IMP=0x000000000007fdde
- (id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(_Bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(_Bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(_Bool)arg7 ipAddress:(id)arg8 port:(unsigned short)arg9;	// IMP=0x000000000007fd0c

@end

