//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMNetworkWiFiDeclaration_EAPClientConfiguration, CEMNetworkWiFiDeclaration_QoSMarkingPolicy, NSArray, NSNumber, NSString;

@interface CEMNetworkWiFiDeclaration <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAutoJoin;	// 16 = 0x10
    NSString *_payloadSSIDSTR;	// 24 = 0x18
    NSNumber *_payloadHIDDENNETWORK;	// 32 = 0x20
    NSString *_payloadProxyType;	// 40 = 0x28
    NSString *_payloadEncryptionType;	// 48 = 0x30
    NSString *_payloadPassword;	// 56 = 0x38
    NSString *_payloadPayloadCertificateUUID;	// 64 = 0x40
    CEMNetworkWiFiDeclaration_EAPClientConfiguration *_payloadEAPClientConfiguration;	// 72 = 0x48
    NSString *_payloadDisplayedOperatorName;	// 80 = 0x50
    NSString *_payloadDomainName;	// 88 = 0x58
    NSArray *_payloadRoamingConsortiumOIs;	// 96 = 0x60
    NSNumber *_payloadServiceProviderRoamingEnabled;	// 104 = 0x68
    NSNumber *_payloadIsHotspot;	// 112 = 0x70
    NSString *_payloadHESSID;	// 120 = 0x78
    NSArray *_payloadNAIRealmNames;	// 128 = 0x80
    NSArray *_payloadMCCAndMNCs;	// 136 = 0x88
    NSNumber *_payloadCaptiveBypass;	// 144 = 0x90
    CEMNetworkWiFiDeclaration_QoSMarkingPolicy *_payloadQoSMarkingPolicy;	// 152 = 0x98
    NSString *_payloadInterface;	// 160 = 0xa0
    NSArray *_payloadSetupModes;	// 168 = 0xa8
    NSNumber *_payloadPriority;	// 176 = 0xb0
    NSNumber *_payloadEnableIPv6;	// 184 = 0xb8
    NSNumber *_payloadTLSCertificateRequired;	// 192 = 0xc0
    NSString *_payloadProxyServer;	// 200 = 0xc8
    NSNumber *_payloadProxyServerPort;	// 208 = 0xd0
    NSString *_payloadProxyUsername;	// 216 = 0xd8
    NSString *_payloadProxyPassword;	// 224 = 0xe0
    NSString *_payloadProxyPACURL;	// 232 = 0xe8
    NSNumber *_payloadProxyPACFallbackAllowed;	// 240 = 0xf0
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x000000000007ee24
+ (id)buildWithIdentifier:(id)arg1 withAutoJoin:(id)arg2 withSSIDSTR:(id)arg3 withHIDDENNETWORK:(id)arg4 withProxyType:(id)arg5 withEncryptionType:(id)arg6 withPassword:(id)arg7 withPayloadCertificateUUID:(id)arg8 withEAPClientConfiguration:(id)arg9 withDisplayedOperatorName:(id)arg10 withDomainName:(id)arg11 withRoamingConsortiumOIs:(id)arg12 withServiceProviderRoamingEnabled:(id)arg13 withIsHotspot:(id)arg14 withHESSID:(id)arg15 withNAIRealmNames:(id)arg16 withMCCAndMNCs:(id)arg17 withCaptiveBypass:(id)arg18 withQoSMarkingPolicy:(id)arg19 withInterface:(id)arg20 withSetupModes:(id)arg21 withPriority:(id)arg22 withEnableIPv6:(id)arg23 withTLSCertificateRequired:(id)arg24 withProxyServer:(id)arg25 withProxyServerPort:(id)arg26 withProxyUsername:(id)arg27 withProxyPassword:(id)arg28 withProxyPACURL:(id)arg29 withProxyPACFallbackAllowed:(id)arg30;	// IMP=0x000000000007e6d7
+ (id)restrictionPayloadKeys;	// IMP=0x000000000007e692
+ (id)allowedPayloadKeys;	// IMP=0x000000000007e48b
+ (id)profileType;	// IMP=0x000000000007e47e
+ (id)registeredIdentifier;	// IMP=0x000000000007e471
+ (id)registeredClassName;	// IMP=0x000000000007e464
- (void).cxx_destruct;	// IMP=0x0000000000080d60
@property(copy, nonatomic) NSNumber *payloadProxyPACFallbackAllowed; // @synthesize payloadProxyPACFallbackAllowed=_payloadProxyPACFallbackAllowed;
@property(copy, nonatomic) NSString *payloadProxyPACURL; // @synthesize payloadProxyPACURL=_payloadProxyPACURL;
@property(copy, nonatomic) NSString *payloadProxyPassword; // @synthesize payloadProxyPassword=_payloadProxyPassword;
@property(copy, nonatomic) NSString *payloadProxyUsername; // @synthesize payloadProxyUsername=_payloadProxyUsername;
@property(copy, nonatomic) NSNumber *payloadProxyServerPort; // @synthesize payloadProxyServerPort=_payloadProxyServerPort;
@property(copy, nonatomic) NSString *payloadProxyServer; // @synthesize payloadProxyServer=_payloadProxyServer;
@property(copy, nonatomic) NSNumber *payloadTLSCertificateRequired; // @synthesize payloadTLSCertificateRequired=_payloadTLSCertificateRequired;
@property(copy, nonatomic) NSNumber *payloadEnableIPv6; // @synthesize payloadEnableIPv6=_payloadEnableIPv6;
@property(copy, nonatomic) NSNumber *payloadPriority; // @synthesize payloadPriority=_payloadPriority;
@property(copy, nonatomic) NSArray *payloadSetupModes; // @synthesize payloadSetupModes=_payloadSetupModes;
@property(copy, nonatomic) NSString *payloadInterface; // @synthesize payloadInterface=_payloadInterface;
@property(copy, nonatomic) CEMNetworkWiFiDeclaration_QoSMarkingPolicy *payloadQoSMarkingPolicy; // @synthesize payloadQoSMarkingPolicy=_payloadQoSMarkingPolicy;
@property(copy, nonatomic) NSNumber *payloadCaptiveBypass; // @synthesize payloadCaptiveBypass=_payloadCaptiveBypass;
@property(copy, nonatomic) NSArray *payloadMCCAndMNCs; // @synthesize payloadMCCAndMNCs=_payloadMCCAndMNCs;
@property(copy, nonatomic) NSArray *payloadNAIRealmNames; // @synthesize payloadNAIRealmNames=_payloadNAIRealmNames;
@property(copy, nonatomic) NSString *payloadHESSID; // @synthesize payloadHESSID=_payloadHESSID;
@property(copy, nonatomic) NSNumber *payloadIsHotspot; // @synthesize payloadIsHotspot=_payloadIsHotspot;
@property(copy, nonatomic) NSNumber *payloadServiceProviderRoamingEnabled; // @synthesize payloadServiceProviderRoamingEnabled=_payloadServiceProviderRoamingEnabled;
@property(copy, nonatomic) NSArray *payloadRoamingConsortiumOIs; // @synthesize payloadRoamingConsortiumOIs=_payloadRoamingConsortiumOIs;
@property(copy, nonatomic) NSString *payloadDomainName; // @synthesize payloadDomainName=_payloadDomainName;
@property(copy, nonatomic) NSString *payloadDisplayedOperatorName; // @synthesize payloadDisplayedOperatorName=_payloadDisplayedOperatorName;
@property(copy, nonatomic) CEMNetworkWiFiDeclaration_EAPClientConfiguration *payloadEAPClientConfiguration; // @synthesize payloadEAPClientConfiguration=_payloadEAPClientConfiguration;
@property(copy, nonatomic) NSString *payloadPayloadCertificateUUID; // @synthesize payloadPayloadCertificateUUID=_payloadPayloadCertificateUUID;
@property(copy, nonatomic) NSString *payloadPassword; // @synthesize payloadPassword=_payloadPassword;
@property(copy, nonatomic) NSString *payloadEncryptionType; // @synthesize payloadEncryptionType=_payloadEncryptionType;
@property(copy, nonatomic) NSString *payloadProxyType; // @synthesize payloadProxyType=_payloadProxyType;
@property(copy, nonatomic) NSNumber *payloadHIDDENNETWORK; // @synthesize payloadHIDDENNETWORK=_payloadHIDDENNETWORK;
@property(copy, nonatomic) NSString *payloadSSIDSTR; // @synthesize payloadSSIDSTR=_payloadSSIDSTR;
@property(copy, nonatomic) NSNumber *payloadAutoJoin; // @synthesize payloadAutoJoin=_payloadAutoJoin;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000080587
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000007febf
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007ef0b
- (id)assetReferences;	// IMP=0x000000000007e6ca
- (int)activationLevel;	// IMP=0x000000000007e6c2
- (_Bool)mustBeSupervised;	// IMP=0x000000000007e6ba
- (_Bool)multipleAllowed;	// IMP=0x000000000007e6b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

