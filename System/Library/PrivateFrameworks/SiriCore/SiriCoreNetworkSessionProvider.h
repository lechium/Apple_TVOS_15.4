//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriCore/NSStreamDelegate-Protocol.h>
#import <SiriCore/NSURLSessionDelegate-Protocol.h>
#import <SiriCore/SiriCoreConnectionProvider-Protocol.h>

@class NSInputStream, NSOperationQueue, NSOutputStream, NSString, NSURL, NSURLSession, NSURLSessionStreamTask, SAConnectionPolicy, SAConnectionPolicyRoute, SiriCoreConnectionType;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, SiriCoreConnectionProviderDelegate;

@interface SiriCoreNetworkSessionProvider : NSObject <NSURLSessionDelegate, NSStreamDelegate, SiriCoreConnectionProvider>
{
    id <SiriCoreConnectionProviderDelegate> _delegate;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    SAConnectionPolicyRoute *_route;	// 24 = 0x18
    SAConnectionPolicy *_policy;	// 32 = 0x20
    _Bool _prefersWWAN;	// 40 = 0x28
    _Bool _connectByPOPEnabled;	// 41 = 0x29
    _Bool _isMPTCP;	// 42 = 0x2a
    SiriCoreConnectionType *_connectionType;	// 48 = 0x30
    int _interfaceIndex;	// 56 = 0x38
    NSString *_interfaceName;	// 64 = 0x40
    _Bool _isCanceled;	// 72 = 0x48
    _Bool _isEstablishing;	// 73 = 0x49
    _Bool _isReady;	// 74 = 0x4a
    NSURLSession *_urlSession;	// 80 = 0x50
    NSOperationQueue *_opQueue;	// 88 = 0x58
    NSURLSessionStreamTask *_streamTask;	// 96 = 0x60
    CDUnknownBlockType _completion_block;	// 104 = 0x68
    NSString *_resolvedHost;	// 112 = 0x70
    NSString *_connectionId;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_queue;	// 128 = 0x80
    unsigned char _readBuffer[10240];	// 136 = 0x88
    NSInputStream *_inputStream;	// 10376 = 0x2888
    NSObject<OS_dispatch_group> *_readGroup;	// 10384 = 0x2890
    _Bool _waitingOnReadGroup;	// 10392 = 0x2898
    NSOutputStream *_outputStream;	// 10400 = 0x28a0
    NSObject<OS_dispatch_source> *_openTimer;	// 10408 = 0x28a8
    NSObject<OS_dispatch_source> *_staleConnectionTimer;	// 10416 = 0x28b0
    unsigned long long _readWriteCounter;	// 10424 = 0x28b8
    double _staleConnectionInterval;	// 10432 = 0x28c0
}

+ (void)getMetricsContext:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e2e1
- (void).cxx_destruct;	// IMP=0x0000000000011275
- (void)writeData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001102c
- (void)readData:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010e8b
- (void)setStaleInterval:(double)arg1;	// IMP=0x0000000000010e7d
- (void)setConnectByPOPMethod:(_Bool)arg1;	// IMP=0x0000000000010e74
- (void)setPrefersWWAN:(_Bool)arg1;	// IMP=0x0000000000010e6b
- (void)setProviderConnectionPolicy:(id)arg1;	// IMP=0x0000000000010e3e
- (void)setPolicyRoute:(id)arg1;	// IMP=0x0000000000010e11
- (void)setRetransmitConnectionDropTime:(double)arg1;	// IMP=0x0000000000010e0b
- (void)setKeepAlive:(double)arg1 withInterval:(double)arg2 withCount:(unsigned long long)arg3;	// IMP=0x0000000000010e05
- (void)setScopeIsWiFiOnly;	// IMP=0x0000000000010dff
- (_Bool)isCanceled;	// IMP=0x0000000000010df6
- (_Bool)isReady;	// IMP=0x0000000000010ded
- (_Bool)isEstablishing;	// IMP=0x0000000000010de4
- (_Bool)isMultipath;	// IMP=0x0000000000010ddb
- (_Bool)shouldFallbackFromError:(id)arg1;	// IMP=0x0000000000010dd3
- (_Bool)isPeerNotNearbyError:(id)arg1;	// IMP=0x0000000000010dcb
- (_Bool)isPeerConnectionError:(id)arg1;	// IMP=0x0000000000010dc3
- (void)_closeWithError:(id)arg1;	// IMP=0x0000000000010b23
- (void)close;	// IMP=0x0000000000010abd
- (id)resolvedHost;	// IMP=0x0000000000010aaf
- (_Bool)providerStatsIndicatePoorLinkQuality;	// IMP=0x0000000000010736
- (void)updateConnectionMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010710
- (id)analysisInfo;	// IMP=0x0000000000010650
- (id)connectionType;	// IMP=0x000000000001028b
- (_Bool)hasActiveConnection;	// IMP=0x000000000001027d
- (void)openConnectionForURL:(id)arg1 withConnectionId:(id)arg2 initialPayload:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000f523
- (void)_cancelOpenTimer;	// IMP=0x000000000000f4e4
- (void)_setupOpenTimer;	// IMP=0x000000000000f293
- (_Bool)supportsInitialPayload;	// IMP=0x000000000000f28b
- (void)_cancelStaleConnectionTimer;	// IMP=0x000000000000f24c
- (void)_setupStaleConnectionTimer;	// IMP=0x000000000000ee90
- (void)_streamDidBecomeUnviable;	// IMP=0x000000000000ed89
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;	// IMP=0x000000000000e829
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x000000000000e6b7
- (void)URLSession:(id)arg1 betterRouteDiscoveredForStreamTask:(id)arg2;	// IMP=0x000000000000e632
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x000000000000e47f
- (void)_invokeOpenCompletionWithError:(id)arg1;	// IMP=0x000000000000e411
- (_Bool)shouldFallbackQuickly;	// IMP=0x000000000000e409
- (id)headerDataWithForceReconnect:(_Bool)arg1;	// IMP=0x000000000000e401
- (void)setDelegate:(id)arg1;	// IMP=0x000000000000e3f0
- (id)delegate;	// IMP=0x000000000000e3da
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000000e2f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
