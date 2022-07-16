//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteTextInput/RTIInputSystemPayloadDelegate-Protocol.h>
#import <RemoteTextInput/RTIInputSystemSessionProtocol-Protocol.h>

@class NSObject, NSString, NSXPCConnection, RTIDataPayload;
@protocol OS_dispatch_queue;

@interface RTIInputSystemServiceSession <RTIInputSystemSessionProtocol, RTIInputSystemPayloadDelegate>
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    _Bool _isPaused;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
}

+ (id)sessionWithConnection:(id)arg1;	// IMP=0x000000000000334d
- (void).cxx_destruct;	// IMP=0x00000000000051cc
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
- (void)handleTextActionPayload:(id)arg1;	// IMP=0x0000000000004f30
- (oneway void)remoteTextInputSessionWithID:(id)arg1 didChangePause:(_Bool)arg2 withReason:(id)arg3;	// IMP=0x0000000000004c93
- (oneway void)remoteTextInputSessionWithID:(id)arg1 documentTraitsDidChange:(id)arg2;	// IMP=0x0000000000004947
- (oneway void)endRemoteTextInputSessionWithID:(id)arg1;	// IMP=0x0000000000004736
- (oneway void)remoteTextInputSessionWithID:(id)arg1 documentDidChange:(id)arg2;	// IMP=0x00000000000044fa
- (oneway void)beginRemoteTextInputSessionWithID:(id)arg1 documentTraits:(id)arg2 initialDocumentState:(id)arg3;	// IMP=0x00000000000041d4
@property(readonly, copy, nonatomic) RTIDataPayload *currentDataPayload;
- (void)_updateAppIdsFromConnectionOnInternalQueueWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003aca
- (void)flushOperationsWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000038a0
- (void)flushOperations;	// IMP=0x0000000000003712
- (void)_killConnectionWithCallback;	// IMP=0x0000000000003674
- (void)didInitializeWithConnection:(id)arg1;	// IMP=0x000000000000366e
- (void)dealloc;	// IMP=0x0000000000003625
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000000003396

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
