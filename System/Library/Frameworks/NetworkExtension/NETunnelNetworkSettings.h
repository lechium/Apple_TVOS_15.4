//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEDNSSettings, NEProxySettings, NSString;

@interface NETunnelNetworkSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    NSString *_tunnelRemoteAddress;	// 8 = 0x8
    NEDNSSettings *_DNSSettings;	// 16 = 0x10
    NEProxySettings *_proxySettings;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000181de0
- (void).cxx_destruct;	// IMP=0x0000000000182719
@property(copy) NEProxySettings *proxySettings; // @synthesize proxySettings=_proxySettings;
@property(copy) NEDNSSettings *DNSSettings; // @synthesize DNSSettings=_DNSSettings;
@property(readonly) NSString *tunnelRemoteAddress; // @synthesize tunnelRemoteAddress=_tunnelRemoteAddress;
- (id)initFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001823f4
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000001822c0
- (_Bool)checkValidityAndCollectErrors:(id)arg1;	// IMP=0x000000000018211f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000182046
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000181f63
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000181e53
- (id)initWithTunnelRemoteAddress:(id)arg1;	// IMP=0x0000000000181de8

@end

