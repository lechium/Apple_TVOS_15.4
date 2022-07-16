//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKPaymentDataProviderDelegate-Protocol.h>
#import <PassKitUI/PKPerformActionViewControllerDelegate-Protocol.h>

@class NSArray, NSDateComponentsFormatter, NSString, PKPaymentPass, PKPaymentPassAction, PKPaymentWebService, PKTransitBalanceModel, PKTransitCommutePlan;
@protocol PKPaymentDataProvider;

@interface PKCommutePlanDetailsViewController <PKPerformActionViewControllerDelegate, PKPaymentDataProviderDelegate>
{
    long long _style;	// 8 = 0x8
    NSArray *_fields;	// 16 = 0x10
    PKPaymentPass *_pass;	// 24 = 0x18
    id <PKPaymentDataProvider> _paymentDataProvider;	// 32 = 0x20
    PKPaymentWebService *_webService;	// 40 = 0x28
    NSArray *_reminderIntervals;	// 48 = 0x30
    unsigned long long _selectedReminderIntervalsIndex;	// 56 = 0x38
    _Bool _shouldLoadReminderInterval;	// 64 = 0x40
    PKPaymentPassAction *_action;	// 72 = 0x48
    NSDateComponentsFormatter *_timeIntervalFormatter;	// 80 = 0x50
    _Bool _canShowReminders;	// 88 = 0x58
    PKTransitBalanceModel *_balanceModel;	// 96 = 0x60
    PKTransitCommutePlan *_commutePlan;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000026e19d
- (id)_commutePlanBalanceIdentifiers;	// IMP=0x000000000026e138
- (void)performActionViewControllerDidPerformAction:(id)arg1;	// IMP=0x000000000026e0bf
- (void)performActionViewControllerDidCancel:(id)arg1;	// IMP=0x000000000026e046
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x000000000026dfc1
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000026dee6
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000026de22
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000026dd9c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000026d1bf
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000026d15f
- (long long)_numberOfCommutePlanDetailsRowsEnabledForRowType:(unsigned long long)arg1;	// IMP=0x000000000026d120
- (long long)_numberOfCommutePlanDetailsRowsEnabled;	// IMP=0x000000000026d0e8
- (unsigned long long)_commutePlanDetailsRowTypeForRowIndex:(long long)arg1;	// IMP=0x000000000026d078
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000026d03b
- (void)_reloadChangedIndexPathsWithOldIndex:(unsigned long long)arg1 newIndex:(unsigned long long)arg2 inSection:(unsigned long long)arg3;	// IMP=0x000000000026cf2f
- (void)_updateSelectedReminderIntervalsIndexWithReminder:(id)arg1;	// IMP=0x000000000026ce6d
- (void)_updateSelectedBalanceReminderWithBalanceReminder:(id)arg1;	// IMP=0x000000000026cd6c
- (void)_handleActionSelected;	// IMP=0x000000000026cbe3
- (void)_handleReminderIntervalChanged:(long long)arg1;	// IMP=0x000000000026c895
- (void)viewWillLayoutSubviews;	// IMP=0x000000000026c802
- (_Bool)shouldMapSection:(unsigned long long)arg1;	// IMP=0x000000000026c7dd
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000026c700
- (void)_reloadBalance;	// IMP=0x000000000026c192
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;	// IMP=0x000000000026c027
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceivePlanUpdate:(id)arg2;	// IMP=0x000000000026bebc
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;	// IMP=0x000000000026bcac
- (id)initWithCommutePlan:(id)arg1 associatedAction:(id)arg2 forPass:(id)arg3 paymentDataProvider:(id)arg4 webService:(id)arg5 style:(long long)arg6;	// IMP=0x000000000026b498

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

