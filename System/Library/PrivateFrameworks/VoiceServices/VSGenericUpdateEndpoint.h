//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceServices/NSSecureCoding-Protocol.h>
#import <VoiceServices/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VSGenericUpdateEndpoint : NSObject <NSXPCListenerDelegate, NSSecureCoding>
{
    NSXPCListenerEndpoint *_endpoint;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSXPCListener *_listener;	// 24 = 0x18
    CDUnknownBlockType _handler;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003df32
+ (CDUnknownBlockType)remoteUpdateHanderForEndpoint:(id)arg1;	// IMP=0x000000000003dd89
+ (id)configuredEndpointWithUpdateHandler:(CDUnknownBlockType)arg1 withConnection:(id)arg2;	// IMP=0x000000000003da8c
- (void).cxx_destruct;	// IMP=0x000000000003e058
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003df5d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003df3a
- (void)invalidate;	// IMP=0x000000000003dd32
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000003dbff
- (void)dealloc;	// IMP=0x000000000003dbc1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
