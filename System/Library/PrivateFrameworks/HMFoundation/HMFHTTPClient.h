//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFLogging-Protocol.h>
#import <HMFoundation/HMFNetMonitorDelegate-Protocol.h>
#import <HMFoundation/HMFTimerDelegate-Protocol.h>
#import <HMFoundation/NSURLSessionDelegate-Protocol.h>

@class HMFHTTPClientConfiguration, HMFNetManager, HMFNetMonitor, HMFNetService, HMFTimer, NSObject, NSOperationQueue, NSString, NSURL, NSURLSession;
@protocol HMFHTTPClientDelegate, OS_dispatch_queue;

@interface HMFHTTPClient <HMFLogging, HMFNetMonitorDelegate, HMFTimerDelegate, NSURLSessionDelegate>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _reachable;	// 24 = 0x18
    _Bool _pinging;	// 25 = 0x19
    _Bool _allowAnonymousConnection;	// 26 = 0x1a
    _Bool _active;	// 27 = 0x1b
    HMFHTTPClientConfiguration *_configuration;	// 32 = 0x20
    NSURL *_baseURL;	// 40 = 0x28
    id <HMFHTTPClientDelegate> _delegate;	// 48 = 0x30
    HMFNetService *_netService;	// 56 = 0x38
    NSURLSession *_session;	// 64 = 0x40
    HMFNetMonitor *_reachabilityMonitor;	// 72 = 0x48
    NSOperationQueue *_reachabilityProbeQueue;	// 80 = 0x50
    HMFNetManager *_netManager;	// 88 = 0x58
    HMFTimer *_delegatedPingTimer;	// 96 = 0x60
    CDUnknownBlockType _timerFactory;	// 104 = 0x68
}

+ (id)logCategory;	// IMP=0x000000000003392e
+ (id)baseURLWithScheme:(id)arg1 hostAddress:(id)arg2 port:(unsigned long long)arg3;	// IMP=0x000000000002f323
- (void).cxx_destruct;	// IMP=0x000000000003474d
@property(copy) CDUnknownBlockType timerFactory; // @synthesize timerFactory=_timerFactory;
@property(retain, nonatomic) HMFTimer *delegatedPingTimer; // @synthesize delegatedPingTimer=_delegatedPingTimer;
@property(readonly, nonatomic) HMFNetManager *netManager; // @synthesize netManager=_netManager;
@property(readonly, nonatomic) NSOperationQueue *reachabilityProbeQueue; // @synthesize reachabilityProbeQueue=_reachabilityProbeQueue;
@property(readonly, nonatomic) HMFNetMonitor *reachabilityMonitor; // @synthesize reachabilityMonitor=_reachabilityMonitor;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) _Bool allowAnonymousConnection; // @synthesize allowAnonymousConnection=_allowAnonymousConnection;
@property(readonly, copy, nonatomic) HMFNetService *netService; // @synthesize netService=_netService;
@property __weak id <HMFHTTPClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000343f7
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x000000000003430d
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000034136
- (void)networkMonitorIsUnreachable:(id)arg1;	// IMP=0x0000000000033fca
- (void)networkMonitorIsReachable:(id)arg1;	// IMP=0x0000000000033aa9
- (id)logIdentifier;	// IMP=0x0000000000033995
- (void)resolveWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000033716
- (void)invalidate;	// IMP=0x00000000000335bf
- (void)cancelPendingRequests;	// IMP=0x00000000000331b4
- (void)_sendRequest:(id)arg1 baseURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000032687
- (void)sendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031dc7
- (void)stopDelegatedPingTimer;	// IMP=0x0000000000031d16
- (void)startDelegatedPingTimer;	// IMP=0x0000000000031ac8
- (_Bool)requestClientReachabilityPingWithRetry:(_Bool)arg1;	// IMP=0x0000000000031638
- (void)startReachabilityProbe;	// IMP=0x0000000000030dba
@property(nonatomic, getter=isPinging) _Bool pinging; // @synthesize pinging=_pinging;
@property(nonatomic, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
@property(readonly, copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, nonatomic) unsigned long long options;
@property(readonly, copy) HMFHTTPClientConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy) NSString *debugDescription;
- (id)attributeDescriptions;	// IMP=0x000000000003049d
- (void)dealloc;	// IMP=0x0000000000030451
- (void)finishCommonInitialization;	// IMP=0x00000000000302ad
- (id)createNSURLSession:(id)arg1;	// IMP=0x000000000003016e
- (id)initWithService:(id)arg1 configuration:(id)arg2 session:(id)arg3 reachabilityMonitor:(id)arg4 netManager:(id)arg5;	// IMP=0x000000000002ff3a
- (id)initWithService:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000002fd45
- (id)initWithNetService:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000002fc93
- (id)initWithBaseURL:(id)arg1 configuration:(id)arg2 session:(id)arg3 reachabilityMonitor:(id)arg4 netManager:(id)arg5;	// IMP=0x000000000002fb20
- (id)initWithBaseURL:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000002f7ea
- (id)initWithBaseURL:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000002f738
- (id)init;	// IMP=0x000000000002f690

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
