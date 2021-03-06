//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIBarButtonItem, UIButton, VUIAppInstallConfirmationView, VUIAppInstallLockup;
@protocol WLKInstallable;

__attribute__((visibility("hidden")))
@interface VUIAppInstallConfirmationViewController
{
    NSString *_updateTitle;	// 8 = 0x8
    NSString *_updateMessage;	// 16 = 0x10
    CDUnknownBlockType _cancelationHandler;	// 24 = 0x18
    CDUnknownBlockType _actionHandler;	// 32 = 0x20
    CDUnknownBlockType _appStoreHandler;	// 40 = 0x28
    CDUnknownBlockType _secondaryLinkHandler;	// 48 = 0x30
    unsigned long long _state;	// 56 = 0x38
    UIBarButtonItem *_barButtonItem;	// 64 = 0x40
    VUIAppInstallConfirmationView *_confirmationView;	// 72 = 0x48
    id <WLKInstallable> _installable;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000006df88
@property(retain, nonatomic) id <WLKInstallable> installable; // @synthesize installable=_installable;
@property(retain, nonatomic) VUIAppInstallConfirmationView *confirmationView; // @synthesize confirmationView=_confirmationView;
@property(retain, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType secondaryLinkHandler; // @synthesize secondaryLinkHandler=_secondaryLinkHandler;
@property(copy, nonatomic) CDUnknownBlockType appStoreHandler; // @synthesize appStoreHandler=_appStoreHandler;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(copy, nonatomic) CDUnknownBlockType cancelationHandler; // @synthesize cancelationHandler=_cancelationHandler;
- (id)_namedRatingWithRatings:(id)arg1;	// IMP=0x000000000006ddf0
- (id)_fileSizeWithDeviceSizes:(id)arg1;	// IMP=0x000000000006dc7e
- (void)_fetchStoreInfoForAdamID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006d94d
- (void)_fetchAppInfo;	// IMP=0x000000000006ce3f
- (void)_handleSecondaryLink;	// IMP=0x000000000006ce25
- (void)_handleAppStore;	// IMP=0x000000000006cd11
- (void)_handleCancel;	// IMP=0x000000000006cbf3
- (void)_handleAction;	// IMP=0x000000000006caed
- (void)loadView;	// IMP=0x000000000006c811
- (void)setInstallingState;	// IMP=0x000000000006c634
- (void)setPreInstallState;	// IMP=0x000000000006c45c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000006c33f
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000006c170
@property(readonly, nonatomic) UIButton *actionButton;
@property(readonly, nonatomic) VUIAppInstallLockup *lockup;
- (void)setSecondaryLinkTitle:(id)arg1;	// IMP=0x000000000006c0ba
- (void)setUpdateTitle:(id)arg1;	// IMP=0x000000000006c0a6
- (void)setUpdateMessage:(id)arg1;	// IMP=0x000000000006c092
- (void)setMessage:(id)arg1;	// IMP=0x000000000006c075
- (void)setTitle:(id)arg1;	// IMP=0x000000000006bfc3
- (id)initWithInstallable:(id)arg1;	// IMP=0x000000000006bebb
- (id)init;	// IMP=0x000000000006be7c

@end

