//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHFetchResult;

@interface PXFetchResultDataSource
{
    PHFetchResult *_fetchResult;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000011c8bd
@property(readonly, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x000000000011c6fa
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x000000000011c4fd
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;	// IMP=0x000000000011c4f5
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x000000000011c432
- (long long)numberOfSections;	// IMP=0x000000000011c427
- (id)init;	// IMP=0x000000000011c3ad
- (id)initWithFetchResult:(id)arg1;	// IMP=0x000000000011c33f

@end
