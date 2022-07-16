//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUCallCapabilitiesXPCClient-Protocol.h>
#import <TelephonyUtilities/TUCallCapabilitiesXPCServerActions-Protocol.h>

@class NSMapTable, NSString, NSXPCConnection, TUCallCapabilitiesState;
@protocol OS_dispatch_queue;

@interface TUCallCapabilitiesXPCClient : NSObject <TUCallCapabilitiesXPCClient, TUCallCapabilitiesXPCServerActions>
{
    int _token;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSXPCConnection *_xpcConnection;	// 24 = 0x18
    NSMapTable *_delegateToQueue;	// 32 = 0x20
    TUCallCapabilitiesState *_state;	// 40 = 0x28
}

+ (id)callCapabilitiesServerXPCInterface;	// IMP=0x0000000000043ea4
+ (id)callCapabilitiesClientXPCInterface;	// IMP=0x0000000000043e38
+ (void)setSynchronousServer:(id)arg1;	// IMP=0x0000000000041640
+ (id)synchronousServer;	// IMP=0x0000000000041627
+ (void)setAsynchronousServer:(id)arg1;	// IMP=0x0000000000041613
+ (id)asynchronousServer;	// IMP=0x00000000000415fa
- (void).cxx_destruct;	// IMP=0x0000000000043f4f
@property(retain, nonatomic) TUCallCapabilitiesState *state; // @synthesize state=_state;
@property(readonly, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
@property(readonly, nonatomic) int token; // @synthesize token=_token;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_updateState:(id)arg1;	// IMP=0x0000000000043bb4
- (void)_retrieveState;	// IMP=0x0000000000043960
- (oneway void)capabilityStateUpdated:(id)arg1;	// IMP=0x0000000000043834
- (void)invalidate;	// IMP=0x000000000004376a
- (oneway void)cancelPinRequestFromPrimaryDevice;	// IMP=0x00000000000436b8
- (oneway void)requestPinFromPrimaryDevice;	// IMP=0x0000000000043606
- (oneway void)invalidateAndRefreshThumperCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1;	// IMP=0x0000000000043366
- (oneway void)invalidateAndRefreshWiFiCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1;	// IMP=0x00000000000430c6
- (oneway void)endEmergencyCallbackMode;	// IMP=0x0000000000043014
- (oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;	// IMP=0x0000000000042f08
- (oneway void)setThumperCallingAllowed:(_Bool)arg1 onSecondaryDeviceWithID:(id)arg2 forSenderIdentityWithUUID:(id)arg3;	// IMP=0x0000000000042dca
- (oneway void)setThumperCallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;	// IMP=0x0000000000042cbe
- (oneway void)setVoLTECallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;	// IMP=0x0000000000042bb2
- (oneway void)setWiFiCallingRoamingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;	// IMP=0x0000000000042aa6
- (oneway void)setWiFiCallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;	// IMP=0x000000000004299a
- (oneway void)setRelayCallingEnabled:(_Bool)arg1 forDeviceWithID:(id)arg2;	// IMP=0x000000000004288e
- (oneway void)setRelayCallingEnabled:(_Bool)arg1;	// IMP=0x00000000000427c0
- (void)performDelegateCallbackBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000424da
- (void)removeDelegate:(id)arg1;	// IMP=0x00000000000423d7
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000422a6
- (id)synchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000042041
- (id)asynchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000041f6a
- (id)asynchronousServer;	// IMP=0x0000000000041eb8
- (void)handleServerDisconnect;	// IMP=0x000000000004195f
- (void)dealloc;	// IMP=0x0000000000041915
- (id)init;	// IMP=0x0000000000041654

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
