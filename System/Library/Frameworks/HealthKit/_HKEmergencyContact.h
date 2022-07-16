//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface _HKEmergencyContact : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;	// 8 = 0x8
    NSNumber *_nameRecordID;	// 16 = 0x10
    NSString *_nameContactIdentifier;	// 24 = 0x18
    NSString *_phoneNumber;	// 32 = 0x20
    NSNumber *_phoneNumberPropertyID;	// 40 = 0x28
    NSString *_phoneNumberContactIdentifier;	// 48 = 0x30
    NSString *_phoneNumberLabel;	// 56 = 0x38
    NSString *_relationship;	// 64 = 0x40
}

+ (id)emergencyContactUsingSimCardNumberWithContact:(id)arg1 property:(id)arg2;	// IMP=0x00000000001710ad
+ (id)emergencyContactWithContact:(id)arg1 property:(id)arg2;	// IMP=0x0000000000170ed2
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000016f097
- (void).cxx_destruct;	// IMP=0x000000000017120b
@property(copy, nonatomic) NSString *relationship; // @synthesize relationship=_relationship;
@property(copy, nonatomic) NSString *phoneNumberLabel; // @synthesize phoneNumberLabel=_phoneNumberLabel;
@property(copy, nonatomic) NSString *phoneNumberContactIdentifier; // @synthesize phoneNumberContactIdentifier=_phoneNumberContactIdentifier;
@property(retain, nonatomic) NSNumber *phoneNumberPropertyID; // @synthesize phoneNumberPropertyID=_phoneNumberPropertyID;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *nameContactIdentifier; // @synthesize nameContactIdentifier=_nameContactIdentifier;
@property(retain, nonatomic) NSNumber *nameRecordID; // @synthesize nameRecordID=_nameRecordID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000170c29
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000170a41
- (_Bool)isEqualToSyncedContact:(id)arg1;	// IMP=0x0000000000170512
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016f424
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016f19a
- (id)description;	// IMP=0x000000000016f107
- (id)init;	// IMP=0x000000000016f09f

@end

