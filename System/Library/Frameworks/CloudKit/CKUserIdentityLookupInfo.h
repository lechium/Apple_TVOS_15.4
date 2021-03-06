//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/CKXPCSuitableString-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordID, NSData, NSString;

@interface CKUserIdentityLookupInfo : NSObject <CKXPCSuitableString, NSSecureCoding, NSCopying>
{
    _Bool _shouldReportMissingIdentity;	// 8 = 0x8
    NSString *_emailAddress;	// 16 = 0x10
    NSString *_phoneNumber;	// 24 = 0x18
    CKRecordID *_userRecordID;	// 32 = 0x20
    NSData *_encryptedPersonalInfo;	// 40 = 0x28
}

+ (id)lookupInfosWithPhoneNumbers:(id)arg1;	// IMP=0x00000000000ace45
+ (id)lookupInfosWithRecordIDs:(id)arg1;	// IMP=0x00000000000acddc
+ (id)lookupInfosWithEmails:(id)arg1;	// IMP=0x00000000000acd73
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000acac7
- (void).cxx_destruct;	// IMP=0x00000000000acf26
@property(retain, nonatomic) NSData *encryptedPersonalInfo; // @synthesize encryptedPersonalInfo=_encryptedPersonalInfo;
@property(nonatomic) _Bool shouldReportMissingIdentity; // @synthesize shouldReportMissingIdentity=_shouldReportMissingIdentity;
@property(copy, nonatomic) CKRecordID *userRecordID; // @synthesize userRecordID=_userRecordID;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000acc1a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000acacf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ac7e0
- (unsigned long long)hash;	// IMP=0x00000000000ac721
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ac575
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x00000000000ac3b9
- (id)ckShortDescription;	// IMP=0x00000000000ac253
- (id)description;	// IMP=0x00000000000ac241
- (id)CKPropertiesDescription;	// IMP=0x00000000000ac22f
- (void)_stripPersonalInfo;	// IMP=0x00000000000ac1fd
- (id)lookupValue;	// IMP=0x00000000000ac1c8
- (long long)lookupField;	// IMP=0x00000000000ac19c
- (id)initWithPhoneNumber:(id)arg1;	// IMP=0x00000000000ac0a8
- (id)initWithUserRecordID:(id)arg1;	// IMP=0x00000000000abfb4
- (id)initWithEmailAddress:(id)arg1;	// IMP=0x00000000000abec0
- (id)CKXPCSuitableString;	// IMP=0x0000000000165fc5

@end

