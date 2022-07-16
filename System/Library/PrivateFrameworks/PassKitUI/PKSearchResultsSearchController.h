//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISearchController.h>

@class PKSearchResultsViewController, UINavigationController;

@interface PKSearchResultsSearchController : UISearchController
{
    UINavigationController *_navVC;	// 8 = 0x8
    PKSearchResultsViewController *_resultsVC;	// 16 = 0x10
    _Bool _searchBarWasFirstResponder;	// 24 = 0x18
    _Bool _showSearchBar;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x00000000001d19df
- (_Bool)pkui_disablesAutomaticDismissalUponEnteringBackground;	// IMP=0x00000000001d19d7
- (void)setSearchBarVisible:(_Bool)arg1;	// IMP=0x00000000001d15ea
- (void)_updateSearchBarFrame;	// IMP=0x00000000001d141d
- (void)viewWillLayoutSubviews;	// IMP=0x00000000001d13dc
- (long long)preferredStatusBarStyle;	// IMP=0x00000000001d13a2
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d1345
- (id)initWithPaymentDataProvider:(id)arg1 transactionSourceCollection:(id)arg2 familyCollection:(id)arg3;	// IMP=0x00000000001d1177

@end

