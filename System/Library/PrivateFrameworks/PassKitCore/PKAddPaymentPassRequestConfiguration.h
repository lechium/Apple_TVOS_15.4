//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSSet, NSString;

@interface PKAddPaymentPassRequestConfiguration : NSObject <NSSecureCoding>
{
    _Bool _requiresFelicaSecureElement;	// 8 = 0x8
    NSString *_encryptionScheme;	// 16 = 0x10
    long long _style;	// 24 = 0x18
    NSString *_cardholderName;	// 32 = 0x20
    NSString *_primaryAccountSuffix;	// 40 = 0x28
    NSArray *_cardDetails;	// 48 = 0x30
    NSString *_localizedDescription;	// 56 = 0x38
    NSString *_primaryAccountIdentifier;	// 64 = 0x40
    NSString *_paymentNetwork;	// 72 = 0x48
    NSSet *_productIdentifiers;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002952d5
- (void).cxx_destruct;	// IMP=0x0000000000295db9
@property(nonatomic) _Bool requiresFelicaSecureElement; // @synthesize requiresFelicaSecureElement=_requiresFelicaSecureElement;
@property(copy, nonatomic) NSSet *productIdentifiers; // @synthesize productIdentifiers=_productIdentifiers;
@property(copy, nonatomic) NSString *paymentNetwork; // @synthesize paymentNetwork=_paymentNetwork;
@property(copy, nonatomic) NSString *primaryAccountIdentifier; // @synthesize primaryAccountIdentifier=_primaryAccountIdentifier;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSArray *cardDetails; // @synthesize cardDetails=_cardDetails;
@property(copy, nonatomic) NSString *primaryAccountSuffix; // @synthesize primaryAccountSuffix=_primaryAccountSuffix;
@property(copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) NSString *encryptionScheme; // @synthesize encryptionScheme=_encryptionScheme;
- (id)description;	// IMP=0x0000000000295bd8
@property(readonly, nonatomic, getter=isPaymentAccount) _Bool paymentAccount;
- (id)_effectiveDetails;	// IMP=0x0000000000295802
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000295700
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002953df
- (void)dealloc;	// IMP=0x00000000002953b0
- (id)initWithEncryptionScheme:(id)arg1;	// IMP=0x00000000002952f9
- (id)init;	// IMP=0x00000000002952dd
- (id)_filterWebServices:(id)arg1 primaryAccountIdentifierRequired:(_Bool)arg2;	// IMP=0x00000000001ceb4b

@end

