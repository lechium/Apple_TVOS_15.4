//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NEIPv4Settings, NEIPv6Settings;

@interface NEVPNProtocolPPP
{
    _Bool _verboseLoggingEnabled;	// 8 = 0x8
    long long _authenticationMethod;	// 16 = 0x10
    NEIPv4Settings *_IPv4Settings;	// 24 = 0x18
    NEIPv6Settings *_IPv6Settings;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001c1e30
- (void).cxx_destruct;	// IMP=0x00000000001c33ba
@property(copy) NEIPv6Settings *IPv6Settings; // @synthesize IPv6Settings=_IPv6Settings;
@property(copy) NEIPv4Settings *IPv4Settings; // @synthesize IPv4Settings=_IPv4Settings;
@property _Bool verboseLoggingEnabled; // @synthesize verboseLoggingEnabled=_verboseLoggingEnabled;
@property long long authenticationMethod; // @synthesize authenticationMethod=_authenticationMethod;
- (_Bool)updateWithServiceProtocolsFromService:(struct __SCNetworkService *)arg1;	// IMP=0x00000000001c31ef
- (_Bool)setServiceProtocolsInService:(struct __SCNetworkService *)arg1;	// IMP=0x00000000001c306a
- (id)initFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001c2b8d
- (id)copyLegacyDictionary;	// IMP=0x00000000001c2551
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000001c23cd
- (_Bool)checkValidityAndCollectErrors:(id)arg1;	// IMP=0x00000000001c21fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c2113
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c1ff8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c1eca
- (id)initWithType:(long long)arg1;	// IMP=0x00000000001c1e38

@end
