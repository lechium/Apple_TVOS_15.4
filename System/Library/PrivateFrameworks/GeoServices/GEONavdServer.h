//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSXPCListenerDelegate-Protocol.h>

@class GEONavigationServer, NSString, NSXPCListener;

@interface GEONavdServer : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_pushNavigationStateListener;	// 8 = 0x8
    NSXPCListener *_getNavigationStateListener;	// 16 = 0x10
    NSXPCListener *_monitorDestinationListener;	// 24 = 0x18
    GEONavigationServer *_navigationServer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000001169c60
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000001169b20
- (void)dealloc;	// IMP=0x0000000001169ac5
- (id)init;	// IMP=0x0000000001169895

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

