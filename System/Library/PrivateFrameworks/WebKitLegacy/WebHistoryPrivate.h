//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebHistoryPrivate : NSObject
{
    struct RetainPtr<NSMutableDictionary> _entriesByURL;	// 8 = 0x8
    struct unique_ptr<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>, std::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>>> _entriesByDate;	// 16 = 0x10
    struct RetainPtr<NSMutableArray> _orderedLastVisitedDays;	// 24 = 0x18
    _Bool itemLimitSet;	// 32 = 0x20
    int itemLimit;	// 36 = 0x24
    _Bool ageInDaysLimitSet;	// 40 = 0x28
    int ageInDaysLimit;	// 44 = 0x2c
}

+ (void)initialize;	// IMP=0x0000000000100240
- (id).cxx_construct;	// IMP=0x00000000001025a0
- (void).cxx_destruct;	// IMP=0x00000000001024d0
- (void)addVisitedLinksToVisitedLinkStore:(void *)arg1;	// IMP=0x00000000001023a0
- (_Bool)saveToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000102350
- (id)data;	// IMP=0x0000000000101f90
- (_Bool)loadFromURL:(id)arg1 collectDiscardedItemsInto:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000101f60
- (_Bool)loadHistoryGutsFromURL:(id)arg1 savedItemsCount:(int *)arg2 collectDiscardedItemsInto:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000101af0
- (id)ageLimitDate;	// IMP=0x0000000000101a80
- (int)historyItemLimit;	// IMP=0x0000000000101a30
- (void)setHistoryItemLimit:(int)arg1;	// IMP=0x0000000000101a20
- (int)historyAgeInDaysLimit;	// IMP=0x00000000001019d0
- (void)setHistoryAgeInDaysLimit:(int)arg1;	// IMP=0x00000000001019c0
- (id)allItems;	// IMP=0x00000000001019a0
- (id)itemForURL:(id)arg1;	// IMP=0x0000000000101960
- (_Bool)containsURL:(id)arg1;	// IMP=0x0000000000101920
- (id)itemForURLString:(id)arg1;	// IMP=0x0000000000101900
- (id)orderedItemsLastVisitedOnDay:(id)arg1;	// IMP=0x0000000000101890
- (id)orderedLastVisitedDays;	// IMP=0x0000000000101590
- (void)addItems:(id)arg1;	// IMP=0x0000000000101510
- (_Bool)removeAllItems;	// IMP=0x0000000000101450
- (_Bool)removeItems:(id)arg1;	// IMP=0x00000000001013d0
- (_Bool)removeItem:(id)arg1;	// IMP=0x0000000000101360
- (void)rebuildHistoryByDayIfNeeded:(id)arg1;	// IMP=0x0000000000100e30
- (_Bool)addItem:(id)arg1 discardDuplicate:(_Bool)arg2;	// IMP=0x0000000000100d00
- (id)visitedURL:(id)arg1 withTitle:(id)arg2;	// IMP=0x0000000000100be0
- (void)addItemToDateCaches:(id)arg1;	// IMP=0x0000000000100920
- (_Bool)removeItemForURLString:(id)arg1;	// IMP=0x00000000001008a0
- (_Bool)removeItemFromDateCaches:(id)arg1;	// IMP=0x0000000000100680
- (void)insertItem:(id)arg1 forDateKey:(long long)arg2;	// IMP=0x0000000000100530
- (_Bool)findKey:(long long *)arg1 forDay:(double)arg2;	// IMP=0x0000000000100380
- (id)init;	// IMP=0x0000000000100280

@end

