//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/UICollectionViewDataSource-Protocol.h>
#import <VideosUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSString, UICollectionView, VUIDebugContainerView, VUIDebugViewDataSource;

@interface VUIDebugViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _requiresRelayout;	// 8 = 0x8
    VUIDebugContainerView *_containerView;	// 16 = 0x10
    UICollectionView *_collectionView;	// 24 = 0x18
    VUIDebugViewDataSource *_dataSource;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001a52cd
@property(retain, nonatomic) VUIDebugViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool requiresRelayout; // @synthesize requiresRelayout=_requiresRelayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) VUIDebugContainerView *containerView; // @synthesize containerView=_containerView;
- (void)_dismissViewController;	// IMP=0x00000000001a5225
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000001a508a
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000000001a5082
- (id)preferredFocusEnvironments;	// IMP=0x00000000001a4ff7
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000000001a4f32
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000001a4c44
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000001a4b7c
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000001a48ac
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000001a4858
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000001a478d
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000001a4782
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000001a45d2
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001a44eb
- (void)viewDidLayoutSubviews;	// IMP=0x00000000001a4449
- (void)dealloc;	// IMP=0x00000000001a43d5
- (void)viewDidLoad;	// IMP=0x00000000001a435e
- (void)loadView;	// IMP=0x00000000001a403f
- (long long)preferredStatusBarStyle;	// IMP=0x00000000001a4037
- (id)init;	// IMP=0x00000000001a3fda

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
