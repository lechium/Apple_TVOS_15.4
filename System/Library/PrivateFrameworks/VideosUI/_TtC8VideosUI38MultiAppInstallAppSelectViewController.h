//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI38MultiAppInstallAppSelectViewController : UIViewController
{
    MISSING_TYPE *localizationManager;	// 8 = 0x8
    MISSING_TYPE *appsTableView;	// 16 = 0x10
    MISSING_TYPE *topHorizontalStackView;	// 24 = 0x18
    MISSING_TYPE *actionVerticalStackView;	// 32 = 0x20
    MISSING_TYPE *appsDownloadInfoLabel;	// 40 = 0x28
    MISSING_TYPE *installSelectedAppsButton;	// 48 = 0x30
    MISSING_TYPE *cancelButton;	// 56 = 0x38
    MISSING_TYPE *viewToFocus;	// 64 = 0x40
    MISSING_TYPE *tableFocusGuide;	// 72 = 0x48
    MISSING_TYPE *buttonsFocusGuide;	// 80 = 0x50
    MISSING_TYPE *selectedAppsCompletion;	// 88 = 0x58
    MISSING_TYPE *appsList;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000041a7e0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000041a770
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000041a700
- (void)viewWillLayoutSubviews;	// IMP=0x000000000041a630
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000418400
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000418330
- (void)didTapCancel;	// IMP=0x0000000000418310
- (void)didTapInstallSelectedApps;	// IMP=0x0000000000418240
- (void)viewDidLoad;	// IMP=0x0000000000418210

@end

