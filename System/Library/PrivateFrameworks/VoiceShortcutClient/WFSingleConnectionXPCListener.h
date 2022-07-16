//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcutClient/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCConnection, NSXPCInterface, NSXPCListener, NSXPCListenerEndpoint;

@interface WFSingleConnectionXPCListener : NSObject <NSXPCListenerDelegate>
{
    id _exportedObject;	// 8 = 0x8
    NSXPCInterface *_exportedInterface;	// 16 = 0x10
    NSXPCListener *_listener;	// 24 = 0x18
    NSXPCConnection *_activeConnection;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002d4a7
@property(retain, nonatomic) NSXPCConnection *activeConnection; // @synthesize activeConnection=_activeConnection;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(readonly, nonatomic) id exportedObject; // @synthesize exportedObject=_exportedObject;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000002d198
@property(readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
- (id)initWithExportedObject:(id)arg1 exportedInterface:(id)arg2;	// IMP=0x000000000002cf60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

