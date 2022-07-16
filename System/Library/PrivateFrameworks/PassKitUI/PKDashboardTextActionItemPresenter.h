//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItemPresenter-Protocol.h>

@class NSString, PKDashboardTextCollectionViewCell;

@interface PKDashboardTextActionItemPresenter : NSObject <PKDashboardItemPresenter>
{
    PKDashboardTextCollectionViewCell *_sampleCell;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000062b07
- (void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4;	// IMP=0x00000000000629e3
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x00000000000629d1
- (struct CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000062970
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000628c3
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(CDUnknownBlockType)arg5;	// IMP=0x000000000006282b
- (_Bool)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000062823
- (id)collectionViewCellClasses;	// IMP=0x00000000000627a3
- (Class)itemClass;	// IMP=0x0000000000062792
- (id)init;	// IMP=0x0000000000062715

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

