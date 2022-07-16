//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager, AKAuthenticationSurrogateManager;
@protocol OS_dispatch_queue;

@interface AKAuthenticationUILiaison : NSObject
{
    AKAuthenticationSurrogateManager *_surrogateManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_clientUIWorkQueue;	// 16 = 0x10
    AKAccountManager *_accountManager;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00200000000638ce
- (void).cxx_destruct;	// IMP=0x00200000000679b8
- (void)promptForAppleIDSettingsRedirectWithContext:(id)arg1 client:(id)arg2 needFullUI:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000675f1
- (id)uiWorkQueue;	// IMP=0x00100000000675e3
- (_Bool)_isFullUICapabilityRequiredFor2FA;	// IMP=0x00100000000675db
- (id)_stringByAppendingBlameIfNecessary:(id)arg1 withContext:(id)arg2 client:(id)arg3;	// IMP=0x0010000000067383
- (id)_optionsForCreatingUserNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4 serviceType:(long long)arg5;	// IMP=0x00100000000672a2
- (id)_notificationDictionaryForClient:(id)arg1 context:(id)arg2 needFullUI:(_Bool)arg3;	// IMP=0x001000000006689a
- (_Bool)_isBackgroundClient:(id)arg1 eligibleForForegroundAuthenticationWithContext:(id)arg2;	// IMP=0x00100000000665b9
- (void)_performBlockWithClient:(id)arg1 context:(id)arg2 requireFullUICapability:(_Bool)arg3 allowRedirectToSettings:(_Bool)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x0010000000065f92
- (void)presentBiometricOrPasscodeValidationForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000065d99
- (void)dismissNativeRecoveryUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000065ae9
- (void)presentNativeRecoveryUIForContext:(id)arg1 recoveryContext:(id)arg2 client:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000657e7
- (void)dismissServerProvidedUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006553a
- (void)presentServerProvidedUIForContext:(id)arg1 client:(id)arg2 withConfiguration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000065211
- (void)presentSecondFactorAlertForContext:(id)arg1 client:(id)arg2 withError:(id)arg3 title:(id)arg4 message:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000064f28
- (void)dismissSecondFactorUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000064cff
- (void)presentSecondFactorUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000064ad3
- (void)presentLoginAlertForContext:(id)arg1 client:(id)arg2 withError:(id)arg3 title:(id)arg4 message:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000645e2
- (void)dismissBasicLoginUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000064339
- (void)presentBasicLoginUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000063e2c
- (void)dismissKeepUsingUIForContext:(id)arg1 client:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000063c36
- (void)presentKeepUsingUIForContext:(id)arg1 client:(id)arg2 appleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000063a12
@property(readonly, nonatomic) AKAuthenticationSurrogateManager *surrogateManager;
- (id)init;	// IMP=0x0010000000063923

@end
