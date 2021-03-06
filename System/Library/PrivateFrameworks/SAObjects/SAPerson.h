//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceComparable-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface SAPerson <SAAceComparable>
{
}

+ (id)personWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000036e6d
+ (id)person;	// IMP=0x0000000000036e5b
@property(copy, nonatomic) NSString *suffix;
@property(copy, nonatomic) NSArray *socialProfiles;
@property(copy, nonatomic) NSArray *relatedNames;
@property(copy, nonatomic) NSNumber *pseudo;
@property(copy, nonatomic) NSString *prefix;
@property(copy, nonatomic) NSArray *phones;
@property(copy, nonatomic) NSString *phonemeData;
@property(copy, nonatomic) NSDictionary *nickNameAPGs;
@property(copy, nonatomic) NSString *nickName;
@property(copy, nonatomic) NSString *middleName;
@property(copy, nonatomic) NSNumber *me;
@property(copy, nonatomic) NSString *lastNamePhonetic;
@property(copy, nonatomic) NSDictionary *lastNameAPGs;
@property(copy, nonatomic) NSString *lastName;
@property(copy, nonatomic) NSNumber *isBlocked;
@property(copy, nonatomic) NSString *internalGUID;
@property(copy, nonatomic) NSString *fullName;
@property(copy, nonatomic) NSString *firstNamePhonetic;
@property(copy, nonatomic) NSDictionary *firstNameAPGs;
@property(copy, nonatomic) NSString *firstName;
@property(copy, nonatomic) NSArray *emails;
@property(copy, nonatomic) NSString *companyPhonetic;
@property(copy, nonatomic) NSString *company;
@property(copy, nonatomic) NSDate *birthday;
@property(copy, nonatomic) NSArray *addresses;
- (id)encodedClassName;	// IMP=0x0000000000036e4e
- (id)groupIdentifier;	// IMP=0x0000000000036e3a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

