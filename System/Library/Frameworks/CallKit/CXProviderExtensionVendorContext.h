//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/CXProviderHostProtocol-Protocol.h>
#import <CallKit/CXProviderVendorProtocol-Protocol.h>

@class NSString;
@protocol CXProviderExtensionVendorContextDelegate;

@interface CXProviderExtensionVendorContext <CXProviderHostProtocol, CXProviderVendorProtocol>
{
    id <CXProviderExtensionVendorContextDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001ceb4
@property(nonatomic) __weak id <CXProviderExtensionVendorContextDelegate> delegate; // @synthesize delegate=_delegate;
- (oneway void)handleAudioSessionActivationStateChangedTo:(_Bool)arg1;	// IMP=0x000000000001cd98
- (oneway void)handleActionTimeout:(id)arg1;	// IMP=0x000000000001cc9e
- (oneway void)commitTransaction:(id)arg1;	// IMP=0x000000000001cba4
- (oneway void)actionCompleted:(id)arg1;	// IMP=0x000000000001caad
- (oneway void)requestTransaction:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c99b
- (oneway void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3;	// IMP=0x000000000001c847
- (oneway void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3;	// IMP=0x000000000001c7c5
- (oneway void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3;	// IMP=0x000000000001c737
- (oneway void)reportAudioFinishedForCallWithUUID:(id)arg1;	// IMP=0x000000000001c61c
- (oneway void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4;	// IMP=0x000000000001c491
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;	// IMP=0x000000000001c350
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;	// IMP=0x000000000001c20f
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;	// IMP=0x000000000001c0ce
- (oneway void)reportCallWithUUID:(id)arg1 updated:(id)arg2;	// IMP=0x000000000001bf8d
- (oneway void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001be2d
- (oneway void)registerWithConfiguration:(id)arg1;	// IMP=0x000000000001bd36
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001bcf8
- (id)remoteObjectProxy;	// IMP=0x000000000001bcba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
