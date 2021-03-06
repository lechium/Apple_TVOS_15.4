//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSDServiceBrokerProtocol-Protocol.h>

@class NSMutableArray, NSMutableSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSDaemonConnection : NSObject <AMSDServiceBrokerProtocol>
{
    NSXPCConnection *_sharedConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_sharedConnectionAccessQueue;	// 16 = 0x10
    NSMutableSet *_activePromises;	// 24 = 0x18
    NSMutableArray *_interruptionHandlers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e8720
@property(readonly, nonatomic) NSMutableArray *interruptionHandlers; // @synthesize interruptionHandlers=_interruptionHandlers;
@property(readonly, nonatomic) NSMutableSet *activePromises; // @synthesize activePromises=_activePromises;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue; // @synthesize sharedConnectionAccessQueue=_sharedConnectionAccessQueue;
@property(retain, nonatomic) NSXPCConnection *sharedConnection; // @synthesize sharedConnection=_sharedConnection;
- (void)_handleInvalidation;	// IMP=0x00000000000e8030
- (void)_handleInterruption;	// IMP=0x00000000000e7c77
- (void)_checkOutPromise:(id)arg1;	// IMP=0x00000000000e7af9
- (void)_checkInPromise:(id)arg1;	// IMP=0x00000000000e797b
- (id)_connectionProxyForAsync:(_Bool)arg1 accessBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e7168
- (id)securityServiceProxyWithDelegate:(id)arg1;	// IMP=0x00000000000e7013
- (id)pushNotificationService;	// IMP=0x00000000000e6f83
- (id)purchaseServiceProxy;	// IMP=0x00000000000e6ef3
- (id)fraudReportServiceProxy;	// IMP=0x00000000000e6e63
- (id)deviceMessengerProxyWithDelegate:(id)arg1;	// IMP=0x00000000000e6d0e
- (id)cookieServiceProxy;	// IMP=0x00000000000e6c7e
- (id)callService:(id)arg1 then:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e68eb
- (void)addInterruptionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e67ce
- (void)dealloc;	// IMP=0x00000000000e6651
- (id)init;	// IMP=0x00000000000e6565

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

