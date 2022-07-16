//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class CCDRequest, NSError, NSMutableData, NSString, NSTimer, NSURLSession;

@interface CCDOperation : NSOperation
{
    _Bool _operationExecuting;	// 8 = 0x8
    _Bool _operationFinished;	// 9 = 0x9
    _Bool _operationReady;	// 10 = 0xa
    _Bool _requestFailed;	// 11 = 0xb
    CCDRequest *_teslaRequest;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    NSMutableData *_responseData;	// 32 = 0x20
    NSURLSession *_urlSession;	// 40 = 0x28
    NSTimer *_timeoutTimer;	// 48 = 0x30
    double _retryAfterInterval;	// 56 = 0x38
    long long _requestCount;	// 64 = 0x40
    NSString *_httpResponseContentType;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000076f5
@property(retain, nonatomic) NSString *httpResponseContentType; // @synthesize httpResponseContentType=_httpResponseContentType;
@property(nonatomic) long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) _Bool requestFailed; // @synthesize requestFailed=_requestFailed;
@property(nonatomic) double retryAfterInterval; // @synthesize retryAfterInterval=_retryAfterInterval;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(nonatomic) _Bool operationReady; // @synthesize operationReady=_operationReady;
@property(nonatomic) _Bool operationFinished; // @synthesize operationFinished=_operationFinished;
@property(nonatomic) _Bool operationExecuting; // @synthesize operationExecuting=_operationExecuting;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) CCDRequest *teslaRequest; // @synthesize teslaRequest=_teslaRequest;
- (void)timeoutTimerDidFire:(id)arg1;	// IMP=0x001000000000754a
- (void)_startRetryTimerWithInterval:(double)arg1;	// IMP=0x001000000000743a
- (void)_retryRequestIfAllowedAfterDelayOrFailWithError:(id)arg1;	// IMP=0x00100000000073bd
- (void)_retryRequestIfAllowed:(_Bool)arg1 afterDelay:(double)arg2 orFailWithError:(id)arg3;	// IMP=0x00100000000072fd
- (void)_retryRequestOrFailWithError:(id)arg1;	// IMP=0x00100000000072a6
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000007231
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x001000000000711d
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x001000000000703f
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000006e7c
- (void)_printStatusCode:(long long)arg1;	// IMP=0x0010000000006d4a
- (void)_sendResponseInfoToRemoteWithStatusCode:(long long)arg1;	// IMP=0x0010000000006bb5
- (long long)_statusCodeFromResponse:(id)arg1;	// IMP=0x0010000000006a70
- (void)_callCompletionBlockWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x0010000000006992
- (void)_endOperation;	// IMP=0x0010000000006950
- (void)_sendFailureNoticeToRemote;	// IMP=0x0010000000006898
- (void)_startURLRequest;	// IMP=0x0010000000006703
- (void)_invalidateAndCancelURLSession;	// IMP=0x00100000000066a9
- (void)completeOperationWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x00100000000066a3
- (id)responseWithResponseData:(id)arg1 contentType:(id)arg2 statusCode:(long long)arg3 retryNeeded:(_Bool *)arg4 outError:(id *)arg5;	// IMP=0x001000000000669b
- (_Bool)isExecuting;	// IMP=0x001000000000668b
- (_Bool)isFinished;	// IMP=0x001000000000667b
- (void)start;	// IMP=0x001000000000652a
- (void)dealloc;	// IMP=0x00100000000064ec
- (_Bool)isReady;	// IMP=0x001000000000638f
- (id)init;	// IMP=0x0010000000006350

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
