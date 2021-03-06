//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDecimalNumber, NSNumber, NSSet, NSString;

@interface PKTransitAppletHistory : NSObject <NSSecureCoding>
{
    _Bool _blacklisted;	// 8 = 0x8
    long long _source;	// 16 = 0x10
    NSString *_serviceProvider;	// 24 = 0x18
    NSNumber *_serverRefreshIdentifier;	// 32 = 0x20
    NSString *_currency;	// 40 = 0x28
    NSDecimalNumber *_balance;	// 48 = 0x30
    NSNumber *_loyaltyBalance;	// 56 = 0x38
    NSDate *_expirationDate;	// 64 = 0x40
    NSArray *_balances;	// 72 = 0x48
    NSArray *_historyRecords;	// 80 = 0x50
    NSArray *_inStationDetails;	// 88 = 0x58
    NSSet *_enrouteTransitTypes;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000110fa1
- (void).cxx_destruct;	// IMP=0x00000000001116fe
@property(copy, nonatomic) NSSet *enrouteTransitTypes; // @synthesize enrouteTransitTypes=_enrouteTransitTypes;
@property(copy, nonatomic) NSArray *inStationDetails; // @synthesize inStationDetails=_inStationDetails;
@property(copy, nonatomic) NSArray *historyRecords; // @synthesize historyRecords=_historyRecords;
@property(copy, nonatomic) NSArray *balances; // @synthesize balances=_balances;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSNumber *loyaltyBalance; // @synthesize loyaltyBalance=_loyaltyBalance;
@property(copy, nonatomic) NSDecimalNumber *balance; // @synthesize balance=_balance;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(nonatomic, getter=isBlacklisted) _Bool blacklisted; // @synthesize blacklisted=_blacklisted;
@property(copy, nonatomic) NSNumber *serverRefreshIdentifier; // @synthesize serverRefreshIdentifier=_serverRefreshIdentifier;
@property(copy, nonatomic) NSString *serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic, getter=isInStation) _Bool inStation; // @dynamic inStation;
- (void)sanitizeValuesWithState:(id)arg1;	// IMP=0x00000000001115b9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000111455
- (void)dealloc;	// IMP=0x0000000000111426
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000110ff3
- (id)initWithDictionary:(id)arg1 source:(long long)arg2;	// IMP=0x0000000000110fe5
- (id)init;	// IMP=0x0000000000110fa9
- (id)felicaHistory;	// IMP=0x0000000000438798

@end

