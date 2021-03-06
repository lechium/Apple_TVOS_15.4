//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKApplyController, PKDynamicProvisioningPageContent;
@protocol PKApplyCollectionViewSectionControllerDelegate;

@interface PKApplyCollectionViewSectionController
{
    PKApplyController *_controller;	// 8 = 0x8
    PKDynamicProvisioningPageContent *_page;	// 16 = 0x10
    id <PKApplyCollectionViewSectionControllerDelegate> _dynamicCollectionDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003b9be7
@property(nonatomic) id <PKApplyCollectionViewSectionControllerDelegate> dynamicCollectionDelegate; // @synthesize dynamicCollectionDelegate=_dynamicCollectionDelegate;
@property(retain, nonatomic) PKDynamicProvisioningPageContent *page; // @synthesize page=_page;
@property(readonly, nonatomic) PKApplyController *controller; // @synthesize controller=_controller;
- (_Bool)_hasFooterContentForIdentifier:(id)arg1;	// IMP=0x00000000003b9b19
- (_Bool)_hasHeaderContentForIdentifier:(id)arg1;	// IMP=0x00000000003b9aa3
- (_Bool)shouldHighlightItem:(id)arg1;	// IMP=0x00000000003b9a17
- (void)didSelectItem:(id)arg1;	// IMP=0x00000000003b995f
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;	// IMP=0x00000000003b95e0
- (Class)supplementaryRegistrationClassForKind:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x00000000003b94fe
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x00000000003b9352
- (id)cellRegistrationForItem:(id)arg1;	// IMP=0x00000000003b91f1
- (id)listLayoutConfigurationWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x00000000003b914a
- (void)configureCellForRegistration:(id)arg1 item:(id)arg2;	// IMP=0x00000000003b9135
- (void)configureFooterView:(id)arg1 forSectionIdentifier:(id)arg2;	// IMP=0x00000000003b912f
- (Class)footerViewClassForSectionIdentifier:(id)arg1;	// IMP=0x00000000003b9127
- (void)configureHeaderView:(id)arg1 forSectionIdentifier:(id)arg2;	// IMP=0x00000000003b9121
- (Class)headerViewClassForSectionIdentifier:(id)arg1;	// IMP=0x00000000003b9119
- (id)initWithController:(id)arg1 applyPage:(id)arg2;	// IMP=0x00000000003b9077

@end

