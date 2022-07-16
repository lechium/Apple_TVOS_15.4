//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PXRelatedDataSource
{
    _Bool _transient;	// 8 = 0x8
    _Bool _useItemIndexPaths;	// 9 = 0x9
    NSArray *_relatedEntries;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000037dbc5
@property(readonly, copy, nonatomic) NSArray *relatedEntries; // @synthesize relatedEntries=_relatedEntries;
@property(readonly, nonatomic) _Bool useItemIndexPaths; // @synthesize useItemIndexPaths=_useItemIndexPaths;
@property(readonly, nonatomic, getter=isTransient) _Bool transient; // @synthesize transient=_transient;
- (struct PXSimpleIndexPath)indexPathForRelatedEntry:(id)arg1;	// IMP=0x000000000037da66
- (id)_relatedEntryAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x000000000037d9f1
- (id)relatedEntryAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x000000000037d9df
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;	// IMP=0x000000000037d8a0
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x000000000037d88e
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x000000000037d78c
- (long long)numberOfSections;	// IMP=0x000000000037d72a
- (id)initWithRelatedEntries:(id)arg1 isTransient:(_Bool)arg2 useItemIndexPaths:(_Bool)arg3;	// IMP=0x000000000037d68c
- (id)init;	// IMP=0x000000000037d673

@end
