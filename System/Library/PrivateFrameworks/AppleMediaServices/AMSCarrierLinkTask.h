//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>
#import <AppleMediaServices/AMSURLProtocolDelegate-Protocol.h>
#import <AppleMediaServices/NSURLSessionDelegate-Protocol.h>

@class ACAccount, AMSCarrierLinkParams, AMSEngagement, AMSMetrics, AMSProcessInfo, AMSPromise, AMSURLRequestEncoder, AMSURLSession, NSDictionary, NSString;
@protocol AMSBagProtocol, AMSCarrierLinkTaskDelegate;

@interface AMSCarrierLinkTask <AMSURLProtocolDelegate, NSURLSessionDelegate, AMSBagConsumer>
{
    ACAccount *_account;	// 8 = 0x8
    NSDictionary *_additionalLinkingParameters;	// 16 = 0x10
    id <AMSBagProtocol> _bag;	// 24 = 0x18
    AMSProcessInfo *_clientInfo;	// 32 = 0x20
    id <AMSCarrierLinkTaskDelegate> _delegate;	// 40 = 0x28
    AMSCarrierLinkParams *_linkParams;	// 48 = 0x30
    NSDictionary *_metricsOverlay;	// 56 = 0x38
    NSString *_productCode;	// 64 = 0x40
    AMSEngagement *_engagementHandler;	// 72 = 0x48
    NSString *_guid;	// 80 = 0x50
    AMSMetrics *_metrics;	// 88 = 0x58
    NSString *_msisdn;	// 96 = 0x60
    AMSURLRequestEncoder *_requestEncoder;	// 104 = 0x68
    AMSURLSession *_urlSession;	// 112 = 0x70
    AMSPromise *_pacTokenPromise;	// 120 = 0x78
}

+ (id)bagKeySet;	// IMP=0x00000000000d69e6
+ (id)createBagForSubProfile;	// IMP=0x00000000000d694c
+ (id)bagSubProfileVersion;	// IMP=0x00000000000d68fc
+ (id)bagSubProfile;	// IMP=0x00000000000d68ac
- (void).cxx_destruct;	// IMP=0x00000000000d6b67
@property(readonly, nonatomic) AMSPromise *pacTokenPromise; // @synthesize pacTokenPromise=_pacTokenPromise;
@property(readonly, nonatomic) AMSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) AMSURLRequestEncoder *requestEncoder; // @synthesize requestEncoder=_requestEncoder;
@property(readonly, nonatomic) NSString *msisdn; // @synthesize msisdn=_msisdn;
@property(readonly, nonatomic) AMSMetrics *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) AMSEngagement *engagementHandler; // @synthesize engagementHandler=_engagementHandler;
@property(readonly, nonatomic) NSString *productCode; // @synthesize productCode=_productCode;
@property(copy, nonatomic) NSDictionary *metricsOverlay; // @synthesize metricsOverlay=_metricsOverlay;
@property(readonly, nonatomic) AMSCarrierLinkParams *linkParams; // @synthesize linkParams=_linkParams;
@property(nonatomic) __weak id <AMSCarrierLinkTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) NSDictionary *additionalLinkingParameters; // @synthesize additionalLinkingParameters=_additionalLinkingParameters;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d6894
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleEngagementRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d687c
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d651b
- (id)_resultDecodingURLResult:(id)arg1;	// IMP=0x00000000000d644e
- (id)_recordEngagementMetricsEvent:(id)arg1;	// IMP=0x00000000000d5dea
- (id)_promptForAccount;	// IMP=0x00000000000d5cd0
- (id)_performLinking;	// IMP=0x00000000000d55bc
- (id)_performLinkingWithValidations;	// IMP=0x00000000000d4ecb
- (void)_performDelegateAuthenticationWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d4b08
- (id)_pacToken;	// IMP=0x00000000000d4821
- (id)_metricsEventFromCarrierLinkResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000000d4172
- (id)_linkURLRequest;	// IMP=0x00000000000d3f23
- (id)_linkParameters;	// IMP=0x00000000000d3d3e
- (id)_linkFailureFromResult:(id)arg1;	// IMP=0x00000000000d3be3
- (void)_delegateHandleEngagementRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d38a6
- (id)perform;	// IMP=0x00000000000d3724
- (id)initWithAccount:(id)arg1 bag:(id)arg2 engagementHandler:(id)arg3 guid:(id)arg4 linkParams:(id)arg5 metrics:(id)arg6 msisdn:(id)arg7 pacTokenPromise:(id)arg8 productCode:(id)arg9 requestEncoder:(id)arg10 urlSession:(id)arg11;	// IMP=0x00000000000d3508
- (id)initWithAccount:(id)arg1 bag:(id)arg2 linkParams:(id)arg3 productCode:(id)arg4;	// IMP=0x00000000000d3296

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

