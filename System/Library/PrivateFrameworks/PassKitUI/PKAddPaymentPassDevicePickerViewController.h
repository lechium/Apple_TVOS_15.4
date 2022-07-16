//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, PKAddPaymentPassRequestConfiguration, PKTableHeaderView;
@protocol PKAddPaymentPassDevicePickerDelegate;

@interface PKAddPaymentPassDevicePickerViewController : UITableViewController
{
    PKTableHeaderView *_headerView;	// 8 = 0x8
    NSArray *_webServices;	// 16 = 0x10
    PKAddPaymentPassRequestConfiguration *_configuration;	// 24 = 0x18
    _Bool _viewHasAppeared;	// 32 = 0x20
    _Bool _sentViewHasAppearedEvent;	// 33 = 0x21
    id <PKAddPaymentPassDevicePickerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000270adc
@property(nonatomic) __weak id <PKAddPaymentPassDevicePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000027090c
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000002708cf
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x000000000027083b
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000027082d
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000270659
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000270633
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000270628
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000002705ec
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002704ce
- (void)viewWillLayoutSubviews;	// IMP=0x00000000002702b8
- (void)loadView;	// IMP=0x000000000026ff69
- (void)noteNavigationUserInterfaceDidDisappear;	// IMP=0x000000000026fe65
- (void)reloadContentFromWebServices;	// IMP=0x000000000026fe28
- (void)dealloc;	// IMP=0x000000000026fdf9
- (id)initWithPaymentWebServices:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000026fcf4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000026fcde
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000026fcc8

@end

