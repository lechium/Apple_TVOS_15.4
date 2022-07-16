//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGAssetBadgeDecorationSource-Protocol.h>
#import <PhotosUICore/PXGSelectionDecorationSource-Protocol.h>
#import <PhotosUICore/PXGSolidColorSource-Protocol.h>
#import <PhotosUICore/PXGSublayoutProvider-Protocol.h>

@class NSIndexSet, NSString, UIColor;

@interface PXGPPTGridStackLayout <PXGSublayoutProvider, PXGSolidColorSource, PXGAssetBadgeDecorationSource, PXGSelectionDecorationSource>
{
    long long _numberOfItemsPerSection;	// 8 = 0x8
    long long _numberOfColumns;	// 16 = 0x10
    _Bool _useAssetBadgeDecoration;	// 24 = 0x18
    long long _selectionDecorationStyle;	// 32 = 0x20
    _Bool _decorated;	// 40 = 0x28
    long long _estimatedNumberOfRowsPerSection;	// 48 = 0x30
    UIColor *_spriteColor;	// 56 = 0x38
    NSIndexSet *_selectedItemsPerSection;	// 64 = 0x40
    struct PXAssetBadgeInfo _assetBadgeInfos[12];	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000004cb346
- (long long)overallSelectionOrderAtSpriteIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000004cb336
- (id)selectedSpriteIndexesInLayout:(id)arg1;	// IMP=0x00000000004cb321
- (unsigned long long)selectionDecorationAdditionsInLayout:(id)arg1;	// IMP=0x00000000004cb319
- (long long)selectionDecorationStyleInLayout:(id)arg1;	// IMP=0x00000000004cb308
- (struct PXAssetBadgeInfo)assetBadgeInfoForAsset:(id)arg1 atSpriteIndex:(unsigned int)arg2 inLayout:(id)arg3;	// IMP=0x00000000004cb2cb
- (_Bool)wantsInteractiveFavoriteBadgesInLayout:(id)arg1;	// IMP=0x00000000004cb2bb
- (_Bool)wantsAssetBadgeDecorationsInLayout:(id)arg1;	// IMP=0x00000000004cb2ab
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000004cb296
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;	// IMP=0x00000000004cb1aa
- (struct CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize)arg3;	// IMP=0x00000000004cb17b
- (void)_initializeBadgeInfos;	// IMP=0x00000000004cb106
- (void)_initializeSelectedItems;	// IMP=0x00000000004cb073
- (id)initWithSettings:(id)arg1;	// IMP=0x00000000004caed3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

