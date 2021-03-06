//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/NSXPCListenerDelegate-Protocol.h>

@class NSMapTable, NSString, NSXPCInterface, NSXPCListener;
@protocol BMComputeSource, OS_dispatch_queue;

@interface BMComputeSourceServer : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <BMComputeSource> _source;	// 24 = 0x18
    NSXPCInterface *_interface;	// 32 = 0x20
    NSMapTable *_connections;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000ce6e5
@property(readonly, nonatomic) NSMapTable *connections; // @synthesize connections=_connections;
@property(readonly, nonatomic) NSXPCInterface *interface; // @synthesize interface=_interface;
@property(readonly, nonatomic) __weak id <BMComputeSource> source; // @synthesize source=_source;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000cdfbc
- (void)activate;	// IMP=0x00000000000cdf48
- (id)initWithQueue:(id)arg1 source:(id)arg2 listener:(id)arg3;	// IMP=0x00000000000cde05
- (id)initWithQueue:(id)arg1 source:(id)arg2;	// IMP=0x00000000000cdd41
- (id)init;	// IMP=0x00000000000cdd3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

