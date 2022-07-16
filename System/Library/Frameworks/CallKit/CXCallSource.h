//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallKit/CXProviderHostProtocol-Protocol.h>
#import <CallKit/CXProviderVendorProtocol-Protocol.h>

@class NSString, NSURL;
@protocol CXCallSourceDelegate, CXProviderVendorProtocol, OS_dispatch_queue;

@interface CXCallSource : NSObject <CXProviderHostProtocol, CXProviderVendorProtocol>
{
    _Bool _connected;	// 8 = 0x8
    id <CXCallSourceDelegate> _delegate;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000026d1c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <CXCallSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (oneway void)handleAudioSessionActivationStateChangedTo:(_Bool)arg1;	// IMP=0x0000000000026b62
- (oneway void)handleActionTimeout:(id)arg1;	// IMP=0x00000000000269b0
- (oneway void)commitTransaction:(id)arg1;	// IMP=0x00000000000267fe
- (void)actionCompleted:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026499
- (oneway void)actionCompleted:(id)arg1;	// IMP=0x000000000002647a
- (oneway void)requestTransaction:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026178
- (void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000025d39
- (oneway void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3;	// IMP=0x0000000000025d1a
- (void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000025a60
- (oneway void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3;	// IMP=0x0000000000025a41
- (void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000002576c
- (oneway void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3;	// IMP=0x000000000002574d
- (void)reportAudioFinishedForCallWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000253fe
- (oneway void)reportAudioFinishedForCallWithUUID:(id)arg1;	// IMP=0x00000000000253df
- (void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000025065
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;	// IMP=0x0000000000025046
- (void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024ccc
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;	// IMP=0x0000000000024cad
- (void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024933
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;	// IMP=0x0000000000024914
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000000244ec
- (oneway void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4;	// IMP=0x00000000000244c0
- (void)reportCallWithUUID:(id)arg1 updated:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024032
- (oneway void)reportCallWithUUID:(id)arg1 updated:(id)arg2;	// IMP=0x0000000000024013
- (oneway void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023b94
- (oneway void)registerWithConfiguration:(id)arg1;	// IMP=0x0000000000023a60
- (void)beginWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023a4a
@property(readonly, nonatomic, getter=isPermittedToUseBluetoothAccessories) _Bool permittedToUseBluetoothAccessories;
@property(readonly, nonatomic, getter=isPermittedToUsePrivateAPI) _Bool permittedToUsePrivateAPI;
@property(readonly, nonatomic, getter=isPermittedToUsePublicAPI) _Bool permittedToUsePublicAPI;
@property(readonly, nonatomic) CDStruct_6ad76789 auditToken;
@property(readonly, nonatomic) int processIdentifier;
@property(readonly, copy, nonatomic) NSString *localizedName;
@property(readonly, copy, nonatomic) NSURL *bundleURL;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) id <CXProviderVendorProtocol> vendorProtocolDelegate;
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000000237dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

