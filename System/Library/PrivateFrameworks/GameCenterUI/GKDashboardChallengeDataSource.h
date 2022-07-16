//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/GKDashboardChallengeDetailViewControllerDelegate-Protocol.h>

@class GKGameRecord, NSArray;

@interface GKDashboardChallengeDataSource <GKDashboardChallengeDetailViewControllerDelegate>
{
    _Bool _shouldShowPlay;	// 8 = 0x8
    GKGameRecord *_gameRecord;	// 16 = 0x10
    NSArray *_challenges;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004d5fa
@property(retain, nonatomic) NSArray *challenges; // @synthesize challenges=_challenges;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(nonatomic) _Bool shouldShowPlay; // @synthesize shouldShowPlay=_shouldShowPlay;
- (void)newDashboardUserDidSelectPlayChallenge:(id)arg1;	// IMP=0x000000000004d57e
- (void)userDidSelectPlay:(id)arg1;	// IMP=0x000000000004d56c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000004d1d8
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000004d18d
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000004d174
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000004ce64
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000004ce59
- (id)sectionHeaderText;	// IMP=0x000000000004cce4
- (id)itemForIndexPath:(id)arg1;	// IMP=0x000000000004cc41
- (double)preferredCollectionHeight;	// IMP=0x000000000004cc28
- (long long)itemCount;	// IMP=0x000000000004cc0b
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004c69a
- (void)setupCollectionView:(id)arg1;	// IMP=0x000000000004c5af
- (id)initWithGameRecord:(id)arg1;	// IMP=0x000000000004c52d

@end

