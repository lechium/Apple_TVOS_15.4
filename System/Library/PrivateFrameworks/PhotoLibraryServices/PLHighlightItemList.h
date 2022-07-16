//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableOrderedSet, NSMutableSet, NSSet, NSString;
@protocol PLHighlightItem;

@interface PLHighlightItemList : NSObject
{
    NSDate *_startDate;	// 8 = 0x8
    NSDate *_endDate;	// 16 = 0x10
    NSMutableOrderedSet *_internalHighlightItems;	// 24 = 0x18
    NSMutableSet *_internalAddedHighlightItems;	// 32 = 0x20
    NSMutableSet *_internalRemovedHighlightItems;	// 40 = 0x28
    id <PLHighlightItem> _parentHighlightItem;	// 48 = 0x30
}

+ (id)timeSortDescriptors;	// IMP=0x000000000036b758
- (void).cxx_destruct;	// IMP=0x000000000036b57e
@property(readonly, nonatomic) id <PLHighlightItem> parentHighlightItem; // @synthesize parentHighlightItem=_parentHighlightItem;
@property(readonly, nonatomic) NSMutableSet *internalRemovedHighlightItems; // @synthesize internalRemovedHighlightItems=_internalRemovedHighlightItems;
@property(readonly, nonatomic) NSMutableSet *internalAddedHighlightItems; // @synthesize internalAddedHighlightItems=_internalAddedHighlightItems;
@property(readonly, nonatomic) NSMutableOrderedSet *internalHighlightItems; // @synthesize internalHighlightItems=_internalHighlightItems;
- (void)reset;	// IMP=0x000000000036b4ac
- (void)mergeWithHighlightItemList:(id)arg1;	// IMP=0x000000000036b35f
- (id)description;	// IMP=0x000000000036b280
- (void)_updateStartEndDates;	// IMP=0x000000000036b01a
- (void)_updateHighlightItemsOrdering;	// IMP=0x000000000036afb4
- (void)removeHighlightItem:(id)arg1;	// IMP=0x000000000036af12
- (void)addHighlightItem:(id)arg1;	// IMP=0x000000000036adbf
@property(readonly, copy, nonatomic) NSSet *removedHighlightItems;
@property(readonly, copy, nonatomic) NSSet *addedHighlightItems;
@property(readonly, copy, nonatomic) NSArray *sortedChildHighlightItems;
@property(readonly, nonatomic) _Bool isNewList;
@property(readonly, nonatomic) _Bool hasChanges;
@property(readonly, nonatomic) _Bool isCandidateForReuse;
@property(readonly, nonatomic) unsigned long long numberOfAssetsInExtended;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)initAsNewList;	// IMP=0x000000000036a8c5
- (id)initWithParentHighlightItem:(id)arg1 childHighlightItems:(id)arg2;	// IMP=0x000000000036a7a9

@end
