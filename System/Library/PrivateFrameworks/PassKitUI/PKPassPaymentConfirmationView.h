//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKPassPaymentPayStateViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>

@class NSArray, NSDate, NSMutableDictionary, NSObject, NSString, PKExpressTransactionState, PKPassPaymentPayStateView, PKPassTileGroupView, PKPaymentService, PKTransitBalanceModel, UIView;
@protocol OS_dispatch_source, PKPaymentDashboardCellActionHandleable;

@interface PKPassPaymentConfirmationView <PKPassPaymentPayStateViewDelegate, PKPaymentServiceDelegate>
{
    PKPassPaymentPayStateView *_payStateView;	// 8 = 0x8
    UIView<PKPaymentDashboardCellActionHandleable> *_singleValueCellPrimary;	// 16 = 0x10
    UIView<PKPaymentDashboardCellActionHandleable> *_singleValueCellSecondary;	// 24 = 0x18
    UIView<PKPaymentDashboardCellActionHandleable> *_dualValueCellPrimary;	// 32 = 0x20
    PKPassTileGroupView *_tileGroupView;	// 40 = 0x28
    UIView *_displayedCellPrimary;	// 48 = 0x30
    _Bool _animated;	// 56 = 0x38
    PKExpressTransactionState *_expressState;	// 64 = 0x40
    _Bool _receivedTransaction;	// 72 = 0x48
    _Bool _receivedExit;	// 73 = 0x49
    _Bool _needsResolution;	// 74 = 0x4a
    _Bool _showingResolution;	// 75 = 0x4b
    _Bool _showingSuccessResolution;	// 76 = 0x4c
    _Bool _animatingResolution;	// 77 = 0x4d
    _Bool _showingAlert;	// 78 = 0x4e
    _Bool _isStandaloneTransaction;	// 79 = 0x4f
    long long _transactionType;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_activityResolutionTimer;	// 88 = 0x58
    unsigned long long _resolutionCounter;	// 96 = 0x60
    NSDate *_visibleDate;	// 104 = 0x68
    NSMutableDictionary *_registeredExpressObservers;	// 112 = 0x70
    PKPaymentService *_paymentService;	// 120 = 0x78
    NSArray *_tiles;	// 128 = 0x80
    PKTransitBalanceModel *_transitBalanceModel;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000352bfb
- (_Bool)_isExpressOutstanding;	// IMP=0x0000000000352bde
- (void)_handleExpressNotification:(id)arg1;	// IMP=0x00000000003528e3
- (void)_registerForExpressTransactionNotifications:(_Bool)arg1;	// IMP=0x00000000003523d0
- (void)_registerObserverForNotificationName:(id)arg1 center:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003522ec
- (_Bool)_isRegisteredForAnyExpressTransactionNotifications;	// IMP=0x00000000003522c8
- (_Bool)_isRegisteredForAllExpressTransactionNotifications;	// IMP=0x0000000000352144
- (id)_expressNotificationNames;	// IMP=0x0000000000352094
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;	// IMP=0x0000000000351e61
- (void)passWithUniqueIdentifier:(id)arg1 didUpdateTiles:(id)arg2;	// IMP=0x0000000000351ceb
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;	// IMP=0x0000000000351b5a
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;	// IMP=0x000000000035198c
- (void)payStateView:(id)arg1 revealingCheckmark:(_Bool)arg2;	// IMP=0x00000000003518f9
- (void)_resolveActivityIfNecessary;	// IMP=0x0000000000351789
- (void)_resolveActivityIfNecessaryWithDelay;	// IMP=0x0000000000351591
- (void)_beginResolution;	// IMP=0x0000000000351295
- (void)_disableActivityTimer;	// IMP=0x000000000035125b
- (void)_presentCheckmarkIfNecessary;	// IMP=0x0000000000350f82
- (void)didBecomeHiddenAnimated:(_Bool)arg1;	// IMP=0x0000000000350f53
- (void)willBecomeHiddenAnimated:(_Bool)arg1;	// IMP=0x0000000000350f08
- (void)didBecomeVisibleAnimated:(_Bool)arg1;	// IMP=0x0000000000350cfa
- (void)willBecomeVisibleAnimated:(_Bool)arg1;	// IMP=0x0000000000350c98
- (void)layoutSubviews;	// IMP=0x0000000000350890
- (void)layoutIfNeededAnimated:(_Bool)arg1;	// IMP=0x0000000000350864
- (void)dealloc;	// IMP=0x00000000003507f8
- (void)_updateContentSecondaryView;	// IMP=0x0000000000350171
- (void)_updateContentPrimaryView;	// IMP=0x000000000034f844
- (_Bool)_shouldDisplaySecondaryView;	// IMP=0x000000000034f7b5
- (_Bool)_canDisplaySecondaryView;	// IMP=0x000000000034f798
- (_Bool)_shouldDisplayPrimaryView;	// IMP=0x000000000034f704
- (id)_findOrCreateSecondaryView;	// IMP=0x000000000034f66a
- (id)_findOrCreatePrimaryFusedDoubleCellView;	// IMP=0x000000000034f5d0
- (id)_findOrCreatePrimaryAdjustableSingleCellView;	// IMP=0x000000000034f536
- (id)initWithPass:(id)arg1 context:(id)arg2;	// IMP=0x000000000034e989
- (id)initWithPass:(id)arg1;	// IMP=0x000000000034e97b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

