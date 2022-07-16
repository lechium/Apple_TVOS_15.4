//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKPaymentDataProviderDelegate-Protocol.h>
#import <PassKitUI/PKPaymentPreferenceCardCellAccessoryViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, PKExpressPassController, PKPassSnapshotter;
@protocol PKPaymentDataProvider;

@interface PKExpressPassesViewController <PKPaymentDataProviderDelegate, PKPaymentPreferenceCardCellAccessoryViewDelegate>
{
    NSMutableArray *_transitPasses;	// 8 = 0x8
    NSMutableArray *_selectedTransitPassIndices;	// 16 = 0x10
    PKExpressPassController *_expressPassController;	// 24 = 0x18
    NSMutableArray *_paymentPasses;	// 32 = 0x20
    NSArray *_allPasses;	// 40 = 0x28
    id <PKPaymentDataProvider> _paymentDataProvider;	// 48 = 0x30
    long long _style;	// 56 = 0x38
    NSMutableDictionary *_passUniqueIDToCell;	// 64 = 0x40
    NSMutableDictionary *_passUniqueIDToTransitBalanceModels;	// 72 = 0x48
    long long _selectedPaymentPassIndex;	// 80 = 0x50
    _Bool _selectedPaymentPassIsInPendingState;	// 88 = 0x58
    _Bool _supressHandlingPassUpdates;	// 89 = 0x59
    unsigned int _supressHandlingPassUpdateCounter;	// 92 = 0x5c
    _Bool _isUserInteractionsEnabled;	// 96 = 0x60
    _Bool _userAutomaticExpressModeText;	// 97 = 0x61
    _Bool _useOldAppearance;	// 98 = 0x62
    PKPassSnapshotter *_passSnapshotter;	// 104 = 0x68
    NSArray *_passes;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000010b087
@property(retain, nonatomic) NSArray *passes; // @synthesize passes=_passes;
- (void)_endPassUpdateSuppressionWithToken:(unsigned int)arg1 delay:(double)arg2;	// IMP=0x000000000010af78
- (unsigned int)_beginPassUpdateSuppression;	// IMP=0x000000000010af58
- (void)_updateExpressState:(id)arg1;	// IMP=0x000000000010ac77
- (void)_reloadLocalPassStores;	// IMP=0x000000000010a808
- (_Bool)_isTransitExpressRowEnabledForIndex:(unsigned long long)arg1;	// IMP=0x000000000010a76a
- (long long)_sectionForPass:(id)arg1;	// IMP=0x000000000010a738
- (id)_transitPassForIndex:(unsigned long long)arg1;	// IMP=0x000000000010a6d9
- (id)_paymentPassForIndex:(unsigned long long)arg1;	// IMP=0x000000000010a67a
- (void)_updatePaymentCardCellWithIndex:(long long)arg1 statusString:(id)arg2;	// IMP=0x000000000010a4f6
- (void)_fetchBalancesAndTransitPassPropertiesForPass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000010a040
- (void)_transitUpdateWithState:(id)arg1;	// IMP=0x0000000000109f97
- (id)_transformState:(id)arg1;	// IMP=0x0000000000109da2
- (void)_invalidateUserAuth;	// IMP=0x0000000000109d9c
- (void)_acquireUserAuthForPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000109d84
- (id)_conflictingPassesForPass:(id)arg1 useCaseWithPasses:(id)arg2;	// IMP=0x0000000000109b6c
- (void)_promptUserAboutConflicts:(id)arg1 forPass:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000109978
- (void)_setUserInteractionsEnabled:(_Bool)arg1;	// IMP=0x00000000001097fe
- (void)_updateUIWithExpressState;	// IMP=0x000000000010939c
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000000109212
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000109160
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000001090a1
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000108fe0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000108ed9
- (id)_transitCardCellForRow:(long long)arg1;	// IMP=0x0000000000108a57
- (id)_paymentCardCellForRow:(long long)arg1;	// IMP=0x0000000000108846
- (id)_preferenceCardCellForIdentifier:(id)arg1;	// IMP=0x00000000001086ea
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000108689
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000108674
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000010865f
- (double)_heightForRowAtIndexPath:(id)arg1;	// IMP=0x00000000001085b1
- (void)_sendExpressPassDidChangeNotification;	// IMP=0x0000000000108564
- (void)_disableExpressModeForPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001082ff
- (void)_enableExpressModeForPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000010734c
- (void)_upgradeExpressModeForPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000106bb4
- (void)_userChangedExpressTransitToNone;	// IMP=0x000000000010645f
- (void)_userSetExpressTransitToEnabled:(_Bool)arg1 cell:(id)arg2;	// IMP=0x0000000000106185
- (void)_userChangedExpressSettingForPaymentPassAtIndexPath:(id)arg1;	// IMP=0x0000000000105b39
- (void)paymentPreferenceCardCell:(id)arg1 didChangeSwitchState:(_Bool)arg2;	// IMP=0x0000000000105b1f
- (void)_updateBalancesWithServerBalances:(id)arg1 transitPassProperties:(id)arg2 forPass:(id)arg3;	// IMP=0x00000000001059ba
- (void)_updateBalancesWithServerBalances:(id)arg1 transitPassProperties:(id)arg2 forPassWithUniqueIdentifier:(id)arg3;	// IMP=0x000000000010583b
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;	// IMP=0x0000000000105699
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;	// IMP=0x00000000001055a7
- (_Bool)shouldMapSection:(unsigned long long)arg1;	// IMP=0x00000000001054ce
- (void)dealloc;	// IMP=0x0000000000105490
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000010544f
- (id)_passWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000000105283
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000010522a
- (id)initWithPaymentDataProvider:(id)arg1 controller:(id)arg2 style:(long long)arg3;	// IMP=0x0000000000104fe6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

