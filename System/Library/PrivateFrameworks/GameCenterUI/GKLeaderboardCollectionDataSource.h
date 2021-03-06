//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKLeaderboardCollectionDataSource
{
}

- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x000000000003603b
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000000000359ff
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000358ff
- (void)collectionView:(id)arg1 updateLayoutForSectionHeader:(id)arg2;	// IMP=0x0000000000035879
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000035741
- (void)updateHighlightsInSectionHeader:(id)arg1;	// IMP=0x000000000003573b
- (double)topMargin;	// IMP=0x000000000003572d
- (double)headerSpacing;	// IMP=0x000000000003571f
- (double)cellSpacing;	// IMP=0x0000000000035711
- (double)preferredCollectionHeight;	// IMP=0x0000000000035703
- (long long)allowedColumnCount:(long long)arg1;	// IMP=0x00000000000356ad
- (void)setupCollectionView:(id)arg1;	// IMP=0x00000000000355ce

@end

