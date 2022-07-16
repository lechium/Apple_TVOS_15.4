//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewController.h>

#import <Preferences/PSKeyboardNavigationSearchResultsController-Protocol.h>

@class NSObject, UICollectionViewDiffableDataSource, _SUIKSearchResultsUpdateOperation;
@protocol SUIKSearchResultsCollectionViewControllerDelegate;

@interface SUIKSearchResultsCollectionViewController : UICollectionViewController <PSKeyboardNavigationSearchResultsController>
{
    NSObject<SUIKSearchResultsCollectionViewControllerDelegate> *_delegate;	// 8 = 0x8
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 16 = 0x10
    _SUIKSearchResultsUpdateOperation *_updateOperation;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d387d
@property(retain, nonatomic) _SUIKSearchResultsUpdateOperation *updateOperation; // @synthesize updateOperation=_updateOperation;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(nonatomic) __weak NSObject<SUIKSearchResultsCollectionViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)_selectAndScrollToIndexPath:(id)arg1;	// IMP=0x00000000000d3675
- (void)showSelectedSearchResult;	// IMP=0x00000000000d359e
- (void)selectPreviousSearchResult;	// IMP=0x00000000000d33e9
- (void)selectNextSearchResult;	// IMP=0x00000000000d31c1
- (void)searchQueryCompleted;	// IMP=0x00000000000d31bb
- (void)searchQueryFoundItems:(id)arg1;	// IMP=0x00000000000d2fd5
- (void)searchQueryStarted;	// IMP=0x00000000000d2f82
- (void)setResults:(id)arg1;	// IMP=0x00000000000d2d5c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000d2c0a
- (double)iconWidth;	// IMP=0x00000000000d2b98
- (void)viewDidLoad;	// IMP=0x00000000000d2488
- (id)init;	// IMP=0x00000000000d2082

@end
