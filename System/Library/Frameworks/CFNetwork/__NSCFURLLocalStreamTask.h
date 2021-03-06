//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSError, NSMutableArray, NSObject, NSString, NSURLRequest, NSURLResponse, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface __NSCFURLLocalStreamTask
{
    struct BaseSocketStreamClient *_socketStreamClient;	// 8 = 0x8
    NSMutableArray *_extraWork;	// 16 = 0x10
    int _connectionState;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueueForStreamTask;	// 32 = 0x20
    struct __CFReadStream *_readStream;	// 40 = 0x28
    struct __CFWriteStream *_writeStream;	// 48 = 0x30
    NSMutableArray *_pendingWork;	// 56 = 0x38
    _Bool _doingWorkOnThisQueue;	// 64 = 0x40
    NSData *_readBuffer;	// 72 = 0x48
    _Bool _readSignaled;	// 80 = 0x50
    _Bool _readEOF;	// 81 = 0x51
    CDStruct_59046461 _readError;	// 88 = 0x58
    NSData *_writeBuffer;	// 104 = 0x68
    _Bool _writeSignaled;	// 112 = 0x70
    _Bool _writeEOF;	// 113 = 0x71
    _Bool _deliveredConnectionEstablished;	// 114 = 0x72
    CDStruct_59046461 _writeError;	// 120 = 0x78
    long long _writeBufferAlreadyWrittenForNextWrite;	// 136 = 0x88
    NSMutableArray *_finalizationQueue;	// 144 = 0x90
    NSMutableArray *_afterConnectQueue;	// 152 = 0x98
    unsigned long long _taskIdentifier;	// 160 = 0xa0
    long long _state;	// 168 = 0xa8
    NSString *_taskDescription;	// 176 = 0xb0
    NSError *_error;	// 184 = 0xb8
    long long _countOfBytesReceived;	// 192 = 0xc0
    long long _countOfBytesSent;	// 200 = 0xc8
    _Bool _goneSecure;	// 208 = 0xd0
    NSObject<OS_dispatch_source> *_tickerTimeoutTimer;	// 216 = 0xd8
    CDUnknownBlockType _disavow;	// 224 = 0xe0
    NSURLRequest *_originalRequest;	// 232 = 0xe8
    NSURLRequest *_currentRequest;	// 240 = 0xf0
    NSURLResponse *_response;	// 248 = 0xf8
    long long _countOfBytesClientExpectsToSend;	// 256 = 0x100
    long long _countOfBytesClientExpectsToReceive;	// 264 = 0x108
    long long _countOfBytesExpectedToSend;	// 272 = 0x110
    long long _countOfBytesExpectedToReceive;	// 280 = 0x118
    long long _expectedWorkload;	// 288 = 0x120
    double _timeWindowDelay;	// 296 = 0x128
    double _timeWindowDuration;	// 304 = 0x130
    double startTime;	// 312 = 0x138
    long long _priorityValue;	// 320 = 0x140
    double _loadingPriorityValue;	// 328 = 0x148
    NSString *_boundInterfaceIdentifier;	// 336 = 0x150
    _Bool _disallowCellular;	// 344 = 0x158
    int _allowsExpensiveOverride;	// 348 = 0x15c
    int _allowsConstrainedOverride;	// 352 = 0x160
    int _allowsCellularOverride;	// 356 = 0x164
    int _networkServiceType;	// 360 = 0x168
    NSDictionary *_legacySocketStreamProperties;	// 368 = 0x170
    _Bool _betterRouteDiscovered;	// 376 = 0x178
    NSData *__TCPConnectionMetadata;	// 384 = 0x180
    NSData *__initialDataPayload;	// 392 = 0x188
    _Bool _didIssueCancel;	// 400 = 0x190
    NSUUID *_uniqueIdentifier;	// 408 = 0x198
    float priority;	// 416 = 0x1a0
}

@property(readonly, copy) NSUUID *_uniqueIdentifier; // @synthesize _uniqueIdentifier;
@property(copy) NSData *_initialDataPayload; // @synthesize _initialDataPayload=__initialDataPayload;
@property(copy) NSData *_TCPConnectionMetadata; // @synthesize _TCPConnectionMetadata=__TCPConnectionMetadata;
@property long long countOfBytesExpectedToReceive; // @synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend; // @synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend;
@property long long countOfBytesClientExpectsToReceive; // @synthesize countOfBytesClientExpectsToReceive=_countOfBytesClientExpectsToReceive;
@property long long countOfBytesClientExpectsToSend; // @synthesize countOfBytesClientExpectsToSend=_countOfBytesClientExpectsToSend;
@property(copy) NSURLResponse *response; // @synthesize response=_response;
@property(copy) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(copy) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
- (void)setPriority:(float)arg1;	// IMP=0x0000000000208bfb
- (float)priority;	// IMP=0x0000000000208be9
@property(copy) NSString *taskDescription; // @synthesize taskDescription=_taskDescription;
@property(copy) NSError *error; // @synthesize error=_error;
@property long long state; // @synthesize state=_state;
@property(readonly) _Bool _goneSecure; // @synthesize _goneSecure;
@property long long countOfBytesSent; // @synthesize countOfBytesSent=_countOfBytesSent;
@property long long countOfBytesReceived; // @synthesize countOfBytesReceived=_countOfBytesReceived;
@property unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
- (id)_legacySocketStreamProperties;	// IMP=0x0000000000208ae3
- (void)set_legacySocketStreamProperties:(id)arg1;	// IMP=0x0000000000208aa3
- (int)_networkServiceType;	// IMP=0x0000000000208a93
- (void)set_networkServiceType:(int)arg1;	// IMP=0x0000000000208a83
- (int)_allowsCellularOverride;	// IMP=0x0000000000208a73
- (void)set_allowsCellularOverride:(int)arg1;	// IMP=0x0000000000208a63
- (int)_allowsConstrainedOverride;	// IMP=0x0000000000208a53
- (void)set_allowsConstrainedOverride:(int)arg1;	// IMP=0x0000000000208a43
- (int)_allowsExpensiveOverride;	// IMP=0x0000000000208a33
- (void)set_allowsExpensiveOverride:(int)arg1;	// IMP=0x0000000000208a23
- (_Bool)_disallowCellular;	// IMP=0x0000000000208a13
- (void)set_disallowCellular:(_Bool)arg1;	// IMP=0x0000000000208a03
- (id)_boundInterfaceIdentifier;	// IMP=0x00000000002089e5
- (void)set_boundInterfaceIdentifier:(id)arg1;	// IMP=0x00000000002089a5
- (double)_timeWindowDuration;	// IMP=0x0000000000208993
- (void)set_timeWindowDuration:(double)arg1;	// IMP=0x0000000000208981
- (double)_timeWindowDelay;	// IMP=0x000000000020896f
- (void)set_timeWindowDelay:(double)arg1;	// IMP=0x000000000020895d
- (long long)_expectedWorkload;	// IMP=0x000000000020894c
- (void)set_expectedWorkload:(long long)arg1;	// IMP=0x000000000020893b
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000208930
- (void)_task_onqueue_didFinish;	// IMP=0x000000000020892a
- (void)_onSessionQueue_cleanupAndBreakCycles;	// IMP=0x00000000002088d7
- (void)_onSessionQueue_disavow;	// IMP=0x00000000002088a7
- (void)copyStreamProperty:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000208888
- (void)stopSecureConnection;	// IMP=0x000000000020882f
- (void)startSecureConnection;	// IMP=0x00000000002087d6
- (void)closeRead;	// IMP=0x000000000020877d
- (void)closeWrite;	// IMP=0x0000000000208724
- (void)captureStreams;	// IMP=0x00000000002086cb
- (void)writeData:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000020864d
- (void)readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002085bd
- (void)cancel;	// IMP=0x00000000002084b8
- (void)_onqueue_resume;	// IMP=0x0000000000208440
- (void)resume;	// IMP=0x000000000020839f
- (void)suspend;	// IMP=0x00000000002082fe
- (id)description;	// IMP=0x0000000000208052
- (struct __CFDictionary *)_copySocketStreamProperties;	// IMP=0x000000000020739b
- (_Bool)_cacheOnly;	// IMP=0x0000000000207393
- (long long)computeAdjustedPoolPriority;	// IMP=0x0000000000207336
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020732b
- (void)dealloc;	// IMP=0x0000000000207183
- (id)workQueue;	// IMP=0x0000000000207144
- (id)initWithNetService:(id)arg1 taskGroup:(id)arg2 disavow:(CDUnknownBlockType)arg3;	// IMP=0x000000000020710b
- (id)initWithHost:(id)arg1 port:(long long)arg2 taskGroup:(id)arg3 disavow:(CDUnknownBlockType)arg4;	// IMP=0x00000000002070c3
- (id)_initWithExistingTask:(id)arg1 disavow:(CDUnknownBlockType)arg2;	// IMP=0x0000000000206fa7
- (void)_adoptEffectiveConfiguration:(id)arg1;	// IMP=0x0000000000206fa1
- (id)_effectiveConfiguration;	// IMP=0x0000000000206f76

// Remaining properties
@property double _timeoutIntervalForResource; // @dynamic _timeoutIntervalForResource;

@end

