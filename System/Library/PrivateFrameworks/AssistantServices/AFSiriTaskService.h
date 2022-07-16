//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSXPCListenerDelegate-Protocol.h>

@class AFSiriTaskDeliveryHandler, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface AFSiriTaskService : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    AFSiriTaskDeliveryHandler *_deliveryHandler;	// 24 = 0x18
}

+ (id)appTaskService;	// IMP=0x00000000000eb6e8
+ (id)_machServiceNameForAppTaskServiceWithBundleIdentifier:(id)arg1;	// IMP=0x00000000000eb6cf
- (void).cxx_destruct;	// IMP=0x00000000000ebd9e
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000ebb4d
- (void)setDelegate:(id)arg1;	// IMP=0x00000000000ebaa4
- (void)resume;	// IMP=0x00000000000eba3f
- (void)dealloc;	// IMP=0x00000000000eb9e5
- (id)initWithMachServiceName:(id)arg1;	// IMP=0x00000000000eb804

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

