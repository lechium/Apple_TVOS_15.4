//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASServicesMonitor, NSString, NSXPCListener, SKRExecutionListenerManager;
@protocol OS_dispatch_queue;

@interface ASServiceDaemon : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    unsigned long long _connectionCount;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    ASServicesMonitor *_servicesMonitor;	// 32 = 0x20
    SKRExecutionListenerManager *_executionService;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000004881
- (id)_loadExecutionService;	// IMP=0x001000000000483d
- (void)_setUpEventHandlersForNotifyd;	// IMP=0x0010000000004773
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000043b9
- (void)resume;	// IMP=0x00100000000043a3
- (void)dealloc;	// IMP=0x001000000000435f
- (id)initWithLaunchContext:(id)arg1;	// IMP=0x00100000000041f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

