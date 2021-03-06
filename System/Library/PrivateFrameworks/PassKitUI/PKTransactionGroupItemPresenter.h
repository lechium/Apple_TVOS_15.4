//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItemPresenter-Protocol.h>

@class NSCache, NSDateFormatter, NSString, PKContactAvatarManager, PKContactResolver, PKMapsSnapshotManager, PKPaymentTransactionCollectionViewCell, PKPaymentTransactionIconGenerator, UIFont, UIImage;
@protocol PKPaymentDataProvider;

@interface PKTransactionGroupItemPresenter : NSObject <PKDashboardItemPresenter>
{
    PKPaymentTransactionCollectionViewCell *_sampleCell;	// 8 = 0x8
    UIFont *_transactionCellPrimaryLabelFont;	// 16 = 0x10
    UIFont *_transactionCellValueLabelFont;	// 24 = 0x18
    UIFont *_transactionCellSecondaryLabelFont;	// 32 = 0x20
    UIImage *_emptyImage;	// 40 = 0x28
    UIImage *_cashbackImage;	// 48 = 0x30
    UIImage *_transactionListImage;	// 56 = 0x38
    UIImage *_interestImage;	// 64 = 0x40
    UIImage *_appleCardImage;	// 72 = 0x48
    UIImage *_refundsImage;	// 80 = 0x50
    UIImage *_adjustmentsImage;	// 88 = 0x58
    NSCache *_iconsPerMerchantCategory;	// 96 = 0x60
    struct CGSize _groupSize;	// 104 = 0x68
    _Bool _needsSizing;	// 120 = 0x78
    NSDateFormatter *_formatterYear;	// 128 = 0x80
    NSDateFormatter *_formatterMonth;	// 136 = 0x88
    _Bool _useAccessibilityLayout;	// 144 = 0x90
    PKPaymentTransactionIconGenerator *_iconGenerator;	// 152 = 0x98
    PKMapsSnapshotManager *_snapshotManager;	// 160 = 0xa0
    PKContactResolver *_contactResolver;	// 168 = 0xa8
    id <PKPaymentDataProvider> _paymentDataProvider;	// 176 = 0xb0
    PKContactAvatarManager *_avatarManager;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x000000000001d16f
@property(retain, nonatomic) PKContactAvatarManager *avatarManager; // @synthesize avatarManager=_avatarManager;
@property(retain, nonatomic) id <PKPaymentDataProvider> paymentDataProvider; // @synthesize paymentDataProvider=_paymentDataProvider;
@property(retain, nonatomic) PKMapsSnapshotManager *snapshotManager; // @synthesize snapshotManager=_snapshotManager;
@property(retain, nonatomic) PKContactResolver *contactResolver; // @synthesize contactResolver=_contactResolver;
- (void)_updatePrimaryLabelOnTransactionCell:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 contact:(id)arg3;	// IMP=0x000000000001d04d
- (void)_updateAvatarOnTransactionCell:(id)arg1 withGroup:(id)arg2 contact:(id)arg3;	// IMP=0x000000000001d047
- (struct CGSize)_imageSize;	// IMP=0x000000000001d026
- (id)adjustmentsImage;	// IMP=0x000000000001cf5e
- (id)refundsImage;	// IMP=0x000000000001ce96
- (id)appleCardImage;	// IMP=0x000000000001cdce
- (id)interestImage;	// IMP=0x000000000001cd06
- (id)cashbackImage;	// IMP=0x000000000001cc3e
- (id)transactionListImage;	// IMP=0x000000000001cb76
- (void)_applyTokenFiltersFromItem:(id)arg1 toFetcher:(id)arg2;	// IMP=0x000000000001bfe2
- (void)_viewControllerForItem:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001aeec
- (void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 forSizing:(_Bool)arg5;	// IMP=0x0000000000018d1e
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(CDUnknownBlockType)arg5;	// IMP=0x0000000000018c0f
- (_Bool)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000018bc4
- (struct CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000018a86
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x0000000000018a64
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000189ad
- (void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3;	// IMP=0x0000000000018873
- (id)collectionViewCellClasses;	// IMP=0x00000000000187f3
- (Class)itemClass;	// IMP=0x00000000000187e2
- (id)init;	// IMP=0x0000000000018618

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

