//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVHomeUI/HFHomeObserver-Protocol.h>
#import <TVHomeUI/HFItemManagerDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, TVSObserverSet;

@interface TVHMNearbyAccessoriesItemManagerFactory : NSObject <HFItemManagerDelegate, HFHomeObserver>
{
    NSMutableDictionary *_itemManagersByAccessoryID;	// 8 = 0x8
    NSMutableArray *_fullUpdateItemManagers;	// 16 = 0x10
    NSMutableDictionary *_updateFuturesByAccessoryID;	// 24 = 0x18
    TVSObserverSet *_observers;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000000001cda0
- (void).cxx_destruct;	// IMP=0x000000000001e6f0
@property(readonly, nonatomic) TVSObserverSet *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableDictionary *updateFuturesByAccessoryID; // @synthesize updateFuturesByAccessoryID=_updateFuturesByAccessoryID;
@property(retain, nonatomic) NSMutableArray *fullUpdateItemManagers; // @synthesize fullUpdateItemManagers=_fullUpdateItemManagers;
@property(retain, nonatomic) NSMutableDictionary *itemManagersByAccessoryID; // @synthesize itemManagersByAccessoryID=_itemManagersByAccessoryID;
- (void)notifyObserversItemManager:(id)arg1 didUpdateResultsForItem:(id)arg2;	// IMP=0x000000000001e350
- (void)notifyObserversItemManager:(id)arg1 performUpdateRequest:(id)arg2;	// IMP=0x000000000001e0a0
- (id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3;	// IMP=0x000000000001d9f0
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000001d940
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;	// IMP=0x000000000001d8a0
- (void)createItemManagerIfNeededForAccessory:(id)arg1;	// IMP=0x000000000001d710
- (id)childItemsForItem:(id)arg1 ofClass:(Class)arg2 accessory:(id)arg3;	// IMP=0x000000000001d5c0
- (unsigned long long)nearbyAccessoriesCountForAccessory:(id)arg1;	// IMP=0x000000000001d4c0
- (id)nearbyAccessoriesForAccessory:(id)arg1;	// IMP=0x000000000001d3c0
- (void)endDisableExternalUpdatesForAccessory:(id)arg1;	// IMP=0x000000000001d2e0
- (void)disableFullUpdatesForAccessory:(id)arg1;	// IMP=0x000000000001d140
- (void)enableFullUpdatesForAccessory:(id)arg1;	// IMP=0x000000000001cfa0
- (void)removeObserver:(id)arg1;	// IMP=0x000000000001cf40
- (void)addObserver:(id)arg1 accessory:(id)arg2;	// IMP=0x000000000001ce60
- (id)init;	// IMP=0x000000000001cc60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

