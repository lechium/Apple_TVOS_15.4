//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <VideoSubscriberAccountUI/UITableViewDelegate-Protocol.h>

@class NSString, UILabel, VSIdentityProviderTableViewDataSource, VSOnboardingInfoCenter;
@protocol VSIdentityProviderSearchResultsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderSearchResultsViewController_tvOS : UIViewController <UITableViewDelegate>
{
    id <VSIdentityProviderSearchResultsViewControllerDelegate> _delegate;	// 8 = 0x8
    VSIdentityProviderTableViewDataSource *_dataSource;	// 16 = 0x10
    VSOnboardingInfoCenter *_onboardingInfoCenter;	// 24 = 0x18
    UILabel *_footerLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000005ede2
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) VSOnboardingInfoCenter *onboardingInfoCenter; // @synthesize onboardingInfoCenter=_onboardingInfoCenter;
@property(retain, nonatomic) VSIdentityProviderTableViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <VSIdentityProviderSearchResultsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000005eb58
- (void)viewDidLoad;	// IMP=0x000000000005e0fd
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;	// IMP=0x000000000005e0e0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000005df8c
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000000005ded1
- (void)_updateFooter;	// IMP=0x000000000005dde8
- (void)_didSelectStorefront:(id)arg1;	// IMP=0x000000000005dd5e
- (void)_didSelectAdditionalProviders;	// IMP=0x000000000005dcf1
- (void)_didSelectProvider:(id)arg1;	// IMP=0x000000000005dc77
- (void)dealloc;	// IMP=0x000000000005dc41
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000005dbd2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005db63
- (id)init;	// IMP=0x000000000005daf4
- (id)initWithIdentityProviderDataSource:(id)arg1;	// IMP=0x000000000005da30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

