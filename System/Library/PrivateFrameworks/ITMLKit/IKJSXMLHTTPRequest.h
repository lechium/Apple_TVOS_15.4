//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSXMLHTTPRequest-Protocol.h>
#import <ITMLKit/ISStoreURLOperationDelegate-Protocol.h>
#import <ITMLKit/NSURLSessionDataDelegate-Protocol.h>
#import <ITMLKit/NSURLSessionTaskDelegate-Protocol.h>

@class IKDOMDocument, ISURLOperation, JSManagedValue, NSData, NSDictionary, NSError, NSHTTPURLResponse, NSMutableArray, NSMutableURLRequest, NSNumber, NSString, NSURL, NSURLConnection, NSURLSession, NSURLSessionConfiguration;
@protocol IKNetworkRequestRecord;

@interface IKJSXMLHTTPRequest <ISStoreURLOperationDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, IKJSXMLHTTPRequest>
{
    _Bool _shouldSquashOnReadyStateEvents;	// 8 = 0x8
    struct os_unfair_lock_s _onReadyStateChangeMessageQueueLock;	// 12 = 0xc
    _Bool _async;	// 16 = 0x10
    _Bool _inProgress;	// 17 = 0x11
    _Bool _jingleRequest;	// 18 = 0x12
    _Bool _primeEnabled;	// 19 = 0x13
    unsigned int _requestStatusCode;	// 20 = 0x14
    unsigned int _readyState;	// 24 = 0x18
    unsigned int _status;	// 28 = 0x1c
    unsigned long long timeout;	// 32 = 0x20
    NSURL *_requestURL;	// 40 = 0x28
    NSString *_requestId;	// 48 = 0x30
    id <IKNetworkRequestRecord> _networkRequestRecord;	// 56 = 0x38
    NSString *_dataToSend;	// 64 = 0x40
    ISURLOperation *_jingleOperation;	// 72 = 0x48
    NSMutableArray *_onReadyStateChangeMessageQueue;	// 80 = 0x50
    NSMutableURLRequest *_urlRequest;	// 88 = 0x58
    NSURLSessionConfiguration *_urlSessionConfiguration;	// 96 = 0x60
    NSURLSession *_urlSession;	// 104 = 0x68
    NSURLConnection *_urlConnection;	// 112 = 0x70
    NSString *_user;	// 120 = 0x78
    NSString *_password;	// 128 = 0x80
    long long _primeRetryCount;	// 136 = 0x88
    NSHTTPURLResponse *_urlResponse;	// 144 = 0x90
    NSData *_receivedData;	// 152 = 0x98
    long long _reprimingResponseStatus;	// 160 = 0xa0
    long long _requestReadyState;	// 168 = 0xa8
    NSString *_requestStatusText;	// 176 = 0xb0
    long long _requestResponseType;	// 184 = 0xb8
    NSError *_requestError;	// 192 = 0xc0
    NSString *_statusText;	// 200 = 0xc8
    NSDictionary *_performanceMetrics;	// 208 = 0xd0
    NSHTTPURLResponse *_cachedURLResponse;	// 216 = 0xd8
    JSManagedValue *_managedSelf;	// 224 = 0xe0
}

+ (id)xhrOperationQueue;	// IMP=0x00000000000d943d
- (void).cxx_destruct;	// IMP=0x00000000000df9f5
@property(retain, nonatomic) JSManagedValue *managedSelf; // @synthesize managedSelf=_managedSelf;
@property(retain) NSHTTPURLResponse *cachedURLResponse; // @synthesize cachedURLResponse=_cachedURLResponse;
@property(retain) NSDictionary *performanceMetrics; // @synthesize performanceMetrics=_performanceMetrics;
@property(retain) NSString *statusText; // @synthesize statusText=_statusText;
@property unsigned int status; // @synthesize status=_status;
@property unsigned int readyState; // @synthesize readyState=_readyState;
@property(retain, nonatomic) NSError *requestError; // @synthesize requestError=_requestError;
@property(nonatomic) long long requestResponseType; // @synthesize requestResponseType=_requestResponseType;
@property(retain, nonatomic) NSString *requestStatusText; // @synthesize requestStatusText=_requestStatusText;
@property(nonatomic) unsigned int requestStatusCode; // @synthesize requestStatusCode=_requestStatusCode;
@property(nonatomic) long long requestReadyState; // @synthesize requestReadyState=_requestReadyState;
@property(readonly, nonatomic) long long reprimingResponseStatus; // @synthesize reprimingResponseStatus=_reprimingResponseStatus;
@property(retain) NSData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) NSHTTPURLResponse *urlResponse; // @synthesize urlResponse=_urlResponse;
@property(readonly, nonatomic) _Bool primeEnabled; // @synthesize primeEnabled=_primeEnabled;
@property(nonatomic) long long primeRetryCount; // @synthesize primeRetryCount=_primeRetryCount;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *user; // @synthesize user=_user;
@property(retain, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection=_urlConnection;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(copy, nonatomic) NSURLSessionConfiguration *urlSessionConfiguration; // @synthesize urlSessionConfiguration=_urlSessionConfiguration;
@property(retain, nonatomic) NSMutableURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(retain, nonatomic) NSMutableArray *onReadyStateChangeMessageQueue; // @synthesize onReadyStateChangeMessageQueue=_onReadyStateChangeMessageQueue;
@property(nonatomic) __weak ISURLOperation *jingleOperation; // @synthesize jingleOperation=_jingleOperation;
@property(nonatomic) _Bool jingleRequest; // @synthesize jingleRequest=_jingleRequest;
@property(copy, nonatomic) NSString *dataToSend; // @synthesize dataToSend=_dataToSend;
@property(readonly, nonatomic) id <IKNetworkRequestRecord> networkRequestRecord; // @synthesize networkRequestRecord=_networkRequestRecord;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property unsigned long long timeout; // @synthesize timeout;
- (id)_timeIntervalSince1970;	// IMP=0x00000000000df595
- (void)_reprime:(id)arg1;	// IMP=0x00000000000df276
- (void)_prime:(id)arg1;	// IMP=0x00000000000df0f2
- (_Bool)_isPrimeError:(long long)arg1 output:(id)arg2;	// IMP=0x00000000000defa2
- (id)_createStoreOperation:(id)arg1;	// IMP=0x00000000000debf9
- (void)operation:(id)arg1 willSendRequest:(id)arg2;	// IMP=0x00000000000deb02
- (void)_operationFinished:(id)arg1;	// IMP=0x00000000000de862
- (void)operation:(id)arg1 failedWithError:(id)arg2;	// IMP=0x00000000000de64b
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;	// IMP=0x00000000000de411
- (void)operation:(id)arg1 didDiscoverContentLength:(id)arg2;	// IMP=0x00000000000de3fa
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00000000000de082
- (void)_loadingDidFinish;	// IMP=0x00000000000ddf34
- (void)_loadingDidFailWithError:(id)arg1;	// IMP=0x00000000000ddcea
- (void)_loadingDidReceiveData:(id)arg1;	// IMP=0x00000000000ddbf3
- (void)_loadingDidReceiveResponse:(id)arg1 timingData:(id)arg2;	// IMP=0x00000000000dd838
- (id)_loadingWillSendRequest:(id)arg1 redirectResponse:(id)arg2;	// IMP=0x00000000000dd717
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000dd6a2
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000dd60b
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000000000dd5e3
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00000000000dd5ce
- (void)connectionDidFinishLoading:(id)arg1;	// IMP=0x00000000000dd5bc
- (void)connection:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000dd5a7
- (void)connection:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x00000000000dd592
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00000000000dd51a
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x00000000000dd502
- (void)_clearAllReadyStateChangeMessagesAndSquashFutureOnes;	// IMP=0x00000000000dd4b6
- (id)_dequeueReadyStateChangeMessage;	// IMP=0x00000000000dd421
- (void)_abort;	// IMP=0x00000000000dd06f
- (void)_sendWithData:(id)arg1;	// IMP=0x00000000000dc155
- (void)_openWithMethod:(id)arg1 url:(id)arg2 async:(_Bool)arg3 user:(id)arg4 password:(id)arg5;	// IMP=0x00000000000dbf21
- (void)_setException:(id)arg1;	// IMP=0x00000000000db8a7
- (id)_constructProgressEventData;	// IMP=0x00000000000db6ea
@property(readonly) NSDictionary *metrics;
@property(readonly) id response;
@property(retain) NSString *responseType;
- (id)responseArrayBuffer;	// IMP=0x00000000000db1bd
- (id)responseBlob;	// IMP=0x00000000000daf95
- (id)responseJSON;	// IMP=0x00000000000dacfc
@property(readonly) IKDOMDocument *responseXML;
@property(readonly) NSString *responseText;
- (id)getAllResponseHeaders;	// IMP=0x00000000000da508
- (id)getResponseHeader:(id)arg1;	// IMP=0x00000000000da238
- (void)abort;	// IMP=0x00000000000da0db
- (void)send:(id)arg1;	// IMP=0x00000000000d9e7b
- (void)setRequestHeader:(id)arg1:(id)arg2;	// IMP=0x00000000000d9c4e
- (void)open:(id)arg1:(id)arg2:(id)arg3:(id)arg4:(id)arg5;	// IMP=0x00000000000d9744
- (id)initWithAppContext:(id)arg1 jingleRequest:(_Bool)arg2;	// IMP=0x00000000000d9507
- (id)init;	// IMP=0x00000000000d94ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

