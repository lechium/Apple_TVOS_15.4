//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICStoreRequestContext, NSString;

__attribute__((visibility("hidden")))
@interface ICMusicSubscriptionCarrierBundlingEligibilityOperation
{
    NSString *_cellularProviderName;	// 8 = 0x8
    NSString *_mobileSubscriberCountryCode;	// 16 = 0x10
    NSString *_mobileSubscriberNetworkCode;	// 24 = 0x18
    NSString *_phoneNumber;	// 32 = 0x20
    NSString *_IMEI;	// 40 = 0x28
    _Bool _deepLink;	// 48 = 0x30
    ICStoreRequestContext *_requestContext;	// 56 = 0x38
    CDUnknownBlockType _responseHandler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000e0387
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(nonatomic, getter=isDeepLink) _Bool deepLink; // @synthesize deepLink=_deepLink;
@property(readonly, copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
- (void)_sendSilentSMSRequestWithMessage:(id)arg1 number:(id)arg2 preflightResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000dffba
- (void)_sendPreflightRequestWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000dfdd5
- (void)_sendEnrichmentRequestWithURL:(id)arg1 preflightResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000dfa77
- (id)_newDefaultRequestBodyDictionaryWithResponseCode:(long long)arg1 error:(id)arg2;	// IMP=0x00000000000df803
- (id)_newDefaultRequestBodyDictionary;	// IMP=0x00000000000df6ce
- (void)_finishEnrichmentWithBodyDictionary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000df532
- (void)execute;	// IMP=0x00000000000df2c7
- (id)initWithRequestContext:(id)arg1;	// IMP=0x00000000000df259

@end

