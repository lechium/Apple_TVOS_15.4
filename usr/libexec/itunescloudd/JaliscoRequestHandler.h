//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICConnectionConfiguration, JaliscoArtworkImporter, JaliscoLibrary, JaliscoMediaUpdateOperation, ML3MusicLibrary, NSMutableArray;
@protocol ICDCloudMusicLibraryJaliscoUpdateTaskHelper, OS_dispatch_queue;

@interface JaliscoRequestHandler : NSObject
{
    ICConnectionConfiguration *_configuration;	// 8 = 0x8
    ML3MusicLibrary *_musicLibrary;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_updateLibraryQueue;	// 32 = 0x20
    id <ICDCloudMusicLibraryJaliscoUpdateTaskHelper> _updateTaskHelper;	// 40 = 0x28
    JaliscoLibrary *_jaliscoLibrary;	// 48 = 0x30
    JaliscoArtworkImporter *_artworkImporter;	// 56 = 0x38
    JaliscoMediaUpdateOperation *_updateLibraryOperation;	// 64 = 0x40
    NSMutableArray *_updateLibraryCompletionHandlers;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000007d791
@property(readonly, copy, nonatomic) NSMutableArray *updateLibraryCompletionHandlers; // @synthesize updateLibraryCompletionHandlers=_updateLibraryCompletionHandlers;
@property(retain, nonatomic) JaliscoMediaUpdateOperation *updateLibraryOperation; // @synthesize updateLibraryOperation=_updateLibraryOperation;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *updateLibraryQueue; // @synthesize updateLibraryQueue=_updateLibraryQueue;
@property(readonly, nonatomic) JaliscoArtworkImporter *artworkImporter; // @synthesize artworkImporter=_artworkImporter;
- (id)_DAAPMediaKindFromJaliscoSupportedMediaKind:(long long)arg1;	// IMP=0x001000000007d6e1
- (void)_updateJaliscoLibraryWithClientIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007d61f
- (void)_addLibraryOperation:(id)arg1 priority:(int)arg2 noLibraryHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007d552
- (void)loadBooksForStoreIDs:(id)arg1 clientIdentity:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007d38a
- (void)cancelAllOperationsAndWaitForOperationsToFinish:(_Bool)arg1;	// IMP=0x001000000007d25d
- (void)cancelAllOperations;	// IMP=0x001000000007d249
- (void)isMediaKindDisabledForJaliscoLibrary:(long long)arg1 withClientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007d128
- (void)updateJaliscoLibraryByRemovingMediaKind:(long long)arg1 withClientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007d007
- (void)updateJaliscoLibraryWithClientIdentity:(id)arg1 byAddingMediaKind:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007cee6
- (void)increasePriorityForAllOperations;	// IMP=0x001000000007cd70
- (void)decreasePriorityForAllOperations;	// IMP=0x001000000007cbfa
- (void)cancelOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000007caec
- (void)removeLibraryWithClientIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007c976
- (void)loadMissingArtworkWithClientIdentity:(id)arg1;	// IMP=0x001000000007c960
- (void)loadScreenshotInfoForPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007c389
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007bfe7
- (void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1;	// IMP=0x001000000007bf96
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1;	// IMP=0x001000000007bf45
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007be26
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007bd07
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000007bb01
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007b8bf
- (void)updateLibraryWithClientIdentity:(id)arg1 reason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007afba
- (float)updateProgress;	// IMP=0x001000000007aee3
- (_Bool)isUpdateInProgressWithIsInitialImport:(_Bool *)arg1;	// IMP=0x001000000007adc3
- (id)jaliscoLibraryWithReason:(long long)arg1;	// IMP=0x001000000007ab2c
@property(readonly, nonatomic) JaliscoLibrary *jaliscoLibrary; // @synthesize jaliscoLibrary=_jaliscoLibrary;
- (void)cancelPendingChanges;	// IMP=0x001000000007ab04
- (void)cancelPendingChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000007a9a2
- (void)addOperation:(id)arg1 priority:(int)arg2;	// IMP=0x001000000007a924
- (void)dealloc;	// IMP=0x001000000007a78b
- (id)initWithConfiguration:(id)arg1 updateTaskHelper:(id)arg2;	// IMP=0x001000000007a61c

@end
