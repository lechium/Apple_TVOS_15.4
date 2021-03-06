//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationLegacySupport-Protocol.h>
#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEDNSSettings, NEIdentityKeychainItem, NEKeychainItem, NEProxySettings, NSData, NSString, NSUUID;

@interface NEVPNProtocol : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSCopying, NSSecureCoding>
{
    _Bool _disconnectOnSleep;	// 8 = 0x8
    _Bool _includeAllNetworks;	// 9 = 0x9
    _Bool _excludeLocalNetworks;	// 10 = 0xa
    _Bool _enforceRoutes;	// 11 = 0xb
    _Bool _disconnectOnWake;	// 12 = 0xc
    _Bool _identityDataImported;	// 13 = 0xd
    _Bool _disconnectOnIdle;	// 14 = 0xe
    _Bool _disconnectOnUserSwitch;	// 15 = 0xf
    _Bool _disconnectOnLogout;	// 16 = 0x10
    int _disconnectOnWakeTimeout;	// 20 = 0x14
    int _disconnectOnIdleTimeout;	// 24 = 0x18
    NSString *_serverAddress;	// 32 = 0x20
    NSString *_username;	// 40 = 0x28
    NSData *_passwordReference;	// 48 = 0x30
    NSString *_identityDataPassword;	// 56 = 0x38
    NEProxySettings *_proxySettings;	// 64 = 0x40
    long long _keychainDomain;	// 72 = 0x48
    NSString *_keychainAccessGroup;	// 80 = 0x50
    NEIdentityKeychainItem *_identity;	// 88 = 0x58
    NSUUID *_identifier;	// 96 = 0x60
    long long _type;	// 104 = 0x68
    NEKeychainItem *_passwordKeychainItem;	// 112 = 0x70
    NSString *_passwordEncryption;	// 120 = 0x78
    NSData *_identityDataInternal;	// 128 = 0x80
    NSData *_identityDataHash;	// 136 = 0x88
    NEKeychainItem *_identityDataPasswordKeychainItem;	// 144 = 0x90
    NEDNSSettings *_DNSSettings;	// 152 = 0x98
    NSString *_extensibleSSOProvider;	// 160 = 0xa0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001b558c
- (void).cxx_destruct;	// IMP=0x00000000001b8b9d
@property _Bool disconnectOnLogout; // @synthesize disconnectOnLogout=_disconnectOnLogout;
@property _Bool disconnectOnUserSwitch; // @synthesize disconnectOnUserSwitch=_disconnectOnUserSwitch;
@property int disconnectOnIdleTimeout; // @synthesize disconnectOnIdleTimeout=_disconnectOnIdleTimeout;
@property _Bool disconnectOnIdle; // @synthesize disconnectOnIdle=_disconnectOnIdle;
@property(copy) NSString *extensibleSSOProvider; // @synthesize extensibleSSOProvider=_extensibleSSOProvider;
@property(copy) NEDNSSettings *DNSSettings; // @synthesize DNSSettings=_DNSSettings;
@property(copy) NEKeychainItem *identityDataPasswordKeychainItem; // @synthesize identityDataPasswordKeychainItem=_identityDataPasswordKeychainItem;
@property(copy) NSData *identityDataHash; // @synthesize identityDataHash=_identityDataHash;
@property _Bool identityDataImported; // @synthesize identityDataImported=_identityDataImported;
@property(copy) NSData *identityDataInternal; // @synthesize identityDataInternal=_identityDataInternal;
@property(copy) NSString *passwordEncryption; // @synthesize passwordEncryption=_passwordEncryption;
@property(copy) NEKeychainItem *passwordKeychainItem; // @synthesize passwordKeychainItem=_passwordKeychainItem;
@property int disconnectOnWakeTimeout; // @synthesize disconnectOnWakeTimeout=_disconnectOnWakeTimeout;
@property _Bool disconnectOnWake; // @synthesize disconnectOnWake=_disconnectOnWake;
@property(readonly) long long type; // @synthesize type=_type;
@property(copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain) NEIdentityKeychainItem *identity; // @synthesize identity=_identity;
@property(retain) NSString *keychainAccessGroup; // @synthesize keychainAccessGroup=_keychainAccessGroup;
@property long long keychainDomain; // @synthesize keychainDomain=_keychainDomain;
@property _Bool enforceRoutes; // @synthesize enforceRoutes=_enforceRoutes;
@property _Bool excludeLocalNetworks; // @synthesize excludeLocalNetworks=_excludeLocalNetworks;
@property _Bool includeAllNetworks; // @synthesize includeAllNetworks=_includeAllNetworks;
@property(copy) NEProxySettings *proxySettings; // @synthesize proxySettings=_proxySettings;
@property _Bool disconnectOnSleep; // @synthesize disconnectOnSleep=_disconnectOnSleep;
@property(copy) NSString *identityDataPassword; // @synthesize identityDataPassword=_identityDataPassword;
@property(copy) NSData *passwordReference; // @synthesize passwordReference=_passwordReference;
@property(copy) NSString *username; // @synthesize username=_username;
@property(copy) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
- (id)description;	// IMP=0x00000000001b8884
- (void)copyPasswordsFromKeychainInDomain:(long long)arg1;	// IMP=0x00000000001b87ad
- (void)migratePasswordsFromPreferences:(struct __SCPreferences *)arg1;	// IMP=0x00000000001b8761
- (void)removeKeychainItemsInDomain:(long long)arg1 keepIdentity:(_Bool)arg2;	// IMP=0x00000000001b8545
- (_Bool)needToUpdateKeychain;	// IMP=0x00000000001b8404
- (void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3;	// IMP=0x00000000001b81a5
- (void)syncWithKeychainInDomainCommon:(long long)arg1;	// IMP=0x00000000001b8090
@property(copy) NSData *identityData;
@property(copy) NSData *identityReference;
@property(copy) NSData *identityReferenceInternal;
- (struct __SCNetworkInterface *)createInterface;	// IMP=0x00000000001b7d04
- (_Bool)updateWithServiceProtocolsFromService:(struct __SCNetworkService *)arg1;	// IMP=0x00000000001b7bf9
- (_Bool)setServiceProtocolsInService:(struct __SCNetworkService *)arg1;	// IMP=0x00000000001b7aa0
- (void)initDisconnectOptions:(id)arg1;	// IMP=0x00000000001b78eb
- (void)addDisconnectOptions:(id)arg1;	// IMP=0x00000000001b7767
- (id)initFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001b70a4
- (id)copyLegacyDictionary;	// IMP=0x00000000001b6cb7
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000001b6564
- (id)type2str;	// IMP=0x00000000001b64e2
- (_Bool)checkValidityAndCollectErrors:(id)arg1;	// IMP=0x00000000001b637f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b5f8c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b5b0a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b5672
- (id)initWithProtocolIdentifier:(id)arg1;	// IMP=0x00000000001b5611
- (id)initWithType:(long long)arg1;	// IMP=0x00000000001b5594

@end

