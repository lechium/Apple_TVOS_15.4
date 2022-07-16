//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ToneLibrary/SSDownloadManagerObserver-Protocol.h>
#import <ToneLibrary/SSPurchaseManagerDelegate-Protocol.h>
#import <ToneLibrary/TLToneStoreDownloadController-Protocol.h>

@class NSHashTable, NSMutableDictionary, NSString, SSDownloadManager, SSPurchaseManager;
@protocol OS_dispatch_queue;

@interface TLToneStoreDownloadStoreServicesController : NSObject <SSDownloadManagerObserver, SSPurchaseManagerDelegate, TLToneStoreDownloadController>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSString *_accessQueueLabel;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    NSString *_storeAccountName;	// 32 = 0x20
    NSMutableDictionary *_toneStoreDownloadsByStoreDownloadPersistentIdentifiers;	// 40 = 0x28
    SSDownloadManager *_storeDownloadManager;	// 48 = 0x30
    SSPurchaseManager *_storePurchaseManager;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000019098
- (void)_assertRunningOnAccessQueue;	// IMP=0x0000000000018e60
- (void)_performBlockOnAccessQueue:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018e48
- (void)_handleToneManagerContentsDidChangeNotification:(id)arg1;	// IMP=0x00000000000189a6
- (void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2;	// IMP=0x0000000000017807
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;	// IMP=0x000000000001720f
- (void)redownloadAllTones;	// IMP=0x0000000000016cd8
- (void)_openToneStoreWithStoreItemKind:(id)arg1;	// IMP=0x0000000000016a78
- (void)openRingtoneStore;	// IMP=0x00000000000169ca
- (void)openAlertToneStore;	// IMP=0x000000000001691c
- (void)_notifyObserversOfStartedToneStoreDownloads:(id)arg1 progressedToneStoreDownload:(id)arg2 finishedToneStoreDownloads:(id)arg3;	// IMP=0x0000000000016562
- (void)_notifyObserversOfCheckingForDownloadsFinishedWithoutNeedToIssueAnyDownload;	// IMP=0x0000000000016363
- (void)_notifyObserversOfUpdatedStoreAccountName:(id)arg1;	// IMP=0x0000000000016126
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000016041
- (void)addObserver:(id)arg1;	// IMP=0x0000000000015f23
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;	// IMP=0x0000000000015ec1
- (void)_updateStoreAccountName;	// IMP=0x0000000000015d41
@property(readonly, nonatomic) NSString *storeAccountName;
- (void)dealloc;	// IMP=0x0000000000015a9c
- (id)init;	// IMP=0x0000000000014654

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

