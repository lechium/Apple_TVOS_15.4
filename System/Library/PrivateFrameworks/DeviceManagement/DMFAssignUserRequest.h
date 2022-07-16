//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString;

@interface DMFAssignUserRequest
{
    NSString *_userIdentifier;	// 8 = 0x8
    NSNumber *_groupID;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    NSString *_givenName;	// 32 = 0x20
    NSString *_familyName;	// 40 = 0x28
    NSString *_imageURL;	// 48 = 0x30
    NSString *_fullScreenImageURL;	// 56 = 0x38
    NSString *_appleID;	// 64 = 0x40
    NSString *_passcodeType;	// 72 = 0x48
    NSString *_password;	// 80 = 0x50
    NSArray *_enrolledGroupIdentifiers;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000ba04
- (void).cxx_destruct;	// IMP=0x000000000000c3ba
@property(copy, nonatomic) NSArray *enrolledGroupIdentifiers; // @synthesize enrolledGroupIdentifiers=_enrolledGroupIdentifiers;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *passcodeType; // @synthesize passcodeType=_passcodeType;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(copy, nonatomic) NSString *fullScreenImageURL; // @synthesize fullScreenImageURL=_fullScreenImageURL;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSNumber *groupID; // @synthesize groupID=_groupID;
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000bf7d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ba0c

@end

