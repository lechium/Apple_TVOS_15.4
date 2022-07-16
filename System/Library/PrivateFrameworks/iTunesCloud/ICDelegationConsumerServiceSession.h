//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICDelegationConsumerNetServiceDelegate-Protocol.h>
#import <iTunesCloud/ICDelegationServiceConnectionDelegate-Protocol.h>

@class ICDelegationConsumerNetService, ICDelegationConsumerServiceProtocolHandler, ICDelegationConsumerServiceRequest, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface ICDelegationConsumerServiceSession : NSObject <ICDelegationConsumerNetServiceDelegate, ICDelegationServiceConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSMutableArray *_acceptedConnections;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 24 = 0x18
    ICDelegationConsumerNetService *_netService;	// 32 = 0x20
    NSMutableArray *_pendingUserIdentities;	// 40 = 0x28
    ICDelegationConsumerServiceProtocolHandler *_protocolHandler;	// 48 = 0x30
    NSMutableDictionary *_sessionIDToRequestInfoMap;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_timeoutDispatchSource;	// 64 = 0x40
    ICDelegationConsumerServiceRequest *_request;	// 72 = 0x48
    CDUnknownBlockType _responseHandler;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000173b96
@property(readonly, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, copy, nonatomic) ICDelegationConsumerServiceRequest *request; // @synthesize request=_request;
- (void)_stop;	// IMP=0x00000000001739c1
- (void)_handleTimeout;	// IMP=0x00000000001738df
- (void)stop;	// IMP=0x0000000000173894
- (void)start;	// IMP=0x0000000000173849
- (_Bool)delegationServiceConnection:(id)arg1 didReceiveRequest:(id)arg2;	// IMP=0x0000000000173533
- (void)delegationServiceConnection:(id)arg1 didEncouterError:(id)arg2;	// IMP=0x00000000001734a8
- (void)delegationServiceConnectionDidClose:(id)arg1;	// IMP=0x000000000017341d
- (void)delegationConsumerNetService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;	// IMP=0x000000000017335b
- (void)dealloc;	// IMP=0x000000000017331d
- (id)initWithRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001731b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

