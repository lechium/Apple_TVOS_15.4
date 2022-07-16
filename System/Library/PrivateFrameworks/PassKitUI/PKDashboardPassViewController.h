//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKDashboardPassTilesItemPresenterDelegate-Protocol.h>
#import <PassKitUI/PKForegroundActiveArbiterObserver-Protocol.h>
#import <PassKitUI/PKInvalidatable-Protocol.h>
#import <PassKitUI/_PKUIKVisibilityBackdropViewDelegate-Protocol.h>

@class NSMutableArray, NSObject, NSString, PKDashboardPassFlowLayout, PKDashboardPaymentTransactionItemPresenter, PKPass, PKPaymentPass, UIButton, _PKUIKVisibilityBackdropView;
@protocol OS_dispatch_queue, PKDashboardPassViewControllerDelegate><PKDashboardDelegate;

@interface PKDashboardPassViewController <PKForegroundActiveArbiterObserver, _PKUIKVisibilityBackdropViewDelegate, PKDashboardPassTilesItemPresenterDelegate, PKInvalidatable>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Atomic _Bool _invalidated;	// 24 = 0x18
    NSMutableArray *_sessionHandles;	// 32 = 0x20
    CDStruct_973bafd3 _foregroundActiveState;	// 40 = 0x28
    unsigned int _deactivationReasons;	// 44 = 0x2c
    unsigned char _visibility;	// 48 = 0x30
    _Bool _footerVisible;	// 49 = 0x31
    PKPaymentPass *_frontmostPaymentPass;	// 56 = 0x38
    _PKUIKVisibilityBackdropView *_footerBackground;	// 64 = 0x40
    struct CGSize _defaultPasscodeButtonSize;	// 72 = 0x48
    UIButton *_passcodeButton;	// 88 = 0x58
    PKPass *_frontmostPass;	// 96 = 0x60
    PKDashboardPassFlowLayout *_passFlowLayout;	// 104 = 0x68
    PKDashboardPaymentTransactionItemPresenter *_transactionPresenter;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000076877
@property(readonly, nonatomic) PKDashboardPaymentTransactionItemPresenter *transactionPresenter; // @synthesize transactionPresenter=_transactionPresenter;
@property(readonly, nonatomic) PKDashboardPassFlowLayout *passFlowLayout; // @synthesize passFlowLayout=_passFlowLayout;
@property(retain, nonatomic) PKPass *frontmostPass; // @synthesize frontmostPass=_frontmostPass;
- (void)passTilesItemPresenter:(id)arg1 executeSEActionForPass:(id)arg2 tile:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000757ae
- (long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2;	// IMP=0x0000000000075786
- (_Bool)_isForegroundActive;	// IMP=0x000000000007574f
- (_Bool)_isBackgrounded;	// IMP=0x0000000000075718
- (_Bool)_isDeactivated;	// IMP=0x00000000000756e0
- (void)foregroundActiveArbiter:(id)arg1 didUpdateDeactivationReasons:(unsigned int)arg2;	// IMP=0x000000000007567a
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_973bafd3)arg2;	// IMP=0x0000000000075611
- (void)_performActivationStateUpdate:(CDUnknownBlockType)arg1;	// IMP=0x000000000007555c
- (void)_passcodeTapped:(id)arg1;	// IMP=0x00000000000754f0
- (void)_updateDefaultPasscodeButtonSize;	// IMP=0x00000000000753f3
- (id)_passcodeButtonTitle;	// IMP=0x00000000000753ad
- (void)_updatePasscodeButtonTitle;	// IMP=0x00000000000752f8
- (void)_createFooter;	// IMP=0x0000000000074ec5
- (void)_updateFooterAnimated:(_Bool)arg1;	// IMP=0x0000000000074b8f
- (void)_updateFingerDetection;	// IMP=0x0000000000074b89
- (void)_visibilityDidChange;	// IMP=0x0000000000074b56
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated; // @dynamic invalidated;
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000074661
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000745a4
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x000000000007453a
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000744ee
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000744a2
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000074420
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000743b9
- (void)loadView;	// IMP=0x00000000000742af
- (void)invalidate;	// IMP=0x0000000000074134
- (void)dealloc;	// IMP=0x00000000000740a1
- (id)initWithPassGroupView:(id)arg1 context:(id)arg2 presentingViewController:(id)arg3;	// IMP=0x0000000000073b3d
- (id)initWithPass:(id)arg1;	// IMP=0x000000000007398f
- (id)initWithDataSource:(id)arg1 presenters:(id)arg2 layout:(id)arg3;	// IMP=0x0000000000073981

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PKDashboardPassViewControllerDelegate><PKDashboardDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

