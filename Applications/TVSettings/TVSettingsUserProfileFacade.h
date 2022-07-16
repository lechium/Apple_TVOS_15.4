//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore, CDPContext, CDPTVUIController, NSSet, NSString, PBSIgnoreUserProfileAccountNotificationsAssertion, PBSUserProfileManager, RBSAssertion, TVSAccountStoreObserver, TVSettingsUser, UMUserPersonaContext;

@interface TVSettingsUserProfileFacade : NSObject
{
    _Bool _isRemovingUser;	// 8 = 0x8
    _Bool _userHasBeenRemoved;	// 9 = 0x9
    _Bool _isSingleUserDevice;	// 10 = 0xa
    _Bool _shouldHideSingleUserUpsell;	// 11 = 0xb
    _Bool _iCloudPhotoLibraryEnabled;	// 12 = 0xc
    _Bool _iCloudSharedPhotosEnabled;	// 13 = 0xd
    _Bool _iCloudPhotoStreamEnabled;	// 14 = 0xe
    _Bool _iCloudPhotoStreamAvailable;	// 15 = 0xf
    _Bool _isSigningInOrOutInProgress;	// 16 = 0x10
    _Bool _needsAuthenticationToChangeiCloudPhotoOptions;	// 17 = 0x11
    TVSettingsUser *_user;	// 24 = 0x18
    PBSUserProfileManager *_profileManager;	// 32 = 0x20
    UMUserPersonaContext *_initialPersonaContext;	// 40 = 0x28
    CDPTVUIController *_cdpUIProvider;	// 48 = 0x30
    ACAccountStore *_accountStore;	// 56 = 0x38
    ACAccount *_iCloudAccount;	// 64 = 0x40
    PBSIgnoreUserProfileAccountNotificationsAssertion *_ignoreNotificationsAssertion;	// 72 = 0x48
    RBSAssertion *_processAssertion;	// 80 = 0x50
    TVSAccountStoreObserver *_accountStoreObserver;	// 88 = 0x58
}

+ (id)keyPathsForValuesAffectingIsSigningInOrOutInProgress;	// IMP=0x00200000001410d0
- (void).cxx_destruct;	// IMP=0x002000000014bd40
@property(retain, nonatomic) TVSAccountStoreObserver *accountStoreObserver; // @synthesize accountStoreObserver=_accountStoreObserver;
@property(nonatomic) _Bool needsAuthenticationToChangeiCloudPhotoOptions; // @synthesize needsAuthenticationToChangeiCloudPhotoOptions=_needsAuthenticationToChangeiCloudPhotoOptions;
@property(retain, nonatomic) RBSAssertion *processAssertion; // @synthesize processAssertion=_processAssertion;
@property(retain, nonatomic) PBSIgnoreUserProfileAccountNotificationsAssertion *ignoreNotificationsAssertion; // @synthesize ignoreNotificationsAssertion=_ignoreNotificationsAssertion;
@property(retain, nonatomic) ACAccount *iCloudAccount; // @synthesize iCloudAccount=_iCloudAccount;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) CDPTVUIController *cdpUIProvider; // @synthesize cdpUIProvider=_cdpUIProvider;
@property(retain, nonatomic) UMUserPersonaContext *initialPersonaContext; // @synthesize initialPersonaContext=_initialPersonaContext;
@property(nonatomic) _Bool isSigningInOrOutInProgress; // @synthesize isSigningInOrOutInProgress=_isSigningInOrOutInProgress;
@property(retain, nonatomic) PBSUserProfileManager *profileManager; // @synthesize profileManager=_profileManager;
@property(readonly, nonatomic) _Bool iCloudPhotoStreamAvailable; // @synthesize iCloudPhotoStreamAvailable=_iCloudPhotoStreamAvailable;
@property(readonly, nonatomic) _Bool iCloudPhotoStreamEnabled; // @synthesize iCloudPhotoStreamEnabled=_iCloudPhotoStreamEnabled;
@property(readonly, nonatomic) _Bool iCloudSharedPhotosEnabled; // @synthesize iCloudSharedPhotosEnabled=_iCloudSharedPhotosEnabled;
@property(readonly, nonatomic) _Bool iCloudPhotoLibraryEnabled; // @synthesize iCloudPhotoLibraryEnabled=_iCloudPhotoLibraryEnabled;
@property(nonatomic) _Bool shouldHideSingleUserUpsell; // @synthesize shouldHideSingleUserUpsell=_shouldHideSingleUserUpsell;
@property(nonatomic) _Bool isSingleUserDevice; // @synthesize isSingleUserDevice=_isSingleUserDevice;
@property(nonatomic) _Bool userHasBeenRemoved; // @synthesize userHasBeenRemoved=_userHasBeenRemoved;
@property(nonatomic) _Bool isRemovingUser; // @synthesize isRemovingUser=_isRemovingUser;
@property(readonly, nonatomic) TVSettingsUser *user; // @synthesize user=_user;
- (void)_acquireIgnoringAccountNotificationsAssertionWithName:(id)arg1;	// IMP=0x001000000014b4e0
- (void)_presentDialogWithError:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x001000000014b1f0
- (void)_cleanUpAfterSigningInOrOut;	// IMP=0x001000000014b170
- (void)_restorePersona;	// IMP=0x001000000014b030
- (_Bool)_adoptPersona;	// IMP=0x001000000014a890
- (void)_signInGameCenterWithPresentingViewController:(id)arg1;	// IMP=0x0010000000149b90
- (void)_signIniTunesWithPresentingViewController:(id)arg1;	// IMP=0x0010000000149200
- (void)_signIniCloudWithPresentingViewController:(id)arg1;	// IMP=0x00100000001486f0
- (void)_authenticateForServiceType:(long long)arg1 presentingViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000147fe0
- (void)_updateProfileWithServiceType:(long long)arg1 toAltDSID:(id)arg2;	// IMP=0x0010000000147390
- (void)_updateiCloudPhotoValues;	// IMP=0x0010000000147190
- (void)_updateiCloudPhotoSettingWithEnabled:(_Bool)arg1 dataclass:(id)arg2 presentingViewController:(id)arg3;	// IMP=0x0010000000146090
- (void)_updateGroupRecommendationsConsentToAuthorized:(_Bool)arg1;	// IMP=0x0010000000145950
- (void)groupRecommendationsConsentViewController:(id)arg1 didUpdateConsentWithAuthorized:(_Bool)arg2;	// IMP=0x00100000001458e0
- (void)groupRecommendationsConsentViewControllerDidCancel:(id)arg1;	// IMP=0x0010000000145800
- (void)signInFlowController:(id)arg1 presentGenericTermsUIForAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000145620
- (void)accountWasModified:(id)arg1;	// IMP=0x0010000000145440
- (void)userProfileManagerDidUpdate:(id)arg1;	// IMP=0x0010000000145200
- (void)updateGroupRecommendationsConsentToAuthorized:(_Bool)arg1 presentingViewController:(id)arg2;	// IMP=0x0010000000144b70
- (void)setiCloudPhotoStreamEnabled:(_Bool)arg1 presentingViewController:(id)arg2;	// IMP=0x0010000000144b00
- (void)setiCloudSharedPhotosEnabled:(_Bool)arg1 presentingViewController:(id)arg2;	// IMP=0x0010000000144a90
- (void)setiCloudPhotoLibraryEnabled:(_Bool)arg1 presentingViewController:(id)arg2;	// IMP=0x0010000000144a20
- (void)setAuthenticationNeededToChangeiCloudPhotoOptions;	// IMP=0x0010000000144a00
@property(readonly, nonatomic) _Bool userSupportsiCloudPhotoOptions;
- (void)removeUserWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000142c10
- (_Bool)canSignOutOfServiceType:(long long)arg1;	// IMP=0x0010000000142930
- (void)signOutOfServiceType:(long long)arg1;	// IMP=0x0010000000141960
- (void)signInServiceType:(long long)arg1 presentingViewController:(id)arg2;	// IMP=0x0010000000141290
@property(readonly, nonatomic) _Bool userHasActiveiTunes;
- (void)dealloc;	// IMP=0x0010000000141040
- (id)initWithUser:(id)arg1;	// IMP=0x00100000001404c0

// Remaining properties
@property(nonatomic) _Bool backgroundDataclassEnablement;
@property(retain, nonatomic) CDPContext *cdpContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long findMyActivationAction;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSSet *requiredTerms;
@property(nonatomic) _Bool shouldStashLoginResponse;
@property(nonatomic) _Bool skipCDPEnablement;
// Error: Property attributes should begin with the type ('T') attribute, property name: skipDataclassEnablement
// Property attributes: (null)

@property(readonly) Class superclass;

@end
