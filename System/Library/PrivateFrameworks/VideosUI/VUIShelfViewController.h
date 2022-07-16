//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/TVShelfViewLayoutDelegate-Protocol.h>
#import <VideosUI/UICollectionViewDelegate-Protocol.h>

@class NSIndexPath, NSString, UICollectionView, UIView, VUIShelfView;

__attribute__((visibility("hidden")))
@interface VUIShelfViewController : UIViewController <UICollectionViewDelegate, TVShelfViewLayoutDelegate>
{
    _Bool _shouldUpdateBeforeLayout;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    UIView *_headerView;	// 24 = 0x18
    long long _gridStyle;	// 32 = 0x20
    VUIShelfView *_containerView;	// 40 = 0x28
    NSIndexPath *_focusedIndexPath;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000182cb0
@property(retain, nonatomic) NSIndexPath *focusedIndexPath; // @synthesize focusedIndexPath=_focusedIndexPath;
@property(retain, nonatomic) VUIShelfView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) long long gridStyle; // @synthesize gridStyle=_gridStyle;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)_updateCollectionViewLayout:(_Bool)arg1;	// IMP=0x0000000000182b26
- (void)_snapTargetContentOffset:(inout struct CGPoint *)arg1 toItemIndexPath:(id)arg2 atItemOffset:(struct CGPoint)arg3;	// IMP=0x0000000000182770
- (id)_findSnappingItemFromContentOffset:(inout struct CGPoint *)arg1 withVelocity:(struct CGPoint)arg2;	// IMP=0x00000000001822df
- (void)_ensureScrollViewSnaps;	// IMP=0x00000000001820f8
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x00000000001820e3
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000181f57
- (void)updateContentOffsetWithTransitionCoordinator:(id)arg1;	// IMP=0x0000000000181c08
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000181b86
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x0000000000181b45
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000181a30
- (void)loadView;	// IMP=0x00000000001817a1
- (id)initWithGridStyle:(long long)arg1;	// IMP=0x00000000001816e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

