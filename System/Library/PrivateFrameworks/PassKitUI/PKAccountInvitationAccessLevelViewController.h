//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKViewControllerPreflightable-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSString, PKAccountInvitationController, PKTableHeaderView, UIButton;

@interface PKAccountInvitationAccessLevelViewController <UITableViewDelegate, PKViewControllerPreflightable>
{
    PKAccountInvitationController *_controller;	// 8 = 0x8
    NSArray *_accessLevelOptions;	// 16 = 0x10
    PKTableHeaderView *_headerView;	// 24 = 0x18
    UIButton *_footerView;	// 32 = 0x20
    double _previousHeaderHeight;	// 40 = 0x28
    double _previousFooterHeight;	// 48 = 0x30
    NSIndexPath *_loadingIndexPath;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000027b921
- (void)_updateCell:(id)arg1 showSpinner:(_Bool)arg2;	// IMP=0x000000000027b85e
- (void)_showSpinner:(_Bool)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000027b7bb
- (void)_handleFooterButtonTapped:(id)arg1;	// IMP=0x000000000027b69d
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000027b688
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000027afae
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000027ae28
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000000027ae0f
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000000027ae01
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000027adf6
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000027add9
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000027acdc
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000027abdf
- (void)viewWillLayoutSubviews;	// IMP=0x000000000027a9bd
- (void)viewDidLoad;	// IMP=0x000000000027a562
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000027a3fb
- (id)initWithController:(id)arg1;	// IMP=0x000000000027a37a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

