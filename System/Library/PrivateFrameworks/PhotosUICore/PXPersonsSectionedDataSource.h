//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary;

@interface PXPersonsSectionedDataSource
{
    NSDictionary *_faceTiles;	// 8 = 0x8
    NSArray *_personsSections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002685be
@property(readonly, copy, nonatomic) NSArray *personsSections; // @synthesize personsSections=_personsSections;
@property(readonly, copy, nonatomic) NSDictionary *faceTiles; // @synthesize faceTiles=_faceTiles;
@property(readonly, nonatomic) long long totalItemCount;
- (id)faceTileForIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x0000000000268406
- (id)objectsInIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x000000000026824a
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x000000000026803d
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x0000000000267fc9
- (long long)numberOfSections;	// IMP=0x0000000000267f85
- (id)initWithPersonsSections:(id)arg1 faceTiles:(id)arg2;	// IMP=0x0000000000267ebe

@end

