//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSDictionary;

@interface _TVCarouselCollectionViewLayout : UICollectionViewFlowLayout
{
    NSDictionary *_layoutAttributesByIndexPath;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000135f6a
- (long long)_expectedNumberOfCells;	// IMP=0x0000000000135d7b
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x0000000000135d73
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000135d56
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000000135aed
- (struct CGSize)collectionViewContentSize;	// IMP=0x0000000000135a0c
- (void)prepareLayout;	// IMP=0x00000000001357db

@end

