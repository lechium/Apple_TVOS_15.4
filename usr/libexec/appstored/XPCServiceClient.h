//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, NSData, NSString, NSXPCConnection, Optional, XPCServiceCatalog, XPCServiceEntitlements;

@interface XPCServiceClient : NSObject
{
    NSData *_auditTokenData;	// 8 = 0x8
    XPCServiceCatalog *_catalog;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    Optional *_enableDiagnostics;	// 32 = 0x20
    XPCServiceEntitlements *_entitlements;	// 40 = 0x28
    _Bool hasSeenAppStore;	// 48 = 0x30
    AMSProcessInfo *_processInfo;	// 56 = 0x38
}

+ (id)newClientForConnection:(id)arg1 withCatalog:(id)arg2;	// IMP=0x00200000000f0622
+ (id)currentClient;	// IMP=0x00100000000f0431
- (void).cxx_destruct;	// IMP=0x00200000000f1ac6
@property(readonly) AMSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
- (void)_provideService:(CDUnknownBlockType)arg1 forEntitlement:(struct _ASDServiceEntitlement)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f18d8
- (_Bool)isDialogObserverAvailable;	// IMP=0x00100000000f1728
- (_Bool)hasConnection;	// IMP=0x00100000000f1701
- (void)deliverProgress:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f163f
- (void)deliverNotifications:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f157d
- (void)deliverEngagementRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f147d
- (void)deliverDialogRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f137d
- (void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f127d
- (void)getUpdatesServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f11f1
- (void)getRestoreServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f1165
- (void)getRepairServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f10d9
- (void)getPurchaseServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f104d
- (void)getPurchaseHistoryServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f0fc1
- (void)getMetricsServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f0f35
- (void)getOcelotServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f0ea9
- (void)getManagedAppServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f0e1d
- (void)getCrossfireServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f0d91
- (void)getLibraryServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f0d05
- (void)getInstallationServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f0c79
- (void)getIAPHistoryServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f0bed
- (void)getDiagnosticServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f0b61
- (void)getArcadeServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f0ad5
- (void)getAppStoreServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f0a49
@property(readonly) _Bool enableDiagnostics;
- (id)initWithConnection:(id)arg1 andCatalog:(id)arg2;	// IMP=0x00100000000f068e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
