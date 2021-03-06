//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSDecimalNumber, NSString;

@interface PKTransitAppletBalance : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSDecimalNumber *_balance;	// 16 = 0x10
    NSString *_currency;	// 24 = 0x18
    long long _exponent;	// 32 = 0x20
    NSDate *_expirationDate;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003b8eae
- (void).cxx_destruct;	// IMP=0x00000000003b94ca
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic) long long exponent; // @synthesize exponent=_exponent;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(copy, nonatomic) NSDecimalNumber *balance; // @synthesize balance=_balance;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x00000000003b92f7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003b919d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003b90f0
- (unsigned long long)hash;	// IMP=0x00000000003b9065
- (_Bool)isEqualToBalance:(id)arg1;	// IMP=0x00000000003b8fef
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003b8f87
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003b8eb6
@property(readonly, nonatomic) _Bool isCurrency;
- (void)_setIdentifierFromObject:(id)arg1;	// IMP=0x00000000003b8df8
- (id)initWithIdentifier:(id)arg1 balance:(id)arg2 currency:(id)arg3 exponent:(long long)arg4 expirationDate:(id)arg5;	// IMP=0x00000000003b8caf
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003b8c80

@end

