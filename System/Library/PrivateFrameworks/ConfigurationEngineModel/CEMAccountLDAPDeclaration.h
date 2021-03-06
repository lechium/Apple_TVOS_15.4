//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMAccountLDAPDeclaration_CommunicationServiceRules, NSArray, NSNumber, NSString;

@interface CEMAccountLDAPDeclaration <CEMRegisteredTypeProtocol>
{
    NSString *_payloadLDAPAccountDescription;	// 16 = 0x10
    NSString *_payloadLDAPAccountHostName;	// 24 = 0x18
    NSNumber *_payloadLDAPAccountUseSSL;	// 32 = 0x20
    NSArray *_payloadLDAPSearchSettings;	// 40 = 0x28
    CEMAccountLDAPDeclaration_CommunicationServiceRules *_payloadCommunicationServiceRules;	// 48 = 0x30
    NSString *_payloadLDAPCredentials;	// 56 = 0x38
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withLDAPAccountHostName:(id)arg2;	// IMP=0x000000000000543e
+ (id)buildWithIdentifier:(id)arg1 withLDAPAccountDescription:(id)arg2 withLDAPAccountHostName:(id)arg3 withLDAPAccountUseSSL:(id)arg4 withLDAPSearchSettings:(id)arg5 withCommunicationServiceRules:(id)arg6 withLDAPCredentials:(id)arg7;	// IMP=0x0000000000005242
+ (id)restrictionPayloadKeys;	// IMP=0x000000000000513f
+ (id)allowedPayloadKeys;	// IMP=0x0000000000005065
+ (id)profileType;	// IMP=0x0000000000005058
+ (id)registeredIdentifier;	// IMP=0x000000000000504b
+ (id)registeredClassName;	// IMP=0x000000000000503e
- (void).cxx_destruct;	// IMP=0x0000000000005ddc
@property(copy, nonatomic) NSString *payloadLDAPCredentials; // @synthesize payloadLDAPCredentials=_payloadLDAPCredentials;
@property(copy, nonatomic) CEMAccountLDAPDeclaration_CommunicationServiceRules *payloadCommunicationServiceRules; // @synthesize payloadCommunicationServiceRules=_payloadCommunicationServiceRules;
@property(copy, nonatomic) NSArray *payloadLDAPSearchSettings; // @synthesize payloadLDAPSearchSettings=_payloadLDAPSearchSettings;
@property(copy, nonatomic) NSNumber *payloadLDAPAccountUseSSL; // @synthesize payloadLDAPAccountUseSSL=_payloadLDAPAccountUseSSL;
@property(copy, nonatomic) NSString *payloadLDAPAccountHostName; // @synthesize payloadLDAPAccountHostName=_payloadLDAPAccountHostName;
@property(copy, nonatomic) NSString *payloadLDAPAccountDescription; // @synthesize payloadLDAPAccountDescription=_payloadLDAPAccountDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005bf0
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000000590e
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005557
- (id)assetReferences;	// IMP=0x000000000000517a
- (int)activationLevel;	// IMP=0x000000000000516f
- (_Bool)mustBeSupervised;	// IMP=0x0000000000005167
- (_Bool)multipleAllowed;	// IMP=0x000000000000515f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

