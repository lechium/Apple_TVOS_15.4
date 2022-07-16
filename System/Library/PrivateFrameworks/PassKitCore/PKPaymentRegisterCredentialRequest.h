//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, PKAppletSubcredential;

@interface PKPaymentRegisterCredentialRequest
{
    NSString *_credentialIdentifier;	// 16 = 0x10
    NSDictionary *_metadata;	// 24 = 0x18
    NSDictionary *_registrationData;	// 32 = 0x20
    PKAppletSubcredential *_credential;	// 40 = 0x28
}

+ (id)requestRegistrationDataFromRegistrationData:(id)arg1;	// IMP=0x00000000002b2479
+ (id)requestMetadataFromCarKeyRegistrationMetadata:(id)arg1 withPartnerIdentifier:(id)arg2;	// IMP=0x00000000002b21f4
+ (id)requestMetadataFromRegistrationMetadata:(id)arg1 withPartnerIdentifier:(id)arg2;	// IMP=0x00000000002b2158
- (void).cxx_destruct;	// IMP=0x00000000002b2cec
@property(retain, nonatomic) PKAppletSubcredential *credential; // @synthesize credential=_credential;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;	// IMP=0x00000000002b2b2a
- (id)requestBody;	// IMP=0x00000000002b2a7a
- (id)initWithCredential:(id)arg1 registrationData:(id)arg2 metadata:(id)arg3;	// IMP=0x00000000002b2616

@end

