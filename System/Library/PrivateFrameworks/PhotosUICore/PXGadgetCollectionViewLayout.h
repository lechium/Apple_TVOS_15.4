//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewFlowLayout.h>

#import <PhotosUICore/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSString, PXGadgetSpec;
@protocol PXGadgetCollectionViewLayoutDelegate;

@interface PXGadgetCollectionViewLayout : UICollectionViewFlowLayout <UICollectionViewDelegateFlowLayout>
{
    _Bool _prefersPagingEnabled;	// 8 = 0x8
    _Bool _isPageFullColumnnWidth;	// 9 = 0x9
    PXGadgetSpec *_spec;	// 16 = 0x10
    id <PXGadgetCollectionViewLayoutDelegate> _delegate;	// 24 = 0x18
    long long _pageSizeClass;	// 32 = 0x20
    double _columnWidth;	// 40 = 0x28
    double _interSectionSpacing;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000003215d0
@property(nonatomic) double interSectionSpacing; // @synthesize interSectionSpacing=_interSectionSpacing;
@property(nonatomic) double columnWidth; // @synthesize columnWidth=_columnWidth;
@property(nonatomic) _Bool isPageFullColumnnWidth; // @synthesize isPageFullColumnnWidth=_isPageFullColumnnWidth;
@property(nonatomic) long long pageSizeClass; // @synthesize pageSizeClass=_pageSizeClass;
@property(nonatomic) _Bool prefersPagingEnabled; // @synthesize prefersPagingEnabled=_prefersPagingEnabled;
@property(nonatomic) __weak id <PXGadgetCollectionViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXGadgetSpec *spec; // @synthesize spec=_spec;
- (unsigned long long)_sectionHeaderStyleForGadget:(id)arg1;	// IMP=0x00000000003214ce
- (_Bool)_shouldShowSectionHeaderForGadget:(id)arg1;	// IMP=0x00000000003213ed
- (_Bool)_hasButtonForGadget:(id)arg1;	// IMP=0x00000000003213d4
- (unsigned long long)_buttonTypeForGadget:(id)arg1;	// IMP=0x0000000000321386
- (id)_titleForGadget:(id)arg1;	// IMP=0x0000000000321328
- (void)_updateMinimumLineSpacing;	// IMP=0x00000000003212df
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;	// IMP=0x0000000000321157
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0000000000320e31
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000032091f
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000000032087f
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;	// IMP=0x0000000000320528
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;	// IMP=0x00000000003204e7
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x00000000003204df
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;	// IMP=0x00000000003204d7
- (void)setScrollDirection:(long long)arg1;	// IMP=0x0000000000320496
- (_Bool)_disablesDoubleSidedAnimations;	// IMP=0x000000000031ffb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

