//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSXPCListener, SBDPushNotificationController;
@protocol OS_dispatch_queue;

@interface SBDServer : NSObject
{
    id _SBKStoreAccountChangedNotificationObserver;	// 8 = 0x8
    id _SBKSBKSharedMusicLibraryImportFinishedObserver;	// 16 = 0x10
    _Bool _accountChangeUpdatePending;	// 24 = 0x18
    _Bool _accountChangeUpdateShouldReloadAccounts;	// 25 = 0x19
    NSMutableArray *_systemSyncHandlers;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSXPCListener *_xpcListener;	// 48 = 0x30
    SBDPushNotificationController *_pushNotificationController;	// 56 = 0x38
    NSArray *_serviceConnections;	// 64 = 0x40
}

+ (id)allSyncingDomains;	// IMP=0x00200000000054d8
+ (id)server;	// IMP=0x00100000000054a8
- (void).cxx_destruct;	// IMP=0x0020000000004768
@property(readonly, nonatomic) NSArray *serviceConnections; // @synthesize serviceConnections=_serviceConnections;
@property(readonly, nonatomic) SBDPushNotificationController *pushNotificationController; // @synthesize pushNotificationController=_pushNotificationController;
@property(readonly, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_updatePushNotificationRegistrations;	// IMP=0x001000000000449d
- (void)_performOnDomainSyncServiceHandlerWithBookkeeperDomain:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003fa2
- (void)synchronizeForUpdateJobForAccount:(id)arg1 withDomain:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003f07
- (void)pushNotificationController:(id)arg1 didReceiveUpdateRequestForAccount:(id)arg2 withBookkeeperDomain:(id)arg3 toDomainRevision:(id)arg4;	// IMP=0x0010000000003e6c
- (void)_accountsDidChangeNotification:(id)arg1;	// IMP=0x0010000000003e58
- (void)_updateForAccountChangeAfterReloadingAccounts:(_Bool)arg1;	// IMP=0x0010000000003dee
- (void)_updateForSharedLibraryImportFinished;	// IMP=0x0010000000003d8f
- (id)_pushNotificationController;	// IMP=0x0010000000003d54
- (void)start;	// IMP=0x0010000000003c8f
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000003be1
- (void)dealloc;	// IMP=0x0010000000003a6f
- (id)_init;	// IMP=0x00100000000035ed
- (id)init;	// IMP=0x0010000000003566

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
