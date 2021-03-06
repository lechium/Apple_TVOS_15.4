//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMSecuritySmartCardDeclaration <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadUserPairing;	// 16 = 0x10
    NSNumber *_payloadAllowSmartCard;	// 24 = 0x18
    NSNumber *_payloadCheckCertificateTrust;	// 32 = 0x20
    NSNumber *_payloadOneCardPerUser;	// 40 = 0x28
    NSNumber *_payloadTokenRemovalAction;	// 48 = 0x30
    NSNumber *_payloadEnforceSmartCard;	// 56 = 0x38
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x00000000000a70c3
+ (id)buildWithIdentifier:(id)arg1 withUserPairing:(id)arg2 withAllowSmartCard:(id)arg3 withCheckCertificateTrust:(id)arg4 withOneCardPerUser:(id)arg5 withTokenRemovalAction:(id)arg6 withEnforceSmartCard:(id)arg7;	// IMP=0x00000000000a6e8f
+ (id)restrictionPayloadKeys;	// IMP=0x00000000000a6e4a
+ (id)allowedPayloadKeys;	// IMP=0x00000000000a6d70
+ (id)profileType;	// IMP=0x00000000000a6d63
+ (id)registeredIdentifier;	// IMP=0x00000000000a6d56
+ (id)registeredClassName;	// IMP=0x00000000000a6d49
- (void).cxx_destruct;	// IMP=0x00000000000a78c4
@property(copy, nonatomic) NSNumber *payloadEnforceSmartCard; // @synthesize payloadEnforceSmartCard=_payloadEnforceSmartCard;
@property(copy, nonatomic) NSNumber *payloadTokenRemovalAction; // @synthesize payloadTokenRemovalAction=_payloadTokenRemovalAction;
@property(copy, nonatomic) NSNumber *payloadOneCardPerUser; // @synthesize payloadOneCardPerUser=_payloadOneCardPerUser;
@property(copy, nonatomic) NSNumber *payloadCheckCertificateTrust; // @synthesize payloadCheckCertificateTrust=_payloadCheckCertificateTrust;
@property(copy, nonatomic) NSNumber *payloadAllowSmartCard; // @synthesize payloadAllowSmartCard=_payloadAllowSmartCard;
@property(copy, nonatomic) NSNumber *payloadUserPairing; // @synthesize payloadUserPairing=_payloadUserPairing;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a76d8
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000a756c
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a71aa
- (id)assetReferences;	// IMP=0x00000000000a6e82
- (int)activationLevel;	// IMP=0x00000000000a6e7a
- (_Bool)mustBeSupervised;	// IMP=0x00000000000a6e72
- (_Bool)multipleAllowed;	// IMP=0x00000000000a6e6a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

