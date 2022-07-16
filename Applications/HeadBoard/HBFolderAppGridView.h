//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HBFolderAppGridView
{
}

- (void)updateScrollEventEditingPosition:(struct CGPoint)arg1;	// IMP=0x00400000000aa515
- (void)afterScrollToIndexPathWithCell:(id)arg1;	// IMP=0x00100000000aa40e
- (void)_scrollToIndexPath:(id)arg1 animations:(CDUnknownBlockType)arg2;	// IMP=0x00100000000aa312
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;	// IMP=0x00100000000aa1a8
- (id)_scrollRegionIndexPathForCurrentEditingPosition;	// IMP=0x00100000000aa071
- (double)_ratioIntoScrollRegion;	// IMP=0x00100000000a9e9b
- (long long)_regionForCurrentEditingPosition;	// IMP=0x00100000000a9daa
- (struct CGRect)_editingAreaRect;	// IMP=0x00100000000a9d27
- (struct CGRect)_collectionViewHoverOverlayRect:(id)arg1 layout:(id)arg2;	// IMP=0x00100000000a9d08
- (struct CGRect)_hoverRect;	// IMP=0x00100000000a9ce9
- (struct CGRect)_visibleContentRect;	// IMP=0x00100000000a9cca
- (_Bool)_isPositionOutOfFolder:(struct CGPoint)arg1;	// IMP=0x00100000000a9bd7
- (struct CGRect)_bounds;	// IMP=0x00100000000a9b79
- (struct CGRect)_localFrameForRegion:(long long)arg1;	// IMP=0x00100000000a9ae4
- (struct CGRect)_localFrame;	// IMP=0x00100000000a9a7a
- (struct CGRect)_screenFrame;	// IMP=0x00100000000a9a1c
- (struct CGPoint)_localEditingPosition;	// IMP=0x00100000000a99c2
- (struct CGPoint)_screenEditingPosition;	// IMP=0x00100000000a993c
- (id)initWithFrame:(struct CGRect)arg1 dockMode:(_Bool)arg2;	// IMP=0x00100000000a98ab

@end

