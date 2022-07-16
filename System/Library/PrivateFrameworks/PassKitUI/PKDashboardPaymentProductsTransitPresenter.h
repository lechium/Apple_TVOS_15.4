//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItemPresenter-Protocol.h>
#import <PassKitUI/PKPerformActionViewControllerDelegate-Protocol.h>

@class NSString, PKAdjustableSingleCellView, PKFusedDoubleCellView, PKPassGroupView, PKPassTransitProductsViewController;

@interface PKDashboardPaymentProductsTransitPresenter : NSObject <PKDashboardItemPresenter, PKPerformActionViewControllerDelegate>
{
    PKPassGroupView *_passGroupView;	// 8 = 0x8
    PKPassTransitProductsViewController *_productDetailsController;	// 16 = 0x10
    PKAdjustableSingleCellView *_sampleSingleCellView;	// 24 = 0x18
    PKFusedDoubleCellView *_sampleFusedCellView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000014c3a5
- (_Bool)cellIsIndependentForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000014c39d
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(CDUnknownBlockType)arg5;	// IMP=0x000000000014c2b5
- (_Bool)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000014c1c8
- (void)performActionViewControllerDidPerformAction:(id)arg1;	// IMP=0x000000000014c14f
- (void)performActionViewControllerDidCancel:(id)arg1;	// IMP=0x000000000014c0d6
- (void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4;	// IMP=0x000000000014bfda
- (id)_passForTransitItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000014bf82
- (CDUnknownBlockType)_actionHandlerForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000014bc82
- (void)_configureView:(id *)arg1 transitItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;	// IMP=0x000000000014adff
- (id)_allocViewForTransitItem:(id)arg1;	// IMP=0x000000000014ad21
- (id)_sampleViewForTransitItem:(id)arg1;	// IMP=0x000000000014ac6a
- (void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3;	// IMP=0x000000000014ab1b
- (struct CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000014a9ef
- (id)_topUpActionForItem:(id)arg1 indexPath:(id)arg2 balanceIdentifier:(id)arg3;	// IMP=0x000000000014a4f6
- (id)_renewActionForItem:(id)arg1 commutePlanIdentifier:(id)arg2;	// IMP=0x000000000014a485
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x000000000014a357
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000014a27f
- (id)displayableBalancesForTransitItem:(id)arg1;	// IMP=0x000000000014a199
- (long long)_viewTypeForTransitItem:(id)arg1;	// IMP=0x000000000014a0ff
- (id)_identifierForItem:(id)arg1;	// IMP=0x000000000014a0cd
- (id)collectionViewCellClasses;	// IMP=0x000000000014a02b
- (Class)itemClass;	// IMP=0x000000000014a01a
- (id)initWithPassGroupView:(id)arg1;	// IMP=0x0000000000149f1e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
