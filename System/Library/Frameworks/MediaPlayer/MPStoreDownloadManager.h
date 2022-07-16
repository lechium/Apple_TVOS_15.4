//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/SSDownloadHandlerDelegate-Protocol.h>
#import <MediaPlayer/SSDownloadManagerObserver-Protocol.h>
#import <MediaPlayer/SSPurchaseManagerDelegate-Protocol.h>
#import <MediaPlayer/UIAlertViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSMapTable, NSMutableArray, NSString, SSDownloadManager, SSPurchaseManager;
@protocol OS_dispatch_queue;

@interface MPStoreDownloadManager : NSObject <SSDownloadManagerObserver, SSPurchaseManagerDelegate, UIAlertViewDelegate, SSDownloadHandlerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSArray *_activeDownloads;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;	// 24 = 0x18
    NSMutableArray *_blockObservers;	// 32 = 0x20
    NSDictionary *_downloadKindToRequiredClientBundleIdentifiers;	// 40 = 0x28
    NSMutableArray *_downloads;	// 48 = 0x30
    NSMutableArray *_userDownloads;	// 56 = 0x38
    NSMapTable *_downloadIdentifiersToDownloads;	// 64 = 0x40
    NSMapTable *_downloadsToObservers;	// 72 = 0x48
    NSMapTable *_libraryIdentifiersToDownloads;	// 80 = 0x50
    NSHashTable *_observersForAllDownloads;	// 88 = 0x58
    NSMapTable *_storeIdentifiersToDownloads;	// 96 = 0x60
    _Bool _fetchedInitialDownloads;	// 104 = 0x68
    SSDownloadManager *_downloadManager;	// 112 = 0x70
    SSPurchaseManager *_purchaseManager;	// 120 = 0x78
}

+ (id)sharedManager;	// IMP=0x00000000002d853b
- (void).cxx_destruct;	// IMP=0x00000000002d3b64
- (_Bool)_isActiveDownload:(id)arg1;	// IMP=0x00000000002d3ad8
- (void)_updateActiveDownloadsWithCancelledDownloads:(id)arg1;	// IMP=0x00000000002d3a4b
- (void)_addNonCancelledDownloadsToActiveList:(id)arg1;	// IMP=0x00000000002d39c0
- (void)_updateMediaItemPropertiesForFinishedStoreDownload:(id)arg1 SSDownload:(id)arg2;	// IMP=0x00000000002d37d7
- (void)_updateDownloadsWithAdditions:(id)arg1 removals:(id)arg2;	// IMP=0x00000000002d36ea
- (void)_updateActiveDownloadsWithChangedActiveDownloads:(id)arg1 inactiveDownloads:(id)arg2;	// IMP=0x00000000002d35fd
- (void)_unregisterBlockObserver:(id)arg1;	// IMP=0x00000000002d356d
- (_Bool)_shouldHideDownload:(id)arg1;	// IMP=0x00000000002d33d6
- (void)_sendDownloadsDidProgressToObserversForDownloads:(id)arg1;	// IMP=0x00000000002d302a
- (void)_sendDownloadsDidFinishToObserversForDownloads:(id)arg1 notifyDownloadManager:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002d2bca
- (void)_sendDownloadsDidFinishPurchasesToObserversForDownloads:(id)arg1;	// IMP=0x00000000002d2951
- (void)_sendDownloadsDidChangeToObserversWithAddedDownloads:(id)arg1 removedDownloads:(id)arg2;	// IMP=0x00000000002d27b0
- (void)_sendActiveDownloadsDidChangeToObserversWithAddedDownloads:(id)arg1 removedDownloads:(id)arg2;	// IMP=0x00000000002d260f
- (void)_registerBlockObserver:(id)arg1;	// IMP=0x00000000002d257f
- (void)_onQueue_removeDownloadFromMapTables:(id)arg1;	// IMP=0x00000000002d24e1
- (_Bool)_onQueue_hasExistingDownloadForStoreDownload:(id)arg1;	// IMP=0x00000000002d2426
- (id)_onQueue_findStoreDownloadWithSSDownload:(id)arg1 SSPurchase:(id)arg2;	// IMP=0x00000000002d21cf
- (void)_onQueue_addDownloadToMapTables:(id)arg1;	// IMP=0x00000000002d2128
- (id)_observersForDownload:(id)arg1;	// IMP=0x00000000002d201f
- (id)_observersForAllDownloads;	// IMP=0x00000000002d1f66
- (id)_existingDownloadForSSDownload:(id)arg1;	// IMP=0x00000000002d1e5d
- (_Bool)hasFetchedInitialDownloads;	// IMP=0x00000000002d1dcf
- (void)_addPurchaseFinishedHandler:(CDUnknownBlockType)arg1 forDownloads:(id)arg2;	// IMP=0x00000000002d1b0d
- (void)downloadManagerNetworkUsageDidChange:(id)arg1;	// IMP=0x00000000002d19ba
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;	// IMP=0x00000000002d11df
- (void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2;	// IMP=0x00000000002d0dc5
- (void)requestPermissionToDownloadWithType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d0c45
- (void)reloadFromServer;	// IMP=0x00000000002d0c2f
- (void)removeObserver:(id)arg1 forDownloads:(id)arg2;	// IMP=0x00000000002d0b6a
- (void)prioritizeDownloads:(id)arg1;	// IMP=0x00000000002d06c8
- (id)downloadForStoreID:(long long)arg1;	// IMP=0x00000000002d05fd
- (id)downloadForMediaItemPersistentID:(unsigned long long)arg1;	// IMP=0x00000000002d0532
- (id)downloadForMediaItem:(id)arg1;	// IMP=0x00000000002d0461
- (id)downloadForDownloadPersistentIdentifier:(long long)arg1;	// IMP=0x00000000002d03a4
- (void)restartDownloads:(id)arg1;	// IMP=0x00000000002cff15
- (void)resumeDownloads:(id)arg1;	// IMP=0x00000000002cfab7
- (void)pauseDownloads:(id)arg1;	// IMP=0x00000000002cf2cc
- (void)cancelDownloads:(id)arg1;	// IMP=0x00000000002cea48
- (void)addObserver:(id)arg1 forDownloads:(id)arg2;	// IMP=0x00000000002ce983
- (void)addFinishHandler:(CDUnknownBlockType)arg1 forDownloads:(id)arg2;	// IMP=0x00000000002ce6e7
- (id)addDownloads:(id)arg1;	// IMP=0x00000000002ce165
- (id)activeDownloadForStoreID:(long long)arg1;	// IMP=0x00000000002cdfef
- (id)activeDownloadForMediaItemPersistentID:(unsigned long long)arg1;	// IMP=0x00000000002cde79
@property(readonly, nonatomic, getter=isUsingNetwork) _Bool usingNetwork;
@property(readonly, nonatomic) NSArray *userDownloads;
@property(readonly, nonatomic) NSArray *downloads;
@property(readonly, nonatomic) NSArray *activeDownloads;
- (void)dealloc;	// IMP=0x00000000002cdb9b
- (id)_init;	// IMP=0x00000000002cd1f0
- (id)init;	// IMP=0x00000000002cd1b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
