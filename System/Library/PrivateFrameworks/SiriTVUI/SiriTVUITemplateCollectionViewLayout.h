//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SiriTVUITemplateCollectionViewLayout
{
    double _itemFontSize;	// 8 = 0x8
}

+ (Class)layoutAttributesClass;	// IMP=0x0000000000009495
@property(nonatomic) double itemFontSize; // @synthesize itemFontSize=_itemFontSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000009399
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x0000000000009391
- (struct CGSize)minimumCollectionViewContentSize;	// IMP=0x0000000000009374
- (struct CGSize)collectionViewContentSizeForItemSize:(struct CGSize)arg1;	// IMP=0x000000000000928f
- (struct CGSize)collectionViewContentSize;	// IMP=0x0000000000009261

@end

