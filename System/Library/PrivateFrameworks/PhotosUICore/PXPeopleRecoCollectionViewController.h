//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewController.h>

#import <PhotosUICore/PXPeopleRecoDataSourceDelegate-Protocol.h>
#import <PhotosUICore/UICollectionViewDataSourcePrefetching-Protocol.h>

@class NSString, PXPeopleRecoDataSource, UICollectionViewCellRegistration, UICollectionViewSupplementaryRegistration;

@interface PXPeopleRecoCollectionViewController : UICollectionViewController <UICollectionViewDataSourcePrefetching, PXPeopleRecoDataSourceDelegate>
{
    PXPeopleRecoDataSource *_dataSource;	// 8 = 0x8
    UICollectionViewCellRegistration *_cellRegistration;	// 16 = 0x10
    UICollectionViewSupplementaryRegistration *_headerRegistration;	// 24 = 0x18
}

+ (id)recoControllerForPerson:(id)arg1;	// IMP=0x0000000000330b23
- (void).cxx_destruct;	// IMP=0x00000000003307b4
@property(readonly, nonatomic) UICollectionViewSupplementaryRegistration *headerRegistration; // @synthesize headerRegistration=_headerRegistration;
@property(readonly, nonatomic) UICollectionViewCellRegistration *cellRegistration; // @synthesize cellRegistration=_cellRegistration;
@property(readonly, nonatomic) PXPeopleRecoDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)recoDataSourceDataChanged:(id)arg1;	// IMP=0x0000000000330744
- (void)_tagMoreTapped:(id)arg1;	// IMP=0x0000000000330651
- (void)_doneTapped:(id)arg1;	// IMP=0x00000000003305d1
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0000000000330559
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000000330309
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000003301b7
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000330120
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000330061
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000033001d
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000330012
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000032ff9e
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000032ff2d
- (void)viewDidLoad;	// IMP=0x000000000032fe6c
- (id)_initWithPerson:(id)arg1;	// IMP=0x000000000032fbe6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

