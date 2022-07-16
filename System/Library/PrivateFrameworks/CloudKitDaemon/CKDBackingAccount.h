//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, NSPersonNameComponents, NSString, NSURL;

@interface CKDBackingAccount : NSObject
{
    ACAccount *_appleAccount;	// 8 = 0x8
}

+ (void)fetchDeviceCountForAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a34fc
+ (void)deviceCountForAccount:(id)arg1 ignoreCache:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002a2a15
+ (id)deviceCountQueue;	// IMP=0x00000000002a2994
+ (id)credentialRenewalDatesBySuspendedAccountID;	// IMP=0x00000000002a0ca5
+ (void)ensureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2;	// IMP=0x00000000002a0b3a
+ (_Bool)_lockedEnsureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2;	// IMP=0x00000000002a0595
+ (id)accountQueue;	// IMP=0x00000000002a0514
+ (id)fakeAccountWithEmail:(id)arg1 password:(id)arg2 propertyOverrides:(id)arg3 overridesByDataclass:(id)arg4;	// IMP=0x00000000002a04fb
+ (id)primaryAccount;	// IMP=0x00000000002a0494
+ (id)accountWithIdentifier:(id)arg1;	// IMP=0x00000000002a03e3
- (void).cxx_destruct;	// IMP=0x00000000002a399a
@property(retain, nonatomic) ACAccount *appleAccount; // @synthesize appleAccount=_appleAccount;
- (void)deviceCountWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002a291f
@property(readonly, nonatomic) NSString *personaIdentifier;
@property(readonly, nonatomic) NSString *sharingURLHostname;
@property(readonly, nonatomic) NSURL *privateMetricsServiceURL;
- (id)privateCodeServiceURLPreferringGateway:(_Bool)arg1;	// IMP=0x00000000002a2748
@property(readonly, nonatomic) NSURL *privateCodeServiceURL;
@property(readonly, nonatomic) NSURL *privateDeviceServiceURL;
@property(readonly, nonatomic) NSURL *privateShareServiceURL;
@property(readonly, nonatomic) NSURL *privateCloudDBURL;
- (id)urlForDataclass:(id)arg1;	// IMP=0x00000000002a26c6
- (id)urlForDataclass:(id)arg1 preferringGateway:(_Bool)arg2;	// IMP=0x00000000002a2581
- (void)_setOverridesOnVettingContext:(id)arg1;	// IMP=0x00000000002a257b
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002a2073
- (void)updateAccountPropertiesAndSaveAccount:(CDUnknownBlockType)arg1;	// IMP=0x00000000002a2018
- (void)renewAuthTokenWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a1c2a
- (id)accountPropertiesForDataclass:(id)arg1;	// IMP=0x00000000002a1ba7
@property(readonly, nonatomic) _Bool isFakeAccount;
@property(readonly, nonatomic) NSString *serverPreferredPushEnvironment;
- (void)noteSuspendedAccountRenewalDate;	// IMP=0x00000000002a1a19
- (_Bool)canSuspendedAccountRenewCredentials;	// IMP=0x00000000002a17b5
- (_Bool)isAccountSuspended;	// IMP=0x00000000002a1719
- (id)iCloudAuthTokenWithError:(id *)arg1;	// IMP=0x00000000002a15cb
- (id)cloudKitAuthTokenWithError:(id *)arg1;	// IMP=0x00000000002a141a
- (id)_accountCredentialForAccount:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000002a124a
- (_Bool)isDataclassEnabledForCellular:(id)arg1;	// IMP=0x00000000002a11d3
- (_Bool)isDataclassEnabled:(id)arg1;	// IMP=0x00000000002a114c
@property(readonly, nonatomic) _Bool isPrimaryEmailVerified;
@property(readonly, nonatomic) NSString *displayedHostname;
@property(readonly, nonatomic) NSPersonNameComponents *fullName;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *dsid;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *primaryEmail;
@property(readonly, nonatomic) ACAccount *ckAccount;
- (id)init;	// IMP=0x00000000002a0cfa

@end
