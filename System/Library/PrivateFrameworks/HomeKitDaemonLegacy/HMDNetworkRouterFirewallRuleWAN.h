//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDNetworkRouterFirewallRuleWANSubject, NSArray;

@interface HMDNetworkRouterFirewallRuleWAN
{
    unsigned char _transportProtocol;	// 8 = 0x8
    unsigned short _portStart;	// 10 = 0xa
    unsigned short _portEnd;	// 12 = 0xc
    unsigned long long _purpose;	// 16 = 0x10
    HMDNetworkRouterFirewallRuleWANSubject *_subject;	// 24 = 0x18
    NSArray *_icmpTypes;	// 32 = 0x20
}

+ (id)createWithJSONDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000007e9dbf
+ (_Bool)__decodePorts:(id)arg1 portStart:(unsigned short *)arg2 portEnd:(unsigned short *)arg3;	// IMP=0x00000000007e9be6
+ (_Bool)__decodeSubject:(id)arg1 subject:(id *)arg2;	// IMP=0x00000000007e971f
+ (_Bool)__decodeAddressRange:(id)arg1 endValue:(id)arg2 subject:(id *)arg3;	// IMP=0x00000000007e9506
+ (id)__nonWildcardAddressFrom:(id)arg1 key:(id)arg2;	// IMP=0x00000000007e913d
+ (_Bool)__decodeAddresses:(id)arg1 subject:(id *)arg2;	// IMP=0x00000000007e8896
+ (_Bool)__decodeAddress:(id)arg1 subject:(id *)arg2;	// IMP=0x00000000007e87df
+ (_Bool)__decodeHostnames:(id)arg1 subject:(id *)arg2;	// IMP=0x00000000007e8190
+ (_Bool)__decodeType:(id)arg1 transportProtocol:(unsigned char *)arg2 error:(id *)arg3;	// IMP=0x00000000007e7f92
+ (_Bool)__decodeFlags:(id)arg1 critical:(_Bool *)arg2;	// IMP=0x00000000007e7f21
+ (_Bool)__decodePurpose:(id)arg1 purpose:(unsigned long long *)arg2;	// IMP=0x00000000007e7ead
+ (id)ipAddressAny;	// IMP=0x00000000007e7e7d
+ (id)ipAddressAnyIPv6;	// IMP=0x00000000007e7e4d
+ (id)ipAddressAnyIPv4;	// IMP=0x00000000007e7e1d
- (void).cxx_destruct;	// IMP=0x00000000007e7b05
@property(readonly, nonatomic) NSArray *icmpTypes; // @synthesize icmpTypes=_icmpTypes;
@property(readonly, nonatomic) unsigned short portEnd; // @synthesize portEnd=_portEnd;
@property(readonly, nonatomic) unsigned short portStart; // @synthesize portStart=_portStart;
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleWANSubject *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) unsigned char transportProtocol; // @synthesize transportProtocol=_transportProtocol;
@property(readonly, nonatomic) unsigned long long purpose; // @synthesize purpose=_purpose;
- (id)prettyJSONDictionary;	// IMP=0x00000000007e77da
- (id)attributeDescriptions;	// IMP=0x00000000007e7484
- (id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(_Bool)arg3 purpose:(unsigned long long)arg4 transportProtocol:(unsigned char)arg5 subject:(id)arg6 portStart:(unsigned short)arg7 portEnd:(unsigned short)arg8 icmpTypes:(id)arg9;	// IMP=0x00000000007e737c

@end
