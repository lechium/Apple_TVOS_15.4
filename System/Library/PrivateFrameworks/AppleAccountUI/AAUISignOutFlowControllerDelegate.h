//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/AASignOutFlowControllerDelegate-Protocol.h>
#import <AppleAccountUI/AAUISignOutControllerDelegate-Protocol.h>

@class ACAccountStore, AIDAAccountManager, NSString, UIViewController;

@interface AAUISignOutFlowControllerDelegate : NSObject <AAUISignOutControllerDelegate, AASignOutFlowControllerDelegate>
{
    CDUnknownBlockType _pendingSignOutCompletion;	// 8 = 0x8
    ACAccountStore *_accountStore;	// 16 = 0x10
    UIViewController *_presentingViewController;	// 24 = 0x18
    AIDAAccountManager *_accountManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000035b16
@property(retain, nonatomic) AIDAAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)_completedRestoreFromiCloud:(CDUnknownBlockType)arg1;	// IMP=0x0000000000035ac2
- (void)signOutController:(id)arg1 didCompleteWithSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000000035a88
- (void)signOutControllerDidCancel:(id)arg1;	// IMP=0x0000000000035a0f
- (void)signOutFlowController:(id)arg1 signOutAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000035736
- (void)_disableDeviceLocatorForAccount:(id)arg1 inViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000035477
- (void)signOutFlowController:(id)arg1 disableFindMyDeviceForAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000034d97
- (void)signOutFlowController:(id)arg1 showAlertWithTitle:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000034b8a
- (id)initWithPresentingViewController:(id)arg1;	// IMP=0x0000000000034b0c
- (id)init;	// IMP=0x0000000000034ab6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

