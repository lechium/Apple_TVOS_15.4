//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PXFeedBasedMemoriesDataSource
{
    NSArray *_entries;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000306192
@property(readonly, copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (id)sectionedObjectReferenceForMemoryUUID:(id)arg1;	// IMP=0x000000000030600b
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;	// IMP=0x0000000000305e09
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x0000000000305c5a
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x0000000000305bc5
- (long long)numberOfSections;	// IMP=0x0000000000305b63
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000000305ae1

@end

