//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKPerformActionView-Protocol.h>
#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class NSDateFormatter, NSString, PKPass, PKPaymentPassAction, PKPerformActionSelectItemExpiresHeader, PKSelectedItemActionItem, UITableView, UITextField;
@protocol PKPerformActionViewDelegate;

@interface PKPerformActionSelectItemView : UIView <UITableViewDelegate, UITableViewDataSource, PKPerformActionView>
{
    PKPass *_pass;	// 8 = 0x8
    PKPaymentPassAction *_action;	// 16 = 0x10
    NSDateFormatter *_dateFormatter;	// 24 = 0x18
    PKSelectedItemActionItem *_selectedItem;	// 32 = 0x20
    UITableView *_tableView;	// 40 = 0x28
    PKPerformActionSelectItemExpiresHeader *_expiresHeader;	// 48 = 0x30
    id <PKPerformActionViewDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003b6771
@property(nonatomic) __weak id <PKPerformActionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_addSubviews;	// IMP=0x00000000003b665d
@property(readonly, nonatomic) UITextField *amountTextField;
- (id)serviceProviderData;	// IMP=0x00000000003b65ac
- (id)transactionCurrency;	// IMP=0x00000000003b6575
- (id)transactionAmount;	// IMP=0x00000000003b6533
- (id)pass;	// IMP=0x00000000003b651e
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000003b627d
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x00000000003b624e
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000003b615e
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000003b612f
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000003b6121
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000003b5b60
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000003b5acb
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000003b5ac0
- (id)_optionsSectionFooterText;	// IMP=0x00000000003b5aa3
- (id)_optionsSectionHeaderText;	// IMP=0x00000000003b5a86
- (_Bool)_showsExpirationSection;	// IMP=0x00000000003b581b
- (void)saveLastInputValues;	// IMP=0x00000000003b5815
- (void)layoutSubviews;	// IMP=0x00000000003b5724
- (id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3;	// IMP=0x00000000003b55cc
- (id)init;	// IMP=0x00000000003b55b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
