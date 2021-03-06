//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSessionTask-Protocol.h>
#import <GeoServices/GEODataSessionUpdatableTask-Protocol.h>

@class GEOClientMetrics, GEODataRequest, NSData, NSDate, NSError, NSHTTPURLResponse, NSMutableData, NSString, NSURL, NSURLRequest, NSURLSessionTask, NSURLSessionTaskMetrics;
@protocol GEODataSessionTaskDelegate, GEORequestCounterTicket, NSObject, OS_dispatch_queue, OS_os_activity, OS_voucher;

@interface GEODataURLSessionTask : NSObject <GEODataSessionTask, GEODataSessionUpdatableTask>
{
    id <GEODataSessionTaskDelegate> _delegate;	// 8 = 0x8
    GEODataRequest *_request;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_sessionIsolation;	// 32 = 0x20
    NSURLSessionTask *_backingTask;	// 40 = 0x28
    NSError *_nonBackingTaskError;	// 48 = 0x30
    NSData *_cachedData;	// 56 = 0x38
    NSMutableData *_receivedData;	// 64 = 0x40
    NSURLSessionTaskMetrics *_urlTaskMetrics;	// 72 = 0x48
    double _startTime;	// 80 = 0x50
    double _endTime;	// 88 = 0x58
    CDStruct_d1a7ebee _requestKind;	// 96 = 0x60
    _Bool _mptcpNegotiated;	// 104 = 0x68
    _Bool _receivedRNFNotification;	// 105 = 0x69
    float _priority;	// 108 = 0x6c
    unsigned int _sessionIdentifier;	// 112 = 0x70
    _Bool _backingTaskNeedsResume;	// 116 = 0x74
    _Bool _finished;	// 117 = 0x75
    unsigned int _qos;	// 120 = 0x78
    NSObject<OS_os_activity> *_activity;	// 128 = 0x80
    id <NSObject> _parsedResponse;	// 136 = 0x88
    NSDate *_originalStartDate;	// 144 = 0x90
    NSObject<OS_voucher> *_voucher;	// 152 = 0x98
    NSURL *_downloadedFileURL;	// 160 = 0xa0
    unsigned long long _cachedDownloadFileSize;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000000a3120c
@property(nonatomic) _Bool receivedRNFNotification; // @synthesize receivedRNFNotification=_receivedRNFNotification;
@property(readonly, nonatomic) _Bool mptcpNegotiated; // @synthesize mptcpNegotiated=_mptcpNegotiated;
@property(nonatomic) unsigned int sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic) NSURLSessionTask *backingTask; // @synthesize backingTask=_backingTask;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) __weak id <GEODataSessionTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CDStruct_d1a7ebee requestKind; // @synthesize requestKind=_requestKind;
@property(copy, nonatomic) NSData *cachedData; // @synthesize cachedData=_cachedData;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) GEODataRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
- (void)delegateAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a310ec
@property(readonly, nonatomic) id <GEORequestCounterTicket> requestCounterTicket;
- (void)notifyDelegateWithSession:(id)arg1;	// IMP=0x0000000000a30fe1
@property(readonly, nonatomic) unsigned long long requestedMultipathServiceType;
@property(readonly, nonatomic) NSString *remoteAddressAndPort;
@property(readonly, nonatomic) GEOClientMetrics *clientMetrics;
@property(readonly, nonatomic) _Bool failedDueToCancel;
@property(readonly, nonatomic) unsigned long long incomingPayloadSize;
@property(readonly, nonatomic) unsigned long long outgoingPayloadSize;
@property(readonly, nonatomic) NSURLRequest *originalURLRequest;
- (void)setParsedResponse:(id)arg1;	// IMP=0x0000000000a30ae7
@property(readonly, nonatomic) id <NSObject> parsedResponse;
@property(retain, nonatomic) NSError *error;
@property(readonly, nonatomic) NSHTTPURLResponse *response;
@property(readonly, copy, nonatomic) NSURL *downloadedFileURL;
@property(readonly, nonatomic) unsigned long long receivedDataLength;
@property(readonly, nonatomic) NSData *receivedData;
@property(readonly, nonatomic) _Bool protocolBufferHasPreamble;
@property(readonly, nonatomic) NSURLSessionTaskMetrics *urlTaskMetrics;
@property float priority;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)cancel;	// IMP=0x0000000000a302b5
- (void)_prepareForRestart;	// IMP=0x0000000000a3024d
- (void)_start;	// IMP=0x0000000000a2ff8e
- (void)start;	// IMP=0x0000000000a2fe30
- (id)initWithSession:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 requestKind:(CDStruct_d1a7ebee)arg4 priority:(float)arg5;	// IMP=0x0000000000a2fc6c
- (id)init;	// IMP=0x0000000000a2fc42
- (_Bool)validateContentLengthWithError:(id *)arg1;	// IMP=0x000000000049bbc2
- (_Bool)validateNonEmptyResponseWithError:(id *)arg1;	// IMP=0x000000000049ba50
- (_Bool)validateTileResponse:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000049ba2d
- (void)didFinishDownloadingToURL:(id)arg1;	// IMP=0x0000000000a32533
- (void)backingTask:(id)arg1 didBecomeDownloadTask:(id)arg2;	// IMP=0x0000000000a323eb
- (void)didCollectMetrics:(id)arg1;	// IMP=0x0000000000a323da
- (void)dataSession:(id)arg1 taskDidCompleteWithError:(id)arg2;	// IMP=0x0000000000a32089
- (void)didReceiveData:(id)arg1;	// IMP=0x0000000000a31f7e
- (void)dataSession:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a31ada
- (void)updateRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a3196d
- (void)dataSession:(id)arg1 willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a315b2
- (id)createURLRequest;	// IMP=0x0000000000a3156a
- (id)createURLSessionTaskWithSession:(id)arg1 request:(id)arg2;	// IMP=0x0000000000a312da
- (id)_createBackingTaskWithRequest:(id)arg1 session:(id)arg2;	// IMP=0x0000000000a312c5
- (_Bool)didValidateEntityTagForData:(id *)arg1 entityTag:(id *)arg2;	// IMP=0x0000000000a327b2
- (double)loadTimeIncludingTask:(id)arg1;	// IMP=0x0000000000a3292f
@property(readonly, nonatomic) double loadTime;
@property(readonly, nonatomic) double elapsedTime;
@property(readonly, nonatomic) NSURL *originalRequestURL;
@property(readonly, nonatomic) long long HTTPStatusCode;
@property(readonly, nonatomic) unsigned long long contentLength;
@property(readonly, nonatomic) NSString *contentLengthString;
@property(readonly, nonatomic) NSString *entityTag;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

