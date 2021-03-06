//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionView.h>

#import <TVMLKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSIndexPath, NSString;

@interface _TVStackCollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    double _bottomPadding;	// 8 = 0x8
    struct UIEdgeInsets _gradientBoundsInsets;	// 16 = 0x10
    CDStruct_ce7ae26c _flags;	// 48 = 0x30
    NSIndexPath *_indexPathForLastFocusedItem;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000437ff
@property(readonly, copy, nonatomic) NSIndexPath *indexPathForLastFocusedItem; // @synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem;
- (struct CGRect)_visibleBounds;	// IMP=0x00000000000436f8
- (void)_performWithoutLayoutBelow:(CDUnknownBlockType)arg1;	// IMP=0x00000000000436b5
- (void)layoutBelowIfNeeded;	// IMP=0x0000000000043679
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000000435d9
- (void)reloadData;	// IMP=0x000000000004358f
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000432bd
- (void)_getGradientMaskBounds:(out struct CGRect *)arg1 startInsets:(out struct UIEdgeInsets *)arg2 endInsets:(out struct UIEdgeInsets *)arg3 intensities:(out struct UIEdgeInsets *)arg4;	// IMP=0x000000000004323b
@property(nonatomic, getter=_gradientBoundsInsets, setter=_setGradientBoundsInsets:) struct UIEdgeInsets _gradientBoundsInsets;
- (void)setBottomPaddingForVisibleBounds:(double)arg1;	// IMP=0x00000000000431eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

