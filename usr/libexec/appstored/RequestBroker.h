//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSXPCListener;

@interface RequestBroker : NSObject
{
    NSMutableSet *_clients;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
}

+ (_Bool)_connection:(id)arg1 hasEntitlement:(id)arg2;	// IMP=0x002000000011502c
+ (id)_allEntitlements;	// IMP=0x0010000000114fdc
- (void).cxx_destruct;	// IMP=0x00200000001151ee
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (void)_startListener;	// IMP=0x00100000001150c0
- (void)_disconnectClient:(id)arg1;	// IMP=0x0010000000115034
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000114874
- (id)init;	// IMP=0x001000000011480e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

