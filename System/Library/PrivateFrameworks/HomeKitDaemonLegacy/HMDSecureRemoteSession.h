//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

#import <HomeKitDaemonLegacy/HMDSecureRemoteStreamDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMFDumpState-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>

@class HMDAccountRegistry, HMDDevice, HMDRemoteDeviceMonitor, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDSecureRemoteSession : HMFMessageTransport <HMDSecureRemoteStreamDelegate, HMFLogging, HMFTimerDelegate, HMFDumpState>
{
    _Bool _reachable;	// 8 = 0x8
    HMDDevice *_device;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_clientQueue;	// 24 = 0x18
    HMDRemoteDeviceMonitor *_deviceMonitor;	// 32 = 0x20
    HMDAccountRegistry *_accountRegistry;	// 40 = 0x28
    unsigned long long _maximumRemoteStreams;	// 48 = 0x30
    NSMutableArray *_pendingMessages;	// 56 = 0x38
    NSMutableArray *_clientStreams;	// 64 = 0x40
    NSMutableArray *_serverStreams;	// 72 = 0x48
    long long _state;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x000000000036f4ed
+ (_Bool)isSecureRemoteSessionMessage:(id)arg1;	// IMP=0x000000000036f462
- (void).cxx_destruct;	// IMP=0x000000000036ceac
@property(nonatomic, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSMutableArray *serverStreams; // @synthesize serverStreams=_serverStreams;
@property(readonly, nonatomic) NSMutableArray *clientStreams; // @synthesize clientStreams=_clientStreams;
@property(readonly, nonatomic) NSMutableArray *pendingMessages; // @synthesize pendingMessages=_pendingMessages;
@property(nonatomic) unsigned long long maximumRemoteStreams; // @synthesize maximumRemoteStreams=_maximumRemoteStreams;
@property(readonly, nonatomic) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
@property(readonly, nonatomic) HMDRemoteDeviceMonitor *deviceMonitor; // @synthesize deviceMonitor=_deviceMonitor;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly) HMDDevice *device; // @synthesize device=_device;
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000036c987
- (id)logIdentifier;	// IMP=0x000000000036c90d
- (id)dumpState;	// IMP=0x000000000036c832
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x000000000036c66e
- (void)secureRemoteStream:(id)arg1 receivedRequestToSendMessage:(id)arg2;	// IMP=0x000000000036c477
- (void)secureRemoteStream:(id)arg1 didCloseWithError:(id)arg2;	// IMP=0x000000000036c39b
- (void)secureRemoteStreamIsIdle:(id)arg1;	// IMP=0x000000000036c2ea
- (void)_closeServerStream:(id)arg1 error:(id)arg2;	// IMP=0x000000000036bce7
- (void)_openServerStreamWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000036b9c7
- (void)_closeClientStream:(id)arg1 error:(id)arg2;	// IMP=0x000000000036b3e5
- (void)_openClientStreamWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000036ad87
- (id)_serverStreamWithIdentifier:(id)arg1;	// IMP=0x000000000036abb4
- (id)_clientStreamForMessage:(id)arg1;	// IMP=0x000000000036a9c8
- (id)_clientStreamWithIdentiifer:(id)arg1;	// IMP=0x000000000036a7f5
- (void)handleDeviceIsNotReachable:(id)arg1;	// IMP=0x000000000036a713
- (void)handleDeviceIsReachable:(id)arg1;	// IMP=0x000000000036a631
- (void)_handleStreamInvalidationMessage:(id)arg1;	// IMP=0x000000000036a11b
- (void)_handleSecureServerMessage:(id)arg1 fromDevice:(id)arg2 transport:(id)arg3;	// IMP=0x0000000000369e07
- (void)_handleSecureClientMessage:(id)arg1 fromDevice:(id)arg2 transport:(id)arg3;	// IMP=0x0000000000369ab3
- (void)receivedSecureMessage:(id)arg1 fromDevice:(id)arg2 fromTransport:(id)arg3;	// IMP=0x0000000000369963
- (id)_dequeMessage;	// IMP=0x0000000000369761
- (void)_queueMessage:(id)arg1;	// IMP=0x0000000000369283
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000369163
- (void)_closeWithError:(id)arg1;	// IMP=0x0000000000368a70
- (void)close;	// IMP=0x00000000003689ff
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000036894e
- (void)dealloc;	// IMP=0x0000000000368828
- (id)initWithDevice:(id)arg1 deviceMonitor:(id)arg2 accountRegistry:(id)arg3;	// IMP=0x000000000036847b
- (id)init;	// IMP=0x00000000003683d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
