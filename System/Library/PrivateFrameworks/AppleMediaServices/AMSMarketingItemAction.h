//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSBuyParams, NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface AMSMarketingItemAction : NSObject
{
    NSDictionary *_rawValues;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000016a769
@property(retain, nonatomic) NSDictionary *rawValues; // @synthesize rawValues=_rawValues;
- (id)recurringSubscriptionPeriod;	// IMP=0x000000000016a746
- (id)priceString;	// IMP=0x000000000016a73e
- (id)priceFormatted;	// IMP=0x000000000016a736
- (_Bool)isYearly;	// IMP=0x000000000016a72e
- (id)name;	// IMP=0x000000000016a726
- (id)introOfferPriceForDisplay;	// IMP=0x000000000016a71e
- (id)introOfferPrice;	// IMP=0x000000000016a716
- (id)introOfferPeriod;	// IMP=0x000000000016a70e
- (id)inAppID;	// IMP=0x000000000016a706
- (id)freeTrialPeriod;	// IMP=0x000000000016a6fe
- (id)dismissLabel;	// IMP=0x000000000016a6f6
- (id)description;	// IMP=0x000000000016a6ee
- (id)_serviceComponentsFromMap:(id)arg1 withNames:(id)arg2;	// IMP=0x000000000016a5e7
- (id)_serviceNames;	// IMP=0x000000000016a552
- (id)_servicesData;	// IMP=0x000000000016a4bd
@property(readonly, nonatomic) NSString *valuePropInfo;
@property(readonly, nonatomic) NSString *valuePropDetail;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSArray *serviceComponents;
@property(readonly, nonatomic) NSString *priceForDisplay;
@property(readonly, nonatomic) NSString *priceDiffForDisplay;
@property(readonly, nonatomic) NSNumber *priceDiff;
@property(readonly, nonatomic) NSNumber *price;
@property(readonly, nonatomic) NSString *offerID;
@property(readonly, nonatomic) _Bool isRecommended;
@property(readonly, nonatomic) _Bool isFamily;
@property(readonly, nonatomic) _Bool isDefault;
@property(readonly, nonatomic) NSString *disclaimerText;
@property(readonly, nonatomic) NSString *callToActionLabel;
@property(readonly, nonatomic) AMSBuyParams *buyParams;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000169a6a

@end

