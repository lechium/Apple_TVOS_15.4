//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEODaemon, GEOProxyClient, NSMutableDictionary, NSString;
@protocol NSObject, OS_xpc_object;

@interface GEOPeer : NSObject
{
    GEODaemon *_daemon;	// 8 = 0x8
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
    GEOProxyClient *_clientIdentifier;	// 24 = 0x18
    _Bool _preloading;	// 32 = 0x20
    _Bool _preloadingExclusively;	// 33 = 0x21
    NSString *_peerID;	// 40 = 0x28
    NSString *_debugIdentifier;	// 48 = 0x30
    NSMutableDictionary *_entitlementCache;	// 56 = 0x38
    NSMutableDictionary *_entitlementValueCache;	// 64 = 0x40
    id <NSObject> _peerTransaction;	// 72 = 0x48
    id <NSObject> _preloadingTransaction;	// 80 = 0x50
    unsigned long long _handleRequestSignpost;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000126daee
@property(nonatomic) unsigned long long handleRequestSignpost; // @synthesize handleRequestSignpost=_handleRequestSignpost;
@property(retain, nonatomic) NSMutableDictionary *entitlementCache; // @synthesize entitlementCache=_entitlementCache;
@property(readonly, nonatomic) GEOProxyClient *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(copy, nonatomic) NSString *debugIdentifier; // @synthesize debugIdentifier=_debugIdentifier;
@property(readonly, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
@property(nonatomic) _Bool preloadingExclusively; // @synthesize preloadingExclusively=_preloadingExclusively;
@property(nonatomic) _Bool preloading; // @synthesize preloading=_preloading;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (_Bool)hasEntitlement:(id)arg1;	// IMP=0x000000000126da5f
- (id)valueForEntitlement:(id)arg1;	// IMP=0x000000000126d7d7
@property(readonly, nonatomic) _Bool isLocationd;
@property(readonly, nonatomic) NSString *bundleVersion;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (id)description;	// IMP=0x000000000126d578
- (void)dealloc;	// IMP=0x000000000126d539
- (id)initWithConnection:(id)arg1 daemon:(id)arg2;	// IMP=0x000000000126d269
- (void)_handleEvent:(id)arg1;	// IMP=0x000000000126cdc5

@end
