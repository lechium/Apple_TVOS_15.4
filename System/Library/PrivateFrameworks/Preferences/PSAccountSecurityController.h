//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/KeychainSyncPhoneSettingsFragmentDelegate-Protocol.h>
#import <Preferences/KeychainSyncViewControllerDelegate-Protocol.h>
#import <Preferences/UIAlertViewDelegate-Protocol.h>

@class KeychainSyncCountryInfo, KeychainSyncDevicePINController, KeychainSyncPhoneSettingsFragment, NSArray, NSString, PSKeychainSyncManager, PSSetupController, PSSpecifier;

@interface PSAccountSecurityController <KeychainSyncViewControllerDelegate, KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate>
{
    PSSpecifier *_recoverySwitch;	// 184 = 0xb8
    NSArray *_passcodeSpecifiers;	// 192 = 0xc0
    PSSetupController *_devicePasscodeChangeSetupController;	// 200 = 0xc8
    KeychainSyncDevicePINController *_devicePINController;	// 208 = 0xd0
    KeychainSyncPhoneSettingsFragment *_phoneSettingsFragment;	// 216 = 0xd8
    NSString *_SMSTarget;	// 224 = 0xe0
    KeychainSyncCountryInfo *_SMSTargetCountryInfo;	// 232 = 0xe8
    _Bool _secureBackupEnabled;	// 240 = 0xf0
    PSKeychainSyncManager *_manager;	// 248 = 0xf8
    int _securityCodeType;	// 256 = 0x100
    NSString *_securityCode;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x0000000000091478
@property(retain, nonatomic) NSString *securityCode; // @synthesize securityCode=_securityCode;
@property(nonatomic) int securityCodeType; // @synthesize securityCodeType=_securityCodeType;
- (void)cancelPressed;	// IMP=0x000000000009138e
- (void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3;	// IMP=0x0000000000091255
- (void)_setShowsDoneButton:(_Bool)arg1;	// IMP=0x0000000000091102
- (void)navDonePressed;	// IMP=0x00000000000910c9
- (void)navCancelPressed;	// IMP=0x000000000009107f
- (void)saveSMSTargetChanges;	// IMP=0x000000000009064b
- (void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;	// IMP=0x0000000000090350
- (void)handleBurnedRecord;	// IMP=0x000000000009013e
- (id)useRecoveryForSepecifier:(id)arg1;	// IMP=0x0000000000090117
- (void)setUseRecovery:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000008fe5a
- (void)disableRecovery;	// IMP=0x000000000008f9f7
- (void)changeSecurityCode:(id)arg1;	// IMP=0x000000000008f96d
- (void)_showSecurityCodeChangeSheetOnSpecifier:(id)arg1;	// IMP=0x000000000008f31b
- (void)reloadSpecifiers;	// IMP=0x000000000008f2b8
- (id)specifiers;	// IMP=0x000000000008e649
- (id)passcodeSpecifiers;	// IMP=0x000000000008e521
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000008e195
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000008e142
- (id)init;	// IMP=0x000000000008e0e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

