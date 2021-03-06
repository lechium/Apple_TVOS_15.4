//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/VUIFamilyMembersViewControllerDelegate-Protocol.h>
#import <VideosUI/VUIFamilySharingContentProtocol-Protocol.h>
#import <VideosUI/VUILibraryDataSourceDelegate-Protocol.h>
#import <VideosUI/VUIMenuCollectionViewControllerDelegate-Protocol.h>

@class NSIndexPath, NSMutableDictionary, NSSet, NSString, VUIFamilyMember, VUILibraryMenuDataSource, VUIMenuCollectionViewController, VUITVLibraryView, VUIViewControllerContentPresenter;

__attribute__((visibility("hidden")))
@interface VUITVLibraryViewController : UIViewController <VUIMenuCollectionViewControllerDelegate, VUILibraryDataSourceDelegate, VUIFamilyMembersViewControllerDelegate, VUIFamilySharingContentProtocol>
{
    VUIFamilyMember *_familyMember;	// 8 = 0x8
    VUIMenuCollectionViewController *_menuCollectionViewController;	// 16 = 0x10
    VUITVLibraryView *_tvLibraryView;	// 24 = 0x18
    UIViewController *_detailViewController;	// 32 = 0x20
    VUILibraryMenuDataSource *_menuDataSource;	// 40 = 0x28
    NSIndexPath *_currentlySelectedIndexPath;	// 48 = 0x30
    NSSet *_validCategories;	// 56 = 0x38
    VUIViewControllerContentPresenter *_contentPresenter;	// 64 = 0x40
    NSMutableDictionary *_entitiesDataSourceForMenuItem;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000003b8ff
@property(retain, nonatomic) NSMutableDictionary *entitiesDataSourceForMenuItem; // @synthesize entitiesDataSourceForMenuItem=_entitiesDataSourceForMenuItem;
@property(retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // @synthesize contentPresenter=_contentPresenter;
@property(retain, nonatomic) NSSet *validCategories; // @synthesize validCategories=_validCategories;
@property(retain, nonatomic) NSIndexPath *currentlySelectedIndexPath; // @synthesize currentlySelectedIndexPath=_currentlySelectedIndexPath;
@property(retain, nonatomic) VUILibraryMenuDataSource *menuDataSource; // @synthesize menuDataSource=_menuDataSource;
@property(retain, nonatomic) UIViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(retain, nonatomic) VUITVLibraryView *tvLibraryView; // @synthesize tvLibraryView=_tvLibraryView;
@property(retain, nonatomic) VUIMenuCollectionViewController *menuCollectionViewController; // @synthesize menuCollectionViewController=_menuCollectionViewController;
@property(retain, nonatomic) VUIFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
- (id)_metricsPageTypeForMenuItemAtIndexPath:(id)arg1;	// IMP=0x000000000003b5ba
- (void)_initializeLibraryViewControllersWithMenuItems:(id)arg1;	// IMP=0x000000000003b2e6
- (void)_accountsChanged:(id)arg1;	// IMP=0x000000000003b189
- (void)_deviceMediaLibraryUpdateStateDidChange:(id)arg1;	// IMP=0x000000000003aee8
- (void)_stopMonitoringDeviceMediaLibraryInitialUpdate;	// IMP=0x000000000003ae08
- (void)_startMonitoringDeviceMediaLibraryInitialUpdate;	// IMP=0x000000000003ad21
- (_Bool)_isDeviceMediaLibraryInitialUpdateInProgress;	// IMP=0x000000000003acd4
- (id)_deviceMediaLibrary;	// IMP=0x000000000003abfe
- (_Bool)_shouldShowContentView;	// IMP=0x000000000003ab67
- (void)_showContentOrNoContentView;	// IMP=0x000000000003ab07
- (void)_delayedGridUpdate;	// IMP=0x000000000003a3c1
- (void)familyMemberViewController:(id)arg1 didSelectFamilyMember:(id)arg2;	// IMP=0x000000000003a2eb
- (void)didSelectMenuItemAtIndexPath:(id)arg1;	// IMP=0x000000000003a2d9
- (void)didUpdateFocusToIndexPath:(id)arg1;	// IMP=0x000000000003a246
- (void)dataSourceDidFinishFetching:(id)arg1;	// IMP=0x0000000000039eee
- (id)preferredFocusEnvironments;	// IMP=0x0000000000039e1c
- (id)contentScrollView;	// IMP=0x0000000000039e14
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000039d64
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000039c9b
- (void)viewDidLoad;	// IMP=0x00000000000393c3
- (void)loadView;	// IMP=0x0000000000039304
- (void)dealloc;	// IMP=0x0000000000038f06
- (id)initWithMenuDataSource:(id)arg1;	// IMP=0x0000000000038e5f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

