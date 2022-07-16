//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/CXProviderHostProtocol-Protocol.h>
#import <CallKit/CXProviderVendorProtocol-Protocol.h>

@class NSString;
@protocol CXProviderHostProtocol;

@interface CXProviderExtensionHostContext <CXProviderVendorProtocol, CXProviderHostProtocol>
{
    id <CXProviderHostProtocol> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000a3f5
@property(nonatomic) __weak id <CXProviderHostProtocol> delegate; // @synthesize delegate=_delegate;
- (oneway void)actionCompleted:(id)arg1;	// IMP=0x000000000000a356
- (oneway void)requestTransaction:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a2d0
- (oneway void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3;	// IMP=0x000000000000a242
- (oneway void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3;	// IMP=0x000000000000a1c0
- (oneway void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3;	// IMP=0x000000000000a132
- (oneway void)reportAudioFinishedForCallWithUUID:(id)arg1;	// IMP=0x000000000000a0c0
- (oneway void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4;	// IMP=0x000000000000a01b
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;	// IMP=0x0000000000009f95
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;	// IMP=0x0000000000009f0f
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;	// IMP=0x0000000000009e89
- (oneway void)reportCallWithUUID:(id)arg1 updated:(id)arg2;	// IMP=0x0000000000009e03
- (oneway void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009d69
- (oneway void)registerWithConfiguration:(id)arg1;	// IMP=0x0000000000009cf7
- (oneway void)handleAudioSessionActivationStateChangedTo:(_Bool)arg1;	// IMP=0x0000000000009c1d
- (oneway void)handleActionTimeout:(id)arg1;	// IMP=0x0000000000009b38
- (oneway void)commitTransaction:(id)arg1;	// IMP=0x0000000000009a53
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009a15
- (id)remoteObjectProxy;	// IMP=0x00000000000099d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

