//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSIndexSet, NSSortDescriptor;

@interface PXAssetSortByDatesFetchResult : NSObject
{
    NSSortDescriptor *_sortDescriptor;	// 8 = 0x8
    NSIndexSet *_fetchedIndexes;	// 16 = 0x10
    NSDictionary *_dateByIndex;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000007ef661
@property(readonly, nonatomic) NSDictionary *dateByIndex; // @synthesize dateByIndex=_dateByIndex;
@property(readonly, nonatomic) NSIndexSet *fetchedIndexes; // @synthesize fetchedIndexes=_fetchedIndexes;
@property(readonly, nonatomic) NSSortDescriptor *sortDescriptor; // @synthesize sortDescriptor=_sortDescriptor;
- (void)enumerateFetchedItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000007ef557
- (id)initWithSortDescriptor:(id)arg1 fetchedIndexes:(id)arg2 dateByIndex:(id)arg3;	// IMP=0x00000000007ef4a0

@end

