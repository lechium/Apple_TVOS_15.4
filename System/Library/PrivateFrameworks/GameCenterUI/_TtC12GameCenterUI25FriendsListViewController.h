//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/UISearchControllerDelegate-Protocol.h>
#import <GameCenterUI/UISearchResultsUpdating-Protocol.h>

@class MISSING_TYPE;

@interface _TtC12GameCenterUI25FriendsListViewController <UISearchResultsUpdating, UISearchControllerDelegate>
{
    MISSING_TYPE *bootstrapPresenter;	// 96 = 0x60
    MISSING_TYPE *statePresenter;	// 104 = 0x68
    MISSING_TYPE *compositionalLayout;	// 112 = 0x70
    MISSING_TYPE *diffableDataSource;	// 120 = 0x78
    MISSING_TYPE *components;	// 128 = 0x80
    MISSING_TYPE *searchController;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000001f8430
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001f8360
- (void)didDismissSearchController:(id)arg1;	// IMP=0x00000000001f7e10
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x00000000001f7d70
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x00000000001f7b70
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000001f7710
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000001f73a0
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000001f7030
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000001f6e00
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001f5bb0
- (void)viewDidLoad;	// IMP=0x00000000001f5b20
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f5a70

@end
