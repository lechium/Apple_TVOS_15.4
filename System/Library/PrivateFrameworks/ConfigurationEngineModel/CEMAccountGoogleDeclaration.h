//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMAccountGoogleDeclaration_CommunicationServiceRules, NSString;

@interface CEMAccountGoogleDeclaration <CEMRegisteredTypeProtocol>
{
    NSString *_payloadAccountDescription;	// 16 = 0x10
    NSString *_payloadAccountName;	// 24 = 0x18
    NSString *_payloadEmailAddress;	// 32 = 0x20
    CEMAccountGoogleDeclaration_CommunicationServiceRules *_payloadCommunicationServiceRules;	// 40 = 0x28
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEmailAddress:(id)arg2;	// IMP=0x0000000000003dff
+ (id)buildWithIdentifier:(id)arg1 withAccountDescription:(id)arg2 withAccountName:(id)arg3 withEmailAddress:(id)arg4 withCommunicationServiceRules:(id)arg5;	// IMP=0x0000000000003c6d
+ (id)restrictionPayloadKeys;	// IMP=0x0000000000003c25
+ (id)allowedPayloadKeys;	// IMP=0x0000000000003b61
+ (id)profileType;	// IMP=0x0000000000003b54
+ (id)registeredIdentifier;	// IMP=0x0000000000003b47
+ (id)registeredClassName;	// IMP=0x0000000000003b3a
- (void).cxx_destruct;	// IMP=0x0000000000004504
@property(copy, nonatomic) CEMAccountGoogleDeclaration_CommunicationServiceRules *payloadCommunicationServiceRules; // @synthesize payloadCommunicationServiceRules=_payloadCommunicationServiceRules;
@property(copy, nonatomic) NSString *payloadEmailAddress; // @synthesize payloadEmailAddress=_payloadEmailAddress;
@property(copy, nonatomic) NSString *payloadAccountName; // @synthesize payloadAccountName=_payloadAccountName;
@property(copy, nonatomic) NSString *payloadAccountDescription; // @synthesize payloadAccountDescription=_payloadAccountDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000043a7
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000000420b
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003f18
- (id)assetReferences;	// IMP=0x0000000000003c60
- (int)activationLevel;	// IMP=0x0000000000003c55
- (_Bool)mustBeSupervised;	// IMP=0x0000000000003c4d
- (_Bool)multipleAllowed;	// IMP=0x0000000000003c45

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

