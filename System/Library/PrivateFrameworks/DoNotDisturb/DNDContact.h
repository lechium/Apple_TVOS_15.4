//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSMutableCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class NSSet, NSString;

@interface DNDContact : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_contactIdentifier;	// 8 = 0x8
    NSString *_firstName;	// 16 = 0x10
    NSString *_middleName;	// 24 = 0x18
    NSString *_lastName;	// 32 = 0x20
    NSString *_nickName;	// 40 = 0x28
    NSString *_organizationName;	// 48 = 0x30
    NSSet *_phoneNumbers;	// 56 = 0x38
    NSSet *_emailAddresses;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001c0c8
+ (id)normalizePhoneNumber:(id)arg1;	// IMP=0x000000000001a3c2
- (void).cxx_destruct;	// IMP=0x000000000001c497
@property(readonly, copy, nonatomic) NSSet *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(readonly, copy, nonatomic) NSSet *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(readonly, copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(readonly, copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(readonly, copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, copy, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(readonly, copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001c362
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001c0d0
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c078
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c06d
- (id)diffDescription;	// IMP=0x000000000001bea9
- (id)_redactedDescriptionsForStrings:(id)arg1;	// IMP=0x000000000001bcff
- (id)_descriptionForRedacted:(_Bool)arg1;	// IMP=0x000000000001bb46
- (id)redactedDescription;	// IMP=0x000000000001bb2f
- (id)description;	// IMP=0x000000000001bb1b
- (_Bool)matchesContactHandle:(id)arg1;	// IMP=0x000000000001b950
- (_Bool)matchesContact:(id)arg1;	// IMP=0x000000000001b241
- (id)normalizedPhoneNumbers;	// IMP=0x000000000001b0a6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001a8db
- (unsigned long long)hash;	// IMP=0x000000000001a71c
- (id)_initWithContactIdentifier:(id)arg1 firstName:(id)arg2 middleName:(id)arg3 lastName:(id)arg4 nickName:(id)arg5 organizationName:(id)arg6 phoneNumbers:(id)arg7 emailAddresses:(id)arg8;	// IMP=0x000000000001a577
- (id)initWithContactIdentifier:(id)arg1;	// IMP=0x000000000001a548

@end

