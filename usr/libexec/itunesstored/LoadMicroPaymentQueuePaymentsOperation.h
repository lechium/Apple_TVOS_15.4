//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class MicroPaymentQueueRequest, MicroPaymentQueueResponse, NSNumber, NSString;

@interface LoadMicroPaymentQueuePaymentsOperation : ISOperation
{
    MicroPaymentQueueRequest *_request;	// 96 = 0x60
    MicroPaymentQueueResponse *_response;	// 104 = 0x68
    NSString *_urlBagKey;	// 112 = 0x70
}

@property(retain) NSString *URLBagKey; // @synthesize URLBagKey=_urlBagKey;
@property(retain) MicroPaymentQueueResponse *response; // @synthesize response=_response;
@property(copy) MicroPaymentQueueRequest *request; // @synthesize request=_request;
- (_Bool)_parsePropertyList:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000088824
- (_Bool)_loadResponseReturningError:(id *)arg1;	// IMP=0x0010000000088552
- (_Bool)_appendRangeRequestsToResponse:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000882f7
- (void)run;	// IMP=0x0010000000088295
- (void)dealloc;	// IMP=0x001000000008822f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end
