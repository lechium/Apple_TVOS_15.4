//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, TKHostTokenConnection, TKHostTokenRegistry, TKTokenAccessRegistry, TKTokenServer;

@interface TKTokenClientConnection : NSObject
{
    TKTokenAccessRegistry *_accessRegistry;	// 8 = 0x8
    TKHostTokenRegistry *_tokenRegistry;	// 16 = 0x10
    TKHostTokenConnection *_tokenConnection;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    TKTokenServer *_server;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000000ec30
@property(readonly) TKTokenServer *server; // @synthesize server=_server;
@property(readonly) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly) TKHostTokenConnection *tokenConnection; // @synthesize tokenConnection=_tokenConnection;
@property(readonly) TKHostTokenRegistry *tokenRegistry; // @synthesize tokenRegistry=_tokenRegistry;
- (void)terminate;	// IMP=0x001000000000ebc4
- (void)ensureSlotWatcherRunningWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000eb3d
- (void)getSEPKeyEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ea7f
- (void)getWatcherEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e9c1
- (void)getConfigurationEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e8d9
- (void)getTokenEndpointForTokenID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e344
- (id)accessRegistry;	// IMP=0x001000000000e309
- (_Bool)isCaller:(id)arg1 allowedForToken:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000e079
- (void)getEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x001000000000dfbb
- (id)initWithTokenRegistry:(id)arg1 connection:(id)arg2 server:(id)arg3;	// IMP=0x001000000000de70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

