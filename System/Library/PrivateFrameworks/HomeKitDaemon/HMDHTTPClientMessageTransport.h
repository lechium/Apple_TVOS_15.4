//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFHTTPClientDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFNetServiceDelegate-Protocol.h>

@class HMDHTTPDevice, HMFHTTPClient, HMFNetService, NSString, NSUUID;
@protocol HMDHTTPClientMessageTransportDelegate, HMFLocking;

@interface HMDHTTPClientMessageTransport : HMFObject <HMFHTTPClientDelegate, HMFLogging, HMFNetServiceDelegate, HMFDumpState>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    _Bool _running;	// 16 = 0x10
    NSUUID *_sessionIdentifier;	// 24 = 0x18
    id <HMDHTTPClientMessageTransportDelegate> _delegate;	// 32 = 0x20
    NSUUID *_identifier;	// 40 = 0x28
    HMFNetService *_netService;	// 48 = 0x30
    HMDHTTPDevice *_remoteDevice;	// 56 = 0x38
    HMFHTTPClient *_client;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x0000000000b24520
+ (id)shortDescription;	// IMP=0x0000000000b2450e
- (void).cxx_destruct;	// IMP=0x0000000000b23274
@property(readonly, nonatomic) HMFHTTPClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) HMDHTTPDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(readonly, nonatomic) HMFNetService *netService; // @synthesize netService=_netService;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDHTTPClientMessageTransportDelegate> delegate; // @synthesize delegate=_delegate;
- (id)dumpState;	// IMP=0x0000000000b230ce
- (void)netService:(id)arg1 didUpdateTXTRecord:(id)arg2;	// IMP=0x0000000000b22e73
- (id)logIdentifier;	// IMP=0x0000000000b22df9
- (void)clientDidBecomeUnreachable:(id)arg1;	// IMP=0x0000000000b22d90
- (void)client:(id)arg1 didRequestPingWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b22d02
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000b22af6
- (void)sendPingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000b2287c
- (void)sendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b2242a
- (void)_sendResponseMessage:(id)arg1 forTransactionIdentifier:(id)arg2;	// IMP=0x0000000000b220c8
- (void)_receiveMessage;	// IMP=0x0000000000b21e1f
- (void)_stopWithError:(id)arg1;	// IMP=0x0000000000b21c89
- (void)stop;	// IMP=0x0000000000b21c75
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000b21b64
@property(readonly, nonatomic, getter=isReachable) _Bool reachable;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(readonly, copy) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x0000000000b2165c
- (id)shortDescription;	// IMP=0x0000000000b2159a
- (void)dealloc;	// IMP=0x0000000000b21520
- (id)initWithIdentifier:(id)arg1 netService:(id)arg2;	// IMP=0x0000000000b21127
- (id)init;	// IMP=0x0000000000b2107f

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

