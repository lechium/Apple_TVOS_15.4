//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSIndexPath, PKAccount, PKAccountAutomaticPaymentsController, PKTableHeaderView;

@interface PKAccountAutomaticPaymentsPresetViewController
{
    PKAccountAutomaticPaymentsController *_controller;	// 8 = 0x8
    PKAccount *_account;	// 16 = 0x10
    unsigned long long _featureIdentifier;	// 24 = 0x18
    PKTableHeaderView *_tableHeaderView;	// 32 = 0x20
    NSIndexPath *_selectedIndexPath;	// 40 = 0x28
    NSArray *_paymentPresets;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001f6a82
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x00000000001f6a36
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001f679f
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001f66fb
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001f66de
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001f66cd
- (_Bool)shouldMapSection:(unsigned long long)arg1;	// IMP=0x00000000001f66c5
- (void)_handleNext:(id)arg1;	// IMP=0x00000000001f65ef
- (id)tableHeaderView;	// IMP=0x00000000001f6395
- (void)viewDidLoad;	// IMP=0x00000000001f6240
- (id)initWithController:(id)arg1;	// IMP=0x00000000001f600c

@end

