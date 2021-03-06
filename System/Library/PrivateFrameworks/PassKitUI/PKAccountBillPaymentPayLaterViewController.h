//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKAccountBillPaymentControllerDelegate-Protocol.h>
#import <PassKitUI/PKAccountBillPaymentPayInterestDescriptionViewDelegate-Protocol.h>
#import <PassKitUI/PKAddBankAccountInformationViewControllerDelegate-Protocol.h>
#import <PassKitUI/UIPickerViewDataSource-Protocol.h>
#import <PassKitUI/UIPickerViewDelegate-Protocol.h>

@class CLInUseAssertion, NSCalendar, NSDate, NSDateFormatter, NSDecimalNumber, NSString, PKAccount, PKAccountBillPaymentController, PKAccountBillPaymentPayInterestDescriptionView, PKAccountUserCollection, PKAddBankAccountInformationViewController, PKBillPaymentSuggestedAmountList, PKCompoundInterestCalculator, PKContinuousButton, PKTransactionSource, UILabel, UIPickerView;
@protocol PKAccountBillPaymentObserver;

@interface PKAccountBillPaymentPayLaterViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource, PKAccountBillPaymentControllerDelegate, PKAddBankAccountInformationViewControllerDelegate, PKAccountBillPaymentPayInterestDescriptionViewDelegate>
{
    CLInUseAssertion *_CLInUse;	// 8 = 0x8
    PKAccount *_account;	// 16 = 0x10
    PKAccountUserCollection *_accountUserCollection;	// 24 = 0x18
    PKTransactionSource *_transactionSource;	// 32 = 0x20
    PKAccountBillPaymentController *_billPaymentCoordinator;	// 40 = 0x28
    PKBillPaymentSuggestedAmountList *_suggestionList;	// 48 = 0x30
    NSDate *_minDate;	// 56 = 0x38
    NSDate *_maxDate;	// 64 = 0x40
    long long _numDays;	// 72 = 0x48
    NSDateFormatter *_dateFormatterDayOfWeek;	// 80 = 0x50
    NSDateFormatter *_dateFormatter;	// 88 = 0x58
    NSDateFormatter *_localDateFormatter;	// 96 = 0x60
    NSCalendar *_productCalendar;	// 104 = 0x68
    NSCalendar *_localCalendar;	// 112 = 0x70
    NSDecimalNumber *_selectedAmount;	// 120 = 0x78
    NSDecimalNumber *_remainingStatementBalance;	// 128 = 0x80
    NSDecimalNumber *_apr;	// 136 = 0x88
    _Bool _performingAction;	// 144 = 0x90
    long long _currentPickerViewRow[1];	// 152 = 0x98
    UIPickerView *_datePicker;	// 160 = 0xa0
    PKContinuousButton *_payOnButton;	// 168 = 0xa8
    UILabel *_payLaterTitleLabel;	// 176 = 0xb0
    UILabel *_whenToPayQuestionLabel;	// 184 = 0xb8
    PKCompoundInterestCalculator *_interestCalculator;	// 192 = 0xc0
    PKAccountBillPaymentPayInterestDescriptionView *_interestDescriptionView;	// 200 = 0xc8
    PKAddBankAccountInformationViewController *_addBankAccountViewController;	// 208 = 0xd0
    id <PKAccountBillPaymentObserver> _observer;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x00000000001d46e8
@property(nonatomic) __weak id <PKAccountBillPaymentObserver> observer; // @synthesize observer=_observer;
- (void)_presentAlertControllerForError:(id)arg1;	// IMP=0x00000000001d45d4
- (void)_dismissViewControllerWithSuccess:(_Bool)arg1;	// IMP=0x00000000001d4590
- (id)_addBankAccountInformationViewController;	// IMP=0x00000000001d4490
- (void)_presentAddBankAccount;	// IMP=0x00000000001d43ee
- (void)_updateLabelText;	// IMP=0x00000000001d4223
- (id)_stripTimeFromDate:(id)arg1;	// IMP=0x00000000001d41b1
- (id)_dateStringForRow:(long long)arg1 formatter:(id)arg2;	// IMP=0x00000000001d4128
- (id)_dateForRow:(long long)arg1;	// IMP=0x00000000001d40a7
- (void)_setNavigationBarEnabled:(_Bool)arg1;	// IMP=0x00000000001d3f8f
- (void)_setEnabled:(_Bool)arg1;	// IMP=0x00000000001d3e5d
- (double)_sideMargin;	// IMP=0x00000000001d3e2c
- (double)_payButtonTopPadding;	// IMP=0x00000000001d3e0d
- (id)_interestForSelectedDate:(id)arg1;	// IMP=0x00000000001d3a3b
- (void)_payOnButtonTapped:(id)arg1;	// IMP=0x00000000001d379b
- (void)_accountDidChange:(id)arg1;	// IMP=0x00000000001d361f
- (void)_performBillPaymentWithAmount:(id)arg1 scheduledDate:(id)arg2 billPaymentSuggestedAmountDataEvent:(id)arg3;	// IMP=0x00000000001d3487
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x00000000001d3476
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x00000000001d346b
- (void)billPaymentPayInterestDescriptionViewHasTappedLearnMore:(id)arg1;	// IMP=0x00000000001d33b4
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x00000000001d338c
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x00000000001d3369
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1;	// IMP=0x00000000001d3363
- (void)addBankAccountInformationViewControllerDidFinish:(id)arg1;	// IMP=0x00000000001d31dd
- (void)addBankAccountInformationViewController:(id)arg1 didAddFundingSource:(id)arg2;	// IMP=0x00000000001d312b
- (void)accountBillPaymentController:(id)arg1 hasChangedState:(unsigned long long)arg2 error:(id)arg3 updatedAccount:(id)arg4;	// IMP=0x00000000001d2fc3
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000001d2f5f
- (void)viewWillLayoutSubviews;	// IMP=0x00000000001d28f6
- (void)loadView;	// IMP=0x00000000001d2221
- (void)dealloc;	// IMP=0x00000000001d21bd
- (id)initWithAccount:(id)arg1 accountUserCollection:(id)arg2 billPaymentController:(id)arg3 transactionSource:(id)arg4 suggestionList:(id)arg5 selectedAmount:(id)arg6;	// IMP=0x00000000001d1adf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

