//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, PKDigitalIssuanceServiceProviderProduct, UICollectionViewCellRegistration, UIImage;
@protocol PKPaymentServiceProviderItemsListSectionControllerDelegate;

@interface PKPaymentServiceProviderItemsListSectionController
{
    NSArray *_items;	// 8 = 0x8
    PKDigitalIssuanceServiceProviderProduct *_product;	// 16 = 0x10
    NSString *_currency;	// 24 = 0x18
    UICollectionViewCellRegistration *cellRegistration;	// 32 = 0x20
    id <PKPaymentServiceProviderItemsListSectionControllerDelegate> _delegate;	// 40 = 0x28
    UIImage *_cardImage;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000038efae
@property(retain, nonatomic) UIImage *cardImage; // @synthesize cardImage=_cardImage;
@property(nonatomic) __weak id <PKPaymentServiceProviderItemsListSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UICollectionViewCellRegistration *cellRegistration; // @synthesize cellRegistration;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;	// IMP=0x000000000038ee60
- (Class)supplementaryRegistrationClassForKind:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x000000000038ee4f
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x000000000038edbc
- (id)defaultListLayout;	// IMP=0x000000000038ed52
- (void)didSelectItem:(id)arg1;	// IMP=0x000000000038ece0
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;	// IMP=0x000000000038eca0
- (id)initWithIdentifier:(id)arg1 image:(id)arg2 serviceProviderProduct:(id)arg3 serviceProviderItems:(id)arg4 currency:(id)arg5;	// IMP=0x000000000038e6b8

@end

