//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/UICollectionViewDelegate-Protocol.h>
#import <VideosUI/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <VideosUI/VUILibraryDataSourceDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSString, UICollectionViewDiffableDataSource, VUIMediaEntitiesDataSource, VUITVShowDetailPageViewModel, VUIViewControllerContentPresenter;

__attribute__((visibility("hidden")))
@interface VUITVShowDetailPageViewController <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, VUILibraryDataSourceDelegate>
{
    _Bool _seasonsFetchHasCompleted;	// 8 = 0x8
    _Bool _episodesFetchHasCompleted;	// 9 = 0x9
    NSArray *_seasons;	// 16 = 0x10
    NSArray *_episodes;	// 24 = 0x18
    NSArray *_episodeGroups;	// 32 = 0x20
    VUITVShowDetailPageViewModel *_tvShowDetailPageViewModel;	// 40 = 0x28
    VUIViewControllerContentPresenter *_contentPresenter;	// 48 = 0x30
    NSString *_headerTitle;	// 56 = 0x38
    VUIMediaEntitiesDataSource *_seasonsDataSource;	// 64 = 0x40
    VUIMediaEntitiesDataSource *_episodesDataSource;	// 72 = 0x48
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 80 = 0x50
    NSIndexPath *_currentFocusedIndexPath;	// 88 = 0x58
    NSIndexPath *_lastFocusedIndexPath;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000168b6a
@property(retain, nonatomic) NSIndexPath *lastFocusedIndexPath; // @synthesize lastFocusedIndexPath=_lastFocusedIndexPath;
@property(retain, nonatomic) NSIndexPath *currentFocusedIndexPath; // @synthesize currentFocusedIndexPath=_currentFocusedIndexPath;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(nonatomic) _Bool episodesFetchHasCompleted; // @synthesize episodesFetchHasCompleted=_episodesFetchHasCompleted;
@property(nonatomic) _Bool seasonsFetchHasCompleted; // @synthesize seasonsFetchHasCompleted=_seasonsFetchHasCompleted;
@property(retain, nonatomic) VUIMediaEntitiesDataSource *episodesDataSource; // @synthesize episodesDataSource=_episodesDataSource;
@property(retain, nonatomic) VUIMediaEntitiesDataSource *seasonsDataSource; // @synthesize seasonsDataSource=_seasonsDataSource;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // @synthesize contentPresenter=_contentPresenter;
@property(retain, nonatomic) VUITVShowDetailPageViewModel *tvShowDetailPageViewModel; // @synthesize tvShowDetailPageViewModel=_tvShowDetailPageViewModel;
@property(retain, nonatomic) NSArray *episodeGroups; // @synthesize episodeGroups=_episodeGroups;
@property(retain, nonatomic) NSArray *episodes; // @synthesize episodes=_episodes;
@property(retain, nonatomic) NSArray *seasons; // @synthesize seasons=_seasons;
- (_Bool)_allFetchesHaveCompleted;	// IMP=0x000000000016895a
- (id)_seasonIdentifiersWithSeasons:(id)arg1;	// IMP=0x0000000000168794
- (void)_updateTvShowDetailPageViewModelWithSeasonIdentifiers:(id)arg1;	// IMP=0x0000000000168475
- (void)_buildTvShowDetailPageViewModel;	// IMP=0x00000000001683f8
- (id)_episodesBySeasonIdentifier;	// IMP=0x00000000001682a5
- (void)_updateEpisodeShelvesWithLatestEpisodes;	// IMP=0x0000000000167fba
- (id)_createDiffableDataSourceSnapshot;	// IMP=0x0000000000167cfa
- (id)_createDiffableDataSourceForCollectionView:(id)arg1;	// IMP=0x0000000000167876
- (void)dataSourceDidFinishFetching:(id)arg1;	// IMP=0x00000000001671d1
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000166fbb
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000166de9
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000166d05
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000000166cd4
- (id)preferredFocusEnvironments;	// IMP=0x0000000000166c49
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0000000000166bcb
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000166bbd
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000166a0a
- (void)start;	// IMP=0x000000000016681f
- (void)configureWithCollectionView:(id)arg1;	// IMP=0x0000000000166755
- (void)viewWillLayoutSubviews;	// IMP=0x000000000016668c
- (void)viewDidLoad;	// IMP=0x00000000001665b7
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000016656a
- (id)initWithTitle:(id)arg1 withSeasonsDataSource:(id)arg2 withEpisodesDataSource:(id)arg3;	// IMP=0x000000000016644e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

