//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath, UICollectionViewLayoutAttributes;

@interface GKCollectionFocusingLayout : UICollectionViewFlowLayout
{
    double _topHeaderHeight;	// 8 = 0x8
    double _focusScaleFactor;	// 16 = 0x10
    NSIndexPath *_focusedIndexPath;	// 24 = 0x18
    double _focusHeaderOffset;	// 32 = 0x20
    double _headerToItemSpacing;	// 40 = 0x28
    UICollectionViewLayoutAttributes *_topHeaderAttributes;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000006f216
@property(retain, nonatomic) UICollectionViewLayoutAttributes *topHeaderAttributes; // @synthesize topHeaderAttributes=_topHeaderAttributes;
@property(nonatomic) double headerToItemSpacing; // @synthesize headerToItemSpacing=_headerToItemSpacing;
@property(nonatomic) double focusHeaderOffset; // @synthesize focusHeaderOffset=_focusHeaderOffset;
@property(retain, nonatomic) NSIndexPath *focusedIndexPath; // @synthesize focusedIndexPath=_focusedIndexPath;
@property(nonatomic) double focusScaleFactor; // @synthesize focusScaleFactor=_focusScaleFactor;
@property(nonatomic) double topHeaderHeight; // @synthesize topHeaderHeight=_topHeaderHeight;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;	// IMP=0x000000000006f0c6
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000006f058
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000000006efea
- (id)focusAdjustedAttributesForSupplementaryViewAttributes:(id)arg1;	// IMP=0x000000000006ecce
- (id)focusAdjustedAttributesForItemAttributes:(id)arg1;	// IMP=0x000000000006eb68
- (void)prepareLayout;	// IMP=0x000000000006eb62
- (struct CGSize)sizeForFooterInSection:(long long)arg1;	// IMP=0x000000000006ea80
- (struct CGSize)sizeForHeaderInSection:(long long)arg1;	// IMP=0x000000000006e99e
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;	// IMP=0x000000000006e89e
- (double)minimumLineSpacingForSectionAtIndex:(long long)arg1;	// IMP=0x000000000006e7b7
- (double)minimumInteritemSpacingForSectionAtIndex:(long long)arg1;	// IMP=0x000000000006e6d0
- (struct UIEdgeInsets)sectionInset;	// IMP=0x000000000006e5cc
- (void)_updateFocusFrameForCellAtIndexPath:(id)arg1;	// IMP=0x000000000006e421
- (void)_updateFocusOffsetsForSectionHeadersWithAnimationCoordinator:(id)arg1;	// IMP=0x000000000006e074
- (void)updateSectionHeaderOffsetWithAnimationCoordinator:(id)arg1;	// IMP=0x000000000006dfdc
- (_Bool)shouldUpdateVisibleCellLayoutAttributes;	// IMP=0x000000000006df73
- (void)applyDefaults;	// IMP=0x000000000006df6d
- (void)awakeFromNib;	// IMP=0x000000000006df2c
- (id)init;	// IMP=0x000000000006decb

@end

