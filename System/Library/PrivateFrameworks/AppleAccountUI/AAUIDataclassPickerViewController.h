//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AppleAccountUI/AAUISwitchTableViewCellDelegate-Protocol.h>
#import <AppleAccountUI/NSCoding-Protocol.h>
#import <AppleAccountUI/NSSecureCoding-Protocol.h>
#import <AppleAccountUI/UITableViewDataSource-Protocol.h>
#import <AppleAccountUI/UITableViewDelegate-Protocol.h>

@class AAUIBuddyView, AAUIHeaderView, NSArray, NSDictionary, NSString, UITableView, _AAUIDataclassOptionCache;
@protocol AAUIDataclassPickerViewControllerDelegate;

@interface AAUIDataclassPickerViewController : UIViewController <AAUISwitchTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate, NSCoding, NSSecureCoding>
{
    AAUIHeaderView *_tableHeaderView;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    AAUIBuddyView *_tableFooterView;	// 24 = 0x18
    NSArray *_compactConstraints;	// 32 = 0x20
    NSArray *_expandedConstraints;	// 40 = 0x28
    _AAUIDataclassOptionCache *_dataclassOptionCache;	// 48 = 0x30
    id <AAUIDataclassPickerViewControllerDelegate> _delegate;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000025499
- (void).cxx_destruct;	// IMP=0x0000000000027ae6
@property(nonatomic) __weak id <AAUIDataclassPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateConstraintsForTraitCollection:(id)arg1;	// IMP=0x0000000000027a3f
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000027953
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x000000000002794b
- (double)_compressedHeightForView:(id)arg1 containedInView:(id)arg2;	// IMP=0x000000000002782c
- (double)heightForFooterInTableView:(id)arg1;	// IMP=0x00000000000277b1
- (double)heightForHeaderInTableView:(id)arg1;	// IMP=0x0000000000027736
- (id)viewForFooterInTableView:(id)arg1;	// IMP=0x0000000000027724
- (id)viewForHeaderInTableView:(id)arg1;	// IMP=0x0000000000027712
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000276af
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000000276a1
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000000275d2
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000002736b
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000002730b
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000272f5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000027274
- (void)switchTableViewCellDidUpdateValue:(id)arg1;	// IMP=0x000000000002716c
- (void)_delegate_signOutViewControllerDidCompleteWithDataclassActions:(id)arg1;	// IMP=0x00000000000270db
- (void)_delegate_signOutViewControllerDidCancel;	// IMP=0x0000000000027064
- (void)_dismissAdditionalInformation:(id)arg1;	// IMP=0x0000000000027028
- (void)_additionalInformationSelected:(id)arg1;	// IMP=0x0000000000026dc6
- (void)_nextButtonSelected:(id)arg1;	// IMP=0x0000000000026cdf
- (void)_cancelButtonSelected:(id)arg1;	// IMP=0x0000000000026caa
- (id)_messageText;	// IMP=0x0000000000026c35
- (id)_titleText;	// IMP=0x0000000000026bc0
- (id)_signOutFooterText;	// IMP=0x0000000000026b4b
- (id)_tableFooterView;	// IMP=0x000000000002650b
- (id)_tableView;	// IMP=0x0000000000026397
- (id)_tableHeaderView;	// IMP=0x000000000002626b
- (id)_nextBarButtonItem;	// IMP=0x00000000000261a2
- (id)_cancelBarButtonItem;	// IMP=0x0000000000026160
@property(copy, nonatomic) NSDictionary *dataclassOptions;
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000025f12
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000025e74
- (void)viewDidLoad;	// IMP=0x00000000000256e2
- (void)loadView;	// IMP=0x0000000000025675
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000025542
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000002552e
- (id)initWithDataclassOptions:(id)arg1;	// IMP=0x00000000000254a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) AAUIBuddyView *view; // @dynamic view;

@end

