//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDecimalNumber, NSString;

@interface PKCreditAccountUserActivity : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_accountUserAltDSID;	// 8 = 0x8
    NSDecimalNumber *_purchases;	// 16 = 0x10
    NSDecimalNumber *_adjustedPurchases;	// 24 = 0x18
    NSDecimalNumber *_pendingPurchases;	// 32 = 0x20
    NSDecimalNumber *_rewardsBalance;	// 40 = 0x28
    NSDecimalNumber *_rewardsEarned;	// 48 = 0x30
    NSDecimalNumber *_rewardsRedeemed;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002ef523
- (void).cxx_destruct;	// IMP=0x00000000002efbf3
@property(retain, nonatomic) NSDecimalNumber *rewardsRedeemed; // @synthesize rewardsRedeemed=_rewardsRedeemed;
@property(retain, nonatomic) NSDecimalNumber *rewardsEarned; // @synthesize rewardsEarned=_rewardsEarned;
@property(retain, nonatomic) NSDecimalNumber *rewardsBalance; // @synthesize rewardsBalance=_rewardsBalance;
@property(retain, nonatomic) NSDecimalNumber *pendingPurchases; // @synthesize pendingPurchases=_pendingPurchases;
@property(retain, nonatomic) NSDecimalNumber *adjustedPurchases; // @synthesize adjustedPurchases=_adjustedPurchases;
@property(retain, nonatomic) NSDecimalNumber *purchases; // @synthesize purchases=_purchases;
@property(copy, nonatomic) NSString *accountUserAltDSID; // @synthesize accountUserAltDSID=_accountUserAltDSID;
- (id)remainingMonthlySpendWithLimit:(id)arg1;	// IMP=0x00000000002efa73
@property(readonly, nonatomic) NSDecimalNumber *totalSpending;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002ef7d4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002ef703
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002ef52b
- (id)description;	// IMP=0x00000000002ef330
- (unsigned long long)hash;	// IMP=0x00000000002ef285
- (_Bool)isEqualToCreditAccountUserActivity:(id)arg1;	// IMP=0x00000000002ef14e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ef0e6
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002eef73

@end

