//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PKCurrencyAmount;

@interface PKPaymentEligibilitySupplementaryData : NSObject
{
    NSString *_accountIdentifier;	// 8 = 0x8
    PKCurrencyAmount *_accountBalance;	// 16 = 0x10
    NSArray *_cloudStoreZoneNames;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000041b069
@property(readonly, copy, nonatomic) NSArray *cloudStoreZoneNames; // @synthesize cloudStoreZoneNames=_cloudStoreZoneNames;
@property(readonly, copy, nonatomic) PKCurrencyAmount *accountBalance; // @synthesize accountBalance=_accountBalance;
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000041af67

@end

