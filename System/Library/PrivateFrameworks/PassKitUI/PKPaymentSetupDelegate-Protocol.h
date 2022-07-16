//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSError, PKPasscodeUpgradeFlowController, PKPaymentSetupNavigationController, UIViewController;

@protocol PKPaymentSetupDelegate <NSObject>
- (void)paymentSetupDidFinish:(PKPaymentSetupNavigationController *)arg1;

@optional
- (void)paymentSetupDidExitPasscodeUpgradeWithShouldContinue:(_Bool)arg1 error:(NSError *)arg2;
- (void)paymentSetupRequestPasscodeUpgradeWithVisibleViewController:(UIViewController *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)paymentSetupDidExitPasscodeUpgradeForPasscodeUpgradeFlowController:(PKPasscodeUpgradeFlowController *)arg1 withShouldContinue:(_Bool)arg2 error:(NSError *)arg3;
- (void)paymentSetupRequestPasscodeUpgradeForPasscodeUpgradeFlowController:(PKPasscodeUpgradeFlowController *)arg1 withVisibleViewController:(UIViewController *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)paymentSetupDidShowEligibilityIssue;
- (void)paymentSetupDidShowError:(NSError *)arg1;
@end

