//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface PKPaymentRegistrationResponse
{
    NSString *_deviceIdentifier;	// 8 = 0x8
    NSNumber *_cardsOnFile;	// 16 = 0x10
    NSNumber *_maxCards;	// 24 = 0x18
    NSString *_primaryRegion;	// 32 = 0x20
    NSDictionary *_regions;	// 40 = 0x28
    NSString *_environmentName;	// 48 = 0x30
    NSURL *_brokerURL;	// 56 = 0x38
    NSURL *_trustedServiceManagerURL;	// 64 = 0x40
    NSURL *_paymentServicesURL;	// 72 = 0x48
    NSArray *_certificates;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000419613
@property(copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property(copy, nonatomic) NSURL *paymentServicesURL; // @synthesize paymentServicesURL=_paymentServicesURL;
@property(copy, nonatomic) NSURL *trustedServiceManagerURL; // @synthesize trustedServiceManagerURL=_trustedServiceManagerURL;
@property(copy, nonatomic) NSURL *brokerURL; // @synthesize brokerURL=_brokerURL;
@property(copy, nonatomic) NSString *environmentName; // @synthesize environmentName=_environmentName;
@property(copy, nonatomic) NSDictionary *regions; // @synthesize regions=_regions;
@property(readonly, copy, nonatomic) NSString *primaryRegion; // @synthesize primaryRegion=_primaryRegion;
@property(copy, nonatomic) NSNumber *maxCards; // @synthesize maxCards=_maxCards;
@property(copy, nonatomic) NSNumber *cardsOnFile; // @synthesize cardsOnFile=_cardsOnFile;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000418d45

@end

