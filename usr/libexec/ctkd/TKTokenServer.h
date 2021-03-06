//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, NSXPCListener, TKClientToken, TKHostTokenRegistry, TKSEPKeyServer;

@interface TKTokenServer : NSObject
{
    NSHashTable *_watcherConnections;	// 8 = 0x8
    TKHostTokenRegistry *_tokenRegistry;	// 16 = 0x10
    NSXPCListener *_tokenServerListener;	// 24 = 0x18
    TKSEPKeyServer *_SEPKeyServer;	// 32 = 0x20
    CDUnknownBlockType _ensureSlotWatcherIsRunning;	// 40 = 0x28
    NSXPCListener *_tokenWatcherListener;	// 48 = 0x30
    NSXPCListener *_SEPKeyListener;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000001048c
@property(readonly, nonatomic) NSXPCListener *SEPKeyListener; // @synthesize SEPKeyListener=_SEPKeyListener;
@property(readonly, nonatomic) NSXPCListener *tokenWatcherListener; // @synthesize tokenWatcherListener=_tokenWatcherListener;
@property(copy, nonatomic) CDUnknownBlockType ensureSlotWatcherIsRunning; // @synthesize ensureSlotWatcherIsRunning=_ensureSlotWatcherIsRunning;
@property(readonly, nonatomic) TKSEPKeyServer *SEPKeyServer; // @synthesize SEPKeyServer=_SEPKeyServer;
@property(readonly, nonatomic) NSXPCListener *tokenServerListener; // @synthesize tokenServerListener=_tokenServerListener;
@property(readonly, nonatomic) TKHostTokenRegistry *tokenRegistry; // @synthesize tokenRegistry=_tokenRegistry;
- (id)pairingNotification:(id *)arg1;	// IMP=0x0010000000010439
- (void)stop;	// IMP=0x00100000000102d9
- (void)start;	// IMP=0x00100000000101d4
- (void)dealloc;	// IMP=0x001000000001016f
- (id)initWithTokenServer:(id)arg1 tokenRegistry:(id)arg2;	// IMP=0x001000000000ffc5
- (void)hostTokenRegistry:(id)arg1 removedToken:(id)arg2;	// IMP=0x001000000000fcba
- (void)hostTokenRegistry:(id)arg1 addedToken:(id)arg2;	// IMP=0x001000000000f6a2
- (void)getEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f635
- (void)startWatchingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ef8e
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000ed0b
@property(readonly, nonatomic) TKClientToken *client;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

