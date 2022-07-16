//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDecimalNumber, NSSet, NSString, PKCurrencyAmount;

@interface PKPaymentBalance : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isPrimary;	// 8 = 0x8
    NSSet *_identifiers;	// 16 = 0x10
    NSDecimalNumber *_value;	// 24 = 0x18
    NSString *_currencyCode;	// 32 = 0x20
    long long _exponent;	// 40 = 0x28
    NSString *_localizedTitle;	// 48 = 0x30
    NSString *_localizedDescription;	// 56 = 0x38
    NSDate *_lastUpdateDate;	// 64 = 0x40
    NSString *_preformattedString;	// 72 = 0x48
    NSArray *_componentBalances;	// 80 = 0x50
}

+ (id)identifiersFromComponentBalances:(id)arg1;	// IMP=0x0000000000149c9a
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001482ed
- (void).cxx_destruct;	// IMP=0x0000000000149f76
@property(copy, nonatomic) NSArray *componentBalances; // @synthesize componentBalances=_componentBalances;
@property(copy, nonatomic) NSString *preformattedString; // @synthesize preformattedString=_preformattedString;
@property(copy, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(nonatomic) long long exponent; // @synthesize exponent=_exponent;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSDecimalNumber *value; // @synthesize value=_value;
@property(copy, nonatomic) NSSet *identifiers; // @synthesize identifiers=_identifiers;
- (_Bool)isComposed;	// IMP=0x0000000000149e84
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000149a19
- (unsigned long long)hash;	// IMP=0x0000000000149936
- (id)description;	// IMP=0x00000000001498a2
@property(readonly, nonatomic) NSString *formattedValue;
@property(readonly, nonatomic) PKCurrencyAmount *currencyValue;
@property(readonly, nonatomic) _Bool isCurrency;
- (void)_setValueWithRounding:(id)arg1;	// IMP=0x0000000000149699
- (id)initWithComponentBalances:(id)arg1 identifiers:(id)arg2 expiredBalances:(id)arg3;	// IMP=0x0000000000148e67
- (id)initWithComponentBalances:(id)arg1 identifiers:(id)arg2;	// IMP=0x0000000000148e52
- (id)initWithComponentBalances:(id)arg1;	// IMP=0x0000000000148e3e
- (id)initWithIdentifiers:(id)arg1 forValue:(id)arg2 roundingToExponent:(long long)arg3;	// IMP=0x0000000000148d74
- (id)initWithIdentifier:(id)arg1 forValue:(id)arg2 roundingToExponent:(long long)arg3;	// IMP=0x0000000000148cc1
- (id)initWithIdentifiers:(id)arg1 forCurrencyAmount:(id)arg2;	// IMP=0x0000000000148b9a
- (id)initWithIdentifier:(id)arg1 forCurrencyAmount:(id)arg2;	// IMP=0x0000000000148af5
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000014889e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000148551
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000014843b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001482f5

@end
