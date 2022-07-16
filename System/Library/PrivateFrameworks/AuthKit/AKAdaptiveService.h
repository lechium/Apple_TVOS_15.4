//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCInterface, NSXPCListener;

@interface AKAdaptiveService : NSObject <NSXPCListenerDelegate>
{
    NSXPCInterface *_exportedInterface;	// 8 = 0x8
    id _exportedObject;	// 16 = 0x10
    NSXPCListener *_listener;	// 24 = 0x18
    CDUnknownBlockType _interruptionHandler;	// 32 = 0x20
    CDUnknownBlockType _invalidationHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000004230
@property(copy) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000003ee9
- (id)listenerEndpoint;	// IMP=0x0000000000003ed3
- (void)resume;	// IMP=0x0000000000003ebd
- (void)dealloc;	// IMP=0x0000000000003e53
- (id)initWithInterface:(id)arg1 weakObject:(id)arg2;	// IMP=0x0000000000003da7
- (id)initWithInterface:(id)arg1 strongObject:(id)arg2;	// IMP=0x0000000000003cfb
- (id)_initWithInterface:(id)arg1 object:(id)arg2;	// IMP=0x0000000000003c23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

