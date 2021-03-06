//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSystemPolicyForAppDelegate-Protocol.h>

@class NSString, PSSystemPolicyForApp;

@interface PSAppListController <PSSystemPolicyForAppDelegate>
{
    PSSystemPolicyForApp *_systemPolicy;	// 184 = 0xb8
    PSSystemPolicyForApp *_appPolicy;	// 192 = 0xc0
}

+ (id)_typeErrorStringForKeyWithName:(id)arg1 expectedType:(Class)arg2 actualType:(Class)arg3;	// IMP=0x000000000007c1e8
+ (id)specifiersFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;	// IMP=0x000000000007ae24
+ (id)childPaneSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;	// IMP=0x000000000007a57f
+ (id)multiValueSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;	// IMP=0x0000000000079bfb
+ (id)titleValueSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;	// IMP=0x00000000000793de
+ (id)sliderSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;	// IMP=0x0000000000078b4b
+ (id)toggleSwitchSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;	// IMP=0x0000000000078541
+ (id)textFieldSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;	// IMP=0x0000000000077d40
+ (id)radioGroupSpecifiersFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;	// IMP=0x0000000000077341
+ (id)groupSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;	// IMP=0x0000000000076fb4
+ (id)localizedTitlesFromUnlocalizedTitles:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3;	// IMP=0x0000000000076d36
+ (_Bool)canUseOnBoardingKitFOrPrivacyDisplayForBundleName:(id)arg1;	// IMP=0x0000000000076cbb
+ (_Bool)canUseOnBoardingKitForPrivacyDisplayForBundleID:(id)arg1;	// IMP=0x0000000000076c40
+ (id)onBoardingKitBundleNameDict;	// IMP=0x0000000000076bf0
+ (id)onBoardingKitBundleIDDict;	// IMP=0x0000000000076ba0
+ (id)allowedPrivacyBundlesForName;	// IMP=0x0000000000076b0d
+ (id)allowedPrivacyBundlesForID;	// IMP=0x0000000000076a7a
- (void).cxx_destruct;	// IMP=0x000000000007c2db
@property(retain, nonatomic) PSSystemPolicyForApp *appPolicy; // @synthesize appPolicy=_appPolicy;
@property(retain, nonatomic) PSSystemPolicyForApp *systemPolicy; // @synthesize systemPolicy=_systemPolicy;
- (id)bundle;	// IMP=0x000000000007bff2
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000007be96
- (id)specifiers;	// IMP=0x000000000007b483
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000007b41c
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000076f3c
- (void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)arg1;	// IMP=0x0000000000076eb1
- (void)showPrivacyControllerForBundleName:(id)arg1;	// IMP=0x0000000000076a74
- (void)showPrivacyControllerForBundleID:(id)arg1;	// IMP=0x0000000000076a6e
- (void)_setToggleSwitchSpecifierValue:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000007695f
- (id)_readToggleSwitchSpecifierValue:(id)arg1;	// IMP=0x00000000000767af
- (id)_valueFromUIValue:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000766ba
- (id)_uiValueFromValue:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000076605

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

