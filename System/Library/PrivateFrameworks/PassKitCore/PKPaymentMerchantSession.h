//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString;

@interface PKPaymentMerchantSession : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _epochTimestamp;	// 8 = 0x8
    unsigned long long _expiresAt;	// 16 = 0x10
    NSString *_merchantSessionIdentifier;	// 24 = 0x18
    NSString *_nonce;	// 32 = 0x20
    NSString *_merchantIdentifier;	// 40 = 0x28
    NSString *_operationalAnalyticsIdentifier;	// 48 = 0x30
    NSString *_domain;	// 56 = 0x38
    NSString *_displayName;	// 64 = 0x40
    NSString *_initiativeContext;	// 72 = 0x48
    NSString *_initiative;	// 80 = 0x50
    NSData *_ampEnrollmentPinning;	// 88 = 0x58
    NSArray *_signedFields;	// 96 = 0x60
    NSData *_signature;	// 104 = 0x68
    NSString *_retryNonce;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f24d9
+ (long long)version;	// IMP=0x00000000000f16cd
+ (id)paymentMerchantSessionWithProtobuf:(id)arg1;	// IMP=0x000000000016fbfe
- (void).cxx_destruct;	// IMP=0x00000000000f32e1
@property(retain, nonatomic) NSString *retryNonce; // @synthesize retryNonce=_retryNonce;
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSArray *signedFields; // @synthesize signedFields=_signedFields;
@property(readonly, nonatomic) NSData *ampEnrollmentPinning; // @synthesize ampEnrollmentPinning=_ampEnrollmentPinning;
@property(readonly, nonatomic) NSString *initiative; // @synthesize initiative=_initiative;
@property(readonly, nonatomic) NSString *initiativeContext; // @synthesize initiativeContext=_initiativeContext;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSString *operationalAnalyticsIdentifier; // @synthesize operationalAnalyticsIdentifier=_operationalAnalyticsIdentifier;
@property(readonly, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
@property(readonly, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(readonly, nonatomic) NSString *merchantSessionIdentifier; // @synthesize merchantSessionIdentifier=_merchantSessionIdentifier;
@property(readonly, nonatomic) unsigned long long expiresAt; // @synthesize expiresAt=_expiresAt;
@property(readonly, nonatomic) unsigned long long epochTimestamp; // @synthesize epochTimestamp=_epochTimestamp;
- (id)signedData;	// IMP=0x00000000000f2e23
- (_Bool)_isModern;	// IMP=0x00000000000f2e15
- (_Bool)supportsURL:(id)arg1;	// IMP=0x00000000000f2d3a
- (_Bool)isEqualToPaymentMerchantSession:(id)arg1;	// IMP=0x00000000000f29f3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f298b
- (unsigned long long)hash;	// IMP=0x00000000000f277b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f25bd
- (id)description;	// IMP=0x00000000000f24e1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f2104
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f1f4a
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000f1b61
- (id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 expiresAt:(unsigned long long)arg5 displayName:(id)arg6 initiativeContext:(id)arg7 initiative:(id)arg8 ampEnrollmentPinning:(id)arg9 operationalAnalyticsIdentifier:(id)arg10 signedFields:(id)arg11 signature:(id)arg12;	// IMP=0x00000000000f194c
- (id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 expiresAt:(unsigned long long)arg5 displayName:(id)arg6 initiativeContext:(id)arg7 initiative:(id)arg8 signedFields:(id)arg9 signature:(id)arg10;	// IMP=0x00000000000f190f
- (id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 expiresAt:(unsigned long long)arg5 domain:(id)arg6 displayName:(id)arg7 operationalAnalyticsIdentifier:(id)arg8 signature:(id)arg9;	// IMP=0x00000000000f1782
- (id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 domain:(id)arg5 displayName:(id)arg6 signature:(id)arg7;	// IMP=0x00000000000f174a
- (id)init;	// IMP=0x00000000000f16d8
- (id)protobuf;	// IMP=0x000000000016ff06

@end

