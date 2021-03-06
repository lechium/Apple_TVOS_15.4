//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, WebHistoryPrivate;

@interface WebHistory : NSObject
{
    WebHistoryPrivate *_historyPrivate;	// 8 = 0x8
}

+ (void)setOptionalSharedHistory:(id)arg1;	// IMP=0x00000000001025f0
+ (id)optionalSharedHistory;	// IMP=0x00000000001025c0
+ (void)_removeAllVisitedLinks;	// IMP=0x0000000000102bd0
+ (void)_setVisitedLinkTrackingEnabled:(_Bool)arg1;	// IMP=0x0000000000102bb0
@property(nonatomic) int historyAgeInDaysLimit;
@property(nonatomic) int historyItemLimit;
- (_Bool)saveToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000102a90
- (_Bool)loadFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001029d0
- (id)itemForURL:(id)arg1;	// IMP=0x00000000001029b0
- (_Bool)containsURL:(id)arg1;	// IMP=0x0000000000102990
- (id)orderedItemsLastVisitedOnDay:(id)arg1;	// IMP=0x0000000000102970
@property(readonly, copy, nonatomic) NSArray *orderedLastVisitedDays;
- (void)addItems:(id)arg1;	// IMP=0x0000000000102900
- (void)removeAllItems;	// IMP=0x0000000000102890
- (void)removeItems:(id)arg1;	// IMP=0x0000000000102840
- (void)_sendNotification:(id)arg1 entries:(id)arg2;	// IMP=0x00000000001027c0
- (void)dealloc;	// IMP=0x0000000000102740
- (id)init;	// IMP=0x00000000001026b0
- (void)timeZoneChanged:(id)arg1;	// IMP=0x0000000000102690
- (id)_data;	// IMP=0x0000000000102b90
- (id)allItems;	// IMP=0x0000000000102b70
- (id)_itemForURLString:(id)arg1;	// IMP=0x0000000000102b50
- (void)_addVisitedLinksToVisitedLinkStore:(void *)arg1;	// IMP=0x0000000000102d20
- (void)_visitedURL:(id)arg1 withTitle:(id)arg2 method:(id)arg3 wasFailure:(_Bool)arg4;	// IMP=0x0000000000102be0

@end

