//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSUbiquitousKeyValueStore;

@interface StockManager : NSObject
{
    NSMutableArray *_defaultListStockSymbols;	// 8 = 0x8
    _Bool _shouldPostSyncNotifications;	// 16 = 0x10
    NSMutableArray *_stocksList;	// 24 = 0x18
    NSMutableArray *_chartDataLRUCache;	// 32 = 0x20
    double _lastModifiedTime;	// 40 = 0x28
    _Bool _needRemoteAddNotification;	// 48 = 0x30
    _Bool _needRemoteDeleteNotification;	// 49 = 0x31
    _Bool _needRemoteMoveNotification;	// 50 = 0x32
    NSUbiquitousKeyValueStore *_syncedKVStore;	// 56 = 0x38
}

+ (void)clearSharedManager;	// IMP=0x0000000000033759
+ (id)sharedManager;	// IMP=0x000000000003371c
- (void).cxx_destruct;	// IMP=0x00000000000380b2
- (void)_checkForMovedStocks;	// IMP=0x0000000000037cc4
- (void)_checkForDeletedStocks;	// IMP=0x0000000000037684
- (void)_checkForAddedStocks;	// IMP=0x000000000003729c
- (void)purgeTransientData;	// IMP=0x000000000003702f
- (void)saveDataChanges;	// IMP=0x0000000000036e57
- (void)saveListChanges;	// IMP=0x0000000000036998
- (void)_saveDataChangesWithStockDictionaries:(id)arg1;	// IMP=0x0000000000036860
- (_Bool)anyMarketOpen;	// IMP=0x000000000003672b
- (void)clearCachedChartDataImageSets;	// IMP=0x000000000003670e
- (void)clearCachedChartData;	// IMP=0x000000000003667d
- (void)UpdateChartDataInLRU:(id)arg1;	// IMP=0x00000000000365da
- (void)DeleteChartData:(id)arg1;	// IMP=0x0000000000036559
- (void)RemoveChartDataFromLRU:(id)arg1;	// IMP=0x00000000000364e7
- (void)moveStockFromIndex:(long long)arg1 toIndex:(long long)arg2;	// IMP=0x000000000003642e
- (void)_removeStock:(id)arg1 withRemoteNotification:(_Bool)arg2;	// IMP=0x00000000000361ce
- (void)removeStock:(id)arg1;	// IMP=0x00000000000361b7
- (void)_addStock:(id)arg1 withRemoteNotification:(_Bool)arg2;	// IMP=0x0000000000036066
- (void)addStock:(id)arg1;	// IMP=0x000000000003604f
- (id)stockWithSymbol:(id)arg1;	// IMP=0x0000000000035e8a
- (id)stocksList;	// IMP=0x0000000000035e70
- (_Bool)setLocalStockListFromSyncableStockList:(id)arg1;	// IMP=0x000000000003580f
- (id)makeSyncableStockListFromList:(id)arg1;	// IMP=0x00000000000352a8
- (void)handleSyncedDataChanged:(id)arg1;	// IMP=0x0000000000034a92
- (void)reloadStocksFromDefaults;	// IMP=0x000000000003473c
- (id)_defaultStockDictionaries;	// IMP=0x00000000000344c5
- (id)stockForURL:(id)arg1;	// IMP=0x000000000003445f
- (void)dealloc;	// IMP=0x00000000000343c4
- (id)init;	// IMP=0x0000000000033776

@end

