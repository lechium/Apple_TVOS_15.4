//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSNumber, NSString;

@interface AAProvisioningResponse
{
    NSDictionary *_icloud;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000001dc41
@property(readonly, nonatomic, getter=isFamilyEligible) _Bool familyEligible;
@property(readonly, nonatomic, getter=hasOptionalTerms) _Bool optionalTerms;
@property(readonly, nonatomic, getter=isCloudDocsMigrated) _Bool cloudDocsMigrated;
@property(readonly, nonatomic, getter=isSandboxAccount) _Bool sandboxAccount;
@property(readonly, nonatomic, getter=isRemindersAutoMigratableToCK) _Bool remindersAutoMigratableToCK;
@property(readonly, nonatomic, getter=isRemindersMigrated) _Bool remindersMigrated;
@property(readonly, nonatomic, getter=isNotesMigrated) _Bool notesMigrated;
@property(readonly, nonatomic, getter=isManagedAppleID) _Bool managedAppleID;
@property(readonly, nonatomic) NSDictionary *regionInfo;
@property(readonly, nonatomic) NSString *fmipAppToken;
@property(readonly, nonatomic) NSString *keyTransparencyToken;
@property(readonly, nonatomic) NSString *searchPartyToken;
@property(readonly, nonatomic) NSString *fmipSiriToken;
@property(readonly, nonatomic) NSString *fmipAuthToken;
@property(readonly, nonatomic) NSString *iCloudAuthToken;
@property(readonly, nonatomic) NSNumber *primaryEmailVerified;
@property(readonly, nonatomic) NSString *primaryEmail;
@property(readonly, nonatomic) NSString *lastName;
@property(readonly, nonatomic) NSString *firstName;
@property(readonly, nonatomic) NSArray *appleIDAliases;
@property(readonly, nonatomic) NSString *appleID;
@property(readonly, nonatomic) NSDictionary *dataclassProperties;
@property(readonly, nonatomic) NSArray *provisionedDataclasses;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001d318
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;	// IMP=0x000000000001d1f9

@end

