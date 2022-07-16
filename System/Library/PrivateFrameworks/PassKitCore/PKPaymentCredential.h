//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, PKPaymentEligibilityResponse, PKPaymentRequirementsResponse;

@interface PKPaymentCredential : NSObject <NSSecureCoding>
{
    _Bool _deletable;	// 8 = 0x8
    long long _credentialType;	// 16 = 0x10
    NSString *_sanitizedPrimaryAccountNumber;	// 24 = 0x18
    NSString *_sanitizedPrimaryAccountName;	// 32 = 0x20
    NSString *_expiration;	// 40 = 0x28
    NSString *_longDescription;	// 48 = 0x30
    long long _cardType;	// 56 = 0x38
    PKPaymentRequirementsResponse *_requirementsResponse;	// 64 = 0x40
    PKPaymentEligibilityResponse *_eligibilityResponse;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001a6461
+ (id)fakeRemoteCredentials;	// IMP=0x00000000001e77b2
- (void).cxx_destruct;	// IMP=0x00000000001a674c
@property(nonatomic, getter=isDeletable) _Bool deletable; // @synthesize deletable=_deletable;
@property(retain, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse; // @synthesize eligibilityResponse=_eligibilityResponse;
@property(retain, nonatomic) PKPaymentRequirementsResponse *requirementsResponse; // @synthesize requirementsResponse=_requirementsResponse;
@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(copy, nonatomic) NSString *longDescription; // @synthesize longDescription=_longDescription;
@property(copy, nonatomic) NSString *expiration; // @synthesize expiration=_expiration;
@property(copy, nonatomic) NSString *sanitizedPrimaryAccountName; // @synthesize sanitizedPrimaryAccountName=_sanitizedPrimaryAccountName;
@property(copy, nonatomic) NSString *sanitizedPrimaryAccountNumber; // @synthesize sanitizedPrimaryAccountNumber=_sanitizedPrimaryAccountNumber;
@property(nonatomic) long long credentialType; // @synthesize credentialType=_credentialType;
- (unsigned long long)hash;	// IMP=0x00000000001a65f5
- (_Bool)_isEqualToCredential:(id)arg1;	// IMP=0x00000000001a64d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a6469
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a635c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a616f
- (id)init;	// IMP=0x00000000001a6140
- (id)homeKeyCredential;	// IMP=0x00000000001aac0c
- (_Bool)isHomeKeyCredential;	// IMP=0x00000000001aabe3
- (id)issuerProvisioningExtensionCredential;	// IMP=0x00000000001aabb7
- (_Bool)isIssuerProvisioningExtensionCredential;	// IMP=0x00000000001aab8e
- (id)localAppletSubcredentialPassCredential;	// IMP=0x00000000001aab62
- (_Bool)isLocalAppletSubcredentialPassCredential;	// IMP=0x00000000001aab39
- (id)identityCredential;	// IMP=0x00000000001aab0d
- (_Bool)isIdentityCredential;	// IMP=0x00000000001aaae4
- (id)shareableCredential;	// IMP=0x00000000001aaab8
- (_Bool)isShareableCredential;	// IMP=0x00000000001aaa8f
- (id)accountCredential;	// IMP=0x00000000001aaa63
- (_Bool)isAccountCredential;	// IMP=0x00000000001aaa3a
- (id)purchasedProductCredential;	// IMP=0x00000000001aaa0e
- (_Bool)isPurchasedProductCredential;	// IMP=0x00000000001aa9e5
- (id)digitalIssuanceProductCredential;	// IMP=0x00000000001aa9b9
- (_Bool)isDigitalIssuanceProductCredential;	// IMP=0x00000000001aa990
- (id)contactlessProductCredential;	// IMP=0x00000000001aa964
- (_Bool)isContactlessProductCredential;	// IMP=0x00000000001aa93b
- (id)peerPaymentCredential;	// IMP=0x00000000001aa90f
- (_Bool)isPeerPaymentCredential;	// IMP=0x00000000001aa8e6
- (id)localPassCredential;	// IMP=0x00000000001aa8ba
- (_Bool)isLocalPassCredential;	// IMP=0x00000000001aa891
- (id)remoteCredential;	// IMP=0x00000000001aa865
- (_Bool)isRemoteCredential;	// IMP=0x00000000001aa83c

@end

