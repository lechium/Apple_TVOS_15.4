//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TRAnisetteDataHandler, TRConnection, TRNearbyDevice;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TRSession : NSObject
{
    TRConnection *_connection;	// 8 = 0x8
    TRNearbyDevice *_nearbyDevice;	// 16 = 0x10
    CDUnknownBlockType _disconnectHandler;	// 24 = 0x18
    NSMutableDictionary *_messageHandlerMap;	// 32 = 0x20
    TRAnisetteDataHandler *_anisetteDataHandler;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_messageHandlerMapQ;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_connectionQ;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_heartbeatRequestTimer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000001d4f8
@property(retain) NSObject<OS_dispatch_source> *heartbeatRequestTimer; // @synthesize heartbeatRequestTimer=_heartbeatRequestTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQ; // @synthesize connectionQ=_connectionQ;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *messageHandlerMapQ; // @synthesize messageHandlerMapQ=_messageHandlerMapQ;
@property(retain, nonatomic) TRAnisetteDataHandler *anisetteDataHandler; // @synthesize anisetteDataHandler=_anisetteDataHandler;
@property(retain, nonatomic) NSMutableDictionary *messageHandlerMap; // @synthesize messageHandlerMap=_messageHandlerMap;
@property(copy, nonatomic) CDUnknownBlockType disconnectHandler; // @synthesize disconnectHandler=_disconnectHandler;
@property(retain, nonatomic) TRNearbyDevice *nearbyDevice; // @synthesize nearbyDevice=_nearbyDevice;
- (void)_handleHeartbeatWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d164
- (void)sendHeartbeatWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001cc1c
- (void)_sendHeartbeats;	// IMP=0x000000000001ca6a
- (void)startHeartbeat;	// IMP=0x000000000001ca58
- (id)_messageHandlerForMessageClass:(Class)arg1;	// IMP=0x000000000001c92c
- (void)_setMessageHandler:(id)arg1 forMessageClass:(Class)arg2;	// IMP=0x000000000001c823
- (CDUnknownBlockType)_handlerForRequestClass:(Class)arg1;	// IMP=0x000000000001c811
- (void)setRequestHandler:(CDUnknownBlockType)arg1 forRequestClass:(Class)arg2;	// IMP=0x000000000001c700
- (CDUnknownBlockType)_handlerForEventClass:(Class)arg1;	// IMP=0x000000000001c6ee
- (void)setEventHandler:(CDUnknownBlockType)arg1 forEventClass:(Class)arg2;	// IMP=0x000000000001c5dd
- (void)_handleRequest:(id)arg1;	// IMP=0x000000000001be6f
- (void)_handleEvent:(id)arg1;	// IMP=0x000000000001ba6a
- (void)_respondToRequest:(id)arg1 withError:(id)arg2;	// IMP=0x000000000001b9d8
- (void)_sendResponse:(id)arg1 forRequest:(id)arg2;	// IMP=0x000000000001b801
- (void)sendRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ad70
- (void)sendEvent:(id)arg1;	// IMP=0x000000000001aaf7
- (void)disconnect;	// IMP=0x000000000001a963
@property(readonly, getter=isConnected) _Bool connected;
@property(retain) TRConnection *connection;
- (id)initWithNearbyDevice:(id)arg1;	// IMP=0x000000000001a181
- (id)init;	// IMP=0x000000000001a0eb

@end

