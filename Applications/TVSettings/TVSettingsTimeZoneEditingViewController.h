//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, TSKSettingItem, UISearchController, _TVSettingsTimeZoneTableViewController;
@protocol TSKSettingItemEditingControllerDelegate;

@interface TVSettingsTimeZoneEditingViewController : UIViewController
{
    _Bool _searchControllerPresented;	// 8 = 0x8
    TSKSettingItem *_editingItem;	// 16 = 0x10
    id <TSKSettingItemEditingControllerDelegate> _editingDelegate;	// 24 = 0x18
    _TVSettingsTimeZoneTableViewController *_tableViewController;	// 32 = 0x20
    UISearchController *_searchController;	// 40 = 0x28
    UIViewController *_containerViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000014cd50
@property(retain, nonatomic) UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) _TVSettingsTimeZoneTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(nonatomic) __weak id <TSKSettingItemEditingControllerDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(retain, nonatomic) TSKSettingItem *editingItem; // @synthesize editingItem=_editingItem;
- (id)_gradientMask;	// IMP=0x001000000014c6f0
- (void)timeZoneTableViewController:(id)arg1 didSelectCityWithIdentifier:(id)arg2;	// IMP=0x001000000014c640
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x001000000014c580
- (void)didDismissSearchController:(id)arg1;	// IMP=0x001000000014c4e0
- (void)willDismissSearchController:(id)arg1;	// IMP=0x001000000014c480
- (void)viewDidLayoutSubviews;	// IMP=0x001000000014c3c0
- (void)viewDidLoad;	// IMP=0x001000000014be40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

