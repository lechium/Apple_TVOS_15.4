//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKLinkedAppView, PKPaymentSetupProduct, PKTableHeaderView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentCardUnsupportedViewController
{
    PKTableHeaderView *_headerView;	// 8 = 0x8
    PKLinkedAppView *_appViewCell;	// 16 = 0x10
    PKPaymentSetupProduct *_product;	// 24 = 0x18
    id <PKPaymentSetupViewControllerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000025e24b
@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
- (void)_done:(id)arg1;	// IMP=0x000000000025e169
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000025e154
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000025e102
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000025e0f4
- (void)_updateViewsWithProduct:(id)arg1;	// IMP=0x000000000025dd07
- (void)viewDidLoad;	// IMP=0x000000000025db47
- (unsigned long long)edgesForExtendedLayout;	// IMP=0x000000000025db3c
- (void)dealloc;	// IMP=0x000000000025db0d
- (id)initWithUnsupportedProduct:(id)arg1 context:(long long)arg2 delegate:(id)arg3;	// IMP=0x000000000025da63

@end
