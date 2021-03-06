//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PXStackedDataSource
{
    NSArray *_dataSections;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000017268b
@property(readonly, nonatomic) NSArray *dataSections; // @synthesize dataSections=_dataSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x00000000001724f6
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;	// IMP=0x00000000001724ee
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x000000000017247a
- (long long)numberOfSections;	// IMP=0x0000000000172436
- (id)changeDetailsToDataSource:(id)arg1 sectionChanges:(id)arg2 itemChanges:(id)arg3;	// IMP=0x0000000000172354
- (id)init;	// IMP=0x00000000001722da
- (id)initWithDataSections:(id)arg1;	// IMP=0x000000000017226c

@end

