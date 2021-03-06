//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CFNetworkTimer, NSData, NSMutableArray, NSObject, __NSCFURLLocalStreamTaskWorkRead, __NSCFURLLocalStreamTaskWorkWrite;
@protocol OS_dispatch_queue;

@interface __NSCFTCPIOStreamTask
{
    CDUnknownBlockType _disavow;	// 8 = 0x8
    struct shared_ptr<TCPIO_EstablishBase> _establish;	// 16 = 0x10
    struct shared_ptr<TransportConnectionObjCPP> _ios;	// 32 = 0x20
    unsigned char _captureStreamsUponCompletion;	// 48 = 0x30
    unsigned char _secure;	// 49 = 0x31
    NSData *__initialDataPayload;	// 56 = 0x38
    struct shared_ptr<HTTPProtocol> _httpProtocol;	// 64 = 0x40
    NSMutableArray *_pendingWork;	// 80 = 0x50
    NSMutableArray *_completedSuspendedWork;	// 88 = 0x58
    _Bool _doingWorkOnThisQueue;	// 96 = 0x60
    int _connectionState;	// 100 = 0x64
    _Bool _goneSecure;	// 104 = 0x68
    _Bool _streamsCaptured;	// 105 = 0x69
    CDStruct_59046461 _readError;	// 112 = 0x70
    _Bool _readInProgress;	// 128 = 0x80
    _Bool _readClosed;	// 129 = 0x81
    CDStruct_59046461 _writeError;	// 136 = 0x88
    _Bool _writeEOF;	// 152 = 0x98
    _Bool _writeInProgress;	// 153 = 0x99
    _Bool _writeClosed;	// 154 = 0x9a
    _Bool _receivedServerTrustChallenge;	// 155 = 0x9b
    _Bool _receivedEof;	// 156 = 0x9c
    CFNetworkTimer *_writeTimer;	// 160 = 0xa0
    CFNetworkTimer *_readTimer;	// 168 = 0xa8
    __NSCFURLLocalStreamTaskWorkWrite *_currentWriteTask;	// 176 = 0xb0
    __NSCFURLLocalStreamTaskWorkRead *_currentReadTask;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_workQueueForStreamTask;	// 192 = 0xc0
}

- (id).cxx_construct;	// IMP=0x0000000000115d2e
- (void).cxx_destruct;	// IMP=0x0000000000115cee
@property(copy) NSData *_initialDataPayload; // @synthesize _initialDataPayload=__initialDataPayload;
- (void)_onSessionQueue_cleanupAndBreakCycles;	// IMP=0x0000000000115c22
- (void)_onSessionQueue_disavow;	// IMP=0x0000000000115be6
- (void)_onqueue_adjustLoadingPoolPriority;	// IMP=0x0000000000115bd0
- (void)_onqueue_adjustPoolPriority;	// IMP=0x0000000000115bba
- (void)_onqueue_suspend;	// IMP=0x0000000000115b6b
- (void)_onqueue_connectionEstablishedWithError:(CDStruct_59046461)arg1 callbackReferent:(id)arg2;	// IMP=0x00000000001155d9
- (void)_onqueue_cleanUpConnectionEstablishmentState;	// IMP=0x000000000011542e
- (void)_onqueue_tlsDisabled;	// IMP=0x00000000001153bb
- (void)_onqueue_tlsCompletion;	// IMP=0x0000000000115348
- (void)_onqueue_setTransportConnection:(shared_ptr_8da4e70b)arg1;	// IMP=0x00000000001151e3
- (void)_onqueue_postConnectConfiguration:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001151d8
- (void)_onqueue_dealWithSessionClientCertAuth:(long long)arg1 credential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000114f63
- (void)_onqueue_needClientCert:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000114ec1
- (void)_onqueue_needServerTrust:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000114e0d
- (_Bool)_onqueue_sendSessionChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000114d4e
- (void)_onqueue_dealWithSessionTrustAuth:(long long)arg1 credential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000114cda
- (void)_onqueue_preConnectionConfiguration:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000114b92
- (void)_task_onqueue_didFinish;	// IMP=0x0000000000114b8c
- (void)cancel;	// IMP=0x0000000000114b33
- (void)_onqueue_checkForCompletion;	// IMP=0x00000000001149ab
- (void)_onqueue_cancel;	// IMP=0x0000000000114900
- (void)_onqueue_resume;	// IMP=0x000000000011440e
- (_Bool)_onqueue_usingProxy;	// IMP=0x000000000011422b
- (id)_onqueue_errorOrCancelError;	// IMP=0x00000000001141b7
- (void)_onqueue_processReadWork:(id)arg1;	// IMP=0x0000000000113ffc
- (void)_onqueue_processWriteWork:(id)arg1;	// IMP=0x0000000000113e56
- (void)_onqueue_callbackCompletedWork;	// IMP=0x0000000000113cae
- (void)_onqueue_timeoutOccured;	// IMP=0x0000000000113b9b
- (void)_onqueue_ioTick;	// IMP=0x000000000011380e
- (_Bool)shouldDoWorkConsideringTlsState;	// IMP=0x00000000001137e9
- (void)_onqueue_addBlockOp:(CDUnknownBlockType)arg1 description:(const char *)arg2 shouldWaitForTls:(_Bool)arg3;	// IMP=0x000000000011379b
- (void)_onqueue_addBlockOp:(CDUnknownBlockType)arg1 description:(const char *)arg2;	// IMP=0x000000000011375f
- (void)_onqueue_captureStreams;	// IMP=0x00000000001136c3
- (void)_onqueue_closeWrite;	// IMP=0x0000000000113631
- (void)_onqueue_closeRead;	// IMP=0x000000000011359f
- (void)_onqueue_startSecureConnection;	// IMP=0x0000000000113527
- (void)_onqueue_stopSecureConnection;	// IMP=0x00000000001134af
- (void)stopSecureConnection;	// IMP=0x00000000001133fa
- (void)startSecureConnection;	// IMP=0x00000000001132ed
- (void)copyStreamProperty:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011327e
- (void)closeRead;	// IMP=0x00000000001131c9
- (void)closeWrite;	// IMP=0x0000000000113114
- (void)captureStreams;	// IMP=0x000000000011301a
- (void)writeData:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000112f9c
- (void)readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000112f13
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000112f08
- (void)dealloc;	// IMP=0x0000000000112e0e
- (id)initWithTask:(id)arg1 connection:(shared_ptr_8da4e70b)arg2 extraBytes:(id)arg3 disavow:(CDUnknownBlockType)arg4;	// IMP=0x0000000000112a5b
- (id)workQueue;	// IMP=0x0000000000112a1c
- (id)initWithHost:(id)arg1 port:(long long)arg2 taskGroup:(id)arg3 disavow:(CDUnknownBlockType)arg4;	// IMP=0x0000000000112582
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000000112527

@end

