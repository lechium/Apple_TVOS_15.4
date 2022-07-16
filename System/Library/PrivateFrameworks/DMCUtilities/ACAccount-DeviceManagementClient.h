//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccount.h>

@class NSNumber, NSString;

@interface ACAccount (DeviceManagementClient)
+ (id)dmc_createManagementAccountWithStore:(id)arg1;	// IMP=0x000000000000b32f
- (id)dmc_accountQuotaString;	// IMP=0x000000000000bae5
- (_Bool)dmc_isPrimaryAccount;	// IMP=0x000000000000ba9a
- (_Bool)dmc_isVisibleRemoteManagementAccount;	// IMP=0x000000000000ba10
@property(copy, setter=dmc_setSignInUserIdentifier:) NSString *dmc_signInUserIdentifier;
@property(copy, setter=dmc_setPersonaIdentifier:) NSString *dmc_personaIdentifier;
@property(readonly) ACAccount *dmc_remoteManagementAccount;
@property(copy, setter=dmc_setRemoteManagingAccountIdentifier:) NSString *dmc_remoteManagingAccountIdentifier;
@property(getter=dmc_isManagementProfileLocked, setter=dmc_setManagementProfileLocked:) _Bool dmc_managementProfileLocked;
@property(copy, setter=dmc_setManagementProfileIdentifier:) NSString *dmc_managementProfileIdentifier;
@property(copy, setter=dmc_setEnrollmentURL:) NSString *dmc_enrollmentURL;
@property(setter=dmc_setEnrollmentType:) unsigned long long dmc_enrollmentType;
@property(copy, setter=dmc_setEnrollmentToken:) NSString *dmc_enrollmentToken;
@property(setter=dmc_setEnrollmentMethod:) unsigned long long dmc_enrollmentMethod;
@property(copy, setter=dmc_setDSID:) NSNumber *dmc_DSID;
@property(copy, setter=dmc_setBearerToken:) NSString *dmc_bearerToken;
@property(copy, setter=dmc_setBearerReauthURL:) NSString *dmc_bearerReauthURL;
@property(copy, setter=dmc_setAltDSID:) NSString *dmc_altDSID;
@property(copy, setter=dmc_setAccountScheme:) NSString *dmc_accountScheme;
@end
