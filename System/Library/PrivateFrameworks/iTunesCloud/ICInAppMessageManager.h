//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICEnvironmentMonitorObserver-Protocol.h>
#import <iTunesCloud/ICInAppMessageManagerProtocol-Protocol.h>
#import <iTunesCloud/NSXPCListenerDelegate-Protocol.h>

@class ICInAppMessageStore, ICUserIdentityStore, NSMutableSet, NSOperationQueue, NSString, NSXPCConnection, NSXPCListener;
@protocol NSCopying, OS_dispatch_queue;

@interface ICInAppMessageManager : NSObject <NSXPCListenerDelegate, ICInAppMessageManagerProtocol, ICEnvironmentMonitorObserver>
{
    NSOperationQueue *_operationQueue;	// 8 = 0x8
    NSOperationQueue *_downloadOperationQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_accessQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 32 = 0x20
    ICInAppMessageStore *_messageStore;	// 40 = 0x28
    ICUserIdentityStore *_identityStore;	// 48 = 0x30
    _Bool _isSystemService;	// 56 = 0x38
    NSString *_foregroundApplicationIdentifier;	// 64 = 0x40
    id <NSCopying> _privacyObserverToken;	// 72 = 0x48
    NSXPCListener *_xpcServiceListener;	// 80 = 0x50
    NSMutableSet *_xpcConnections;	// 88 = 0x58
    NSXPCConnection *_xpcClientConnection;	// 96 = 0x60
}

+ (id)sharedManager;	// IMP=0x0000000000039983
- (void).cxx_destruct;	// IMP=0x000000000002c912
@property(readonly, nonatomic) ICInAppMessageStore *_unsafeMessageStore; // @synthesize _unsafeMessageStore=_messageStore;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;	// IMP=0x000000000002c890
- (void)_removeConnection:(id)arg1;	// IMP=0x000000000002c803
- (void)_addConnection:(id)arg1;	// IMP=0x000000000002c776
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000002c341
- (_Bool)_privacyAcknowledgementRequired;	// IMP=0x000000000002c1dd
- (void)_performCacheConsistencyCheck;	// IMP=0x000000000002c140
- (void)_loadConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c05e
- (id)_resourceCacheDirectoryPath;	// IMP=0x000000000002bfc8
- (void)_downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002bd44
- (void)_checkForMessageResourcesNeedingDownloadForcingIfNecessary:(_Bool)arg1;	// IMP=0x000000000002bc0d
- (void)_updateShouldDownloadResources:(_Bool)arg1 onMessageWithIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002bacc
- (void)_performSyncRetryIfPending:(_Bool)arg1;	// IMP=0x000000000002ba28
- (void)_handleICInAppMessagesDidChangeDistributedNotification:(id)arg1;	// IMP=0x000000000002b9ce
- (void)_removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b904
- (void)_removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b80f
- (void)_addMessageEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b6b0
- (void)_processSyncResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b5df
- (void)_performSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b53b
- (id)_storeRequestContext;	// IMP=0x000000000002b4d4
- (void)_schedulePeriodicUpdate;	// IMP=0x000000000002b488
- (id)_xpcClientConnection;	// IMP=0x000000000002b1a2
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;	// IMP=0x000000000002b105
- (void)removeApplicationBadgeForBundleIdentifier:(id)arg1 fromPresentedMessageEntry:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002afb5
- (void)setProperty:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002ad6c
- (void)getPropertyForKey:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ab59
- (void)setGlobalProperty:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a946
- (void)getGlobalPropertyForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a764
- (void)removeMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a4fe
- (void)updateMetadata:(id)arg1 messageIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002a276
- (void)getAllMetadataForBundleIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a094
- (void)getAllMetadataForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a013
- (void)getMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000029e00
- (void)clearCachedResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000029b72
- (void)downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000298a0
- (void)flushEventsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029580
- (void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 flushImmediately:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000029267
- (void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002924c
- (void)resetMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028fe5
- (void)syncMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028d7e
- (void)addMessageEntryFromAMSDialogRequest:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000028084
- (void)removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027dd2
- (void)removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000027aca
- (void)updateMessageEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027818
- (void)addMessageEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027566
- (void)messageEntryWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000272ab
- (void)messageEntriesForBundleIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027020
- (void)messageEntriesForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026f9f
- (void)allMessageEntriesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000026d79
- (void)stopSystemService;	// IMP=0x0000000000026c3a
- (void)startSystemService;	// IMP=0x000000000002698d
- (id)initWithMessageStore:(id)arg1 identityStore:(id)arg2;	// IMP=0x00000000000267be
- (id)_init;	// IMP=0x0000000000026749

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

