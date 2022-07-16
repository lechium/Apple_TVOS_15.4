//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSString, NSURL, TVSUIUserPickerSelectedUserController, TVSettingsHomeSetupController, TVSettingsIMAccountsFacade, TVSettingsITMSSandboxFacade, TVSettingsUserProfileListFacade;

@interface TVSettingsUserProfilesViewController : TSKViewController
{
    _Bool _hideAppleConnectItem;	// 8 = 0x8
    TVSettingsUserProfileListFacade *_userProfilesFacade;	// 16 = 0x10
    TVSUIUserPickerSelectedUserController *_selectedUserController;	// 24 = 0x18
    TVSettingsITMSSandboxFacade *_sandboxFacade;	// 32 = 0x20
    TVSettingsIMAccountsFacade *_imAccountsFacade;	// 40 = 0x28
    TVSettingsHomeSetupController *_homeSetupController;	// 48 = 0x30
    NSURL *_displayTriggerURL;	// 56 = 0x38
}

+ (id)_addGuestUserDeepLinkKey;	// IMP=0x002000000003d5e0
+ (id)_addPrimaryUserDeepLinkKey;	// IMP=0x001000000003d510
+ (id)_deepLinkKeyForUser:(id)arg1;	// IMP=0x001000000003d300
- (void).cxx_destruct;	// IMP=0x002000000003d9f0
@property(retain, nonatomic) NSURL *displayTriggerURL; // @synthesize displayTriggerURL=_displayTriggerURL;
@property(retain, nonatomic) TVSettingsHomeSetupController *homeSetupController; // @synthesize homeSetupController=_homeSetupController;
@property(retain, nonatomic) TVSettingsIMAccountsFacade *imAccountsFacade; // @synthesize imAccountsFacade=_imAccountsFacade;
@property(retain, nonatomic) TVSettingsITMSSandboxFacade *sandboxFacade; // @synthesize sandboxFacade=_sandboxFacade;
@property(nonatomic) _Bool hideAppleConnectItem; // @synthesize hideAppleConnectItem=_hideAppleConnectItem;
@property(retain, nonatomic) TVSUIUserPickerSelectedUserController *selectedUserController; // @synthesize selectedUserController=_selectedUserController;
@property(retain, nonatomic) TVSettingsUserProfileListFacade *userProfilesFacade; // @synthesize userProfilesFacade=_userProfilesFacade;
- (_Bool)shouldHideExpanse;	// IMP=0x001000000003d6b0
- (id)_location;	// IMP=0x001000000003cb10
- (void)_signOutSandboxAccount:(id)arg1;	// IMP=0x001000000003c620
- (void)_signIntoSandboxAccount:(id)arg1;	// IMP=0x001000000003c5c0
- (id)_sandboxAccount;	// IMP=0x001000000003b950
- (void)_handleSeedRecognizer:(id)arg1;	// IMP=0x001000000003b8d0
- (id)_appleConnect;	// IMP=0x001000000003b5f0
- (void)_menuPressed:(id)arg1;	// IMP=0x001000000003b560
- (void)_addUserWithProfileType:(long long)arg1;	// IMP=0x001000000003b3e0
- (void)_addGuestUser:(id)arg1;	// IMP=0x001000000003b1c0
- (void)_addPrimaryUser:(id)arg1;	// IMP=0x001000000003b160
- (void)_switchUser:(id)arg1;	// IMP=0x001000000003afb0
- (void)_toggleExpanse:(id)arg1;	// IMP=0x001000000003af20
- (id)_deviceAccountsGroup;	// IMP=0x001000000003a570
- (id)_guestUsersGroup;	// IMP=0x0010000000039bc0
- (id)_primaryUserGroup;	// IMP=0x0010000000039390
- (id)_currentUserGroup;	// IMP=0x0010000000039050
- (void)displayTriggeredByURL:(id)arg1;	// IMP=0x0010000000038ff0
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0010000000038f40
- (void)tapToAddNewUserViewControllerFinishHomeKitSetup:(id)arg1;	// IMP=0x0010000000038eb0
- (void)tapToAddNewUserViewControllerManualSignInTriggered:(id)arg1;	// IMP=0x0010000000038c90
- (id)loadSettingGroups;	// IMP=0x0010000000038ac0
- (void)viewDidLoad;	// IMP=0x0010000000038940
- (id)initWithUserProfilesFacade:(id)arg1;	// IMP=0x0010000000038810

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Error: Property attributes should begin with the type ('T') attribute, property name: description
// Property attributes: (null)

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

