//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface SecuritydXPCServer : NSObject
{
    struct SecurityClient _client;	// 8 = 0x8
    NSXPCConnection *_connection;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x001000000000ad64
@property __weak NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;	// IMP=0x001000000000acb4
- (_Bool)clientHasBooleanEntitlement:(id)arg1;	// IMP=0x001000000000aca3
- (id)initWithSecurityClient:(struct SecurityClient *)arg1;	// IMP=0x001000000000abbd
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000000aadc
- (void)secItemPromoteItemsForAppClip:(id)arg1 toParentApp:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a05e
- (void)secItemPersistKeychainWritesAtHighPerformanceCost:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009dc0
- (void)secItemDeleteForAppClipApplicationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009d49
- (void)secItemVerifyBackupIntegrity:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009ccd
- (void)secKeychainDeleteMultiuser:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009aa7
- (void)secItemDigest:(id)arg1 accessGroup:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009513
- (void)findItemPersistentRefByUUID:(id)arg1 extraLoggingString:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x00100000000090ff
- (void)secItemFetchCurrentItemAcrossAllDevices:(id)arg1 identifier:(id)arg2 viewHint:(id)arg3 fetchCloudValue:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x0010000000008d3c
- (void)secItemSetCurrentItemAcrossAllDevices:(id)arg1 newCurrentItemHash:(id)arg2 accessGroup:(id)arg3 identifier:(id)arg4 viewHint:(id)arg5 oldCurrentItemReference:(id)arg6 oldCurrentItemHash:(id)arg7 complete:(CDUnknownBlockType)arg8;	// IMP=0x0010000000008923
- (void)SecItemAddAndNotifyOnSync:(id)arg1 syncCallback:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x000000000000837c

@end
