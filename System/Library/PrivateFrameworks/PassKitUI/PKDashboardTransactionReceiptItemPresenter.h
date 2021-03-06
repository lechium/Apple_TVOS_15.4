//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItemPresenter-Protocol.h>

@class NSString, PKDashboardStackedImageCollectionViewCell, PKPaymentTransactionDetailsFactory;

@interface PKDashboardTransactionReceiptItemPresenter : NSObject <PKDashboardItemPresenter>
{
    PKDashboardStackedImageCollectionViewCell *_sampleCell;	// 8 = 0x8
    PKPaymentTransactionDetailsFactory *_transactionDetailsFactory;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000082560
- (void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4;	// IMP=0x0000000000082333
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x0000000000082321
- (struct CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000008226a
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000821bd
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(CDUnknownBlockType)arg5;	// IMP=0x000000000008204b
- (_Bool)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000082043
- (id)collectionViewCellClasses;	// IMP=0x0000000000081fc3
- (Class)itemClass;	// IMP=0x0000000000081fb2
- (id)_contactKeysToFetch;	// IMP=0x0000000000081f02
- (id)init;	// IMP=0x0000000000081d9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

