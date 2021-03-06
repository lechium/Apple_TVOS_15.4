//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPaymentSetupViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentAccountResolutionControllerDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentActionViewControllerDelegate-Protocol.h>

@class NSString, PKPeerPaymentAccount, PKPeerPaymentActionViewController, PKPeerPaymentWebService;
@protocol PKPassLibraryDataProvider, PKPaymentSetupDelegate, PKPeerPaymentAccountResolutionControllerDelegate;

@interface PKPeerPaymentAccountResolutionController : NSObject <PKPeerPaymentAccountResolutionControllerDelegate, PKPeerPaymentActionViewControllerDelegate, PKPaymentSetupViewControllerDelegate>
{
    id <PKPeerPaymentAccountResolutionControllerDelegate> _delegate;	// 8 = 0x8
    id <PKPassLibraryDataProvider> _passLibraryDataProvider;	// 16 = 0x10
    long long _context;	// 24 = 0x18
    PKPeerPaymentWebService *_webService;	// 32 = 0x20
    PKPeerPaymentActionViewController *_peerPaymentActionViewController;	// 40 = 0x28
    PKPeerPaymentAccount *_account;	// 48 = 0x30
    id <PKPaymentSetupDelegate> _setupDelegate;	// 56 = 0x38
}

+ (_Bool)_canShowContactSupportForPass:(id)arg1;	// IMP=0x0000000000127107
+ (id)_peerPaymentPassForAccount:(id)arg1 passLibraryDataProvider:(id)arg2;	// IMP=0x000000000012700d
+ (_Bool)_hasPeerPaymentPassProvisionedForAccount:(id)arg1 passLibraryDataProvider:(id)arg2;	// IMP=0x0000000000126fc4
+ (_Bool)peerPaymentPassIsProvisionedOnDeviceForAccount:(id)arg1 passLibraryDataProvider:(id)arg2;	// IMP=0x0000000000126bb0
+ (_Bool)peerPaymentPassIsProvisionedOnDeviceForAccount:(id)arg1;	// IMP=0x0000000000126b4c
- (void).cxx_destruct;	// IMP=0x00000000001293db
@property(nonatomic) __weak id <PKPaymentSetupDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(nonatomic) __weak id <PKPeerPaymentAccountResolutionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPeerPaymentAccount *account; // @synthesize account=_account;
- (void)_openSupportWebsiteWithWebsiteURL:(id)arg1;	// IMP=0x00000000001292f3
- (void)_callSupportWithPhoneNumber:(id)arg1;	// IMP=0x00000000001291db
- (void)_emailSupportWithEmailAddress:(id)arg1;	// IMP=0x0000000000129106
- (void)_peerPaymentAccountChanged:(id)arg1;	// IMP=0x0000000000129024
- (void)_dismissViewController;	// IMP=0x0000000000128fe9
- (void)_presentViewController:(id)arg1;	// IMP=0x0000000000128f87
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;	// IMP=0x0000000000128eb8
- (void)viewControllerDidCancelSetupFlow:(id)arg1;	// IMP=0x0000000000128ea6
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;	// IMP=0x0000000000128e94
- (void)peerPaymentActionViewControllerDidPerformAction:(id)arg1;	// IMP=0x0000000000128e66
- (void)peerPaymentActionViewControllerDidCancel:(id)arg1;	// IMP=0x0000000000128e38
- (void)_presentPeerPaymentAction:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000128c73
- (void)_presentReOpenFlowWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001281b4
- (void)_presentContactAppleSupportAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000012810e
- (id)_contactAppleSupportAlertControllerForPass:(id)arg1;	// IMP=0x0000000000127c47
- (void)_presentIdentityVerificationWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001277dc
- (void)_presentActivationFlowWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001271f8
- (void)_presentActivationFlowWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001271e1
- (id)_paymentWebService;	// IMP=0x00000000001271c8
- (id)_peerPaymentPass;	// IMP=0x00000000001270db
- (_Bool)_hasPeerPaymentPassProvisioned;	// IMP=0x00000000001270af
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(_Bool)arg2;	// IMP=0x0000000000126f25
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000126e66
- (unsigned long long)currentPeerPaymentAccountResolution;	// IMP=0x0000000000126e14
- (void)_presentFlowForAccountResolution:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000126c3d
- (void)presentFlowForAccountResolution:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000126c2b
- (void)presentResolutionForCurrentAccountStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000126bd4
- (_Bool)peerPaymentPassIsProvisionedOnDevice;	// IMP=0x0000000000126bc2
- (void)dealloc;	// IMP=0x0000000000126ad7
- (id)initWithAccount:(id)arg1 webService:(id)arg2 context:(long long)arg3 delegate:(id)arg4 passLibraryDataProvider:(id)arg5;	// IMP=0x0000000000126922

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

