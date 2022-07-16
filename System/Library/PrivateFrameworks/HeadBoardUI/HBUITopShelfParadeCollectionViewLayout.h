//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVUIKit/TVCollectionViewFullScreenLayout.h>

__attribute__((visibility("hidden")))
@interface HBUITopShelfParadeCollectionViewLayout : TVCollectionViewFullScreenLayout
{
    _Bool _promotionSectionContentViewsHidden;	// 8 = 0x8
    _Bool _contentSectionContentViewsHidden;	// 9 = 0x9
}

+ (Class)layoutAttributesClass;	// IMP=0x000000000000d59d
@property(nonatomic) _Bool contentSectionContentViewsHidden; // @synthesize contentSectionContentViewsHidden=_contentSectionContentViewsHidden;
@property(nonatomic) _Bool promotionSectionContentViewsHidden; // @synthesize promotionSectionContentViewsHidden=_promotionSectionContentViewsHidden;
- (void)_invalidateItemsInSection:(long long)arg1;	// IMP=0x000000000000d891
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000000000d76c
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000000000d5ae
- (id)debugDescription;	// IMP=0x000000000000d4e1
- (id)init;	// IMP=0x000000000000d440

@end

