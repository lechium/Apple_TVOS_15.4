//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ATVLegacyContentKit/ATVUpdatable-Protocol.h>
#import <ATVLegacyContentKit/TVLSearchResultsViewControllerDelegate-Protocol.h>
#import <ATVLegacyContentKit/UISearchControllerDelegate-Protocol.h>
#import <ATVLegacyContentKit/UISearchResultsUpdating-Protocol.h>

@class NSArray, NSString, TVLSearchResultsViewController, UISearchController, UIView;

@interface TVLSearchViewController : UIViewController <TVLSearchResultsViewControllerDelegate, UISearchControllerDelegate, UISearchResultsUpdating, ATVUpdatable>
{
    NSString *_baseURLString;	// 8 = 0x8
    NSString *_initialSearchString;	// 16 = 0x10
    NSArray *_headerViewConstraints;	// 24 = 0x18
    NSArray *_containerViewConstraints;	// 32 = 0x20
    NSString *currentSearchText;	// 40 = 0x28
    _Bool _searchControllerPresented;	// 48 = 0x30
    UIView *_headerView;	// 56 = 0x38
    UISearchController *_searchController;	// 64 = 0x40
    UIViewController *_containerViewController;	// 72 = 0x48
    TVLSearchResultsViewController *_resultsViewController;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000044aa8
@property(nonatomic) _Bool searchControllerPresented; // @synthesize searchControllerPresented=_searchControllerPresented;
@property(retain, nonatomic) TVLSearchResultsViewController *resultsViewController; // @synthesize resultsViewController=_resultsViewController;
@property(retain, nonatomic) UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void)_loadSearchResultsForQueryString:(id)arg1;	// IMP=0x00000000000442cd
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x0000000000044184
- (void)searchResultsViewController:(id)arg1 didSelectSearchTerm:(id)arg2;	// IMP=0x00000000000440ef
- (void)didUpdateFeedElementRequiringUserInterfaceUpdate:(_Bool)arg1 previousElement:(id)arg2;	// IMP=0x0000000000044046
- (void)setCurrentFeedElement:(id)arg1;	// IMP=0x0000000000043f39
- (void)didDismissSearchController:(id)arg1;	// IMP=0x0000000000043eef
- (void)presentSearchController:(id)arg1;	// IMP=0x0000000000043b1c
- (void)updateViewConstraints;	// IMP=0x00000000000435fb
- (void)viewDidLayoutSubviews;	// IMP=0x000000000004335a
- (id)preferredFocusEnvironments;	// IMP=0x0000000000043293
- (void)loadView;	// IMP=0x0000000000043081
- (id)initWithSearchElement:(id)arg1;	// IMP=0x0000000000042e20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

