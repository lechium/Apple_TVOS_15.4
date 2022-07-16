//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/PBSPictureInPictureControllerObserver-Protocol.h>

@class NSArray, NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerPiPContextMenuViewController <PBSPictureInPictureControllerObserver>
{
    NSArray *_visibleItems;	// 8 = 0x8
    NSArray *_availableItems;	// 16 = 0x10
    NSIndexSet *_visibleItemIndexSet;	// 24 = 0x18
}

+ (id)viewControllerPresentingFromSourceView:(id)arg1 inCollectionView:(id)arg2;	// IMP=0x00000000000faf2c
- (void).cxx_destruct;	// IMP=0x00000000000faa02
@property(readonly, copy, nonatomic) NSIndexSet *visibleItemIndexSet; // @synthesize visibleItemIndexSet=_visibleItemIndexSet;
@property(readonly, nonatomic) NSArray *availableItems; // @synthesize availableItems=_availableItems;
- (void)_performMove;	// IMP=0x00000000000fa99c
- (void)_performSwap;	// IMP=0x00000000000fa832
- (void)_performStop;	// IMP=0x00000000000fa78f
- (void)_reloadMoveItemCell;	// IMP=0x00000000000fa5bf
- (id)_moveItemCells;	// IMP=0x00000000000fa482
- (id)_moveItem;	// IMP=0x00000000000fa460
@property(readonly, nonatomic) NSArray *visibleItems; // @synthesize visibleItems=_visibleItems;
- (void)_updateUsingPictureInPictureState:(id)arg1;	// IMP=0x00000000000f9f1d
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000f9e23
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000f9ddf
- (void)_configureCell:(id)arg1 atIndexPath:(id)arg2 withItem:(id)arg3;	// IMP=0x00000000000f9d3a
- (id)_itemAtIndexPath:(id)arg1;	// IMP=0x00000000000f9ca7
- (unsigned long long)_sectionCount;	// IMP=0x00000000000f9c9c
- (void)pictureInPictureController:(id)arg1 didChangeCurrentQuadrant:(long long)arg2;	// IMP=0x00000000000f9bc4
- (void)pictureInPictureController:(id)arg1 didUpdatePresentationState:(unsigned long long)arg2;	// IMP=0x00000000000f9b2f
- (void)viewDidLoad;	// IMP=0x00000000000f9a90
- (void)dealloc;	// IMP=0x00000000000f9a1b
- (id)initWithSender:(id)arg1 inCollectionView:(id)arg2;	// IMP=0x00000000000f9869

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
