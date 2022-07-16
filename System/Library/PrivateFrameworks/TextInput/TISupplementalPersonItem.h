//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSPersonNameComponents, NSString;

@interface TISupplementalPersonItem
{
    NSString *_givenName;	// 8 = 0x8
    NSString *_phoneticGivenName;	// 16 = 0x10
    NSString *_middleName;	// 24 = 0x18
    NSString *_phoneticMiddleName;	// 32 = 0x20
    NSString *_familyName;	// 40 = 0x28
    NSString *_phoneticFamilyName;	// 48 = 0x30
    NSString *_organizationName;	// 56 = 0x38
    NSString *_phoneticOrganizationName;	// 64 = 0x40
    NSString *_nickname;	// 72 = 0x48
    NSString *_previousFamilyName;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000d0d5
- (void).cxx_destruct;	// IMP=0x000000000000cf62
@property(copy, nonatomic) NSString *previousFamilyName; // @synthesize previousFamilyName=_previousFamilyName;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *phoneticOrganizationName; // @synthesize phoneticOrganizationName=_phoneticOrganizationName;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(copy, nonatomic) NSString *phoneticFamilyName; // @synthesize phoneticFamilyName=_phoneticFamilyName;
@property(copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(copy, nonatomic) NSString *phoneticMiddleName; // @synthesize phoneticMiddleName=_phoneticMiddleName;
@property(copy, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(copy, nonatomic) NSString *phoneticGivenName; // @synthesize phoneticGivenName=_phoneticGivenName;
@property(copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
- (id)description;	// IMP=0x000000000000cb40
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000c9c9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000c6ff
@property(readonly, nonatomic) NSPersonNameComponents *personNameComponents;
- (id)initWithPersonNameComponents:(id)arg1;	// IMP=0x000000000000c1d9
- (id)initWithContact:(id)arg1;	// IMP=0x000000000000b937

@end

