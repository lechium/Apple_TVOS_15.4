//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/UICollectionViewDelegate-Protocol.h>
#import <VideosUI/VUICollectionViewCellInteractor-Protocol.h>
#import <VideosUI/_TtP8VideosUI21VUIScrollViewDelegate_-Protocol.h>
#import <VideosUI/_TtP8VideosUI25VUICollectionViewDelegate_-Protocol.h>
#import <VideosUI/_TtP8VideosUI30VUICollectionViewFocusDelegate_-Protocol.h>
#import <VideosUI/_TtP8VideosUI46StackCollectionViewCompositionalLayoutDelegate_-Protocol.h>

@interface (null) (VideosUI) <_TtP8VideosUI25VUICollectionViewDelegate_, _TtP8VideosUI21VUIScrollViewDelegate_, _TtP8VideosUI30VUICollectionViewFocusDelegate_, UICollectionViewDelegate, _TtP8VideosUI46StackCollectionViewCompositionalLayoutDelegate_, VUICollectionViewCellInteractor>
- (struct CGPoint)vuiCollectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;	// IMP=0x00000000004b2f60
- (void)vuiCollectionView:(id)arg1 didSelectItemAt:(id)arg2;	// IMP=0x00000000004b2d10
- (void)vuiCollectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 at:(id)arg4;	// IMP=0x00000000004b2a60
- (void)vuiCollectionView:(id)arg1 didEndDisplaying:(id)arg2 for:(id)arg3;	// IMP=0x00000000004b2900
- (void)vuiCollectionView:(id)arg1 willDisplay:(id)arg2 for:(id)arg3;	// IMP=0x00000000004b27a0
- (void)vuiScrollViewDidScroll:(id)arg1;	// IMP=0x00000000004b3400
- (void)vuiScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;	// IMP=0x00000000004b3140
- (void)vuiScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000000004b3130
- (void)vuiScrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000004b3120
- (void)vuiScrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000004b30d0
- (void)vuiCollectionView:(id)arg1 didUpdateFocusIn:(id)arg2 with:(id)arg3;	// IMP=0x00000000004b3670
- (id)vuiIndexPathForPreferredFocusedViewIn:(id)arg1;	// IMP=0x00000000004b3450
- (_Bool)shouldRubberbandElementWithCategory:(unsigned long long)arg1 in:(id)arg2 at:(id)arg3;	// IMP=0x00000000004b3850
- (_Bool)vui_handleActionInCell:(id)arg1 fromSubview:(id)arg2 details:(id)arg3;	// IMP=0x00000000004b3d00
- (void)vui_cellNeedsReloading:(id)arg1;	// IMP=0x00000000004b3cb0
@end

