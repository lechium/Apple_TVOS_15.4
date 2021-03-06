//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMSecuritySingleSignOnDeclaration_Kerberos, NSString;

@interface CEMSecuritySingleSignOnDeclaration <CEMRegisteredTypeProtocol>
{
    NSString *_payloadName;	// 16 = 0x10
    CEMSecuritySingleSignOnDeclaration_Kerberos *_payloadKerberos;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withName:(id)arg2;	// IMP=0x00000000000a5be4
+ (id)buildWithIdentifier:(id)arg1 withName:(id)arg2 withKerberos:(id)arg3;	// IMP=0x00000000000a5a9f
+ (id)restrictionPayloadKeys;	// IMP=0x00000000000a5a5a
+ (id)allowedPayloadKeys;	// IMP=0x00000000000a59ac
+ (id)profileType;	// IMP=0x00000000000a599f
+ (id)registeredIdentifier;	// IMP=0x00000000000a5992
+ (id)registeredClassName;	// IMP=0x00000000000a5985
- (void).cxx_destruct;	// IMP=0x00000000000a6115
@property(copy, nonatomic) CEMSecuritySingleSignOnDeclaration_Kerberos *payloadKerberos; // @synthesize payloadKerberos=_payloadKerberos;
@property(copy, nonatomic) NSString *payloadName; // @synthesize payloadName=_payloadName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a603c
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000a5ef8
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a5cfd
- (id)assetReferences;	// IMP=0x00000000000a5a92
- (int)activationLevel;	// IMP=0x00000000000a5a8a
- (_Bool)mustBeSupervised;	// IMP=0x00000000000a5a82
- (_Bool)multipleAllowed;	// IMP=0x00000000000a5a7a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

