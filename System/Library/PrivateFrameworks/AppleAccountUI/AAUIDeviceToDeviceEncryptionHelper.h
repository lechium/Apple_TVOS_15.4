//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAppleIDAuthenticationController, UIViewController;
@protocol AAUIDeviceToDeviceEncryptionHelperDelegate;

@interface AAUIDeviceToDeviceEncryptionHelper : NSObject
{
    UIViewController *_presentingViewController;	// 8 = 0x8
    id <AAUIDeviceToDeviceEncryptionHelperDelegate> _delegate;	// 16 = 0x10
    AKAppleIDAuthenticationController *_authController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001ca97
@property(retain, nonatomic) AKAppleIDAuthenticationController *authController; // @synthesize authController=_authController;
@property(nonatomic) __weak id <AAUIDeviceToDeviceEncryptionHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (id)_encryptionErrorFromError:(id)arg1;	// IMP=0x000000000001c85f
- (_Bool)_hasPasscode;	// IMP=0x000000000001c846
- (void)_validatePasscodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001c3d7
- (void)_validateCDPStateForAuthResults:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001bfce
- (_Bool)_isHSA2AvailableForAuthenticationContext:(id)arg1;	// IMP=0x000000000001bf01
- (void)_presentCDPUpgradeSpinnerViewControllerForAuthContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001baa3
- (void)_authenticateContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b417
- (void)_askPermissionToContinueFlowForEligibleAccountForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b05d
- (void)performDeviceToDeviceEncryptionStateRepairForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001aabb
- (id)initWithPresentingViewController:(id)arg1;	// IMP=0x000000000001aa3d

@end
