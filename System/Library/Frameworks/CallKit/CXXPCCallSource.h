//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString, NSURL, NSXPCConnection;

@interface CXXPCCallSource
{
    _Bool _hasVoIPBackgroundMode;	// 8 = 0x8
    struct os_unfair_lock_s _accessorLock;	// 12 = 0xc
    NSXPCConnection *_connection;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    NSURL *_bundleURL;	// 32 = 0x20
    NSString *_localizedName;	// 40 = 0x28
    NSSet *_capabilities;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000011290
@property(readonly, nonatomic) _Bool hasVoIPBackgroundMode; // @synthesize hasVoIPBackgroundMode=_hasVoIPBackgroundMode;
@property(readonly, copy, nonatomic) NSSet *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
- (id)localizedName;	// IMP=0x000000000001124e
- (id)bundleURL;	// IMP=0x000000000001123d
- (id)bundleIdentifier;	// IMP=0x000000000001122c
- (id)vendorProtocolDelegate;	// IMP=0x00000000000111dc
- (_Bool)isPermittedToUseBluetoothAccessories;	// IMP=0x0000000000011108
- (_Bool)isPermittedToUsePrivateAPI;	// IMP=0x00000000000110bd
- (_Bool)isPermittedToUsePublicAPI;	// IMP=0x0000000000011084
- (CDStruct_6ad76789)auditToken;	// IMP=0x0000000000011026
- (int)processIdentifier;	// IMP=0x0000000000010fe2
- (_Bool)isConnected;	// IMP=0x0000000000010faf
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;	// IMP=0x0000000000010ea4
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000000010607
- (id)init;	// IMP=0x00000000000105f9

@end

