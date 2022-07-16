//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MIBundleContainer, MICodeSigningInfo, MIEmbeddedWatchBundle, MIInstallationIdentity, MIPluginKitPluginBundle, NSArray, NSError, NSString, NSURL;

@interface MIExecutableBundle
{
    struct __CFBundle *_cfBundle;	// 8 = 0x8
    MIBundleContainer *_bundleContainer;	// 16 = 0x10
    unsigned long long _codeSignatureVerificationState;	// 24 = 0x18
    NSError *_wk2AppBundleError;	// 32 = 0x20
    MIEmbeddedWatchBundle *_wk2AppBundle;	// 40 = 0x28
    MICodeSigningInfo *_codeSigningInfo;	// 48 = 0x30
    NSError *_codeSigningInfoError;	// 56 = 0x38
    NSString *_watchKitAppExecutableHash;	// 64 = 0x40
    MIPluginKitPluginBundle *_watchKitPlugin;	// 72 = 0x48
    MIInstallationIdentity *_installationIdentity;	// 80 = 0x50
    unsigned long long _lsInstallType;	// 88 = 0x58
}

+ (id)bundlesInParentBundle:(id)arg1 subDirectory:(id)arg2 matchingPredicate:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x004000000003f94f
- (void).cxx_destruct;	// IMP=0x00200000000465b4
@property(nonatomic) unsigned long long lsInstallType; // @synthesize lsInstallType=_lsInstallType;
@property(retain, nonatomic) MIInstallationIdentity *installationIdentity; // @synthesize installationIdentity=_installationIdentity;
@property(retain, nonatomic) MIPluginKitPluginBundle *watchKitPlugin; // @synthesize watchKitPlugin=_watchKitPlugin;
@property(retain, nonatomic) NSString *watchKitAppExecutableHash; // @synthesize watchKitAppExecutableHash=_watchKitAppExecutableHash;
@property(retain, nonatomic) NSError *codeSigningInfoError; // @synthesize codeSigningInfoError=_codeSigningInfoError;
@property(retain, nonatomic) MICodeSigningInfo *codeSigningInfo; // @synthesize codeSigningInfo=_codeSigningInfo;
- (void);	// IMP=0x00100000000464c5
@property(retain, nonatomic) MIEmbeddedWatchBundle *wk2AppBundle; // @synthesize wk2AppBundle=_wk2AppBundle;
@property(retain, nonatomic) NSError *wk2AppBundleError; // @synthesize wk2AppBundleError=_wk2AppBundleError;
@property(readonly, nonatomic) unsigned long long codeSignatureVerificationState; // @synthesize codeSignatureVerificationState=_codeSignatureVerificationState;
@property(nonatomic) __weak MIBundleContainer *bundleContainer; // @synthesize bundleContainer=_bundleContainer;
- (_Bool)hasOnlyAllowedWatchKitAppInfoPlistKeysForWatchKitVersion:(unsigned char)arg1 error:(id *)arg2;	// IMP=0x001000000004601e
- (id)bundleSignatureVersionWithError:(id *)arg1;	// IMP=0x0010000000045ed9
- (id)watchKitV2AppBundleWithError:(id *)arg1;	// IMP=0x001000000004577c
- (id)_discoverWatchAppBundleAsPlaceholder:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0010000000045003
- (id)watchKitAppBundleForWKVersionOrEarlier:(unsigned char)arg1 error:(id *)arg2;	// IMP=0x0010000000044f12
- (unsigned char)watchKitVersionWithError:(id *)arg1;	// IMP=0x0010000000044d80
- (id)watchKitPluginWithError:(id *)arg1;	// IMP=0x0010000000044b1b
@property(readonly, nonatomic) _Bool isWatchOnlyApp;
@property(readonly, nonatomic) _Bool watchKitAppRunsIndependentlyOfCompanion;
@property(readonly, nonatomic) _Bool minimumWatchOSVersionIsPreV6;
@property(readonly, copy, nonatomic) NSArray *counterpartIdentifiers; // @dynamic counterpartIdentifiers;
@property(readonly, copy, nonatomic) NSString *companionAppIdentifier;
@property(readonly, nonatomic) _Bool isExtensionlessWatchKitApp;
@property(readonly, nonatomic) _Bool isExtensionBasedWatchKitApp;
@property(readonly, nonatomic) _Bool hasWatchGlance;
@property(readonly, nonatomic) _Bool hasWatchCustomNotification;
- (_Bool)_hasResource:(id)arg1 withExtension:(id)arg2;	// IMP=0x001000000004421b
- (_Bool)validateSinfWithError:(id *)arg1;	// IMP=0x0010000000044213
- (id)fairPlaySinfInfoWithError:(id *)arg1;	// IMP=0x00100000000441c3
@property(readonly, nonatomic) _Bool hasSinf;
@property(readonly, nonatomic) _Bool needsSinf;
- (void)removeSinf;	// IMP=0x0010000000043ff8
- (_Bool)replicateRootSinfWithError:(id *)arg1;	// IMP=0x0010000000043f10
- (id)updateAndValidateSinf:(id)arg1 withRollback:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000043c00
- (id)updateAndValidateSinf:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000043be6
- (void)bestEffortRollbackSinfData:(id)arg1;	// IMP=0x0010000000043a97
- (_Bool)updateSinfWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000043949
@property(readonly, nonatomic) NSURL *rootSupfURL;
@property(readonly, nonatomic) NSURL *rootSuppURL;
@property(readonly, nonatomic) NSURL *rootSinfURL;
- (_Bool)validatePluginMetadataWithError:(id *)arg1;	// IMP=0x0010000000043432
- (_Bool)makeExecutableWithError:(id *)arg1;	// IMP=0x0010000000043265
@property(readonly, copy, nonatomic) NSArray *vpnPluginIdentifiers;
- (id)_dataContainerCreatingIfNeeded:(_Bool)arg1 makeLive:(_Bool)arg2 checkIfNeeded:(_Bool)arg3 created:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x0010000000042d1a
- (id)dataContainerCreatingIfNeeded:(_Bool)arg1 makeLive:(_Bool)arg2 created:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x0010000000042cef
- (id)dataContainerWithError:(id *)arg1;	// IMP=0x0010000000042cc6
@property(readonly, nonatomic) Class dataContainerClass;
@property(readonly, nonatomic) long long dataContainerContentClass;
- (_Bool)hasNoConflictsWithOtherInstalledEntitiesForSigningInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000042387
- (_Bool)_hasNoConflictWithSystemAppsForSigningInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000041d67
- (int)installEmbeddedProvisioningProfileWithProgress:(CDUnknownBlockType)arg1;	// IMP=0x0010000000041d5f
- (id)codeSigningInfoByValidatingResources:(_Bool)arg1 performingOnlineAuthorization:(_Bool)arg2 ignoringCachedSigningInfo:(_Bool)arg3 checkingTrustCacheIfApplicable:(_Bool)arg4 skippingProfileIDValidation:(_Bool)arg5 error:(id *)arg6;	// IMP=0x0010000000041177
- (id)_codeSigningInfoFromMCM;	// IMP=0x0010000000040f68
- (_Bool)updateMCMWithCodeSigningInfoAsAdvanceCopy:(_Bool)arg1 withError:(id *)arg2;	// IMP=0x0010000000040b7c
- (_Bool)needsDataContainer;	// IMP=0x001000000004087a
- (_Bool)_hasNonContainerizingEntitlement:(id)arg1 checkSeatbeltProfiles:(_Bool)arg2;	// IMP=0x001000000004063f
- (_Bool)_isGrandfatheredNonContainerized:(id)arg1;	// IMP=0x0010000000040569
@property(readonly, nonatomic) unsigned long long estimatedMemoryUsageToValidate;
@property(readonly, nonatomic) unsigned int maxLinkedSDKVersion;
- (_Bool)makeAndSetNewInstallationIdentityWithError:(id *)arg1;	// IMP=0x0010000000040327
- (_Bool)transferInstallationIdentityFromBundle:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000040225
- (id)installationIdentitySettingIfNotSet:(_Bool)arg1 withError:(id *)arg2;	// IMP=0x0010000000040179
- (id)watchKitAppExecutableHashWithError:(id *)arg1;	// IMP=0x001000000003fe69
- (void)setBundleParentDirectoryURL:(id)arg1;	// IMP=0x001000000003fdd3
- (id)lsInstallTypeWithError:(id *)arg1;	// IMP=0x001000000003fb2d
@property(readonly, nonatomic) struct __CFBundle *cfBundle; // @synthesize cfBundle=_cfBundle;
@property(readonly, nonatomic) NSURL *executableURL;
@property(readonly, copy, nonatomic) NSString *executableName;
- (id)initWithBundleInContainer:(id)arg1 withExtension:(id)arg2 error:(id *)arg3;	// IMP=0x001000000003f890
- (_Bool)_validateWithError:(id *)arg1;	// IMP=0x001000000003f5aa
- (void)dealloc;	// IMP=0x001000000003f558

@end

