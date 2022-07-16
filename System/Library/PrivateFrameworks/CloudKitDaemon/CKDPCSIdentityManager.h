//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDAccount, CKDLogicalDeviceContext, NSMutableDictionary, NSString;

@interface CKDPCSIdentityManager : NSObject
{
    _Bool _forceEnableReadOnlyManatee;	// 8 = 0x8
    _Bool _forceSecurityErrorOnIdentityValidation;	// 9 = 0x9
    _Bool _forceManateeUnavailableForUnitTests;	// 10 = 0xa
    _Bool _serviceIsManateeForUnitTests;	// 11 = 0xb
    _Bool _refetchPCSIdentitySet;	// 12 = 0xc
    unsigned int _clientSDKVersion;	// 16 = 0x10
    NSString *_serviceName;	// 24 = 0x18
    CKDAccount *_account;	// 32 = 0x20
    CKDLogicalDeviceContext *_deviceContext;	// 40 = 0x28
    NSString *_cachedAccountDSID;	// 48 = 0x30
    NSMutableDictionary *_PCSIdentityWrappersByServiceName;	// 56 = 0x38
    struct _PCSIdentityData *_debugIdentity;	// 64 = 0x40
}

+ (id)overrideKeys;	// IMP=0x00000000002c3ff8
+ (_Bool)_rollTestAccountIdentitySetForService:(id)arg1 forBackingFakeAccount:(id)arg2 withError:(id *)arg3;	// IMP=0x00000000002c2b1d
+ (id)_generatePCSIdentityOptionsForService:(id)arg1 forBackingFakeAccount:(id)arg2 withError:(id *)arg3;	// IMP=0x00000000002c2685
+ (struct _PCSIdentitySetData *)_getTestAccountIdentitySetForService:(id)arg1 forBackingFakeAccount:(id)arg2 withError:(id *)arg3;	// IMP=0x00000000002c2157
+ (id)sharedFakeIdentitySetsByServiceByUsername;	// IMP=0x00000000002c2102
+ (struct _PCSIdentitySetData *)_copyStingrayIdentitiesForService:(id)arg1 forBackingFakeAccount:(id)arg2 withError:(id *)arg3;	// IMP=0x00000000002c1ce7
- (void).cxx_destruct;	// IMP=0x00000000002c461a
@property(nonatomic) unsigned int clientSDKVersion; // @synthesize clientSDKVersion=_clientSDKVersion;
@property(nonatomic) _Bool refetchPCSIdentitySet; // @synthesize refetchPCSIdentitySet=_refetchPCSIdentitySet;
@property(nonatomic) _Bool serviceIsManateeForUnitTests; // @synthesize serviceIsManateeForUnitTests=_serviceIsManateeForUnitTests;
@property(nonatomic) _Bool forceManateeUnavailableForUnitTests; // @synthesize forceManateeUnavailableForUnitTests=_forceManateeUnavailableForUnitTests;
@property(nonatomic) _Bool forceSecurityErrorOnIdentityValidation; // @synthesize forceSecurityErrorOnIdentityValidation=_forceSecurityErrorOnIdentityValidation;
@property(nonatomic) struct _PCSIdentityData *debugIdentity; // @synthesize debugIdentity=_debugIdentity;
@property(retain) NSMutableDictionary *PCSIdentityWrappersByServiceName; // @synthesize PCSIdentityWrappersByServiceName=_PCSIdentityWrappersByServiceName;
@property(retain) NSString *cachedAccountDSID; // @synthesize cachedAccountDSID=_cachedAccountDSID;
@property(readonly, nonatomic) _Bool forceEnableReadOnlyManatee; // @synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee;
@property(readonly, nonatomic) CKDLogicalDeviceContext *deviceContext; // @synthesize deviceContext=_deviceContext;
@property(retain) CKDAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (_Bool)_checkAndClearPCSTestOverrideForKey:(id)arg1;	// IMP=0x00000000002c43ff
- (void)setOverride:(id)arg1 value:(id)arg2;	// IMP=0x00000000002c421f
- (void)clearOverrides;	// IMP=0x00000000002c4114
- (id)PCSServiceStringFromCKServiceType:(unsigned long long)arg1;	// IMP=0x00000000002c3f87
- (id)internalServicesToCombineWithLiverpoolKey;	// IMP=0x00000000002c3eb2
- (_Bool)_hasCurrentKeyForService:(id)arg1 inIdentitySet:(struct _PCSIdentitySetData *)arg2 withError:(id *)arg3;	// IMP=0x00000000002c3bdc
- (_Bool)identitySet:(struct _PCSIdentitySetData *)arg1 containsPublicKey:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002c3afd
- (struct _PCSIdentityData *)createCombinedIdentityWithOutOfNetworkPrivateKey:(id)arg1 publicSharingIdentity:(id)arg2;	// IMP=0x00000000002c3aeb
- (struct _PCSIdentityData *)createSharingIdentityFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002c3871
- (id)dataFromSharingIdentity:(struct _PCSIdentityData *)arg1 error:(id *)arg2;	// IMP=0x00000000002c3616
- (struct _PCSIdentityData *)createRandomSharingIdentityWithError:(id *)arg1;	// IMP=0x00000000002c345f
- (struct _PCSPublicIdentityData *)createPublicSharingIdentityFromPublicKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002c31ea
- (struct _PCSIdentityData *)debugSharingIdentity;	// IMP=0x00000000002c316d
- (_Bool)serviceIsManatee:(id)arg1;	// IMP=0x00000000002c311a
@property(readonly, nonatomic) _Bool currentServiceIsManatee;
- (_Bool)manateeIsAvailableWithError:(id *)arg1;	// IMP=0x00000000002c3029
- (struct _PCSIdentitySetData *)_copyTestAccountIdentitySetForService:(id)arg1 forBackingFakeAccount:(id)arg2 withError:(id *)arg3;	// IMP=0x00000000002c23a8
- (struct _PCSIdentitySetData *)_createSpecialInMemorySetCombiningLiverpoolWithServiceNamed:(id)arg1 dsid:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002c1a3d
- (id)_addIdentitiesFromServiceNamed:(id)arg1 dsid:(id)arg2 toMutableSet:(struct _PCSIdentitySetData *)arg3;	// IMP=0x00000000002c165a
- (id)_copyPublicKeyDataForIdentitySet:(struct _PCSIdentitySetData *)arg1 withService:(unsigned long long)arg2 withError:(id *)arg3;	// IMP=0x00000000002c1454
- (id)_copyPublicKeyDataForAllIdentitiesInSet:(struct _PCSIdentitySetData *)arg1 withService:(unsigned long long)arg2;	// IMP=0x00000000002c1293
- (id)copyAllPublicKeysForService:(unsigned long long)arg1 withError:(id *)arg2;	// IMP=0x00000000002c10a3
- (id)copyPublicKeyForService:(unsigned long long)arg1 withError:(id *)arg2;	// IMP=0x00000000002c0e99
- (id)copyDiversifiedPublicKeyForService:(unsigned long long)arg1 userIDEntropy:(id)arg2 withError:(id *)arg3;	// IMP=0x00000000002c0d96
- (struct _PCSPublicIdentityData *)copyDiversifiedIdentityForService:(unsigned long long)arg1 userIDEntropy:(id)arg2 withError:(id *)arg3;	// IMP=0x00000000002c0762
- (id)liverpoolPublicKey;	// IMP=0x00000000002c068a
- (struct _PCSIdentitySetData *)createFullKeychainIdentitySetWithError:(id *)arg1;	// IMP=0x00000000002c0411
- (struct _PCSIdentitySetData *)copyIdentitySetWithType:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000002c039b
- (struct _PCSIdentitySetData *)_createIdentitySetForService:(id)arg1 dsid:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002bffd9
- (struct _PCSIdentitySetData *)_copyIdentityForService:(id)arg1 useCache:(_Bool)arg2 validateCurrentKey:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000002bf2e3
- (id)_cacheIdentitySet:(struct _PCSIdentitySetData *)arg1 forService:(id)arg2;	// IMP=0x00000000002bf1fd
- (void)identitiesChanged;	// IMP=0x00000000002bf1c4
- (void)updateAccount:(id)arg1;	// IMP=0x00000000002bf071
- (void)dealloc;	// IMP=0x00000000002bf02a
- (id)initWithAccount:(id)arg1 deviceContext:(id)arg2 serviceName:(id)arg3 forceEnableReadOnlyManatee:(_Bool)arg4 clientSDKVersion:(unsigned int)arg5;	// IMP=0x00000000002bef10

@end
