//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, UILocalizedIndexedCollation;
@protocol PKCountryPickerViewControllerDelegate;

@interface PKCountryPickerViewController : UITableViewController
{
    id <PKCountryPickerViewControllerDelegate> _delegate;	// 8 = 0x8
    UILocalizedIndexedCollation *_collation;	// 16 = 0x10
    NSArray *_countries;	// 24 = 0x18
    NSArray *_sections;	// 32 = 0x20
    long long _style;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000041dc5e
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSArray *countries; // @synthesize countries=_countries;
@property(retain, nonatomic) UILocalizedIndexedCollation *collation; // @synthesize collation=_collation;
@property(nonatomic) __weak id <PKCountryPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000041da41
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000041d860
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000000041d80d
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x000000000041d7bd
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000041d73c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000041d6ea
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000041d69b
- (void)_configureSections;	// IMP=0x000000000041d293
- (void)_loadCountryCodes;	// IMP=0x000000000041cee2
- (void)viewDidLoad;	// IMP=0x000000000041ce1e
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000041cdd8

@end

