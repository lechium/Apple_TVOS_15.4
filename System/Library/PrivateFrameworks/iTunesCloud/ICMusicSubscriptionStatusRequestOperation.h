//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICMusicSubscriptionStatusRequest;

@interface ICMusicSubscriptionStatusRequestOperation
{
    _Bool _allowsFuseHeaderEnrichment;	// 8 = 0x8
    _Bool _shouldRequestLightweightStatus;	// 9 = 0x9
    ICMusicSubscriptionStatusRequest *_request;	// 16 = 0x10
    CDUnknownBlockType _responseHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008a57c
@property(nonatomic) _Bool shouldRequestLightweightStatus; // @synthesize shouldRequestLightweightStatus=_shouldRequestLightweightStatus;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(nonatomic) _Bool allowsFuseHeaderEnrichment; // @synthesize allowsFuseHeaderEnrichment=_allowsFuseHeaderEnrichment;
@property(readonly, copy, nonatomic) ICMusicSubscriptionStatusRequest *request; // @synthesize request=_request;
- (_Bool)_carrierBundleStatusIsValidForCachedSubscriptionStatus:(id)arg1;	// IMP=0x000000000008a38c
- (void)_cacheAccountEligibilityWithStatus:(id)arg1 requestContext:(id)arg2;	// IMP=0x000000000008a288
- (void)_performSubscriptionStatusURLRequestWithRequestContext:(id)arg1 subscriptionStatusURL:(id)arg2 allowsAuthentication:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000008a10d
- (void)execute;	// IMP=0x0000000000089d8b
- (id)initWithRequest:(id)arg1;	// IMP=0x0000000000089d11

@end

