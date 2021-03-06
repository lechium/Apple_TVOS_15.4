//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDMDMv1InstallAppOperation
{
}

+ (id)whitelistedClassesForRequest;	// IMP=0x00100000000526af
+ (id)descriptionForChangeType:(long long)arg1;	// IMP=0x0010000000053e07
- (void)_resetRemovabilityWithBundleIdentifier:(id)arg1;	// IMP=0x0020000000056f6e
- (void)_endOperationWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000056eb8
- (_Bool)_canManageBundleIdentifier:(id)arg1;	// IMP=0x0010000000056e7e
- (void)_updateManagementInfoWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000056c14
- (void)_setUnusedRedemptionCode:(id)arg1;	// IMP=0x0010000000056a97
- (void)_setRedemptionCode:(id)arg1;	// IMP=0x001000000005691a
- (void)_setState:(unsigned long long)arg1;	// IMP=0x00100000000567fc
- (void)_showInstallationFailurePromptIfNeeded;	// IMP=0x0010000000056520
- (void)_showStorePromptToSignInAndInstallAppForRequest:(id)arg1;	// IMP=0x0010000000056246
- (void)_promptToSignInAndInstallAppForRequest:(id)arg1;	// IMP=0x0010000000055ed4
- (void)_promptIfNeededWithMessageFormat:(id)arg1 success:(CDUnknownBlockType)arg2;	// IMP=0x00100000000557b1
- (void)_applyManagementPiecesForRequest:(id)arg1;	// IMP=0x001000000005564a
- (void)_downloadStoreAppForRequest:(id)arg1 type:(long long)arg2;	// IMP=0x0010000000054aa6
- (void)_purchaseFreeAppForRequest:(id)arg1;	// IMP=0x0010000000054a8f
- (void)_redownloadUserAppForRequest:(id)arg1;	// IMP=0x0010000000054a78
- (void)_redownloadDeviceAppForRequest:(id)arg1;	// IMP=0x0010000000054a61
- (void)_attemptSINFSwapForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000547d5
- (void)_installStoreAppForRequest:(id)arg1;	// IMP=0x0010000000053ea0
- (void)_installSystemAppWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000053b47
- (void)_installEnterpriseAppForRequest:(id)arg1;	// IMP=0x001000000005300b
- (void)_redeemAppWithRedemptionCode:(id)arg1;	// IMP=0x0010000000052c4f
- (id)_getRequiredAppIDFromDisk;	// IMP=0x0010000000052b94
- (id)_storeAppFormat;	// IMP=0x0000000000052ada
- (void)installAppForRequest:(id)arg1;	// IMP=0x00100000000527a6
- (void)endOperationWithError:(id)arg1;	// IMP=0x0010000000052745
- (void)endOperationWithResultObject:(id)arg1;	// IMP=0x00100000000526e4

@end

