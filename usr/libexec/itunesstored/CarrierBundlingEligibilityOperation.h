//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class CarrierBundlingEligibilityResponse, NSString;

@interface CarrierBundlingEligibilityOperation : ISOperation
{
    NSString *_cellularProviderName;	// 96 = 0x60
    _Bool _deepLink;	// 104 = 0x68
    CarrierBundlingEligibilityResponse *_eligibilityResponse;	// 112 = 0x70
    NSString *_mobileSubscriberCountryCode;	// 120 = 0x78
    NSString *_mobileSubscriberNetworkCode;	// 128 = 0x80
    NSString *_phoneNumber;	// 136 = 0x88
    NSString *_IMEI;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00200000000c2818
- (void)_sendSilentSMSRequestWithPreflightResponse:(id)arg1 outputBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c1f22
- (id)_sendPreflightRequest:(id *)arg1;	// IMP=0x00100000000c1862
- (void)_sendEnrichmentRequestWithPreflightResponse:(id)arg1 outputBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c0bd9
- (id)_newDefaultRequestBodyDictionaryWithResponseCode:(long long)arg1 error:(id)arg2;	// IMP=0x00100000000c0930
- (id)_newDefaultRequestBodyDictionary;	// IMP=0x00100000000c0763
- (void)_finishSilentSMSWithSessionID:(id)arg1 responseCode:(long long)arg2 smsSendingError:(id)arg3 outputBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c036c
- (void)_finishEnrichmentWithSessionID:(id)arg1 carrierResponse:(id)arg2 URLResponse:(id)arg3 URLError:(id)arg4 outputBlock:(CDUnknownBlockType)arg5;	// IMP=0x00100000000bff1b
- (void)run;	// IMP=0x00100000000bf766
@property(getter=isDeepLink) _Bool deepLink;
@property(readonly, copy) NSString *phoneNumber;
@property(readonly, copy) NSString *mobileSubscriberNetworkCode;
@property(readonly, copy) NSString *mobileSubscriberCountryCode;
@property(readonly) CarrierBundlingEligibilityResponse *eligibilityResponse;
@property(readonly, copy) NSString *cellularProviderName;

@end
