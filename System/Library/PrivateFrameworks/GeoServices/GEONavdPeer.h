//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEONavdClientInfo, NSMutableDictionary, NSXPCConnection;

@interface GEONavdPeer : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSMutableDictionary *_entitlementCache;	// 16 = 0x10
    GEONavdClientInfo *_clientInfo;	// 24 = 0x18
    _Bool _expectingUpdates;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000001169862
@property(nonatomic) _Bool expectingUpdates; // @synthesize expectingUpdates=_expectingUpdates;
@property(readonly, nonatomic) GEONavdClientInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)description;	// IMP=0x0000000001169826
- (_Bool)hasEntitlement:(id)arg1;	// IMP=0x0000000001169818
- (void)updateConnection:(id)arg1;	// IMP=0x000000000116967f
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0000000001169617

@end

