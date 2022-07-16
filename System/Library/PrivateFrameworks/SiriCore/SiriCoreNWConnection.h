//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriCore/SiriCoreConnectionProvider-Protocol.h>

@class NSArray, NSError, NSString, NSURL, SAConnectionPolicy, SAConnectionPolicyRoute, SiriCoreConnectionMetrics, SiriCoreConnectionType;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_nw_connection, OS_nw_content_context, OS_nw_endpoint, SiriCoreConnectionProviderDelegate;

@interface SiriCoreNWConnection : NSObject <SiriCoreConnectionProvider>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <SiriCoreConnectionProviderDelegate> _delegate;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    NSString *_resolvedHost;	// 32 = 0x20
    NSObject<OS_nw_connection> *_connection;	// 40 = 0x28
    NSObject<OS_nw_endpoint> *_endpoint;	// 48 = 0x30
    NSObject<OS_nw_content_context> *_content_context;	// 56 = 0x38
    SAConnectionPolicyRoute *_route;	// 64 = 0x40
    SAConnectionPolicy *_policy;	// 72 = 0x48
    _Bool _prefersWWAN;	// 80 = 0x50
    _Bool _connectByPOPEnabled;	// 81 = 0x51
    _Bool _isMPTCP;	// 82 = 0x52
    _Bool _isCanceled;	// 83 = 0x53
    _Bool _isEstablishing;	// 84 = 0x54
    _Bool _isReady;	// 85 = 0x55
    _Bool _usingTLS;	// 86 = 0x56
    NSString *_connectionId;	// 88 = 0x58
    SiriCoreConnectionType *_connectionType;	// 96 = 0x60
    int _interfaceIndex;	// 104 = 0x68
    CDUnknownBlockType _openCompletion;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_openTimer;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_staleConnectionTimer;	// 128 = 0x80
    unsigned long long _readWriteCounter;	// 136 = 0x88
    NSObject<OS_dispatch_source> *_connectionUnviableTimer;	// 144 = 0x90
    unsigned long long _betterPathAvailableNotificationMachTime;	// 152 = 0x98
    NSArray *_attemptedEndpoints;	// 160 = 0xa0
    _Bool _isViable;	// 168 = 0xa8
    _Bool _scopeToWiFiOnly;	// 169 = 0xa9
    SiriCoreConnectionMetrics *_metrics;	// 176 = 0xb0
    double _keepaliveIdleTime;	// 184 = 0xb8
    double _keepaliveIntervalTime;	// 192 = 0xc0
    double _retransmissionBasedConnectionDropTime;	// 200 = 0xc8
    unsigned long long _keepaliveUnackedCount;	// 208 = 0xd0
    double _staleConnectionInterval;	// 216 = 0xd8
    NSError *_mostRecentErrorFromNWConnection;	// 224 = 0xe0
}

+ (void)getMetricsContext:(CDUnknownBlockType)arg1;	// IMP=0x00000000000303e0
- (void).cxx_destruct;	// IMP=0x0000000000035309
- (void)_addCorrespondingMetricsFromConnection:(id)arg1 inState:(int)arg2;	// IMP=0x00000000000343cc
- (id)_getAttemptedEndpoints;	// IMP=0x0000000000034194
- (_Bool)providerStatsIndicatePoorLinkQuality;	// IMP=0x0000000000033c0d
- (id)_setParametersForHost:(const char *)arg1 useTLS:(_Bool)arg2 initialPayload:(id)arg3;	// IMP=0x000000000003370d
- (id)resolvedHost;	// IMP=0x00000000000336ff
- (void)setRetransmitConnectionDropTime:(double)arg1;	// IMP=0x00000000000336f1
- (void)setKeepAlive:(double)arg1 withInterval:(double)arg2 withCount:(unsigned long long)arg3;	// IMP=0x00000000000336d4
- (void)setScopeIsWiFiOnly;	// IMP=0x00000000000336c7
- (_Bool)shouldFallbackFromError:(id)arg1;	// IMP=0x00000000000336bf
- (_Bool)isCanceled;	// IMP=0x00000000000336b6
- (_Bool)isReady;	// IMP=0x00000000000336ad
- (_Bool)isEstablishing;	// IMP=0x00000000000336a4
- (_Bool)isMultipath;	// IMP=0x000000000003369b
- (_Bool)isPeerNotNearbyError:(id)arg1;	// IMP=0x0000000000033693
- (_Bool)isPeerConnectionError:(id)arg1;	// IMP=0x000000000003368b
- (void)close;	// IMP=0x0000000000033628
- (void)_receivedBetterRouteNotification:(_Bool)arg1;	// IMP=0x00000000000335e9
- (void)_receivedViabilityChangeNotification:(_Bool)arg1;	// IMP=0x0000000000033588
- (void)_closeWithError:(id)arg1;	// IMP=0x0000000000032f5b
- (void)updateConnectionMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032a87
- (id)analysisInfo;	// IMP=0x000000000003298e
- (id)connectionType;	// IMP=0x000000000003264d
- (id)_sendBufferBytesRemaining:(id)arg1;	// IMP=0x0000000000032632
- (_Bool)supportsInitialPayload;	// IMP=0x000000000003262a
- (_Bool)shouldFallbackQuickly;	// IMP=0x0000000000032622
- (id)headerDataWithForceReconnect:(_Bool)arg1;	// IMP=0x000000000003261a
- (void)writeData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032369
- (void)readData:(CDUnknownBlockType)arg1;	// IMP=0x00000000000320b1
- (_Bool)hasActiveConnection;	// IMP=0x00000000000320a3
- (void)_cancelOpenTimer;	// IMP=0x000000000003206d
- (void)_setupOpenTimer;	// IMP=0x0000000000031d9e
- (void)_configureConnection:(id)arg1;	// IMP=0x000000000003108a
- (void)openConnectionForURL:(id)arg1 withConnectionId:(id)arg2 initialPayload:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000030d9c
- (void)_getNWConnectionWithInitialData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000309a2
- (void)_cancelStaleConnectionTimer;	// IMP=0x0000000000030963
- (void)_setupStaleConnectionTimer;	// IMP=0x0000000000030621
- (void)_cancelConnectionUnviableTimer;	// IMP=0x00000000000305e2
- (void)_startConnectionUnviableTimer;	// IMP=0x0000000000030415
- (_Bool)_connectByPOPMethod;	// IMP=0x000000000003040c
- (id)_connectionId;	// IMP=0x00000000000303fe
- (id)_url;	// IMP=0x00000000000303f0
- (id)delegate;	// IMP=0x00000000000303ca
- (void)setStaleInterval:(double)arg1;	// IMP=0x00000000000303bc
- (void)setConnectByPOPMethod:(_Bool)arg1;	// IMP=0x00000000000303b3
- (void)setPrefersWWAN:(_Bool)arg1;	// IMP=0x00000000000303aa
- (void)setProviderConnectionPolicy:(id)arg1;	// IMP=0x000000000003037d
- (void)setPolicyRoute:(id)arg1;	// IMP=0x0000000000030350
- (void)setDelegate:(id)arg1;	// IMP=0x000000000003033f
- (void)_invokeOpenCompletionWithError:(id)arg1;	// IMP=0x00000000000302d1
- (id)_queue;	// IMP=0x00000000000302c3
- (void)dealloc;	// IMP=0x0000000000030283
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000030211

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

