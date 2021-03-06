//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASDJobManager, ASDSoftwareUpdatesStore, FBSDisplayLayoutMonitor, NSArray, NSMutableDictionary, NSString;

@interface DMDiphoneOSAppController
{
    NSString *_singleAppModeBundleIndentifier;	// 8 = 0x8
    NSMutableDictionary *_bundleIDsToAssertions;	// 16 = 0x10
    FBSDisplayLayoutMonitor *_layoutMonitor;	// 24 = 0x18
    NSArray *__foregroundBundleIdentifiers;	// 32 = 0x20
}

+ (id)metadataPath;	// IMP=0x00400000000194fd
+ (id)changeTypeAsString:(long long)arg1;	// IMP=0x00100000000191db
+ (id)_appleAccountForPersona:(id)arg1;	// IMP=0x0010000000018f52
+ (id)_appStoreAccountIdentifierForPersona:(id)arg1;	// IMP=0x0010000000018de0
- (void).cxx_destruct;	// IMP=0x001000000001aeb9
@property(retain, nonatomic) NSArray *_foregroundBundleIdentifiers; // @synthesize _foregroundBundleIdentifiers=__foregroundBundleIdentifiers;
@property(retain, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor; // @synthesize layoutMonitor=_layoutMonitor;
@property(retain, nonatomic) NSMutableDictionary *bundleIDsToAssertions; // @synthesize bundleIDsToAssertions=_bundleIDsToAssertions;
@property(copy, nonatomic) NSString *singleAppModeBundleIndentifier; // @synthesize singleAppModeBundleIndentifier=_singleAppModeBundleIndentifier;
- (void)_updateForegroundBundleIdentifiers;	// IMP=0x001000000001ab49
- (void)_getMetadataForBundleIdentifier:(id)arg1 storeItemIdentifier:(id)arg2 personaIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000001a5fb
- (void)_applyStoreDictionary:(id)arg1 toAppMetadata:(id)arg2;	// IMP=0x001000000001a433
- (id)_managedDefaultsForBundleIdentifier:(id)arg1;	// IMP=0x001000000001a3e1
- (_Bool)setFeedback:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001a09b
- (id)feedbackForBundleIdentifier:(id)arg1;	// IMP=0x0010000000019db2
- (void)_withSandboxExtensionForApp:(id)arg1 do:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019b40
- (_Bool)setConfiguration:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000019993
- (id)configurationForBundleIdentifier:(id)arg1;	// IMP=0x001000000001993c
- (void)getMetadataForNonEnterpriseAppRequest:(id)arg1 personaIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000019623
- (void)getBundleIdentifierForStoreItemIdentifier:(id)arg1 personaIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000019516
- (_Bool)writeManagementInformationToDiskWithError:(id *)arg1;	// IMP=0x001000000001947e
- (void)installSystemAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019248
- (void)sendAppRequestWithBundleIdentifier:(id)arg1 storeItemIdentifier:(id)arg2 personaIdentifier:(id)arg3 type:(long long)arg4 skipDownloads:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000189b9
- (void)promptUserToSignInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000187db
@property(readonly, nonatomic) _Bool userIsSignedIn;
- (void)removeTerminationAssertionForBundleIdentifier:(id)arg1;	// IMP=0x001000000001863a
- (void)addTerminationAssertion:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00100000000184e6
@property(readonly, copy, nonatomic) ASDSoftwareUpdatesStore *updatesStore;
@property(readonly, copy, nonatomic) ASDJobManager *jobManager;
- (id)foregroundBundleIdentifiers;	// IMP=0x00100000000183e3
- (id)initPrivate;	// IMP=0x0010000000018290
- (id)_allPropertyKeys;	// IMP=0x0010000000017153
- (void)handleFetchRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000016093
- (void)_downloadAppForRequest:(id)arg1 type:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001806c
- (void)_installUserAppForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000017e37
- (void)_installDeviceLicensedAppForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000017d56
- (void)resumeAppInstallationWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000177e8
- (void)startInstallingNonEnterpriseAppForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000175bd
- (void)startInstallingEnterpriseAppWithManifestURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000017385
- (void)startRedeemingAppWithCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001af0c
- (void)_uninstallAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001ba7a
- (void)startUninstallingAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b7eb
- (void)cancelAppInstallationWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b2f8
- (void)_updateEndedForLifeCycle:(id)arg1;	// IMP=0x001000000001c1ed
- (void)_startUpdatingAppForRequest:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001be67
- (void)didFinishUpdatingForLifeCycle:(id)arg1;	// IMP=0x001000000001bdf9
- (void)didFailUpdatingForLifeCycle:(id)arg1;	// IMP=0x001000000001bd8b
- (void)didCancelUpdatingForLifeCycle:(id)arg1;	// IMP=0x001000000001bd1d
- (void)resumeAppUpdateWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001bd0b
- (void)cancelAppUpdateWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001bcf9
- (void)startUpdatingAppForRequest:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001ba98

@end

