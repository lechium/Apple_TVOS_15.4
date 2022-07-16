//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItemPresenter-Protocol.h>

@class NSString, PKContactAvatarManager, PKFamilyMemberCollection, PKSpendingSummaryAccountUserCell, PKTransactionSourceCollection;

@interface PKSpendingSummaryAccountUserPresenter : NSObject <PKDashboardItemPresenter>
{
    PKTransactionSourceCollection *_transactionSourceCollection;	// 8 = 0x8
    PKFamilyMemberCollection *_familyCollection;	// 16 = 0x10
    PKContactAvatarManager *_avatarManager;	// 24 = 0x18
    PKSpendingSummaryAccountUserCell *_sampleCell;	// 32 = 0x20
    double _interimSpacing;	// 40 = 0x28
    long long _numUsers;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000026aac9
- (void)_configureCell:(id)arg1 item:(id)arg2;	// IMP=0x000000000026a4e2
- (void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3;	// IMP=0x000000000026a3e5
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(CDUnknownBlockType)arg5;	// IMP=0x000000000026a3df
- (struct CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000026a27a
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x000000000026a268
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000026a1bb
- (id)collectionViewCellClasses;	// IMP=0x000000000026a13b
- (Class)itemClass;	// IMP=0x000000000026a12a
- (id)initWithTransactionSourceCollection:(id)arg1 familyCollection:(id)arg2 avatarManager:(id)arg3 interimSpacing:(double)arg4;	// IMP=0x0000000000269fd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
