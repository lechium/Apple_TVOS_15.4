//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <GameCenterUI/UITableViewDataSource-Protocol.h>
#import <GameCenterUI/UITableViewDelegate-Protocol.h>

@class GKLabel, NSLayoutConstraint, NSMutableArray, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UITableView;

@interface GKDefaultPrivacyViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    int _profilePrivacyVisibility;	// 8 = 0x8
    GKLabel *_privacyDescription;	// 16 = 0x10
    UILabel *_mainSubtitle;	// 24 = 0x18
    UITableView *_tableView;	// 32 = 0x20
    NSMutableArray *_availblePrivacySettings;	// 40 = 0x28
    NSLayoutConstraint *_tableViewHeightConstraint;	// 48 = 0x30
    UIActivityIndicatorView *_activityView;	// 56 = 0x38
    UIImageView *_avatarView;	// 64 = 0x40
    UIImageView *_publicCheckmark;	// 72 = 0x48
    UIImageView *_friendsOnlyCheckmark;	// 80 = 0x50
    UIImageView *_meOnlyCheckmark;	// 88 = 0x58
    UIButton *_notNowButton;	// 96 = 0x60
    UILabel *_hintLabel;	// 104 = 0x68
    UIButton *_nextButton;	// 112 = 0x70
    UILabel *_mainTitle;	// 120 = 0x78
    long long _numberOfClicksOnPrivacySelection;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000000f5905
@property long long numberOfClicksOnPrivacySelection; // @synthesize numberOfClicksOnPrivacySelection=_numberOfClicksOnPrivacySelection;
@property(nonatomic) int profilePrivacyVisibility; // @synthesize profilePrivacyVisibility=_profilePrivacyVisibility;
@property(retain, nonatomic) UILabel *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIButton *notNowButton; // @synthesize notNowButton=_notNowButton;
@property(retain, nonatomic) UIImageView *meOnlyCheckmark; // @synthesize meOnlyCheckmark=_meOnlyCheckmark;
@property(retain, nonatomic) UIImageView *friendsOnlyCheckmark; // @synthesize friendsOnlyCheckmark=_friendsOnlyCheckmark;
@property(retain, nonatomic) UIImageView *publicCheckmark; // @synthesize publicCheckmark=_publicCheckmark;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) NSLayoutConstraint *tableViewHeightConstraint; // @synthesize tableViewHeightConstraint=_tableViewHeightConstraint;
@property(retain, nonatomic) NSMutableArray *availblePrivacySettings; // @synthesize availblePrivacySettings=_availblePrivacySettings;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *mainSubtitle; // @synthesize mainSubtitle=_mainSubtitle;
@property(retain, nonatomic) GKLabel *privacyDescription; // @synthesize privacyDescription=_privacyDescription;
- (void)updateUI;	// IMP=0x00000000000f565d
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000f551b
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000000f54a0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000f52d5
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000f52b8
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000f52ad
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000f51d7
- (id)titleForPrivacy:(int)arg1;	// IMP=0x00000000000f5146
- (void)updatePrivacyDescriptionWithPrivacyVisibility:(int)arg1;	// IMP=0x00000000000f5045
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000f4f0c
- (id)preferredFocusEnvironments;	// IMP=0x00000000000f4e81
- (void)reportPrivacySelectionClickAnalytics;	// IMP=0x00000000000f4e0b
- (void)nextPressed:(id)arg1;	// IMP=0x00000000000f47a0
- (void)notNowButtonPressed:(id)arg1;	// IMP=0x00000000000f46cc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000f4636
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000f455b
- (void)viewDidLoad;	// IMP=0x00000000000f3a01

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

