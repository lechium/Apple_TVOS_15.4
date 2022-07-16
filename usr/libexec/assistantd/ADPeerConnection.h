//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSMutableDictionary, NSString;
@protocol ADPeerConnectionDelegate, OS_dispatch_queue;

@interface ADPeerConnection : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    _Bool _requireConnectedPeer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    IDSService *_idsService;	// 32 = 0x20
    NSMutableDictionary *_completions;	// 40 = 0x28
    NSMutableDictionary *_responseClasses;	// 48 = 0x30
    id <ADPeerConnectionDelegate> _delegate;	// 56 = 0x38
    CDUnknownFunctionPointerType _requestMapFunc;	// 64 = 0x40
    CDUnknownFunctionPointerType _classMapFunc;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000007eddc
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x001000000007ecf0
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000007e722
- (id)_wrappedSendFailureError:(id)arg1;	// IMP=0x001000000007e626
- (void)_invokeCompletionForIdentifier:(id)arg1 response:(id)arg2 error:(id)arg3;	// IMP=0x001000000007e4b7
- (void)_sendResponse:(id)arg1 forRequestId:(id)arg2;	// IMP=0x001000000007e1b2
- (void)setDelegate:(id)arg1 forRequestTypes:(CDUnknownFunctionPointerType)arg2;	// IMP=0x001000000007e0d5
- (void)_sendRequest:(id)arg1 responseClass:(Class)arg2 fireAndForget:(_Bool)arg3 timeout:(double)arg4 overrideRequireConnectedPeer:(_Bool)arg5 to:(_Bool)arg6 allowCloud:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x001000000007dace
- (void)sendRequest:(id)arg1 responseClass:(Class)arg2 overrideRequireConnectedPeer:(_Bool)arg3 allowCloud:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000007da9b
- (void)sendRequest:(id)arg1 responseClass:(Class)arg2 timeout:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000007da6f
- (void)sendRequest:(id)arg1 responseClass:(Class)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007da40
- (void)sendRequest:(id)arg1 fireAndForget:(_Bool)arg2;	// IMP=0x001000000007da14
- (void)sendRequest:(id)arg1;	// IMP=0x001000000007d9e8
- (id)_destination;	// IMP=0x001000000007d991
- (id)_account;	// IMP=0x001000000007d93d
- (id)_service;	// IMP=0x001000000007d8d6
- (id)serviceIdentifier;	// IMP=0x001000000007d8c8
- (_Bool)_hasConnectedPeer;	// IMP=0x001000000007d884
- (id)_pairedDevice;	// IMP=0x001000000007d707
- (_Bool)deviceIsNearby:(id *)arg1;	// IMP=0x001000000007d699
- (id)peerBuildVersion;	// IMP=0x001000000007d649
- (id)peerVersion;	// IMP=0x001000000007d5f9
- (id)peerName;	// IMP=0x001000000007d5a9
- (id)peerType;	// IMP=0x001000000007d559
- (_Bool)hasPeer;	// IMP=0x001000000007d526
- (id)initWithServiceIdentifier:(id)arg1 forRequests:(CDUnknownFunctionPointerType)arg2;	// IMP=0x001000000007d511
- (id)initWithServiceIdentifier:(id)arg1 forRequests:(CDUnknownFunctionPointerType)arg2 requireConnectedPeer:(_Bool)arg3;	// IMP=0x001000000007d31f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
