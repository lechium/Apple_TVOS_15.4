//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSPersonNameComponents, NSString;

@interface PKFeatureApplicationInvitationDetails : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_accountUserAltDSID;	// 8 = 0x8
    NSString *_originatorAltDSID;	// 16 = 0x10
    unsigned long long _accountUserAccessLevel;	// 24 = 0x18
    NSString *_originatorFirstName;	// 32 = 0x20
    NSString *_originatorLastName;	// 40 = 0x28
    NSString *_accountUserFirstName;	// 48 = 0x30
    NSString *_accountUserLastName;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000365d3d
- (void).cxx_destruct;	// IMP=0x0000000000366187
@property(copy, nonatomic) NSString *accountUserLastName; // @synthesize accountUserLastName=_accountUserLastName;
@property(copy, nonatomic) NSString *accountUserFirstName; // @synthesize accountUserFirstName=_accountUserFirstName;
@property(copy, nonatomic) NSString *originatorLastName; // @synthesize originatorLastName=_originatorLastName;
@property(copy, nonatomic) NSString *originatorFirstName; // @synthesize originatorFirstName=_originatorFirstName;
@property(nonatomic) unsigned long long accountUserAccessLevel; // @synthesize accountUserAccessLevel=_accountUserAccessLevel;
@property(copy, nonatomic) NSString *originatorAltDSID; // @synthesize originatorAltDSID=_originatorAltDSID;
@property(copy, nonatomic) NSString *accountUserAltDSID; // @synthesize accountUserAltDSID=_accountUserAltDSID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000365fd8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000365f03
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000365d45
- (id)description;	// IMP=0x0000000000365c1c
- (unsigned long long)hash;	// IMP=0x0000000000365b79
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003657ce
@property(readonly, nonatomic) NSPersonNameComponents *accountUserNameComponents;
@property(readonly, nonatomic) NSPersonNameComponents *originatorNameComponents;
- (id)jsonRepresentation;	// IMP=0x00000000003655ed
- (id)initWithAccountUserAltDSID:(id)arg1 accessLevel:(unsigned long long)arg2;	// IMP=0x000000000036556f
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003653ef

@end
