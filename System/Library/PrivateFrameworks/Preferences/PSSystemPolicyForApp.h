//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Preferences/BBObserverDelegate-Protocol.h>

@class BBObserver, NEConfiguration, NSString, PSAccountEnumerator, PSContactsPolicyController, PSPhotosPolicyController;
@protocol PSSystemPolicyForAppDelegate;

@interface PSSystemPolicyForApp : NSObject <BBObserverDelegate>
{
    unsigned long long _policyOptions;	// 8 = 0x8
    _Bool _forcePolicyOptions;	// 16 = 0x10
    PSPhotosPolicyController *_photosPrivacyController;	// 24 = 0x18
    PSContactsPolicyController *_contactsPrivacyController;	// 32 = 0x20
    PSAccountEnumerator *_accountEnumerator;	// 40 = 0x28
    NEConfiguration *_pathControllerConfiguration;	// 48 = 0x30
    id <PSSystemPolicyForAppDelegate> _delegate;	// 56 = 0x38
    NSString *_bundleIdentifier;	// 64 = 0x40
    BBObserver *__bbObserver;	// 72 = 0x48
}

+ (_Bool)isServiceRestricted:(id)arg1;	// IMP=0x00000000000c9dff
+ (id)_bbObserverQueue;	// IMP=0x00000000000c53ea
- (void).cxx_destruct;	// IMP=0x00000000000cac8d
@property(retain, nonatomic) BBObserver *_bbObserver; // @synthesize _bbObserver=__bbObserver;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) __weak id <PSSystemPolicyForAppDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;	// IMP=0x00000000000caa8c
- (id)defaultAppSpecifierWithAppRecordsMatchingBlock:(CDUnknownBlockType)arg1 getter:(SEL)arg2 setter:(SEL)arg3 title:(id)arg4;	// IMP=0x00000000000ca5de
- (id)preferredLanguage:(id)arg1;	// IMP=0x00000000000ca503
- (id)preferredLanguageSpecifier;	// IMP=0x00000000000ca09d
- (id)exposureSpecifiersWithTCCServiceLookup:(id)arg1;	// IMP=0x00000000000ca095
- (id)documentsSpecifier;	// IMP=0x00000000000ca08d
- (void)headerLinkWasTapped;	// IMP=0x00000000000ca004
- (id)trackingSpecifiersWithTCCServiceLookup:(id)arg1 tccServiceOverrides:(id)arg2;	// IMP=0x00000000000c9e76
- (id)privacyAccessForSpecifier:(id)arg1;	// IMP=0x00000000000c9dab
- (void)setPrivacyAccess:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x00000000000c9104
- (id)privacySpecifierForService:(struct __CFString *)arg1 tccServiceLookup:(id)arg2 tccServiceOverrides:(id)arg3;	// IMP=0x00000000000c8c26
- (id)privacySpecifiersWithTCCServiceLookup:(id)arg1 tccServiceOverrides:(id)arg2;	// IMP=0x00000000000c870d
- (id)authLevelStringForStatus:(unsigned long long)arg1;	// IMP=0x00000000000c858e
- (id)locationStatus:(id)arg1;	// IMP=0x00000000000c84cc
- (_Bool)_isLocationServicesRestricted;	// IMP=0x00000000000c848a
- (id)locationServicesSpecifier;	// IMP=0x00000000000c81cd
- (id)networkServicesSpecifier;	// IMP=0x00000000000c7fdd
- (id)isLocalNetworkEnabled:(id)arg1;	// IMP=0x00000000000c7ef1
- (void)setLocalNetworkEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000c7dac
- (id)pathRuleForBundleID:(id)arg1 create:(_Bool)arg2;	// IMP=0x00000000000c7a90
- (void)saveNetworkConfiguration;	// IMP=0x00000000000c7953
- (void)loadNetworkConfigurationsForceRefresh:(_Bool)arg1;	// IMP=0x00000000000c7645
- (void)setupNetworkConfiguration;	// IMP=0x00000000000c74e1
- (_Bool)getMulticastAllowed:(_Bool *)arg1;	// IMP=0x00000000000c7286
- (id)contactsServicesSpecifier;	// IMP=0x00000000000c71e6
- (id)photosServicesSpecifier;	// IMP=0x00000000000c7043
- (id)isBackgroundRefreshEnabled:(id)arg1;	// IMP=0x00000000000c6f73
- (void)setBackgroundRefreshEnabled:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x00000000000c6dfa
- (_Bool)_isBackgroundAppRefreshAllowed;	// IMP=0x00000000000c6d3e
- (_Bool)_supportsBackgroundAppRefresh;	// IMP=0x00000000000c6b2e
- (id)backgroundAppRefreshSpecifier;	// IMP=0x00000000000c6943
- (id)isFamilyControlsEnabled:(id)arg1;	// IMP=0x00000000000c6936
- (void)setFamilyControlsEnabled:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x00000000000c6930
- (long long)_getAuthorizationRecordsStatus;	// IMP=0x00000000000c6923
- (id)familyControlsSpecifier;	// IMP=0x00000000000c691b
- (id)wirelessDataSpecifierWithAppName:(id)arg1;	// IMP=0x00000000000c683f
- (_Bool)_isWirelessDataRestricted;	// IMP=0x00000000000c6793
- (_Bool)isCellularBundleID:(id)arg1;	// IMP=0x00000000000c678b
- (id)dataUsageWorkspaceInfo;	// IMP=0x00000000000c66cc
- (id)assistantAndSearchSpecifiers;	// IMP=0x00000000000c667a
- (_Bool)_accountModificationDisabledByRestrictions;	// IMP=0x00000000000c6621
- (void)_handleAddAccountButtonAction:(id)arg1;	// IMP=0x00000000000c6549
- (id)accountsSpecifier;	// IMP=0x00000000000c6408
- (id)notificationSpecifier;	// IMP=0x00000000000c619b
- (_Bool)_isAppClip;	// IMP=0x00000000000c6193
- (id)specifiersForPolicyOptions:(unsigned long long)arg1 force:(_Bool)arg2;	// IMP=0x00000000000c56a3
- (id)specifiers;	// IMP=0x00000000000c546b
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00000000000c450f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

