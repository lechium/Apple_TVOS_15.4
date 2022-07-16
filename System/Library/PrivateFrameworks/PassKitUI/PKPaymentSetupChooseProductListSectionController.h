//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PKPaymentDigitalIssuanceMetadata, UICollectionViewCellRegistration, UIImage;
@protocol PKPaymentSetupChooseProductListSectionControllerDelegate;

@interface PKPaymentSetupChooseProductListSectionController
{
    NSArray *_items;	// 8 = 0x8
    PKPaymentDigitalIssuanceMetadata *_digitalIssuanceMetadata;	// 16 = 0x10
    UICollectionViewCellRegistration *cellRegistration;	// 24 = 0x18
    id <PKPaymentSetupChooseProductListSectionControllerDelegate> _delegate;	// 32 = 0x20
    UIImage *_cardImage;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003bc236
@property(retain, nonatomic) UIImage *cardImage; // @synthesize cardImage=_cardImage;
@property(nonatomic) __weak id <PKPaymentSetupChooseProductListSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UICollectionViewCellRegistration *cellRegistration; // @synthesize cellRegistration;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;	// IMP=0x00000000003bc100
- (Class)supplementaryRegistrationClassForKind:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x00000000003bc0ef
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x00000000003bc05c
- (id)defaultListLayout;	// IMP=0x00000000003bbff2
- (void)didSelectItem:(id)arg1;	// IMP=0x00000000003bbf95
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;	// IMP=0x00000000003bbf55
- (id)_generateItems;	// IMP=0x00000000003bbd69
- (id)initWithIdentifier:(id)arg1 image:(id)arg2 digitalIssuanceMetadata:(id)arg3;	// IMP=0x00000000003bb974

@end

