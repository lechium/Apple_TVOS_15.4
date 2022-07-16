//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTUserConfiguration, IDSCTAdapter, IDSPairingManager, IDSRegistrationController, IDSUserStore, IMLockdownManager, IMSystemMonitor, NSMutableDictionary, NSString;

@interface IDSSIMPhoneUserSynchronizer : NSObject
{
    IDSUserStore *_userStore;	// 8 = 0x8
    IDSCTAdapter *_CTAdapter;	// 16 = 0x10
    IMLockdownManager *_lockdownManager;	// 24 = 0x18
    IMSystemMonitor *_systemMonitor;	// 32 = 0x20
    IDSRegistrationController *_registrationController;	// 40 = 0x28
    FTUserConfiguration *_userConfiguration;	// 48 = 0x30
    IDSPairingManager *_pairingManager;	// 56 = 0x38
    NSMutableDictionary *_cachedIsSameSIM;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000329380
@property(retain, nonatomic) NSMutableDictionary *cachedIsSameSIM; // @synthesize cachedIsSameSIM=_cachedIsSameSIM;
@property(retain, nonatomic) IDSPairingManager *pairingManager; // @synthesize pairingManager=_pairingManager;
@property(retain, nonatomic) FTUserConfiguration *userConfiguration; // @synthesize userConfiguration=_userConfiguration;
@property(retain, nonatomic) IDSRegistrationController *registrationController; // @synthesize registrationController=_registrationController;
@property(retain, nonatomic) IMSystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
@property(retain, nonatomic) IMLockdownManager *lockdownManager; // @synthesize lockdownManager=_lockdownManager;
@property(retain, nonatomic) IDSCTAdapter *CTAdapter; // @synthesize CTAdapter=_CTAdapter;
@property(retain, nonatomic) IDSUserStore *userStore; // @synthesize userStore=_userStore;
- (void)didUpdatePairedDevice:(id)arg1;	// IMP=0x0010000000328e30
- (void)_checkRegistrationStatus;	// IMP=0x00100000003281f0
- (void)_setupForCurrentSubscriptionState;	// IMP=0x00100000003281b0
- (void)SIMInformationDidChange;	// IMP=0x0010000000328060
- (void)userStore:(id)arg1 didUpdateUser:(id)arg2;	// IMP=0x0010000000327ff0
- (void)userStore:(id)arg1 didRemoveAuthenticationCertificateForUser:(id)arg2;	// IMP=0x0010000000327f80
- (void)userStore:(id)arg1 didAddAuthenticationCertificate:(id)arg2 forUser:(id)arg3;	// IMP=0x0010000000327ef0
- (void)userStore:(id)arg1 didAddUser:(id)arg2;	// IMP=0x0010000000327e80
- (void)userStore:(id)arg1 didRemoveUser:(id)arg2 withAuthenticationCertificate:(id)arg3;	// IMP=0x0010000000327d90
- (void)selectedSubscriptionLabelDidChange:(id)arg1;	// IMP=0x0010000000327c10
- (id)updatedUserSetForRealm:(long long)arg1 currentUsers:(id)arg2;	// IMP=0x0010000000325cc0
- (void)forceRemoveUser:(id)arg1 silently:(_Bool)arg2;	// IMP=0x0010000000325bb0
- (_Bool)_isInDualPhoneIdentityModeForSims:(id)arg1;	// IMP=0x00100000003258b0
- (void)verifyState;	// IMP=0x00100000003257e0
- (void)dealloc;	// IMP=0x0010000000325780
- (id)initWithUserStore:(id)arg1 queue:(id)arg2 lockdownManager:(id)arg3 systemMonitor:(id)arg4 CTAdapter:(id)arg5 userConfiguration:(id)arg6 registrationController:(id)arg7 pairingManager:(id)arg8;	// IMP=0x0010000000325450

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

