//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISBiometricSessionDelegate-Protocol.h>

@class NSNumber, NSString, SSBag, SSBiometricAuthenticationContext, SSURLBagContext, SSVFairPlaySAPSession;
@protocol ISBiometricSessionDelegate, ISStoreURLOperationDelegate;

@interface ISStoreURLOperation <ISBiometricSessionDelegate>
{
    long long _activeMachineDataStyle;	// 184 = 0xb8
    NSNumber *_authenticatedDSID;	// 192 = 0xc0
    _Bool _canSendGUIDParameter;	// 200 = 0xc8
    _Bool _ignorePreexistingSecureToken;	// 201 = 0xc9
    _Bool _isURLBagRequest;	// 202 = 0xca
    long long _machineDataStyle;	// 208 = 0xd0
    _Bool _needsAuthentication;	// 216 = 0xd8
    _Bool _needsURLBag;	// 217 = 0xd9
    SSVFairPlaySAPSession *_sapSession;	// 224 = 0xe0
    _Bool _shouldAppendAuthKitHeaders;	// 232 = 0xe8
    _Bool _shouldAppendStorefrontToURL;	// 233 = 0xe9
    _Bool _shouldSendXTokenHeader;	// 234 = 0xea
    _Bool _urlKnownToBeTrusted;	// 235 = 0xeb
    _Bool _useUserSpecificURLBag;	// 236 = 0xec
    _Bool _needsTermsAndConditionsAcceptance;	// 237 = 0xed
    _Bool _shouldCancelBiometricTokenUpdate;	// 238 = 0xee
    _Bool _shouldSuppressUserInfo;	// 239 = 0xef
    _Bool _shouldSendAKClientInfoHeaders;	// 240 = 0xf0
    _Bool _shouldSendAKPRKRequestHeader;	// 241 = 0xf1
    _Bool _shouldSendDSIDHeader;	// 242 = 0xf2
    SSBiometricAuthenticationContext *_biometricAuthenticationContext;	// 248 = 0xf8
    id <ISBiometricSessionDelegate> _biometricSessionDelegate;	// 256 = 0x100
    SSBag *_bag;	// 264 = 0x108
}

+ (id)_storeFrontIdentifierForAccount:(id)arg1;	// IMP=0x0000000000035bf7
+ (void)_performMachineDataRequest:(id)arg1 requestProperties:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000359ab
+ (_Bool)_operationWaitsForPurchases:(id)arg1;	// IMP=0x00000000000358d1
+ (void)_handleResponseHeaders:(id)arg1 response:(id)arg2 request:(id)arg3 account:(id)arg4 performsMachineDataActions:(_Bool)arg5 shouldRetry:(_Bool *)arg6;	// IMP=0x00000000000341e3
+ (id)_authKitSession;	// IMP=0x0000000000030ca3
+ (id)_restrictionsHeaderValue;	// IMP=0x0000000000030623
+ (void)_appendStorefront:(id)arg1 toRequestURL:(id)arg2;	// IMP=0x000000000002fa83
+ (void)_addPrimaryiCloudDSIDToRequest:(id)arg1;	// IMP=0x000000000002f99e
+ (void)_addiTunesStoreHeadersToRequest:(id)arg1 withURLBag:(id)arg2 account:(id)arg3 appendAuthKitHeaders:(_Bool)arg4 appendStorefrontToURL:(_Bool)arg5 clientBundleIdentifier:(id)arg6;	// IMP=0x000000000002f876
+ (void)_addiTunesStoreHeadersToRequest:(id)arg1 withAccount:(id)arg2 appendAuthKitHeaders:(_Bool)arg3 appendStorefrontToURL:(_Bool)arg4 clientBundleIdentifier:(id)arg5 extraHeaders:(id)arg6 storefrontSuffix:(id)arg7;	// IMP=0x000000000002e788
+ (void)_addAccountDSID:(id)arg1 toRequest:(id)arg2;	// IMP=0x000000000002e68b
+ (void)_addiTunesStoreHeadersToRequest:(id)arg1 withURLBag:(id)arg2 accountIdentifier:(id)arg3 appendAuthKitHeaders:(_Bool)arg4 appendStorefrontToURL:(_Bool)arg5 clientBundleIdentifier:(id)arg6;	// IMP=0x000000000002e074
+ (void)_addiTunesStoreHeadersToRequest:(id)arg1 withSSBag:(id)arg2 account:(id)arg3 appendAuthKitHeaders:(_Bool)arg4 appendStorefrontToURL:(_Bool)arg5 clientBundleIdentifier:(id)arg6;	// IMP=0x000000000002df3f
+ (void)_addiTunesStoreHeadersToRequest:(id)arg1 withSSBag:(id)arg2 accountIdentifier:(id)arg3 appendAuthKitHeaders:(_Bool)arg4 appendStorefrontToURL:(_Bool)arg5 clientBundleIdentifier:(id)arg6;	// IMP=0x000000000002dd9e
+ (id)_ssBag_copyExtraHeadersForURL:(id)arg1 bag:(id)arg2;	// IMP=0x000000000002da26
+ (id)_ssBag_copyHeaderPatternsFromBag:(id)arg1;	// IMP=0x000000000002d783
+ (id)propertyListOperationWithURLBagKey:(id)arg1;	// IMP=0x000000000002911d
+ (id)pingOperationWithUrl:(id)arg1;	// IMP=0x0000000000028d06
+ (id)itemPingOperationWithIdentifier:(unsigned long long)arg1 urlBagKey:(id)arg2;	// IMP=0x0000000000028b7c
+ (void)handleITunesStoreResponseHeaders:(id)arg1 request:(id)arg2 withAccountIdentifier:(id)arg3 shouldRetry:(_Bool *)arg4;	// IMP=0x0000000000028a91
+ (void)addITunesStoreHeadersToRequest:(id)arg1 withAccountIdentifier:(id)arg2;	// IMP=0x00000000000288c7
- (void).cxx_destruct;	// IMP=0x0000000000036660
@property(retain, nonatomic) SSBag *bag; // @synthesize bag=_bag;
@property _Bool shouldSendDSIDHeader; // @synthesize shouldSendDSIDHeader=_shouldSendDSIDHeader;
@property _Bool shouldSendAKPRKRequestHeader; // @synthesize shouldSendAKPRKRequestHeader=_shouldSendAKPRKRequestHeader;
@property _Bool shouldSendAKClientInfoHeaders; // @synthesize shouldSendAKClientInfoHeaders=_shouldSendAKClientInfoHeaders;
@property _Bool shouldSuppressUserInfo; // @synthesize shouldSuppressUserInfo=_shouldSuppressUserInfo;
@property long long machineDataStyle; // @synthesize machineDataStyle=_machineDataStyle;
@property __weak id <ISBiometricSessionDelegate> biometricSessionDelegate; // @synthesize biometricSessionDelegate=_biometricSessionDelegate;
@property _Bool useUserSpecificURLBag; // @synthesize useUserSpecificURLBag=_useUserSpecificURLBag;
@property _Bool urlKnownToBeTrusted; // @synthesize urlKnownToBeTrusted=_urlKnownToBeTrusted;
@property(nonatomic, getter=isURLBagRequest) _Bool URLBagRequest; // @synthesize URLBagRequest=_isURLBagRequest;
@property _Bool shouldCancelBiometricTokenUpdate; // @synthesize shouldCancelBiometricTokenUpdate=_shouldCancelBiometricTokenUpdate;
@property(nonatomic) _Bool shouldAppendStorefrontToURL; // @synthesize shouldAppendStorefrontToURL=_shouldAppendStorefrontToURL;
@property(nonatomic) _Bool shouldAppendAuthKitHeaders; // @synthesize shouldAppendAuthKitHeaders=_shouldAppendAuthKitHeaders;
@property _Bool needsURLBag; // @synthesize needsURLBag=_needsURLBag;
@property _Bool needsTermsAndConditionsAcceptance; // @synthesize needsTermsAndConditionsAcceptance=_needsTermsAndConditionsAcceptance;
@property _Bool needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;
@property(retain) SSBiometricAuthenticationContext *biometricAuthenticationContext; // @synthesize biometricAuthenticationContext=_biometricAuthenticationContext;
@property(retain) NSNumber *authenticatedDSID; // @synthesize authenticatedDSID=_authenticatedDSID;
- (id)_urlBagForContext:(id)arg1;	// IMP=0x00000000000340e6
- (_Bool)_shouldRetryForTouchIDChallengeWithError:(id)arg1;	// IMP=0x0000000000033e10
- (_Bool)_shouldRetryForAbsintheWithResponse:(id)arg1;	// IMP=0x0000000000033c94
- (void)_runURLOperation;	// IMP=0x0000000000032bac
- (id)_resolvedURLInBagContext:(id)arg1 bagTrusted:(_Bool *)arg2;	// IMP=0x0000000000032a02
- (_Bool)_performMachineDataRequest:(id)arg1;	// IMP=0x00000000000327b1
- (id)_loadURLBagInterpreterWithRequest:(id)arg1 requestProperties:(id)arg2;	// IMP=0x000000000003248a
- (_Bool)_isErrorTokenError:(id)arg1;	// IMP=0x00000000000323fa
- (id)_copyAuthenticationContextForAttemptNumber:(long long)arg1;	// IMP=0x0000000000032331
- (void)_continueTouchIDSession;	// IMP=0x0000000000032028
- (id)_buyParams;	// IMP=0x0000000000031fa7
- (_Bool)_canSendTokenToURL:(id)arg1;	// IMP=0x0000000000031f59
- (_Bool)_authenticateWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000030cf8
- (void)_addStandardQueryParametersForURL:(id)arg1;	// IMP=0x0000000000030b0e
- (id)_account;	// IMP=0x000000000003098c
- (void)_applyAnalyticsCookiesToRequest:(id)arg1 withBag:(id)arg2 oldBag:(id)arg3;	// IMP=0x000000000002fb8b
- (id)_absintheHeaders;	// IMP=0x000000000002e2b0
- (void)_setStoreFrontIdentifier:(id)arg1 isTransient:(_Bool)arg2;	// IMP=0x000000000002e215
- (_Bool)_ssBag_shouldSendGUIDForURL:(id)arg1 withBag:(id)arg2;	// IMP=0x000000000002d4b3
- (id)_ssBag_copyGUIDPatternsFromBag:(id)arg1;	// IMP=0x000000000002d1b7
- (id)_ssBag_copyGUIDSchemesFromBag:(id)arg1;	// IMP=0x000000000002d094
- (void)sender:(id)arg1 didFallbackToPassword:(_Bool)arg2;	// IMP=0x000000000002d043
- (void)_willSendRequest:(id)arg1;	// IMP=0x000000000002d03d
- (_Bool)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id *)arg2;	// IMP=0x000000000002ccf7
- (void)run;	// IMP=0x000000000002ae58
- (_Bool)_processResponseData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002ab33
- (id)newRequestWithURL:(id)arg1;	// IMP=0x000000000002a1ad
- (void)handleResponse:(id)arg1;	// IMP=0x000000000002a09d
- (_Bool)handleRedirectFromDataProvider:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000029acc
- (id)_copyAuthenticationContext;	// IMP=0x000000000002985c
- (id)authenticatedAccountDSID;	// IMP=0x0000000000029802
@property(readonly) SSURLBagContext *URLBagContext;
@property _Bool shouldSendXTokenHeader;
@property(retain) SSVFairPlaySAPSession *SAPSession;
@property _Bool performsMachineDataActions;
@property(nonatomic) _Bool ignorePreexistingSecureToken;
@property _Bool canSendGUIDParameter;
- (id)logKey;	// IMP=0x0000000000029222
- (id)init;	// IMP=0x000000000002881b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak id <ISStoreURLOperationDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
