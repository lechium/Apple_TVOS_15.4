//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKPaymentProvisioningControllerDelegate-Protocol.h>

@class NSArray, NSHashTable, NSMutableArray, NSObject, NSString, PKPaymentProvisioningController, PKPaymentSetupProduct;
@protocol OS_dispatch_queue, PKPaymentSetupCredentialsSectionControllerDelegate;

@interface PKPaymentSetupCredentialsSectionController <PKPaymentProvisioningControllerDelegate>
{
    PKPaymentProvisioningController *_provisioningController;	// 8 = 0x8
    long long _setupContext;	// 16 = 0x10
    NSString *_lastBackedUpDefaultPaymentPassSerialNumber;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 32 = 0x20
    NSMutableArray *_availableCredentials;	// 40 = 0x28
    NSMutableArray *_unavailableCredentials;	// 48 = 0x30
    NSMutableArray *_refundCredentials;	// 56 = 0x38
    PKPaymentSetupProduct *_product;	// 64 = 0x40
    NSHashTable *_selectedCredentialsBeforeEditing;	// 72 = 0x48
    _Bool _isEditing;	// 80 = 0x50
    NSArray *_targetDeviceSEIDs;	// 88 = 0x58
    unsigned long long _maximumNumberOfSelectableCredentials;	// 96 = 0x60
    id <PKPaymentSetupCredentialsSectionControllerDelegate> _delegate;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000002164e5
@property(nonatomic) __weak id <PKPaymentSetupCredentialsSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long maximumNumberOfSelectableCredentials; // @synthesize maximumNumberOfSelectableCredentials=_maximumNumberOfSelectableCredentials;
- (void)_removeCredentialItem:(id)arg1;	// IMP=0x00000000002162b1
- (id)_credentialItemFromIndexPath:(id)arg1;	// IMP=0x00000000002160fa
- (id)_credentialItemForCredential:(id)arg1;	// IMP=0x0000000000215e53
- (void)_replaceAndReloadItem:(id)arg1 withNewItem:(id)arg2;	// IMP=0x0000000000215bb3
- (struct CGSize)_defaultCardSize;	// IMP=0x0000000000215b9d
- (id)_cardArtForCredentialItem:(id)arg1;	// IMP=0x0000000000215669
- (id)_detailTextForCredential:(id)arg1;	// IMP=0x00000000002150ed
- (id)_titleTextForCredential:(id)arg1;	// IMP=0x00000000002150d8
- (void)_createPassSnapshotFromPaymentPass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000214d49
- (void)_deleteItem:(id)arg1;	// IMP=0x00000000002147b5
- (void)_primeItemSelectionAndReloadData:(_Bool)arg1;	// IMP=0x00000000002145f0
- (_Bool)_setCredential:(id)arg1 selected:(_Bool)arg2 silently:(_Bool)arg3;	// IMP=0x00000000002142ef
- (void)_updateMaximumSelectableCredentials;	// IMP=0x0000000000213f9c
- (_Bool)_canSelectedCredential:(id)arg1;	// IMP=0x0000000000213f56
- (unsigned long long)_numberOfSelectedPeerPaymentCredentials;	// IMP=0x0000000000213ef6
- (unsigned long long)_numberOfSelectedCredentials;	// IMP=0x0000000000213e93
- (_Bool)_hasSelectedCredentials;	// IMP=0x0000000000213e4b
- (void)_updateRemoteCredentialCache;	// IMP=0x0000000000213d1e
- (void)_sortCredentialItems:(id)arg1;	// IMP=0x00000000002133d0
- (void)_loadCredentials:(id)arg1 create:(_Bool)arg2;	// IMP=0x00000000002129d3
- (void)paymentPassUpdatedOnCredential:(id)arg1;	// IMP=0x0000000000212881
- (void)didSelectItem:(id)arg1;	// IMP=0x00000000002126c6
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;	// IMP=0x000000000021246a
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x00000000002123d7
- (id)identifiers;	// IMP=0x00000000002122f6
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;	// IMP=0x00000000002121db
- (id)decoratePaymentSetListCell:(id)arg1 forItem:(id)arg2;	// IMP=0x0000000000211f42
- (_Bool)shouldShowEditButton;	// IMP=0x0000000000211f1e
- (void)setEditing:(_Bool)arg1;	// IMP=0x0000000000211a62
- (_Bool)doesContainCredentialThatRequiresAuth:(id)arg1;	// IMP=0x0000000000211a5a
- (_Bool)hasCredentialThatRequiresAuth;	// IMP=0x00000000002119e0
- (void)reloadCredentialStores;	// IMP=0x000000000021194a
- (void)setCredential:(id)arg1 selected:(_Bool)arg2;	// IMP=0x0000000000211935
- (id)availableCredentialRequiringAction;	// IMP=0x000000000021170f
- (id)unselectedCredentialRequiringAction;	// IMP=0x00000000002114d4
- (id)selectedCredentials;	// IMP=0x00000000002112f2
- (void)dealloc;	// IMP=0x00000000002112a6
- (id)initWithCredentials:(id)arg1 provisioningController:(id)arg2 context:(long long)arg3 product:(id)arg4;	// IMP=0x00000000002110df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

