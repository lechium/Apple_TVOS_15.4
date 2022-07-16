//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, PKProtobufAutomaticReloadPaymentRequest, PKProtobufPaymentMerchantSession, PKProtobufRecurringPaymentRequest, PKProtobufShippingMethods;

@interface PKProtobufPaymentRequest : PBRequest <NSCopying>
{
    unsigned int _apiType;	// 8 = 0x8
    NSData *_applicationData;	// 16 = 0x10
    PKProtobufAutomaticReloadPaymentRequest *_automaticReloadPaymentRequest;	// 24 = 0x18
    PKProtobufShippingMethods *_availableShippingMethods;	// 32 = 0x20
    NSData *_billingContact;	// 40 = 0x28
    int _confirmationStyle;	// 48 = 0x30
    NSMutableArray *_contentItems;	// 56 = 0x38
    NSString *_countryCode;	// 64 = 0x40
    NSString *_currencyCode;	// 72 = 0x48
    NSString *_localizedNavigationTitle;	// 80 = 0x50
    NSString *_localizedSummaryItemsTitle;	// 88 = 0x58
    unsigned int _merchantCapabilities;	// 96 = 0x60
    NSString *_merchantIdentifier;	// 104 = 0x68
    PKProtobufPaymentMerchantSession *_merchantSession;	// 112 = 0x70
    NSMutableArray *_multiTokenContexts;	// 120 = 0x78
    NSString *_originatingURL;	// 128 = 0x80
    PKProtobufRecurringPaymentRequest *_recurringPaymentRequest;	// 136 = 0x88
    int _requestType;	// 144 = 0x90
    int _requestor;	// 148 = 0x94
    int _requestorDeviceType;	// 152 = 0x98
    unsigned int _requiredBillingAddressFields;	// 156 = 0x9c
    NSMutableArray *_requiredBillingContactFields;	// 160 = 0xa0
    unsigned int _requiredShippingAddressFields;	// 168 = 0xa8
    NSMutableArray *_requiredShippingContactFields;	// 176 = 0xb0
    NSData *_shippingContact;	// 184 = 0xb8
    NSMutableArray *_shippingMethods;	// 192 = 0xc0
    NSMutableArray *_summaryItems;	// 200 = 0xc8
    NSMutableArray *_supportedCountries;	// 208 = 0xd0
    NSMutableArray *_supportedNetworks;	// 216 = 0xd8
    NSMutableArray *_thumbnailURLs;	// 224 = 0xe0
    _Bool _expectsMerchantSession;	// 232 = 0xe8
    _Bool _respectSupportedNetworksOrder;	// 233 = 0xe9
    _Bool _summaryPinned;	// 234 = 0xea
    _Bool _suppressTotal;	// 235 = 0xeb
    struct {
        unsigned int apiType:1;
        unsigned int confirmationStyle:1;
        unsigned int merchantCapabilities:1;
        unsigned int requestType:1;
        unsigned int requestor:1;
        unsigned int requestorDeviceType:1;
        unsigned int requiredBillingAddressFields:1;
        unsigned int requiredShippingAddressFields:1;
        unsigned int expectsMerchantSession:1;
        unsigned int respectSupportedNetworksOrder:1;
        unsigned int summaryPinned:1;
        unsigned int suppressTotal:1;
    } _has;	// 236 = 0xec
}

+ (Class)multiTokenContextsType;	// IMP=0x000000000037d6de
+ (Class)contentItemsType;	// IMP=0x000000000037cdf4
+ (Class)supportedCountriesType;	// IMP=0x000000000037ccdc
+ (Class)requiredBillingContactFieldsType;	// IMP=0x000000000037cc0a
+ (Class)requiredShippingContactFieldsType;	// IMP=0x000000000037cb38
+ (Class)thumbnailURLsType;	// IMP=0x000000000037ca19
+ (Class)shippingMethodsType;	// IMP=0x000000000037c908
+ (Class)summaryItemsType;	// IMP=0x000000000037c836
+ (Class)supportedNetworksType;	// IMP=0x000000000037c658
- (void).cxx_destruct;	// IMP=0x0000000000383649
@property(retain, nonatomic) PKProtobufAutomaticReloadPaymentRequest *automaticReloadPaymentRequest; // @synthesize automaticReloadPaymentRequest=_automaticReloadPaymentRequest;
@property(nonatomic) _Bool respectSupportedNetworksOrder; // @synthesize respectSupportedNetworksOrder=_respectSupportedNetworksOrder;
@property(retain, nonatomic) NSMutableArray *multiTokenContexts; // @synthesize multiTokenContexts=_multiTokenContexts;
@property(retain, nonatomic) PKProtobufRecurringPaymentRequest *recurringPaymentRequest; // @synthesize recurringPaymentRequest=_recurringPaymentRequest;
@property(retain, nonatomic) PKProtobufShippingMethods *availableShippingMethods; // @synthesize availableShippingMethods=_availableShippingMethods;
@property(nonatomic) _Bool summaryPinned; // @synthesize summaryPinned=_summaryPinned;
@property(nonatomic) _Bool suppressTotal; // @synthesize suppressTotal=_suppressTotal;
@property(retain, nonatomic) NSString *localizedSummaryItemsTitle; // @synthesize localizedSummaryItemsTitle=_localizedSummaryItemsTitle;
@property(retain, nonatomic) NSString *localizedNavigationTitle; // @synthesize localizedNavigationTitle=_localizedNavigationTitle;
@property(retain, nonatomic) NSMutableArray *contentItems; // @synthesize contentItems=_contentItems;
@property(nonatomic) unsigned int apiType; // @synthesize apiType=_apiType;
@property(retain, nonatomic) NSMutableArray *supportedCountries; // @synthesize supportedCountries=_supportedCountries;
@property(retain, nonatomic) NSMutableArray *requiredBillingContactFields; // @synthesize requiredBillingContactFields=_requiredBillingContactFields;
@property(retain, nonatomic) NSMutableArray *requiredShippingContactFields; // @synthesize requiredShippingContactFields=_requiredShippingContactFields;
@property(nonatomic) _Bool expectsMerchantSession; // @synthesize expectsMerchantSession=_expectsMerchantSession;
@property(retain, nonatomic) NSMutableArray *thumbnailURLs; // @synthesize thumbnailURLs=_thumbnailURLs;
@property(retain, nonatomic) PKProtobufPaymentMerchantSession *merchantSession; // @synthesize merchantSession=_merchantSession;
@property(retain, nonatomic) NSString *originatingURL; // @synthesize originatingURL=_originatingURL;
@property(retain, nonatomic) NSData *applicationData; // @synthesize applicationData=_applicationData;
@property(retain, nonatomic) NSMutableArray *shippingMethods; // @synthesize shippingMethods=_shippingMethods;
@property(retain, nonatomic) NSMutableArray *summaryItems; // @synthesize summaryItems=_summaryItems;
@property(retain, nonatomic) NSData *shippingContact; // @synthesize shippingContact=_shippingContact;
@property(retain, nonatomic) NSData *billingContact; // @synthesize billingContact=_billingContact;
@property(nonatomic) unsigned int requiredShippingAddressFields; // @synthesize requiredShippingAddressFields=_requiredShippingAddressFields;
@property(nonatomic) unsigned int requiredBillingAddressFields; // @synthesize requiredBillingAddressFields=_requiredBillingAddressFields;
@property(nonatomic) unsigned int merchantCapabilities; // @synthesize merchantCapabilities=_merchantCapabilities;
@property(retain, nonatomic) NSMutableArray *supportedNetworks; // @synthesize supportedNetworks=_supportedNetworks;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000038264b
- (unsigned long long)hash;	// IMP=0x0000000000382188
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000381a3b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000380afd
- (void)copyTo:(id)arg1;	// IMP=0x000000000038027d
- (void)writeTo:(id)arg1;	// IMP=0x000000000037f75d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000037f750
- (id)dictionaryRepresentation;	// IMP=0x000000000037d924
- (id)description;	// IMP=0x000000000037d875
- (int)StringAsRequestorDeviceType:(id)arg1;	// IMP=0x000000000037d813
- (id)requestorDeviceTypeAsString:(int)arg1;	// IMP=0x000000000037d7be
@property(nonatomic) _Bool hasRequestorDeviceType;
@property(nonatomic) int requestorDeviceType; // @synthesize requestorDeviceType=_requestorDeviceType;
@property(readonly, nonatomic) _Bool hasAutomaticReloadPaymentRequest;
@property(nonatomic) _Bool hasRespectSupportedNetworksOrder;
- (id)multiTokenContextsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000037d6c1
- (unsigned long long)multiTokenContextsCount;	// IMP=0x000000000037d6a4
- (void)addMultiTokenContexts:(id)arg1;	// IMP=0x000000000037d63a
- (void)clearMultiTokenContexts;	// IMP=0x000000000037d61d
@property(readonly, nonatomic) _Bool hasRecurringPaymentRequest;
@property(readonly, nonatomic) _Bool hasAvailableShippingMethods;
- (int)StringAsRequestType:(id)arg1;	// IMP=0x000000000037d458
- (id)requestTypeAsString:(int)arg1;	// IMP=0x000000000037d37d
@property(nonatomic) _Bool hasRequestType;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
- (int)StringAsConfirmationStyle:(id)arg1;	// IMP=0x000000000037d1dc
- (id)confirmationStyleAsString:(int)arg1;	// IMP=0x000000000037d12b
@property(nonatomic) _Bool hasConfirmationStyle;
@property(nonatomic) int confirmationStyle; // @synthesize confirmationStyle=_confirmationStyle;
- (int)StringAsRequestor:(id)arg1;	// IMP=0x000000000037cfd4
- (id)requestorAsString:(int)arg1;	// IMP=0x000000000037cf3a
@property(nonatomic) _Bool hasRequestor;
@property(nonatomic) int requestor; // @synthesize requestor=_requestor;
@property(nonatomic) _Bool hasSummaryPinned;
@property(nonatomic) _Bool hasSuppressTotal;
@property(readonly, nonatomic) _Bool hasLocalizedSummaryItemsTitle;
@property(readonly, nonatomic) _Bool hasLocalizedNavigationTitle;
- (id)contentItemsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000037cdd7
- (unsigned long long)contentItemsCount;	// IMP=0x000000000037cdba
- (void)addContentItems:(id)arg1;	// IMP=0x000000000037cd50
- (void)clearContentItems;	// IMP=0x000000000037cd33
@property(nonatomic) _Bool hasApiType;
- (id)supportedCountriesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000037ccbf
- (unsigned long long)supportedCountriesCount;	// IMP=0x000000000037cca2
- (void)addSupportedCountries:(id)arg1;	// IMP=0x000000000037cc38
- (void)clearSupportedCountries;	// IMP=0x000000000037cc1b
- (id)requiredBillingContactFieldsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000037cbed
- (unsigned long long)requiredBillingContactFieldsCount;	// IMP=0x000000000037cbd0
- (void)addRequiredBillingContactFields:(id)arg1;	// IMP=0x000000000037cb66
- (void)clearRequiredBillingContactFields;	// IMP=0x000000000037cb49
- (id)requiredShippingContactFieldsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000037cb1b
- (unsigned long long)requiredShippingContactFieldsCount;	// IMP=0x000000000037cafe
- (void)addRequiredShippingContactFields:(id)arg1;	// IMP=0x000000000037ca94
- (void)clearRequiredShippingContactFields;	// IMP=0x000000000037ca77
@property(nonatomic) _Bool hasExpectsMerchantSession;
- (id)thumbnailURLsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000037c9fc
- (unsigned long long)thumbnailURLsCount;	// IMP=0x000000000037c9df
- (void)addThumbnailURLs:(id)arg1;	// IMP=0x000000000037c975
- (void)clearThumbnailURLs;	// IMP=0x000000000037c958
@property(readonly, nonatomic) _Bool hasMerchantSession;
@property(readonly, nonatomic) _Bool hasOriginatingURL;
@property(readonly, nonatomic) _Bool hasApplicationData;
- (id)shippingMethodsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000037c8eb
- (unsigned long long)shippingMethodsCount;	// IMP=0x000000000037c8ce
- (void)addShippingMethods:(id)arg1;	// IMP=0x000000000037c864
- (void)clearShippingMethods;	// IMP=0x000000000037c847
- (id)summaryItemsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000037c819
- (unsigned long long)summaryItemsCount;	// IMP=0x000000000037c7fc
- (void)addSummaryItems:(id)arg1;	// IMP=0x000000000037c792
- (void)clearSummaryItems;	// IMP=0x000000000037c775
@property(readonly, nonatomic) _Bool hasShippingContact;
@property(readonly, nonatomic) _Bool hasBillingContact;
@property(nonatomic) _Bool hasRequiredShippingAddressFields;
@property(nonatomic) _Bool hasRequiredBillingAddressFields;
@property(nonatomic) _Bool hasMerchantCapabilities;
- (id)supportedNetworksAtIndex:(unsigned long long)arg1;	// IMP=0x000000000037c63b
- (unsigned long long)supportedNetworksCount;	// IMP=0x000000000037c61e
- (void)addSupportedNetworks:(id)arg1;	// IMP=0x000000000037c5b4
- (void)clearSupportedNetworks;	// IMP=0x000000000037c597
@property(readonly, nonatomic) _Bool hasCurrencyCode;
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(readonly, nonatomic) _Bool hasMerchantIdentifier;

@end

