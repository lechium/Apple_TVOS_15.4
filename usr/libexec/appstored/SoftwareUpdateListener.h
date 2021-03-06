//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SoftwareUpdateListener
{
}

- (void)_initializeConnection:(id)arg1;	// IMP=0x00200000001f16fe
- (void)_handleDisconnect:(id)arg1;	// IMP=0x00100000001f164e
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000001f14b0
- (void)updateAllWithOrder:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f11ca
- (void)updateAllWithJobResults:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f0ef6
- (void)reloadManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f0d2c
- (void)reloadFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f0b65
- (void)reloadFromServerInBackgroundWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f0860
- (void)removeUpdateBulletins;	// IMP=0x00100000001f076c
- (void)showApplicationBadgeForPendingUpdates;	// IMP=0x00100000001f063e
- (void)showApplicationUpdatesBulletin;	// IMP=0x00100000001f054a
- (void)refreshUpdatesWithCompletionBlock:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f042a
- (void)refreshUpdateCountWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f0176
- (void)migrateUpdatesStoreWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f00e6
- (void)hideApplicationBadgeForPendingUpdates;	// IMP=0x00100000001effb8
- (void)getManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001efdf1
- (void)getUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001efc33
- (void)getUpdatesMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001efb80
- (void)getUpdatesIncludingMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ef9b9
- (void)clearExpiredUpdateHistoryWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ef899
- (id)init;	// IMP=0x00100000001ef86a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

