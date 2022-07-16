//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TVMLKit/UICollectionViewDataSource-Protocol.h>
#import <TVMLKit/_TVCollectionViewDelegate-Protocol.h>
#import <TVMLKit/_TVColumnListViewDelegateFlowLayout-Protocol.h>

@class IKViewElement, NSArray, NSString, _TVColumnListView;

__attribute__((visibility("hidden")))
@interface _TVColumnListViewController : UIViewController <_TVCollectionViewDelegate, _TVColumnListViewDelegateFlowLayout, UICollectionViewDataSource>
{
    IKViewElement *_columnListElement;	// 8 = 0x8
    _TVColumnListView *_collectionView;	// 16 = 0x10
    struct CGSize _cachedSize;	// 24 = 0x18
    NSArray *_cachedDataSource;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000007f727
- (void)_dispatchEvent:(id)arg1 forItemAtIndexPath:(id)arg2;	// IMP=0x000000000007f5d2
- (id)_dataSourceWithSections:(id)arg1 numColumns:(unsigned long long)arg2 lineSpace:(double)arg3;	// IMP=0x000000000007eb73
- (void)_updateDataSource;	// IMP=0x000000000007ea5c
- (void)_updateViewLayout;	// IMP=0x000000000007e927
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000007e3f3
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000007e377
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000007e35a
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x000000000007e352
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x000000000007e336
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;	// IMP=0x000000000007e31a
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000007e2fe
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;	// IMP=0x000000000007e267
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000000007e201
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000007e09e
- (struct CGSize)_collectionView:(id)arg1 layout:(id)arg2 sizeThatFits:(struct CGSize)arg3;	// IMP=0x000000000007dbc3
- (id)preferredFocusEnvironments;	// IMP=0x000000000007db4a
- (void)viewDidLayoutSubviews;	// IMP=0x000000000007da85
- (void)viewDidLoad;	// IMP=0x000000000007d889
- (void)updateWithViewElement:(id)arg1;	// IMP=0x000000000007d7b6
- (void)dealloc;	// IMP=0x000000000007d74f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

