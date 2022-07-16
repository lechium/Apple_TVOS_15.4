//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItemPresenter-Protocol.h>
#import <PassKitUI/PKPassTileGroupViewDelegate-Protocol.h>

@class NSString, PKDashboardContentHostCollectionViewCell;
@protocol PKDashboardPassTilesItemPresenterDelegate;

@interface PKDashboardPassTilesItemPresenter : NSObject <PKPassTileGroupViewDelegate, PKDashboardItemPresenter>
{
    PKDashboardContentHostCollectionViewCell *_sampleCell;	// 8 = 0x8
    id <PKDashboardPassTilesItemPresenterDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002042a3
@property(nonatomic) __weak id <PKDashboardPassTilesItemPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)passTileGroupView:(id)arg1 executeSEActionForPass:(id)arg2 tile:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002041c7
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(CDUnknownBlockType)arg5;	// IMP=0x00000000002041c1
- (_Bool)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000002041b9
- (void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 animated:(_Bool)arg5;	// IMP=0x000000000020403c
- (struct CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000203ef5
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x0000000000203d36
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000203c7f
- (id)collectionViewCellClasses;	// IMP=0x0000000000203bff
- (Class)itemClass;	// IMP=0x0000000000203bee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
