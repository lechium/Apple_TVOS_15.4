//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSNumber, NSString;

@interface CEMNetworkVPNDeclaration_IPSec
{
    NSString *_payloadRemoteAddress;	// 16 = 0x10
    NSString *_payloadAuthenticationMethod;	// 24 = 0x18
    NSString *_payloadXAuthName;	// 32 = 0x20
    NSString *_payloadXAuthPassword;	// 40 = 0x28
    NSNumber *_payloadXAuthEnabled;	// 48 = 0x30
    NSString *_payloadXAuthPasswordEncryption;	// 56 = 0x38
    NSString *_payloadLocalIdentifier;	// 64 = 0x40
    NSString *_payloadLocalIdentifierType;	// 72 = 0x48
    NSData *_payloadSharedSecret;	// 80 = 0x50
    NSString *_payloadPayloadCertificateUUID;	// 88 = 0x58
    NSNumber *_payloadPromptForVPNPIN;	// 96 = 0x60
    NSNumber *_payloadOnDemandEnabled;	// 104 = 0x68
    NSArray *_payloadOnDemandMatchDomainsAlways;	// 112 = 0x70
    NSArray *_payloadOnDemandMatchDomainsNever;	// 120 = 0x78
    NSArray *_payloadOnDemandMatchDomainsOnRetry;	// 128 = 0x80
    NSArray *_payloadOnDemandRules;	// 136 = 0x88
    NSNumber *_payloadDisconnectOnIdle;	// 144 = 0x90
    NSNumber *_payloadDisconnectOnIdleTimer;	// 152 = 0x98
}

+ (id)buildRequiredOnly;	// IMP=0x00000000000732c9
+ (id)buildWithRemoteAddress:(id)arg1 withAuthenticationMethod:(id)arg2 withXAuthName:(id)arg3 withXAuthPassword:(id)arg4 withXAuthEnabled:(id)arg5 withXAuthPasswordEncryption:(id)arg6 withLocalIdentifier:(id)arg7 withLocalIdentifierType:(id)arg8 withSharedSecret:(id)arg9 withPayloadCertificateUUID:(id)arg10 withPromptForVPNPIN:(id)arg11 withOnDemandEnabled:(id)arg12 withOnDemandMatchDomainsAlways:(id)arg13 withOnDemandMatchDomainsNever:(id)arg14 withOnDemandMatchDomainsOnRetry:(id)arg15 withOnDemandRules:(id)arg16 withDisconnectOnIdle:(id)arg17 withDisconnectOnIdleTimer:(id)arg18;	// IMP=0x0000000000072f1c
+ (id)allowedPayloadKeys;	// IMP=0x0000000000072daf
- (void).cxx_destruct;	// IMP=0x0000000000074660
@property(copy, nonatomic) NSNumber *payloadDisconnectOnIdleTimer; // @synthesize payloadDisconnectOnIdleTimer=_payloadDisconnectOnIdleTimer;
@property(copy, nonatomic) NSNumber *payloadDisconnectOnIdle; // @synthesize payloadDisconnectOnIdle=_payloadDisconnectOnIdle;
@property(copy, nonatomic) NSArray *payloadOnDemandRules; // @synthesize payloadOnDemandRules=_payloadOnDemandRules;
@property(copy, nonatomic) NSArray *payloadOnDemandMatchDomainsOnRetry; // @synthesize payloadOnDemandMatchDomainsOnRetry=_payloadOnDemandMatchDomainsOnRetry;
@property(copy, nonatomic) NSArray *payloadOnDemandMatchDomainsNever; // @synthesize payloadOnDemandMatchDomainsNever=_payloadOnDemandMatchDomainsNever;
@property(copy, nonatomic) NSArray *payloadOnDemandMatchDomainsAlways; // @synthesize payloadOnDemandMatchDomainsAlways=_payloadOnDemandMatchDomainsAlways;
@property(copy, nonatomic) NSNumber *payloadOnDemandEnabled; // @synthesize payloadOnDemandEnabled=_payloadOnDemandEnabled;
@property(copy, nonatomic) NSNumber *payloadPromptForVPNPIN; // @synthesize payloadPromptForVPNPIN=_payloadPromptForVPNPIN;
@property(copy, nonatomic) NSString *payloadPayloadCertificateUUID; // @synthesize payloadPayloadCertificateUUID=_payloadPayloadCertificateUUID;
@property(copy, nonatomic) NSData *payloadSharedSecret; // @synthesize payloadSharedSecret=_payloadSharedSecret;
@property(copy, nonatomic) NSString *payloadLocalIdentifierType; // @synthesize payloadLocalIdentifierType=_payloadLocalIdentifierType;
@property(copy, nonatomic) NSString *payloadLocalIdentifier; // @synthesize payloadLocalIdentifier=_payloadLocalIdentifier;
@property(copy, nonatomic) NSString *payloadXAuthPasswordEncryption; // @synthesize payloadXAuthPasswordEncryption=_payloadXAuthPasswordEncryption;
@property(copy, nonatomic) NSNumber *payloadXAuthEnabled; // @synthesize payloadXAuthEnabled=_payloadXAuthEnabled;
@property(copy, nonatomic) NSString *payloadXAuthPassword; // @synthesize payloadXAuthPassword=_payloadXAuthPassword;
@property(copy, nonatomic) NSString *payloadXAuthName; // @synthesize payloadXAuthName=_payloadXAuthName;
@property(copy, nonatomic) NSString *payloadAuthenticationMethod; // @synthesize payloadAuthenticationMethod=_payloadAuthenticationMethod;
@property(copy, nonatomic) NSString *payloadRemoteAddress; // @synthesize payloadRemoteAddress=_payloadRemoteAddress;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007415d
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000073d2e
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000732e2

@end

