//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class ACDManagedAccountType, NSDate, NSNumber, NSSet, NSString;

@interface ACDManagedAccount : NSManagedObject
{
}

- (id)description;	// IMP=0x0000000000004a75

// Remaining properties
@property(retain, nonatomic) NSString *accountDescription; // @dynamic accountDescription;
@property(retain, nonatomic) ACDManagedAccountType *accountType; // @dynamic accountType;
@property(retain, nonatomic) NSNumber *active; // @dynamic active;
@property(retain, nonatomic) NSNumber *authenticated; // @dynamic authenticated;
@property(retain, nonatomic) NSString *authenticationType; // @dynamic authenticationType;
@property(retain, nonatomic) NSSet *childAccounts; // @dynamic childAccounts;
@property(retain, nonatomic) NSString *credentialType; // @dynamic credentialType;
@property(retain, nonatomic) NSSet *customProperties; // @dynamic customProperties;
@property(retain, nonatomic) id dataclassProperties; // @dynamic dataclassProperties;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) NSSet *enabledDataclasses; // @dynamic enabledDataclasses;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSDate *lastCredentialRenewalRejectionDate; // @dynamic lastCredentialRenewalRejectionDate;
@property(retain, nonatomic) NSString *modificationID; // @dynamic modificationID;
@property(retain, nonatomic) NSString *owningBundleID; // @dynamic owningBundleID;
@property(retain, nonatomic) ACDManagedAccount *parentAccount; // @dynamic parentAccount;
@property(retain, nonatomic) NSSet *provisionedDataclasses; // @dynamic provisionedDataclasses;
@property(retain, nonatomic) NSNumber *supportsAuthentication; // @dynamic supportsAuthentication;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(retain, nonatomic) NSNumber *visible; // @dynamic visible;
@property(retain, nonatomic) NSNumber *warmingUp; // @dynamic warmingUp;

@end

