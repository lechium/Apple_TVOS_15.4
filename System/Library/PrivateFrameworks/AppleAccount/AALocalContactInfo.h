//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/NSCopying-Protocol.h>
#import <AppleAccount/NSSecureCoding-Protocol.h>

@class NSData, NSNumber, NSString, NSUUID;
@protocol AAInheritanceContactInfo;

@interface AALocalContactInfo : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _isChild;	// 8 = 0x8
    NSString *_handle;	// 16 = 0x10
    NSString *_fullName;	// 24 = 0x18
    NSString *_firstName;	// 32 = 0x20
    NSString *_lastName;	// 40 = 0x28
    NSNumber *_familyDSID;	// 48 = 0x30
    NSString *_familyMemberType;	// 56 = 0x38
    NSData *_imageData;	// 64 = 0x40
    long long _contactType;	// 72 = 0x48
    NSUUID *_custodianID;	// 80 = 0x50
    long long _trustedContactStatus;	// 88 = 0x58
    id <AAInheritanceContactInfo> _inheritanceContactInfo;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000065089
- (void).cxx_destruct;	// IMP=0x000000000006572a
@property(retain, nonatomic) id <AAInheritanceContactInfo> inheritanceContactInfo; // @synthesize inheritanceContactInfo=_inheritanceContactInfo;
@property(nonatomic) long long trustedContactStatus; // @synthesize trustedContactStatus=_trustedContactStatus;
@property(copy, nonatomic) NSUUID *custodianID; // @synthesize custodianID=_custodianID;
@property(nonatomic) long long contactType; // @synthesize contactType=_contactType;
@property(copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) _Bool isChild; // @synthesize isChild=_isChild;
@property(readonly, nonatomic) NSString *familyMemberType; // @synthesize familyMemberType=_familyMemberType;
@property(readonly, nonatomic) NSNumber *familyDSID; // @synthesize familyDSID=_familyDSID;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly, nonatomic) NSString *handle; // @synthesize handle=_handle;
- (id)_detailsTextForContactType;	// IMP=0x00000000000655c3
- (_Bool)_isEqualToLocalContact:(id)arg1;	// IMP=0x00000000000654f4
- (id)_fullNameFromFirstName:(id)arg1 lastName:(id)arg2;	// IMP=0x000000000006543b
- (_Bool)isFamilyMember;	// IMP=0x0000000000065422
- (id)detailsText;	// IMP=0x0000000000065410
- (id)displayName;	// IMP=0x0000000000065358
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000652ff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000651d2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000065091
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000064e1c
- (id)initWithFamilyDSID:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 appleID:(id)arg5 familyMemberType:(id)arg6 isChild:(_Bool)arg7;	// IMP=0x0000000000064cf9
- (id)initWithHandle:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000064b98

@end

